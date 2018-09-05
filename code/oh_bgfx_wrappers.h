#pragma once
namespace OH {
    namespace bgfx_wrap {

bgfx::ShaderHandle CompileEmbedShader(const bgfx::EmbeddedShader* EmbShader)
{
    bgfx::ShaderHandle Handle = BGFX_INVALID_HANDLE;

    for (const bgfx::EmbeddedShader::Data* ShaderData = EmbShader->data; bgfx::RendererType::Count != ShaderData->type; ++ShaderData)
    {
        if (bgfx::getRendererType() == ShaderData->type && 1 < ShaderData->size)
        {
            Handle = bgfx::createShader(bgfx::makeRef(ShaderData->data, ShaderData->size));
            break;
        }
    }

    OH_CHECK(bgfx::isValid(Handle), "Could not compile shader");
    bgfx::setName(Handle, EmbShader->name);

    return Handle;
}

bgfx::ProgramHandle CompileEmbedProgram(
    const bgfx::EmbeddedShader* EmbedVs,
    const bgfx::EmbeddedShader* EmbedFs,
    blt DestroyShaders)
{
    auto VSH = CompileEmbedShader(EmbedVs);
    auto FSH = CompileEmbedShader(EmbedFs);
    return bgfx::createProgram(VSH, FSH, DestroyShaders);
}

/// Create 2D texture.
///
/// @param[in] Width Width.
/// @param[in] Height Height.
/// @param[in] HasMips Indicates that texture contains full mip-map chain.
/// @param[in] NumLayers Number of layers in texture array. Must be 1 if caps
///   `BGFX_CAPS_TEXTURE_2D_ARRAY` flag is not set.
/// @param[in] Format Texture format. See: `TextureFormat::Enum`.
/// @param[in] Flags Default texture sampling mode is linear, and wrap mode
///   is repeat.
///   - `BGFX_TEXTURE_[U/V/W]_[MIRROR/CLAMP]` - Mirror or clamp to edge wrap
///     mode.
///   - `BGFX_TEXTURE_[MIN/MAG/MIP]_[POINT/ANISOTROPIC]` - Point or anisotropic
///     sampling.
///
/// @param[in] Mem Texture data. If `_mem` is non-NULL, created texture will be immutable. If
///   `_mem` is NULL content of the texture is uninitialized. When `_numLayers` is more than
///   1, expected memory layout is texture and all mips together for each array element.
///
/// @attention C99 equivalent is `bgfx_create_texture_2d`.
///
struct create_texture_2d {
    uint16_t Width;
    uint16_t Height;
    bool     HasMips = false;
    uint16_t NumLayers = 1;
    bgfx::TextureFormat::Enum Format;
    uint32_t Flags = BGFX_TEXTURE_NONE;
    OH::memptr Mem = NULL;
};

OH_INLINE bgfx::TextureHandle CreateTexture2D(create_texture_2d* Params) {
    return bgfx::createTexture2D(
        Params->Width,   Params->Height,
        Params->HasMips, Params->NumLayers,
        Params->Format,  Params->Flags,
        Params->Mem);
}

    }

    namespace bimg_wrap {

struct image_alloc {
    bx::AllocatorI* Allocator = NULL;
    bimg::TextureFormat::Enum Format = bimg::TextureFormat::Unknown;
    i4t_3 Dims = {};
    uint16_t NumLayers = 1;
    bool CubeMap = false;
    bool HasMips = false;
    const void* Data = 0;
};

OH_INLINE bimg::ImageContainer* ImageAlloc(image_alloc* Params) {
    return bimg::imageAlloc(
        Params->Allocator,
        Params->Format,
        (i2t)Params->Dims.x, (i2t)Params->Dims.y, (i2t)Params->Dims.z,
        Params->NumLayers,
        Params->CubeMap,
        Params->HasMips,
        Params->Data);
}

    }

// Copy of func in bgfx_utils.cpp cuz it's simpler this way
OH_INTERN void ImageReleaseCB(void* Ptr, void* UserData)
{
    BX_UNUSED(Ptr);
    bimg::ImageContainer* ImgCont = (bimg::ImageContainer*)UserData;
    bimg::imageFree(ImgCont);
}

// NOTE Does not free source image (this is intentional)
OH_INTERN bgfx::TextureHandle ImageToTexture3d(bimg::ImageContainer* ImageContainer, uint32_t Flags, str Name)
{
    OH_CHECK(ImageContainer->m_orientation == bimg::Orientation::R0, "Image is rotated... I don't want to deal with that here!");
    OH_CHECK(!ImageContainer->m_cubeMap, "UNSUPPORTED: ImageContainer is a CubeMap");
    OH_CHECK(1 < ImageContainer->m_depth, "UNSUPPORTED: ImageContainer is not 3d");
    OH_CHECK(ImageContainer->m_numMips <= 1, "UNSUPPORTED: ImageContainer has mips");
    OH_CHECK(ImageContainer->m_numLayers <= 1, "UNSUPPORTED: ImageContainer has layers");

    bgfx::TextureHandle TxHandle;

    const bgfx::Memory* MemPtr = bgfx::makeRef(ImageContainer->m_data, ImageContainer->m_size);

    TxHandle = bgfx::createTexture3D(
        (u2t)ImageContainer->m_width, (u2t)ImageContainer->m_height, (u2t)ImageContainer->m_depth,
        1 < ImageContainer->m_numMips,
        (bgfx::TextureFormat::Enum)ImageContainer->m_format,
        Flags,
        MemPtr);

    bgfx::setName(TxHandle, Name);

    return TxHandle;
}

OH_INTERN void InvalidateTextureProps(bgfx::TextureHandle* TexPtr) {
    OH_CHECK(TexPtr != NULL, "TexPtr == NULL")
    bgfx::destroy(*TexPtr);
    *TexPtr = { bgfx::kInvalidHandle };
}

// NOTE Does not free source image (intentional)
// NOTE Does not use Flags/Name if ImageContainer is non-null
OH_INTERN void UpdatingTexture2dFromImage(
    bgfx::TextureHandle* Result,
    const bimg::ImageContainer* ImageContainer, uint32_t Flags = BGFX_TEXTURE_NONE, str Name = NULL)
{
    OH_CHECK(ImageContainer->m_orientation == bimg::Orientation::R0, "Image is rotated... I don't want to deal with that here!");
    OH_CHECK(!ImageContainer->m_cubeMap, "UNSUPPORTED: ImageContainer is a CubeMap");
    OH_CHECK(ImageContainer->m_depth <= 1, "UNSUPPORTED: ImageContainer is 3d");
    OH_CHECK(ImageContainer->m_numMips <= 1, "UNSUPPORTED: ImageContainer has mips");
    OH_CHECK(ImageContainer->m_numLayers <= 1, "UNSUPPORTED: ImageContainer has layers");
    // Can't check properties of texture corresponding to TextureHandle :/

    if (!isValid(*Result)) {
        *Result = bgfx::createTexture2D(
            (u2t)ImageContainer->m_width, (u2t)ImageContainer->m_height,
            0, //1 < ImageContainer->m_numMips,
            0, //ImageContainer->m_numLayers,
            (bgfx::TextureFormat::Enum)ImageContainer->m_format,
            Flags,
            0); // Image data (makes texture immutable)
    }

    if (Name) { bgfx::setName(*Result, Name); }

    // TODO also pass bgfx::makeRef(ImageContainer->m_data, ImageContainer->m_size, ImageReleaseCB, (void*)ImageContainer)
    memptr MemPtr = bgfx::makeRef(ImageContainer->m_data, ImageContainer->m_size);

    updateTexture2D(
        *Result, // TextureHandle _handle
        0, 0, // layer, mip
        0, 0, // x, y
        (u2t)ImageContainer->m_width, (u2t)ImageContainer->m_height,
        MemPtr);
}

bgfx::TextureHandle ImguiTexToBgfx(ImTextureID TexId) {
    union { ImTextureID P; bgfx::TextureHandle H; } Punner = { TexId };
    return Punner.H;
}

ImTextureID BgfxTexToImgui(bgfx::TextureHandle TexHandle) {
    union { bgfx::TextureHandle H; ImTextureID P; } Punner = { TexHandle };
    return Punner.P;
}

// namespace OH {
}