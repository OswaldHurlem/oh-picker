#pragma once
namespace OH { namespace picker {

const char kPickerTagKey[16] = "oh_picker_tags";

// NOTE probably can't change this without PITA
#define OH_PALETTE_MAX_SIZE 256

// NOTE does not contain metadata relevant to oh_picker,
// which instead gets written to a buffer and used elsewhere. Awkward!
struct u1t_indexed_img {
    u1t_4 Palette[OH_PALETTE_MAX_SIZE];
    u4t PaletteCount;
    bimg::ImageContainer* Image;
};

OH_INLINE void FreeLodePngMemory(void* PngMemory) { free(PngMemory); }

OH_INLINE str AllocPngMetadataStr(u4t Length) { return (str)calloc(Length, 1); }
OH_INLINE void FreePngMetadataStr(str String) { free((void*)String); }

// REMOVED allocator specification (uses global allocator)
// TODO make these return true/false
// MAYBE include size of MetaStr
OH_INTERN void LoadIndexedPngFromMemory(u1t_indexed_img* IdxImgOut, str* MetaStrOut, memptr MemoryIn)
{
    OH_CHECK(IdxImgOut != NULL, "IdxImgOut should be allocated");
    OH_CHECK(MetaStrOut != NULL, "MetaStrOut should be allocated")

	if (IdxImgOut->Image) { bimg::imageFree(IdxImgOut->Image); }
    if (*MetaStrOut) { FreePngMetadataStr(*MetaStrOut); *MetaStrOut = 0; }
    MemClear(IdxImgOut, sizeof(u1t_indexed_img));

    bimg_wrap::image_alloc ImgAllocParams;
    ImgAllocParams.Allocator = entry::getAllocator();
    ImgAllocParams.Format = bimg::TextureFormat::R8;
    OH_DEFER( FreeLodePngMemory((void*)ImgAllocParams.Data) ); // TODO uses crt without wrapper :(

    LodePNGState LodeState;
    lodepng_state_init(&LodeState);
    LodeState.decoder.color_convert = 0;

    OH_DEFER( lodepng_state_cleanup(&LodeState) );

    u4t Error;
    {
        u1t* DataPtr;
        u4t Height, Width;
        Error = lodepng_decode(&DataPtr, &Width, &Height, &LodeState, MemoryIn->data, MemoryIn->size);
        ImgAllocParams.Data = (void*)DataPtr;
        ImgAllocParams.Dims.x = Width;
        ImgAllocParams.Dims.y = Height;

        OH_FOR_COUNT(KeyIdx, LodeState.info_png.text_num) {
            i4t Comp = StrCmp(LodeState.info_png.text_keys[KeyIdx], kPickerTagKey, OH_COUNTOF(kPickerTagKey));
            if (Comp == 0) {
                str Value = LodeState.info_png.text_strings[KeyIdx];
                u4t VLength = StrLen(Value) + 1;
                *MetaStrOut = AllocPngMetadataStr(VLength);
                MemCpy((void*)*MetaStrOut, Value, VLength);
            }
        }
    }

    OH_CHECK(Error == 0, "%s", lodepng_error_text(Error));
    OH_CHECK(LodeState.info_raw.bitdepth == 8, "Png format unsupported");
    OH_CHECK(LodeState.info_raw.colortype == LCT_PALETTE, "Png format unsupported");

    IdxImgOut->Image = bimg_wrap::ImageAlloc(&ImgAllocParams);
    IdxImgOut->PaletteCount = (u4t)LodeState.info_raw.palettesize;
    OH_MK_MEMPTR(PaletteSrc, LodeState.info_raw.palette, OH_PALETTE_MAX_SIZE);
    OH_MK_MEMPTR(PaletteDst, IdxImgOut->Palette,      OH_PALETTE_MAX_SIZE);
    MemPtrCpy(PaletteDst, PaletteSrc);

    // Removing unused colors from palette (some programs like to report palette size as 256 no matter what)
    {
        blt PaletteEntryUsed[OH_PALETTE_MAX_SIZE] = {};

        u1t* Pixels = (u1t*)IdxImgOut->Image->m_data;
        u4t NumPixels = IdxImgOut->Image->m_height * IdxImgOut->Image->m_width;

        OH_FOR_COUNT(Idx, NumPixels) {
            PaletteEntryUsed[Pixels[Idx]] = true;
        }

        u4t NewPaletteIdx = 0;

        OH_FOR_COUNT(OldPaletteIdx, OH_COUNTOF(IdxImgOut->Palette)) {
            if (PaletteEntryUsed[OldPaletteIdx]) {
                IdxImgOut->Palette[NewPaletteIdx] = IdxImgOut->Palette[OldPaletteIdx];
                NewPaletteIdx++;
            }
        }

        IdxImgOut->PaletteCount = NewPaletteIdx;
    }
}

// TODO make these return true/false
OH_INTERN void SaveIndexedPngToMemory(memptr* MemPtrOut, const u1t_indexed_img* IdxImgIn, str MetaStrIn)
{
    OH_UNUSED(MetaStrIn);
    if (*MemPtrOut) { MemPtrFree(*MemPtrOut); *MemPtrOut = 0; }

    LodePNGState LodeState;
    lodepng_state_init(&LodeState);
    LodeState.encoder.auto_convert = 0;
    LodeState.encoder.add_id = 1;
    OH_DEFER( lodepng_state_cleanup(&LodeState) );

    LodePNGColorMode* ColorModeRaw = &LodeState.info_raw; // Use this to save palette
    LodePNGColorMode* ColorModePng = &LodeState.info_png.color;
    ColorModeRaw->colortype = LCT_PALETTE;
    ColorModePng->colortype = LCT_PALETTE;
    ColorModeRaw->bitdepth = 8;
    ColorModeRaw->bitdepth = 8;
    lodepng_palette_clear(ColorModeRaw);
    lodepng_palette_clear(ColorModePng);

    OH_FOR_COUNT(Idx, IdxImgIn->PaletteCount) {
        u1t_4 Rgba8 = IdxImgIn->Palette[Idx];
        lodepng_palette_add(ColorModeRaw, OH_VA4(Rgba8));
        lodepng_palette_add(ColorModePng, OH_VA4(Rgba8));
    }

    u1t* Out;
    upt OutSize;
    bimg::ImageContainer* BaseImage = IdxImgIn->Image;

    lodepng_add_text(&LodeState.info_png, kPickerTagKey, MetaStrIn);

    lodepng_encode(
        &Out, &OutSize,
        (const u1t*)BaseImage->m_data, BaseImage->m_width, BaseImage->m_height,
        &LodeState);

    if (!OutSize) { return; }

    *MemPtrOut = MemPtrAlloc((u4t)OutSize);
    MemCpy((*MemPtrOut)->data, Out, OutSize);
    FreeLodePngMemory(Out);
}

// TODO use this in more places... it's good
typedef const bimg::ImageContainer* bimg_img_handle;

OH_INTERN void UpdatingRgba8FromIndexedImg(bimg_img_handle* Result, const u1t_indexed_img* IndexedImg)
{
    bimg_img_handle RsltVal = *Result;

    if (RsltVal == NULL
        || RsltVal->m_width != IndexedImg->Image->m_width
        || RsltVal->m_height != IndexedImg->Image->m_height)
    {
        if (RsltVal != NULL) { bimg::imageFree((bimg::ImageContainer*)RsltVal); }

        bimg_wrap::image_alloc ImgAllocParams;
        ImgAllocParams.Dims.x = IndexedImg->Image->m_width;
        ImgAllocParams.Dims.y = IndexedImg->Image->m_height;
        ImgAllocParams.Format = bimg::TextureFormat::RGBA8;
        ImgAllocParams.Allocator = entry::getAllocator();
        *Result = bimg_wrap::ImageAlloc(&ImgAllocParams);
        RsltVal = *Result;
    }

    OH_CHECK(IndexedImg, "IndexedImg is null")
    u1t_4* PixelsOut = (u1t_4*)RsltVal->m_data;
    u1t* PixelsIn = (u1t*)IndexedImg->Image->m_data;

    u4t NumPixels = RsltVal->m_height * RsltVal->m_width;
    OH_FOR_COUNT(Idx, NumPixels) {
        PixelsOut[Idx] = IndexedImg->Palette[PixelsIn[Idx]];
    }
}

// namespace OH { namespace picker {
} }