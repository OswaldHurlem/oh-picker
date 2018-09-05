#pragma once

namespace OH { namespace picker {

// NOTE these don't match with photoshop's
typedef f4t_3 lab_color;
typedef f4t_3 rgb_color;
typedef f4t_4 lab_a_color;
typedef f4t_4 rgba_color;

typedef u1t_3 lab_color_32;
typedef u1t_3 rgb_color_32;
typedef u1t_4 lab_a_color_32;
typedef u1t_4 rgba_color_32;

OH_GLOBAL const f4t_3 kMinLab = { -128.0f,   0.0f, -128.0f };
OH_GLOBAL const f4t_3 kMaxLab = {  128.0f, 100.0f,  128.0f };
OH_GLOBAL const f4t_4 kMinLabA = { -128.0f,   0.0f, -128.0f, 0.0f };
OH_GLOBAL const f4t_4 kMaxLabA = {  128.0f, 100.0f,  128.0f, 1.0f };
OH_GLOBAL const f4t_3 kMinRgb = { 0.0f, 0.0f, 0.0f };
OH_GLOBAL const f4t_3 kMaxRgb = { 1.0f, 1.0f, 1.0f };
OH_GLOBAL const f4t_4 kMinRgba = { 0.0f, 0.0f, 0.0f, 0.0f };
OH_GLOBAL const f4t_4 kMaxRgba = { 1.0f, 1.0f, 1.0f, 1.0f };

#define OH_COLOR_USE_ILLUMINANT_D50

#ifndef OH_COLOR_USE_ILLUMINANT_D65
#ifndef OH_COLOR_USE_ILLUMINANT_D50
#define OH_COLOR_USE_ILLUMINANT_D50
#endif
#endif

// NOTE these end up being no different from each other because of XyzTf_S
// which is there to make it work like PHOTOSHOP
#ifdef OH_COLOR_USE_ILLUMINANT_D50
OH_GLOBAL const f4t_3 XyzTf_X = {  0.4360747f,  0.3850649f,  0.1430804f };
OH_GLOBAL const f4t_3 XyzTf_Y = {  0.2225045f,  0.7168786f,  0.0606169f };
OH_GLOBAL const f4t_3 XyzTf_Z = {  0.0139322f,  0.0971045f,  0.7141733f };
OH_GLOBAL const f4t_3 RgbTf_R = {  3.1338561f, -1.6168667f, -0.4906146f };
OH_GLOBAL const f4t_3 RgbTf_G = { -0.9787684f,  1.9161415f,  0.0334540f };
OH_GLOBAL const f4t_3 RgbTf_B = {  0.0719453f, -0.2289914f,  1.4052427f };
OH_GLOBAL const f4t_3 XyzTf_S = {    0.96422f,    1.00000f,    0.82521f };
#endif

#ifdef OH_COLOR_USE_ILLUMINANT_D65
OH_GLOBAL const f4t_3 XyzTf_X = { 0.4124564f,  0.3575761f,  0.1804375f };
OH_GLOBAL const f4t_3 XyzTf_Y = { 0.2126729f,  0.7151522f,  0.0721750f };
OH_GLOBAL const f4t_3 XyzTf_Z = { 0.0193339f,  0.1191920f,  0.9503041f };
OH_GLOBAL const f4t_3 RgbTf_R = { 3.2404542f, -1.5371385f, -0.4985314f };
OH_GLOBAL const f4t_3 RgbTf_G = {-0.9692660f,  1.8760108f,  0.0415560f };
OH_GLOBAL const f4t_3 RgbTf_B = { 0.0556434f, -0.2040259f,  1.0572252f };
OH_GLOBAL const f4t_3 XyzTf_S = {  0.95047f,      1.00000f,   1.08883f };
#endif

OH_INTERN lab_color RgbToLab(rgb_color Rgb)
{
    f4t_3 RgbExp = {
        Rgb.r > 0.04045 ? Pow(0.9479f*Rgb.r + 0.0521f, 2.4f) : (Rgb.r/12.92f),
        Rgb.g > 0.04045 ? Pow(0.9479f*Rgb.g + 0.0521f, 2.4f) : (Rgb.g/12.92f),
        Rgb.b > 0.04045 ? Pow(0.9479f*Rgb.b + 0.0521f, 2.4f) : (Rgb.b/12.92f)
    };

    f4t_3 XyzU;
    XyzU.x = DotP(XyzTf_X, RgbExp);
    XyzU.y = DotP(XyzTf_Y, RgbExp);
    XyzU.z = DotP(XyzTf_Z, RgbExp);

    XyzU /= XyzTf_S;

    f4t_3 XyzExp = {
        XyzU.x > 0.008856f ? Cbrt(XyzU.x) : ((7.787f*XyzU.x) + (16.0f/116)),
        XyzU.y > 0.008856f ? Cbrt(XyzU.y) : ((7.787f*XyzU.y) + (16.0f/116)),
        XyzU.z > 0.008856f ? Cbrt(XyzU.z) : ((7.787f*XyzU.z) + (16.0f/116))
    };

    lab_color Lab;
    Lab.CIE_L = (116 * XyzExp.y) - 16;
    Lab.CIE_a = 500 * (XyzExp.x - XyzExp.y);
    Lab.CIE_b = 200 * (XyzExp.y - XyzExp.z);

    return Lab;
}

OH_INLINE lab_a_color RgbaToLabA(rgba_color Rbga)
{
    lab_color Lab = RgbToLab(SwizzXYZ(Rbga));
    return VConcat(Lab, Rbga.a);
}

OH_INTERN rgb_color LabToRgb(lab_color Lab)
{
    f4t_3 XyzExp;
    XyzExp.y = (Lab.CIE_L + 16)/116;
    XyzExp.x = Lab.CIE_a/500 + XyzExp.y;
    XyzExp.z = XyzExp.y - Lab.CIE_b/200;

    // Does not include thresholds
    f4t_3 XyzU = {
        XyzExp.x > 0.20689 ? (XyzExp.x * XyzExp.x * XyzExp.x) : (0.1284f*XyzExp.x - 0.0177f),
        XyzExp.y > 0.20689 ? (XyzExp.y * XyzExp.y * XyzExp.y) : (0.1284f*XyzExp.y - 0.0177f),
        XyzExp.z > 0.20689 ? (XyzExp.z * XyzExp.z * XyzExp.z) : (0.1284f*XyzExp.z - 0.0177f)
    };

    XyzU *= XyzTf_S;

    f4t_3 RgbExp;
    RgbExp.r = DotP(RgbTf_R, XyzU);
    RgbExp.g = DotP(RgbTf_G, XyzU);
    RgbExp.b = DotP(RgbTf_B, XyzU);

    rgb_color Rgb = {
        RgbExp.r > 0.00313f ? (1.055f*Pow(RgbExp.r, 1.0f/2.4f) - 0.055f) : (12.92f*RgbExp.r),
        RgbExp.g > 0.00313f ? (1.055f*Pow(RgbExp.g, 1.0f/2.4f) - 0.055f) : (12.92f*RgbExp.g),
        RgbExp.b > 0.00313f ? (1.055f*Pow(RgbExp.b, 1.0f/2.4f) - 0.055f) : (12.92f*RgbExp.b)
    };

    return Rgb;
}

OH_INLINE rgba_color LabAToRgba(lab_a_color LabAColor)
{
    f4t_3 Rgb = LabToRgb(SwizzXYZ(LabAColor));
    return VConcat(Rgb, LabAColor.a);
}

// This makes it not precise enough for all corresponging RGB values... too bad
OH_INLINE lab_a_color_32 CompressLabA(lab_a_color LabAColor) {
    return MkU1t_4(Round(255.0f*
        VtClamp01(
            VtDeLerp(kMinLabA, LabAColor, kMaxLabA)
            )));
}

OH_INLINE rgba_color_32 CompressRgba(rgba_color RgbaColor) {
    return MkU1t_4(Round(255.0f*
        VtClamp01(
            VtDeLerp(kMinRgba, RgbaColor, kMaxRgba)
            )));
}

OH_INLINE lab_a_color DecompressLabA(lab_a_color_32 Compressed) {
    return VtLerp(kMinLabA, MkF4t_4(Compressed)/255.0f, kMaxLabA);
}

OH_INLINE lab_a_color DecompressRgba(rgba_color_32 Compressed) {
    return VtLerp(kMinRgba, MkF4t_4(Compressed)/255.0f, kMaxRgba);
}

// MAYBE make these smaller than 32-bit
OH_INTERN bimg::ImageContainer* MakeLabToRgbLookup(i4t_3 Dims) {
    bimg_wrap::image_alloc Params;
    Params.Allocator = entry::getAllocator();
    Params.Format = bimg::TextureFormat::RGBA32F;
    Params.Dims = Dims;
    bimg::ImageContainer* Lookup = bimg_wrap::ImageAlloc(&Params);
    rgba_color* Pixels = (rgba_color*)Lookup->m_data;

    OH_FOR_V3_RANGE_BEGIN(Idx, MkI4t_3(0), Dims)
    {
        f4t_3 RelColor = VtDeLerp(MkF4t_3(0), MkF4t_3(Idx) + MkF4t_3(0.5f), MkF4t_3(Dims));
        lab_color LabColor = VtLerp(kMinLab, RelColor, kMaxLab);
        rgb_color RbgColor = LabToRgb(LabColor);
        Pixels[FlattenIdx(MkI4t_3(0), Idx, Dims)] = SwizzXYZ0(RbgColor);
    } OH_FOR_V3_RANGE_END

    return Lookup;
}

OH_INTERN bimg::ImageContainer* MakeRgbToLabLookup(i4t_3 Dims) {
    bimg_wrap::image_alloc Params;
    Params.Allocator = entry::getAllocator();
    Params.Format = bimg::TextureFormat::RGBA32F;
    Params.Dims = Dims;
    bimg::ImageContainer* Lookup = bimg_wrap::ImageAlloc(&Params);
    lab_a_color* Pixels = (lab_a_color*)Lookup->m_data;

    OH_FOR_V3_RANGE_BEGIN(Idx, MkI4t_3(0), Dims)
    {
        f4t_3 RelColor = VtDeLerp(MkF4t_3(0), MkF4t_3(Idx) + MkF4t_3(0.5f), MkF4t_3(Dims));
        rgb_color RgbColor = VtLerp(kMinRgb, RelColor, kMaxRgb);
        lab_color LabColor = RgbToLab(RgbColor);
        Pixels[FlattenIdx(MkI4t_3(0), Idx, Dims)] = SwizzXYZ0(LabColor);
    } OH_FOR_V3_RANGE_END

    return Lookup;
}

// MAYBE make generic across image formats/dimensions??
// MAYBE options like tiling
OH_INTERN f4t_3 SampleImage3D_F4t_3(bimg::ImageContainer* Image, f4t_3 Coord) {
    f4t_3* Pixels = (f4t_3*)Image->m_data;

    i4t_3 ImgDims = MkI4t_3((i4t)Image->m_width, Image->m_height, Image->m_width);
    f4t_3 Coord_TexSpace = Coord * MkF4t_3(ImgDims - MkI4t_3(1));
    f4t_3 LerpVal = Fract(Coord_TexSpace);

    i4t_3 Idx000 = MkI4t_3(Coord_TexSpace);
    i4t_3 Idx001 = Idx000 + MkI4t_3(0, 0, 1);
    i4t_3 Idx010 = Idx000 + MkI4t_3(0, 1, 0);
    i4t_3 Idx011 = Idx000 + MkI4t_3(0, 1, 1);
    i4t_3 Idx100 = Idx000 + MkI4t_3(1, 0, 0);
    i4t_3 Idx101 = Idx000 + MkI4t_3(1, 0, 1);
    i4t_3 Idx110 = Idx000 + MkI4t_3(1, 1, 0);
    i4t_3 Idx111 = Idx000 + MkI4t_3(1, 1, 1);

    Idx000 = VtClamp(MkI4t_3(0), Idx000, ImgDims - 1);
    Idx001 = VtClamp(MkI4t_3(0), Idx001, ImgDims - 1);
    Idx010 = VtClamp(MkI4t_3(0), Idx010, ImgDims - 1);
    Idx011 = VtClamp(MkI4t_3(0), Idx011, ImgDims - 1);
    Idx100 = VtClamp(MkI4t_3(0), Idx100, ImgDims - 1);
    Idx101 = VtClamp(MkI4t_3(0), Idx101, ImgDims - 1);
    Idx110 = VtClamp(MkI4t_3(0), Idx110, ImgDims - 1);
    Idx111 = VtClamp(MkI4t_3(0), Idx111, ImgDims - 1);

    f4t_3 Val000 = Pixels[FlattenIdx(MkI4t_3(0), Idx000, ImgDims)];
    f4t_3 Val001 = Pixels[FlattenIdx(MkI4t_3(0), Idx001, ImgDims)];
    f4t_3 Val010 = Pixels[FlattenIdx(MkI4t_3(0), Idx010, ImgDims)];
    f4t_3 Val011 = Pixels[FlattenIdx(MkI4t_3(0), Idx011, ImgDims)];
    f4t_3 Val100 = Pixels[FlattenIdx(MkI4t_3(0), Idx100, ImgDims)];
    f4t_3 Val101 = Pixels[FlattenIdx(MkI4t_3(0), Idx101, ImgDims)];
    f4t_3 Val110 = Pixels[FlattenIdx(MkI4t_3(0), Idx110, ImgDims)];
    f4t_3 Val111 = Pixels[FlattenIdx(MkI4t_3(0), Idx111, ImgDims)];

    f4t_3 Val_00 = VtLerp(Val000, MkF4t_3(LerpVal.x), Val100);
    f4t_3 Val_01 = VtLerp(Val001, MkF4t_3(LerpVal.x), Val101);
    f4t_3 Val_10 = VtLerp(Val010, MkF4t_3(LerpVal.x), Val110);
    f4t_3 Val_11 = VtLerp(Val011, MkF4t_3(LerpVal.x), Val111);

    f4t_3 Val__0 = VtLerp(Val_00, MkF4t_3(LerpVal.y), Val_10);
    f4t_3 Val__1 = VtLerp(Val_01, MkF4t_3(LerpVal.y), Val_11);

    return VtLerp(Val__0, MkF4t_3(LerpVal.z), Val__1);
}

OH_GLOBAL bimg::ImageContainer* g_RgbToLabLookup = NULL;
OH_GLOBAL bimg::ImageContainer* g_LabToRgbLookup = NULL;
OH_GLOBAL bgfx::TextureHandle g_RgbToLabLookup_Gpu = { bgfx::kInvalidHandle };
OH_GLOBAL bgfx::TextureHandle g_LabToRgbLookup_Gpu = { bgfx::kInvalidHandle };

OH_INTERN void CreateLookups() {
    g_RgbToLabLookup = MakeRgbToLabLookup(MkI4t_3(16));
    g_LabToRgbLookup = MakeLabToRgbLookup(MkI4t_3(16));

    u4t TexFlags = BGFX_TEXTURE_U_CLAMP | BGFX_TEXTURE_V_CLAMP | BGFX_TEXTURE_W_CLAMP;

    g_RgbToLabLookup_Gpu = ImageToTexture3d(g_RgbToLabLookup, TexFlags, "RgbToLabLookup");
    g_LabToRgbLookup_Gpu = ImageToTexture3d(g_LabToRgbLookup, TexFlags, "LabToRgbLookup");
}

OH_INLINE rgb_color LabToRgb_Lookup(lab_color LabColor) {
    f4t_3 RelColor = VtDeLerp(kMinLab, LabColor, kMaxLab);
    return SampleImage3D_F4t_3(g_LabToRgbLookup, RelColor);
}

OH_INLINE lab_color RgbToLab_Lookup(rgb_color RgbColor) {
    f4t_3 RelColor = VtDeLerp(kMinRgb, RgbColor, kMaxRgb);
    return SampleImage3D_F4t_3(g_RgbToLabLookup, RelColor);
}

OH_INLINE lab_a_color RgbaToLabA_Lookup(rgba_color Rbga)
{
    lab_color Lab = RgbToLab_Lookup(SwizzXYZ(Rbga));
    return VConcat(Lab, Rbga.a);
}

OH_INLINE rgba_color LabAToRgba_Lookup(lab_a_color LabAColor)
{
    rgb_color Rgb = LabToRgb_Lookup(SwizzXYZ(LabAColor));
    return VConcat(Rgb, LabAColor.a);
}

// namespace OH { namespace picker {
} }