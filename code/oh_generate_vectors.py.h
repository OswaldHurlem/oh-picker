#pragma once
#pragma warning(push)
#pragma warning(disable: 4201)
namespace OH {
union u1t_2 {
    struct { u1t x; u1t y; };
    struct { u1t u; u1t v; };
    u1t E[2];
    u4t Packed;
};

union u1t_3 {
    struct { u1t x; u1t y; u1t z; };
    struct { u1t r; u1t g; u1t b; };
    struct { u1t h; u1t s; u1t v; };
    struct { u1t CIE_a; u1t CIE_L; u1t CIE_b; };
    u1t E[3];
    u4t Packed;
};

union u1t_4 {
    struct { u1t x; u1t y; u1t z; u1t w; };
    struct { u1t r; u1t g; u1t b; u1t a; };
    struct { u1t h; u1t s; u1t v; u1t __pun1_a; };
    struct { u1t CIE_a; u1t CIE_L; u1t CIE_b; u1t __unused; };
    u1t E[4];
    u4t Packed;
};

union i4t_2 {
    struct { i4t x; i4t y; };
    struct { i4t u; i4t v; };
    i4t E[2];
};

union i4t_3 {
    struct { i4t x; i4t y; i4t z; };
    struct { i4t r; i4t g; i4t b; };
    struct { i4t h; i4t s; i4t v; };
    struct { i4t CIE_a; i4t CIE_L; i4t CIE_b; };
    i4t E[3];
};

union i4t_4 {
    struct { i4t x; i4t y; i4t z; i4t w; };
    struct { i4t r; i4t g; i4t b; i4t a; };
    struct { i4t h; i4t s; i4t v; i4t __pun1_a; };
    struct { i4t CIE_a; i4t CIE_L; i4t CIE_b; i4t __unused; };
    i4t E[4];
};

union f4t_2 {
    struct { f4t x; f4t y; };
    struct { f4t u; f4t v; };
    f4t E[2];
};

union f4t_3 {
    struct { f4t x; f4t y; f4t z; };
    struct { f4t r; f4t g; f4t b; };
    struct { f4t h; f4t s; f4t v; };
    struct { f4t CIE_a; f4t CIE_L; f4t CIE_b; };
    f4t E[3];
};

union f4t_4 {
    struct { f4t x; f4t y; f4t z; f4t w; };
    struct { f4t r; f4t g; f4t b; f4t a; };
    struct { f4t h; f4t s; f4t v; f4t __pun1_a; };
    struct { f4t CIE_a; f4t CIE_L; f4t CIE_b; f4t __unused; };
    f4t E[4];
};

union f8t_2 {
    struct { f8t x; f8t y; };
    struct { f8t u; f8t v; };
    f8t E[2];
};

union f8t_3 {
    struct { f8t x; f8t y; f8t z; };
    struct { f8t r; f8t g; f8t b; };
    struct { f8t h; f8t s; f8t v; };
    struct { f8t CIE_a; f8t CIE_L; f8t CIE_b; };
    f8t E[3];
};

union f8t_4 {
    struct { f8t x; f8t y; f8t z; f8t w; };
    struct { f8t r; f8t g; f8t b; f8t a; };
    struct { f8t h; f8t s; f8t v; f8t __pun1_a; };
    struct { f8t CIE_a; f8t CIE_L; f8t CIE_b; f8t __unused; };
    f8t E[4];
};

union blt_2 {
    struct { blt x; blt y; };
    struct { blt u; blt v; };
    blt E[2];
};

union blt_3 {
    struct { blt x; blt y; blt z; };
    struct { blt r; blt g; blt b; };
    struct { blt h; blt s; blt v; };
    struct { blt CIE_a; blt CIE_L; blt CIE_b; };
    blt E[3];
};

union blt_4 {
    struct { blt x; blt y; blt z; blt w; };
    struct { blt r; blt g; blt b; blt a; };
    struct { blt h; blt s; blt v; blt __pun1_a; };
    struct { blt CIE_a; blt CIE_L; blt CIE_b; blt __unused; };
    blt E[4];
};

#define OH_DBG_U1T_2(_var) OH_DBG("u1t_2 " OH_STRINGIZE(_var,) " = { %d, %d }", OH_VA2(_var))
#define OH_DBG_U1T_3(_var) OH_DBG("u1t_3 " OH_STRINGIZE(_var,) " = { %d, %d, %d }", OH_VA3(_var))
#define OH_DBG_U1T_4(_var) OH_DBG("u1t_4 " OH_STRINGIZE(_var,) " = { %d, %d, %d, %d }", OH_VA4(_var))
#define OH_DBG_I4T_2(_var) OH_DBG("i4t_2 " OH_STRINGIZE(_var,) " = { %d, %d }", OH_VA2(_var))
#define OH_DBG_I4T_3(_var) OH_DBG("i4t_3 " OH_STRINGIZE(_var,) " = { %d, %d, %d }", OH_VA3(_var))
#define OH_DBG_I4T_4(_var) OH_DBG("i4t_4 " OH_STRINGIZE(_var,) " = { %d, %d, %d, %d }", OH_VA4(_var))
#define OH_DBG_F4T_2(_var) OH_DBG("f4t_2 " OH_STRINGIZE(_var,) " = { %f, %f }", OH_VA2(_var))
#define OH_DBG_F4T_3(_var) OH_DBG("f4t_3 " OH_STRINGIZE(_var,) " = { %f, %f, %f }", OH_VA3(_var))
#define OH_DBG_F4T_4(_var) OH_DBG("f4t_4 " OH_STRINGIZE(_var,) " = { %f, %f, %f, %f }", OH_VA4(_var))
#define OH_DBG_F8T_2(_var) OH_DBG("f8t_2 " OH_STRINGIZE(_var,) " = { %f, %f }", OH_VA2(_var))
#define OH_DBG_F8T_3(_var) OH_DBG("f8t_3 " OH_STRINGIZE(_var,) " = { %f, %f, %f }", OH_VA3(_var))
#define OH_DBG_F8T_4(_var) OH_DBG("f8t_4 " OH_STRINGIZE(_var,) " = { %f, %f, %f, %f }", OH_VA4(_var))
#define OH_DBG_BLT_2(_var) OH_DBG("blt_2 " OH_STRINGIZE(_var,) " = { %d, %d }", OH_VA2(_var))
#define OH_DBG_BLT_3(_var) OH_DBG("blt_3 " OH_STRINGIZE(_var,) " = { %d, %d, %d }", OH_VA3(_var))
#define OH_DBG_BLT_4(_var) OH_DBG("blt_4 " OH_STRINGIZE(_var,) " = { %d, %d, %d, %d }", OH_VA4(_var))

inline u1t_2 MkU1t_2(u1t X, u1t Y) {
    u1t_2 V;
    V.x = (X);
    V.y = (Y);
    return V;
}

inline u1t_2 MkU1t_2(i4t X, i4t Y) {
    u1t_2 V;
    V.x = ConvertI4t_U1t(X);
    V.y = ConvertI4t_U1t(Y);
    return V;
}

inline u1t_2 MkU1t_2(f4t X, f4t Y) {
    u1t_2 V;
    V.x = ConvertF4t_U1t(X);
    V.y = ConvertF4t_U1t(Y);
    return V;
}

inline u1t_2 MkU1t_2(f8t X, f8t Y) {
    u1t_2 V;
    V.x = ConvertF8t_U1t(X);
    V.y = ConvertF8t_U1t(Y);
    return V;
}

inline u1t_3 MkU1t_3(u1t X, u1t Y, u1t Z) {
    u1t_3 V;
    V.x = (X);
    V.y = (Y);
    V.z = (Z);
    return V;
}

inline u1t_3 MkU1t_3(i4t X, i4t Y, i4t Z) {
    u1t_3 V;
    V.x = ConvertI4t_U1t(X);
    V.y = ConvertI4t_U1t(Y);
    V.z = ConvertI4t_U1t(Z);
    return V;
}

inline u1t_3 MkU1t_3(f4t X, f4t Y, f4t Z) {
    u1t_3 V;
    V.x = ConvertF4t_U1t(X);
    V.y = ConvertF4t_U1t(Y);
    V.z = ConvertF4t_U1t(Z);
    return V;
}

inline u1t_3 MkU1t_3(f8t X, f8t Y, f8t Z) {
    u1t_3 V;
    V.x = ConvertF8t_U1t(X);
    V.y = ConvertF8t_U1t(Y);
    V.z = ConvertF8t_U1t(Z);
    return V;
}

inline u1t_4 MkU1t_4(u1t X, u1t Y, u1t Z, u1t W) {
    u1t_4 V;
    V.x = (X);
    V.y = (Y);
    V.z = (Z);
    V.w = (W);
    return V;
}

inline u1t_4 MkU1t_4(i4t X, i4t Y, i4t Z, i4t W) {
    u1t_4 V;
    V.x = ConvertI4t_U1t(X);
    V.y = ConvertI4t_U1t(Y);
    V.z = ConvertI4t_U1t(Z);
    V.w = ConvertI4t_U1t(W);
    return V;
}

inline u1t_4 MkU1t_4(f4t X, f4t Y, f4t Z, f4t W) {
    u1t_4 V;
    V.x = ConvertF4t_U1t(X);
    V.y = ConvertF4t_U1t(Y);
    V.z = ConvertF4t_U1t(Z);
    V.w = ConvertF4t_U1t(W);
    return V;
}

inline u1t_4 MkU1t_4(f8t X, f8t Y, f8t Z, f8t W) {
    u1t_4 V;
    V.x = ConvertF8t_U1t(X);
    V.y = ConvertF8t_U1t(Y);
    V.z = ConvertF8t_U1t(Z);
    V.w = ConvertF8t_U1t(W);
    return V;
}

inline i4t_2 MkI4t_2(u1t X, u1t Y) {
    i4t_2 V;
    V.x = ConvertU1t_I4t(X);
    V.y = ConvertU1t_I4t(Y);
    return V;
}

inline i4t_2 MkI4t_2(i4t X, i4t Y) {
    i4t_2 V;
    V.x = (X);
    V.y = (Y);
    return V;
}

inline i4t_2 MkI4t_2(f4t X, f4t Y) {
    i4t_2 V;
    V.x = ConvertF4t_I4t(X);
    V.y = ConvertF4t_I4t(Y);
    return V;
}

inline i4t_2 MkI4t_2(f8t X, f8t Y) {
    i4t_2 V;
    V.x = ConvertF8t_I4t(X);
    V.y = ConvertF8t_I4t(Y);
    return V;
}

inline i4t_3 MkI4t_3(u1t X, u1t Y, u1t Z) {
    i4t_3 V;
    V.x = ConvertU1t_I4t(X);
    V.y = ConvertU1t_I4t(Y);
    V.z = ConvertU1t_I4t(Z);
    return V;
}

inline i4t_3 MkI4t_3(i4t X, i4t Y, i4t Z) {
    i4t_3 V;
    V.x = (X);
    V.y = (Y);
    V.z = (Z);
    return V;
}

inline i4t_3 MkI4t_3(f4t X, f4t Y, f4t Z) {
    i4t_3 V;
    V.x = ConvertF4t_I4t(X);
    V.y = ConvertF4t_I4t(Y);
    V.z = ConvertF4t_I4t(Z);
    return V;
}

inline i4t_3 MkI4t_3(f8t X, f8t Y, f8t Z) {
    i4t_3 V;
    V.x = ConvertF8t_I4t(X);
    V.y = ConvertF8t_I4t(Y);
    V.z = ConvertF8t_I4t(Z);
    return V;
}

inline i4t_4 MkI4t_4(u1t X, u1t Y, u1t Z, u1t W) {
    i4t_4 V;
    V.x = ConvertU1t_I4t(X);
    V.y = ConvertU1t_I4t(Y);
    V.z = ConvertU1t_I4t(Z);
    V.w = ConvertU1t_I4t(W);
    return V;
}

inline i4t_4 MkI4t_4(i4t X, i4t Y, i4t Z, i4t W) {
    i4t_4 V;
    V.x = (X);
    V.y = (Y);
    V.z = (Z);
    V.w = (W);
    return V;
}

inline i4t_4 MkI4t_4(f4t X, f4t Y, f4t Z, f4t W) {
    i4t_4 V;
    V.x = ConvertF4t_I4t(X);
    V.y = ConvertF4t_I4t(Y);
    V.z = ConvertF4t_I4t(Z);
    V.w = ConvertF4t_I4t(W);
    return V;
}

inline i4t_4 MkI4t_4(f8t X, f8t Y, f8t Z, f8t W) {
    i4t_4 V;
    V.x = ConvertF8t_I4t(X);
    V.y = ConvertF8t_I4t(Y);
    V.z = ConvertF8t_I4t(Z);
    V.w = ConvertF8t_I4t(W);
    return V;
}

inline f4t_2 MkF4t_2(u1t X, u1t Y) {
    f4t_2 V;
    V.x = ConvertU1t_F4t(X);
    V.y = ConvertU1t_F4t(Y);
    return V;
}

inline f4t_2 MkF4t_2(i4t X, i4t Y) {
    f4t_2 V;
    V.x = ConvertI4t_F4t(X);
    V.y = ConvertI4t_F4t(Y);
    return V;
}

inline f4t_2 MkF4t_2(f4t X, f4t Y) {
    f4t_2 V;
    V.x = (X);
    V.y = (Y);
    return V;
}

inline f4t_2 MkF4t_2(f8t X, f8t Y) {
    f4t_2 V;
    V.x = ConvertF8t_F4t(X);
    V.y = ConvertF8t_F4t(Y);
    return V;
}

inline f4t_3 MkF4t_3(u1t X, u1t Y, u1t Z) {
    f4t_3 V;
    V.x = ConvertU1t_F4t(X);
    V.y = ConvertU1t_F4t(Y);
    V.z = ConvertU1t_F4t(Z);
    return V;
}

inline f4t_3 MkF4t_3(i4t X, i4t Y, i4t Z) {
    f4t_3 V;
    V.x = ConvertI4t_F4t(X);
    V.y = ConvertI4t_F4t(Y);
    V.z = ConvertI4t_F4t(Z);
    return V;
}

inline f4t_3 MkF4t_3(f4t X, f4t Y, f4t Z) {
    f4t_3 V;
    V.x = (X);
    V.y = (Y);
    V.z = (Z);
    return V;
}

inline f4t_3 MkF4t_3(f8t X, f8t Y, f8t Z) {
    f4t_3 V;
    V.x = ConvertF8t_F4t(X);
    V.y = ConvertF8t_F4t(Y);
    V.z = ConvertF8t_F4t(Z);
    return V;
}

inline f4t_4 MkF4t_4(u1t X, u1t Y, u1t Z, u1t W) {
    f4t_4 V;
    V.x = ConvertU1t_F4t(X);
    V.y = ConvertU1t_F4t(Y);
    V.z = ConvertU1t_F4t(Z);
    V.w = ConvertU1t_F4t(W);
    return V;
}

inline f4t_4 MkF4t_4(i4t X, i4t Y, i4t Z, i4t W) {
    f4t_4 V;
    V.x = ConvertI4t_F4t(X);
    V.y = ConvertI4t_F4t(Y);
    V.z = ConvertI4t_F4t(Z);
    V.w = ConvertI4t_F4t(W);
    return V;
}

inline f4t_4 MkF4t_4(f4t X, f4t Y, f4t Z, f4t W) {
    f4t_4 V;
    V.x = (X);
    V.y = (Y);
    V.z = (Z);
    V.w = (W);
    return V;
}

inline f4t_4 MkF4t_4(f8t X, f8t Y, f8t Z, f8t W) {
    f4t_4 V;
    V.x = ConvertF8t_F4t(X);
    V.y = ConvertF8t_F4t(Y);
    V.z = ConvertF8t_F4t(Z);
    V.w = ConvertF8t_F4t(W);
    return V;
}

inline f8t_2 MkF8t_2(u1t X, u1t Y) {
    f8t_2 V;
    V.x = ConvertU1t_F8t(X);
    V.y = ConvertU1t_F8t(Y);
    return V;
}

inline f8t_2 MkF8t_2(i4t X, i4t Y) {
    f8t_2 V;
    V.x = ConvertI4t_F8t(X);
    V.y = ConvertI4t_F8t(Y);
    return V;
}

inline f8t_2 MkF8t_2(f4t X, f4t Y) {
    f8t_2 V;
    V.x = ConvertF4t_F8t(X);
    V.y = ConvertF4t_F8t(Y);
    return V;
}

inline f8t_2 MkF8t_2(f8t X, f8t Y) {
    f8t_2 V;
    V.x = (X);
    V.y = (Y);
    return V;
}

inline f8t_3 MkF8t_3(u1t X, u1t Y, u1t Z) {
    f8t_3 V;
    V.x = ConvertU1t_F8t(X);
    V.y = ConvertU1t_F8t(Y);
    V.z = ConvertU1t_F8t(Z);
    return V;
}

inline f8t_3 MkF8t_3(i4t X, i4t Y, i4t Z) {
    f8t_3 V;
    V.x = ConvertI4t_F8t(X);
    V.y = ConvertI4t_F8t(Y);
    V.z = ConvertI4t_F8t(Z);
    return V;
}

inline f8t_3 MkF8t_3(f4t X, f4t Y, f4t Z) {
    f8t_3 V;
    V.x = ConvertF4t_F8t(X);
    V.y = ConvertF4t_F8t(Y);
    V.z = ConvertF4t_F8t(Z);
    return V;
}

inline f8t_3 MkF8t_3(f8t X, f8t Y, f8t Z) {
    f8t_3 V;
    V.x = (X);
    V.y = (Y);
    V.z = (Z);
    return V;
}

inline f8t_4 MkF8t_4(u1t X, u1t Y, u1t Z, u1t W) {
    f8t_4 V;
    V.x = ConvertU1t_F8t(X);
    V.y = ConvertU1t_F8t(Y);
    V.z = ConvertU1t_F8t(Z);
    V.w = ConvertU1t_F8t(W);
    return V;
}

inline f8t_4 MkF8t_4(i4t X, i4t Y, i4t Z, i4t W) {
    f8t_4 V;
    V.x = ConvertI4t_F8t(X);
    V.y = ConvertI4t_F8t(Y);
    V.z = ConvertI4t_F8t(Z);
    V.w = ConvertI4t_F8t(W);
    return V;
}

inline f8t_4 MkF8t_4(f4t X, f4t Y, f4t Z, f4t W) {
    f8t_4 V;
    V.x = ConvertF4t_F8t(X);
    V.y = ConvertF4t_F8t(Y);
    V.z = ConvertF4t_F8t(Z);
    V.w = ConvertF4t_F8t(W);
    return V;
}

inline f8t_4 MkF8t_4(f8t X, f8t Y, f8t Z, f8t W) {
    f8t_4 V;
    V.x = (X);
    V.y = (Y);
    V.z = (Z);
    V.w = (W);
    return V;
}

inline blt_2 MkBlt_2(blt X, blt Y) {
    blt_2 V;
    V.x = (X);
    V.y = (Y);
    return V;
}

inline blt_3 MkBlt_3(blt X, blt Y, blt Z) {
    blt_3 V;
    V.x = (X);
    V.y = (Y);
    V.z = (Z);
    return V;
}

inline blt_4 MkBlt_4(blt X, blt Y, blt Z, blt W) {
    blt_4 V;
    V.x = (X);
    V.y = (Y);
    V.z = (Z);
    V.w = (W);
    return V;
}

// Construct from card_dir
inline i4t_2 MkI4t_2(card_dir D) {
    i4t_2 V = {};
    V.E[D/2] = (D%2 ? 1 : -1);
    return V;
}

// Construct from card_dir
inline i4t_3 MkI4t_3(card_dir D) {
    i4t_3 V = {};
    V.E[D/2] = (D%2 ? 1 : -1);
    return V;
}

// Construct from card_dir
inline i4t_4 MkI4t_4(card_dir D) {
    i4t_4 V = {};
    V.E[D/2] = (D%2 ? 1 : -1);
    return V;
}

// Construct from card_dir
inline f4t_2 MkF4t_2(card_dir D) {
    f4t_2 V = {};
    V.E[D/2] = ConvertI4t_F4t(D%2 ? 1 : -1);
    return V;
}

// Construct from card_dir
inline f4t_3 MkF4t_3(card_dir D) {
    f4t_3 V = {};
    V.E[D/2] = ConvertI4t_F4t(D%2 ? 1 : -1);
    return V;
}

// Construct from card_dir
inline f4t_4 MkF4t_4(card_dir D) {
    f4t_4 V = {};
    V.E[D/2] = ConvertI4t_F4t(D%2 ? 1 : -1);
    return V;
}

// Construct from card_dir
inline f8t_2 MkF8t_2(card_dir D) {
    f8t_2 V = {};
    V.E[D/2] = ConvertI4t_F8t(D%2 ? 1 : -1);
    return V;
}

// Construct from card_dir
inline f8t_3 MkF8t_3(card_dir D) {
    f8t_3 V = {};
    V.E[D/2] = ConvertI4t_F8t(D%2 ? 1 : -1);
    return V;
}

// Construct from card_dir
inline f8t_4 MkF8t_4(card_dir D) {
    f8t_4 V = {};
    V.E[D/2] = ConvertI4t_F8t(D%2 ? 1 : -1);
    return V;
}

// Construct from packed bits
inline u1t_2 MkU1t_2_FromBits(u4t Bits) {
    u1t_2 V = {};
    V.Packed = Bits;
    return V;
}

// Construct from packed bits
inline u1t_3 MkU1t_3_FromBits(u4t Bits) {
    u1t_3 V = {};
    V.Packed = Bits;
    return V;
}

// Construct from packed bits
inline u1t_4 MkU1t_4_FromBits(u4t Bits) {
    u1t_4 V = {};
    V.Packed = Bits;
    return V;
}

inline u1t_2 MkU1t_2(u1t A) { return MkU1t_2((A), (A)); }
inline u1t_2 MkU1t_2(u1t_2 A) { return MkU1t_2(A.x, A.y); }

inline u1t_2 MkU1t_2(i4t A) { return MkU1t_2(ConvertI4t_U1t(A), ConvertI4t_U1t(A)); }
inline u1t_2 MkU1t_2(i4t_2 A) { return MkU1t_2(A.x, A.y); }

inline u1t_2 MkU1t_2(f4t A) { return MkU1t_2(ConvertF4t_U1t(A), ConvertF4t_U1t(A)); }
inline u1t_2 MkU1t_2(f4t_2 A) { return MkU1t_2(A.x, A.y); }

inline u1t_2 MkU1t_2(f8t A) { return MkU1t_2(ConvertF8t_U1t(A), ConvertF8t_U1t(A)); }
inline u1t_2 MkU1t_2(f8t_2 A) { return MkU1t_2(A.x, A.y); }

inline u1t_3 MkU1t_3(u1t A) { return MkU1t_3((A), (A), (A)); }
inline u1t_3 MkU1t_3(u1t_3 A) { return MkU1t_3(A.x, A.y, A.z); }

inline u1t_3 MkU1t_3(i4t A) { return MkU1t_3(ConvertI4t_U1t(A), ConvertI4t_U1t(A), ConvertI4t_U1t(A)); }
inline u1t_3 MkU1t_3(i4t_3 A) { return MkU1t_3(A.x, A.y, A.z); }

inline u1t_3 MkU1t_3(f4t A) { return MkU1t_3(ConvertF4t_U1t(A), ConvertF4t_U1t(A), ConvertF4t_U1t(A)); }
inline u1t_3 MkU1t_3(f4t_3 A) { return MkU1t_3(A.x, A.y, A.z); }

inline u1t_3 MkU1t_3(f8t A) { return MkU1t_3(ConvertF8t_U1t(A), ConvertF8t_U1t(A), ConvertF8t_U1t(A)); }
inline u1t_3 MkU1t_3(f8t_3 A) { return MkU1t_3(A.x, A.y, A.z); }

inline u1t_4 MkU1t_4(u1t A) { return MkU1t_4((A), (A), (A), (A)); }
inline u1t_4 MkU1t_4(u1t_4 A) { return MkU1t_4(A.x, A.y, A.z, A.w); }

inline u1t_4 MkU1t_4(i4t A) { return MkU1t_4(ConvertI4t_U1t(A), ConvertI4t_U1t(A), ConvertI4t_U1t(A), ConvertI4t_U1t(A)); }
inline u1t_4 MkU1t_4(i4t_4 A) { return MkU1t_4(A.x, A.y, A.z, A.w); }

inline u1t_4 MkU1t_4(f4t A) { return MkU1t_4(ConvertF4t_U1t(A), ConvertF4t_U1t(A), ConvertF4t_U1t(A), ConvertF4t_U1t(A)); }
inline u1t_4 MkU1t_4(f4t_4 A) { return MkU1t_4(A.x, A.y, A.z, A.w); }

inline u1t_4 MkU1t_4(f8t A) { return MkU1t_4(ConvertF8t_U1t(A), ConvertF8t_U1t(A), ConvertF8t_U1t(A), ConvertF8t_U1t(A)); }
inline u1t_4 MkU1t_4(f8t_4 A) { return MkU1t_4(A.x, A.y, A.z, A.w); }

inline i4t_2 MkI4t_2(u1t A) { return MkI4t_2(ConvertU1t_I4t(A), ConvertU1t_I4t(A)); }
inline i4t_2 MkI4t_2(u1t_2 A) { return MkI4t_2(A.x, A.y); }

inline i4t_2 MkI4t_2(i4t A) { return MkI4t_2((A), (A)); }
inline i4t_2 MkI4t_2(i4t_2 A) { return MkI4t_2(A.x, A.y); }

inline i4t_2 MkI4t_2(f4t A) { return MkI4t_2(ConvertF4t_I4t(A), ConvertF4t_I4t(A)); }
inline i4t_2 MkI4t_2(f4t_2 A) { return MkI4t_2(A.x, A.y); }

inline i4t_2 MkI4t_2(f8t A) { return MkI4t_2(ConvertF8t_I4t(A), ConvertF8t_I4t(A)); }
inline i4t_2 MkI4t_2(f8t_2 A) { return MkI4t_2(A.x, A.y); }

inline i4t_3 MkI4t_3(u1t A) { return MkI4t_3(ConvertU1t_I4t(A), ConvertU1t_I4t(A), ConvertU1t_I4t(A)); }
inline i4t_3 MkI4t_3(u1t_3 A) { return MkI4t_3(A.x, A.y, A.z); }

inline i4t_3 MkI4t_3(i4t A) { return MkI4t_3((A), (A), (A)); }
inline i4t_3 MkI4t_3(i4t_3 A) { return MkI4t_3(A.x, A.y, A.z); }

inline i4t_3 MkI4t_3(f4t A) { return MkI4t_3(ConvertF4t_I4t(A), ConvertF4t_I4t(A), ConvertF4t_I4t(A)); }
inline i4t_3 MkI4t_3(f4t_3 A) { return MkI4t_3(A.x, A.y, A.z); }

inline i4t_3 MkI4t_3(f8t A) { return MkI4t_3(ConvertF8t_I4t(A), ConvertF8t_I4t(A), ConvertF8t_I4t(A)); }
inline i4t_3 MkI4t_3(f8t_3 A) { return MkI4t_3(A.x, A.y, A.z); }

inline i4t_4 MkI4t_4(u1t A) { return MkI4t_4(ConvertU1t_I4t(A), ConvertU1t_I4t(A), ConvertU1t_I4t(A), ConvertU1t_I4t(A)); }
inline i4t_4 MkI4t_4(u1t_4 A) { return MkI4t_4(A.x, A.y, A.z, A.w); }

inline i4t_4 MkI4t_4(i4t A) { return MkI4t_4((A), (A), (A), (A)); }
inline i4t_4 MkI4t_4(i4t_4 A) { return MkI4t_4(A.x, A.y, A.z, A.w); }

inline i4t_4 MkI4t_4(f4t A) { return MkI4t_4(ConvertF4t_I4t(A), ConvertF4t_I4t(A), ConvertF4t_I4t(A), ConvertF4t_I4t(A)); }
inline i4t_4 MkI4t_4(f4t_4 A) { return MkI4t_4(A.x, A.y, A.z, A.w); }

inline i4t_4 MkI4t_4(f8t A) { return MkI4t_4(ConvertF8t_I4t(A), ConvertF8t_I4t(A), ConvertF8t_I4t(A), ConvertF8t_I4t(A)); }
inline i4t_4 MkI4t_4(f8t_4 A) { return MkI4t_4(A.x, A.y, A.z, A.w); }

inline f4t_2 MkF4t_2(u1t A) { return MkF4t_2(ConvertU1t_F4t(A), ConvertU1t_F4t(A)); }
inline f4t_2 MkF4t_2(u1t_2 A) { return MkF4t_2(A.x, A.y); }

inline f4t_2 MkF4t_2(i4t A) { return MkF4t_2(ConvertI4t_F4t(A), ConvertI4t_F4t(A)); }
inline f4t_2 MkF4t_2(i4t_2 A) { return MkF4t_2(A.x, A.y); }

inline f4t_2 MkF4t_2(f4t A) { return MkF4t_2((A), (A)); }
inline f4t_2 MkF4t_2(f4t_2 A) { return MkF4t_2(A.x, A.y); }

inline f4t_2 MkF4t_2(f8t A) { return MkF4t_2(ConvertF8t_F4t(A), ConvertF8t_F4t(A)); }
inline f4t_2 MkF4t_2(f8t_2 A) { return MkF4t_2(A.x, A.y); }

inline f4t_3 MkF4t_3(u1t A) { return MkF4t_3(ConvertU1t_F4t(A), ConvertU1t_F4t(A), ConvertU1t_F4t(A)); }
inline f4t_3 MkF4t_3(u1t_3 A) { return MkF4t_3(A.x, A.y, A.z); }

inline f4t_3 MkF4t_3(i4t A) { return MkF4t_3(ConvertI4t_F4t(A), ConvertI4t_F4t(A), ConvertI4t_F4t(A)); }
inline f4t_3 MkF4t_3(i4t_3 A) { return MkF4t_3(A.x, A.y, A.z); }

inline f4t_3 MkF4t_3(f4t A) { return MkF4t_3((A), (A), (A)); }
inline f4t_3 MkF4t_3(f4t_3 A) { return MkF4t_3(A.x, A.y, A.z); }

inline f4t_3 MkF4t_3(f8t A) { return MkF4t_3(ConvertF8t_F4t(A), ConvertF8t_F4t(A), ConvertF8t_F4t(A)); }
inline f4t_3 MkF4t_3(f8t_3 A) { return MkF4t_3(A.x, A.y, A.z); }

inline f4t_4 MkF4t_4(u1t A) { return MkF4t_4(ConvertU1t_F4t(A), ConvertU1t_F4t(A), ConvertU1t_F4t(A), ConvertU1t_F4t(A)); }
inline f4t_4 MkF4t_4(u1t_4 A) { return MkF4t_4(A.x, A.y, A.z, A.w); }

inline f4t_4 MkF4t_4(i4t A) { return MkF4t_4(ConvertI4t_F4t(A), ConvertI4t_F4t(A), ConvertI4t_F4t(A), ConvertI4t_F4t(A)); }
inline f4t_4 MkF4t_4(i4t_4 A) { return MkF4t_4(A.x, A.y, A.z, A.w); }

inline f4t_4 MkF4t_4(f4t A) { return MkF4t_4((A), (A), (A), (A)); }
inline f4t_4 MkF4t_4(f4t_4 A) { return MkF4t_4(A.x, A.y, A.z, A.w); }

inline f4t_4 MkF4t_4(f8t A) { return MkF4t_4(ConvertF8t_F4t(A), ConvertF8t_F4t(A), ConvertF8t_F4t(A), ConvertF8t_F4t(A)); }
inline f4t_4 MkF4t_4(f8t_4 A) { return MkF4t_4(A.x, A.y, A.z, A.w); }

inline f8t_2 MkF8t_2(u1t A) { return MkF8t_2(ConvertU1t_F8t(A), ConvertU1t_F8t(A)); }
inline f8t_2 MkF8t_2(u1t_2 A) { return MkF8t_2(A.x, A.y); }

inline f8t_2 MkF8t_2(i4t A) { return MkF8t_2(ConvertI4t_F8t(A), ConvertI4t_F8t(A)); }
inline f8t_2 MkF8t_2(i4t_2 A) { return MkF8t_2(A.x, A.y); }

inline f8t_2 MkF8t_2(f4t A) { return MkF8t_2(ConvertF4t_F8t(A), ConvertF4t_F8t(A)); }
inline f8t_2 MkF8t_2(f4t_2 A) { return MkF8t_2(A.x, A.y); }

inline f8t_2 MkF8t_2(f8t A) { return MkF8t_2((A), (A)); }
inline f8t_2 MkF8t_2(f8t_2 A) { return MkF8t_2(A.x, A.y); }

inline f8t_3 MkF8t_3(u1t A) { return MkF8t_3(ConvertU1t_F8t(A), ConvertU1t_F8t(A), ConvertU1t_F8t(A)); }
inline f8t_3 MkF8t_3(u1t_3 A) { return MkF8t_3(A.x, A.y, A.z); }

inline f8t_3 MkF8t_3(i4t A) { return MkF8t_3(ConvertI4t_F8t(A), ConvertI4t_F8t(A), ConvertI4t_F8t(A)); }
inline f8t_3 MkF8t_3(i4t_3 A) { return MkF8t_3(A.x, A.y, A.z); }

inline f8t_3 MkF8t_3(f4t A) { return MkF8t_3(ConvertF4t_F8t(A), ConvertF4t_F8t(A), ConvertF4t_F8t(A)); }
inline f8t_3 MkF8t_3(f4t_3 A) { return MkF8t_3(A.x, A.y, A.z); }

inline f8t_3 MkF8t_3(f8t A) { return MkF8t_3((A), (A), (A)); }
inline f8t_3 MkF8t_3(f8t_3 A) { return MkF8t_3(A.x, A.y, A.z); }

inline f8t_4 MkF8t_4(u1t A) { return MkF8t_4(ConvertU1t_F8t(A), ConvertU1t_F8t(A), ConvertU1t_F8t(A), ConvertU1t_F8t(A)); }
inline f8t_4 MkF8t_4(u1t_4 A) { return MkF8t_4(A.x, A.y, A.z, A.w); }

inline f8t_4 MkF8t_4(i4t A) { return MkF8t_4(ConvertI4t_F8t(A), ConvertI4t_F8t(A), ConvertI4t_F8t(A), ConvertI4t_F8t(A)); }
inline f8t_4 MkF8t_4(i4t_4 A) { return MkF8t_4(A.x, A.y, A.z, A.w); }

inline f8t_4 MkF8t_4(f4t A) { return MkF8t_4(ConvertF4t_F8t(A), ConvertF4t_F8t(A), ConvertF4t_F8t(A), ConvertF4t_F8t(A)); }
inline f8t_4 MkF8t_4(f4t_4 A) { return MkF8t_4(A.x, A.y, A.z, A.w); }

inline f8t_4 MkF8t_4(f8t A) { return MkF8t_4((A), (A), (A), (A)); }
inline f8t_4 MkF8t_4(f8t_4 A) { return MkF8t_4(A.x, A.y, A.z, A.w); }

inline blt_2 MkBlt_2(blt A) { return MkBlt_2((A), (A)); }

inline blt_3 MkBlt_3(blt A) { return MkBlt_3((A), (A), (A)); }

inline blt_4 MkBlt_4(blt A) { return MkBlt_4((A), (A), (A), (A)); }

inline i4t_2 Abs(i4t_2 A) { return MkI4t_2( Abs(A.x), Abs(A.y)); }

inline i4t_3 Abs(i4t_3 A) { return MkI4t_3( Abs(A.x), Abs(A.y), Abs(A.z)); }

inline i4t_4 Abs(i4t_4 A) { return MkI4t_4( Abs(A.x), Abs(A.y), Abs(A.z), Abs(A.w)); }

inline f4t_2 Abs(f4t_2 A) { return MkF4t_2( Abs(A.x), Abs(A.y)); }

inline f4t_3 Abs(f4t_3 A) { return MkF4t_3( Abs(A.x), Abs(A.y), Abs(A.z)); }

inline f4t_4 Abs(f4t_4 A) { return MkF4t_4( Abs(A.x), Abs(A.y), Abs(A.z), Abs(A.w)); }

inline f8t_2 Abs(f8t_2 A) { return MkF8t_2( Abs(A.x), Abs(A.y)); }

inline f8t_3 Abs(f8t_3 A) { return MkF8t_3( Abs(A.x), Abs(A.y), Abs(A.z)); }

inline f8t_4 Abs(f8t_4 A) { return MkF8t_4( Abs(A.x), Abs(A.y), Abs(A.z), Abs(A.w)); }

inline blt_2 operator!=(u1t_2 A, u1t_2 B) { return MkBlt_2( A.x != B.x, A.y != B.y); }
inline blt_2 operator!=(u1t_2 V, u1t A) { return MkBlt_2( V.x != A, V.y != A); }
inline blt_2 operator!=(u1t A, u1t_2 V) { return MkBlt_2( A != V.x, A != V.y); }
inline blt_2 operator==(u1t_2 A, u1t_2 B) { return MkBlt_2( A.x == B.x, A.y == B.y); }
inline blt_2 operator==(u1t_2 V, u1t A) { return MkBlt_2( V.x == A, V.y == A); }
inline blt_2 operator==(u1t A, u1t_2 V) { return MkBlt_2( A == V.x, A == V.y); }
inline u1t_2 Diagonal(u1t_2 Vx, u1t_2 Vy) {
    u1t_2 V;
    V.x = Vx.x;
    V.y = Vy.y;
    return V;
}

inline blt_3 operator!=(u1t_3 A, u1t_3 B) { return MkBlt_3( A.x != B.x, A.y != B.y, A.z != B.z); }
inline blt_3 operator!=(u1t_3 V, u1t A) { return MkBlt_3( V.x != A, V.y != A, V.z != A); }
inline blt_3 operator!=(u1t A, u1t_3 V) { return MkBlt_3( A != V.x, A != V.y, A != V.z); }
inline blt_3 operator==(u1t_3 A, u1t_3 B) { return MkBlt_3( A.x == B.x, A.y == B.y, A.z == B.z); }
inline blt_3 operator==(u1t_3 V, u1t A) { return MkBlt_3( V.x == A, V.y == A, V.z == A); }
inline blt_3 operator==(u1t A, u1t_3 V) { return MkBlt_3( A == V.x, A == V.y, A == V.z); }
inline u1t_3 Diagonal(u1t_3 Vx, u1t_3 Vy, u1t_3 Vz) {
    u1t_3 V;
    V.x = Vx.x;
    V.y = Vy.y;
    V.z = Vz.z;
    return V;
}

inline blt_4 operator!=(u1t_4 A, u1t_4 B) { return MkBlt_4( A.x != B.x, A.y != B.y, A.z != B.z, A.w != B.w); }
inline blt_4 operator!=(u1t_4 V, u1t A) { return MkBlt_4( V.x != A, V.y != A, V.z != A, V.w != A); }
inline blt_4 operator!=(u1t A, u1t_4 V) { return MkBlt_4( A != V.x, A != V.y, A != V.z, A != V.w); }
inline blt_4 operator==(u1t_4 A, u1t_4 B) { return MkBlt_4( A.x == B.x, A.y == B.y, A.z == B.z, A.w == B.w); }
inline blt_4 operator==(u1t_4 V, u1t A) { return MkBlt_4( V.x == A, V.y == A, V.z == A, V.w == A); }
inline blt_4 operator==(u1t A, u1t_4 V) { return MkBlt_4( A == V.x, A == V.y, A == V.z, A == V.w); }
inline u1t_4 Diagonal(u1t_4 Vx, u1t_4 Vy, u1t_4 Vz, u1t_4 Vw) {
    u1t_4 V;
    V.x = Vx.x;
    V.y = Vy.y;
    V.z = Vz.z;
    V.w = Vw.w;
    return V;
}

inline blt_2 operator!=(i4t_2 A, i4t_2 B) { return MkBlt_2( A.x != B.x, A.y != B.y); }
inline blt_2 operator!=(i4t_2 V, i4t A) { return MkBlt_2( V.x != A, V.y != A); }
inline blt_2 operator!=(i4t A, i4t_2 V) { return MkBlt_2( A != V.x, A != V.y); }
inline blt_2 operator==(i4t_2 A, i4t_2 B) { return MkBlt_2( A.x == B.x, A.y == B.y); }
inline blt_2 operator==(i4t_2 V, i4t A) { return MkBlt_2( V.x == A, V.y == A); }
inline blt_2 operator==(i4t A, i4t_2 V) { return MkBlt_2( A == V.x, A == V.y); }
inline i4t_2 Diagonal(i4t_2 Vx, i4t_2 Vy) {
    i4t_2 V;
    V.x = Vx.x;
    V.y = Vy.y;
    return V;
}

inline blt_3 operator!=(i4t_3 A, i4t_3 B) { return MkBlt_3( A.x != B.x, A.y != B.y, A.z != B.z); }
inline blt_3 operator!=(i4t_3 V, i4t A) { return MkBlt_3( V.x != A, V.y != A, V.z != A); }
inline blt_3 operator!=(i4t A, i4t_3 V) { return MkBlt_3( A != V.x, A != V.y, A != V.z); }
inline blt_3 operator==(i4t_3 A, i4t_3 B) { return MkBlt_3( A.x == B.x, A.y == B.y, A.z == B.z); }
inline blt_3 operator==(i4t_3 V, i4t A) { return MkBlt_3( V.x == A, V.y == A, V.z == A); }
inline blt_3 operator==(i4t A, i4t_3 V) { return MkBlt_3( A == V.x, A == V.y, A == V.z); }
inline i4t_3 Diagonal(i4t_3 Vx, i4t_3 Vy, i4t_3 Vz) {
    i4t_3 V;
    V.x = Vx.x;
    V.y = Vy.y;
    V.z = Vz.z;
    return V;
}

inline blt_4 operator!=(i4t_4 A, i4t_4 B) { return MkBlt_4( A.x != B.x, A.y != B.y, A.z != B.z, A.w != B.w); }
inline blt_4 operator!=(i4t_4 V, i4t A) { return MkBlt_4( V.x != A, V.y != A, V.z != A, V.w != A); }
inline blt_4 operator!=(i4t A, i4t_4 V) { return MkBlt_4( A != V.x, A != V.y, A != V.z, A != V.w); }
inline blt_4 operator==(i4t_4 A, i4t_4 B) { return MkBlt_4( A.x == B.x, A.y == B.y, A.z == B.z, A.w == B.w); }
inline blt_4 operator==(i4t_4 V, i4t A) { return MkBlt_4( V.x == A, V.y == A, V.z == A, V.w == A); }
inline blt_4 operator==(i4t A, i4t_4 V) { return MkBlt_4( A == V.x, A == V.y, A == V.z, A == V.w); }
inline i4t_4 Diagonal(i4t_4 Vx, i4t_4 Vy, i4t_4 Vz, i4t_4 Vw) {
    i4t_4 V;
    V.x = Vx.x;
    V.y = Vy.y;
    V.z = Vz.z;
    V.w = Vw.w;
    return V;
}

inline blt_2 operator!=(f4t_2 A, f4t_2 B) { return MkBlt_2( A.x != B.x, A.y != B.y); }
inline blt_2 operator!=(f4t_2 V, f4t A) { return MkBlt_2( V.x != A, V.y != A); }
inline blt_2 operator!=(f4t A, f4t_2 V) { return MkBlt_2( A != V.x, A != V.y); }
inline blt_2 operator==(f4t_2 A, f4t_2 B) { return MkBlt_2( A.x == B.x, A.y == B.y); }
inline blt_2 operator==(f4t_2 V, f4t A) { return MkBlt_2( V.x == A, V.y == A); }
inline blt_2 operator==(f4t A, f4t_2 V) { return MkBlt_2( A == V.x, A == V.y); }
inline f4t_2 Diagonal(f4t_2 Vx, f4t_2 Vy) {
    f4t_2 V;
    V.x = Vx.x;
    V.y = Vy.y;
    return V;
}

inline blt_3 operator!=(f4t_3 A, f4t_3 B) { return MkBlt_3( A.x != B.x, A.y != B.y, A.z != B.z); }
inline blt_3 operator!=(f4t_3 V, f4t A) { return MkBlt_3( V.x != A, V.y != A, V.z != A); }
inline blt_3 operator!=(f4t A, f4t_3 V) { return MkBlt_3( A != V.x, A != V.y, A != V.z); }
inline blt_3 operator==(f4t_3 A, f4t_3 B) { return MkBlt_3( A.x == B.x, A.y == B.y, A.z == B.z); }
inline blt_3 operator==(f4t_3 V, f4t A) { return MkBlt_3( V.x == A, V.y == A, V.z == A); }
inline blt_3 operator==(f4t A, f4t_3 V) { return MkBlt_3( A == V.x, A == V.y, A == V.z); }
inline f4t_3 Diagonal(f4t_3 Vx, f4t_3 Vy, f4t_3 Vz) {
    f4t_3 V;
    V.x = Vx.x;
    V.y = Vy.y;
    V.z = Vz.z;
    return V;
}

inline blt_4 operator!=(f4t_4 A, f4t_4 B) { return MkBlt_4( A.x != B.x, A.y != B.y, A.z != B.z, A.w != B.w); }
inline blt_4 operator!=(f4t_4 V, f4t A) { return MkBlt_4( V.x != A, V.y != A, V.z != A, V.w != A); }
inline blt_4 operator!=(f4t A, f4t_4 V) { return MkBlt_4( A != V.x, A != V.y, A != V.z, A != V.w); }
inline blt_4 operator==(f4t_4 A, f4t_4 B) { return MkBlt_4( A.x == B.x, A.y == B.y, A.z == B.z, A.w == B.w); }
inline blt_4 operator==(f4t_4 V, f4t A) { return MkBlt_4( V.x == A, V.y == A, V.z == A, V.w == A); }
inline blt_4 operator==(f4t A, f4t_4 V) { return MkBlt_4( A == V.x, A == V.y, A == V.z, A == V.w); }
inline f4t_4 Diagonal(f4t_4 Vx, f4t_4 Vy, f4t_4 Vz, f4t_4 Vw) {
    f4t_4 V;
    V.x = Vx.x;
    V.y = Vy.y;
    V.z = Vz.z;
    V.w = Vw.w;
    return V;
}

inline blt_2 operator!=(f8t_2 A, f8t_2 B) { return MkBlt_2( A.x != B.x, A.y != B.y); }
inline blt_2 operator!=(f8t_2 V, f8t A) { return MkBlt_2( V.x != A, V.y != A); }
inline blt_2 operator!=(f8t A, f8t_2 V) { return MkBlt_2( A != V.x, A != V.y); }
inline blt_2 operator==(f8t_2 A, f8t_2 B) { return MkBlt_2( A.x == B.x, A.y == B.y); }
inline blt_2 operator==(f8t_2 V, f8t A) { return MkBlt_2( V.x == A, V.y == A); }
inline blt_2 operator==(f8t A, f8t_2 V) { return MkBlt_2( A == V.x, A == V.y); }
inline f8t_2 Diagonal(f8t_2 Vx, f8t_2 Vy) {
    f8t_2 V;
    V.x = Vx.x;
    V.y = Vy.y;
    return V;
}

inline blt_3 operator!=(f8t_3 A, f8t_3 B) { return MkBlt_3( A.x != B.x, A.y != B.y, A.z != B.z); }
inline blt_3 operator!=(f8t_3 V, f8t A) { return MkBlt_3( V.x != A, V.y != A, V.z != A); }
inline blt_3 operator!=(f8t A, f8t_3 V) { return MkBlt_3( A != V.x, A != V.y, A != V.z); }
inline blt_3 operator==(f8t_3 A, f8t_3 B) { return MkBlt_3( A.x == B.x, A.y == B.y, A.z == B.z); }
inline blt_3 operator==(f8t_3 V, f8t A) { return MkBlt_3( V.x == A, V.y == A, V.z == A); }
inline blt_3 operator==(f8t A, f8t_3 V) { return MkBlt_3( A == V.x, A == V.y, A == V.z); }
inline f8t_3 Diagonal(f8t_3 Vx, f8t_3 Vy, f8t_3 Vz) {
    f8t_3 V;
    V.x = Vx.x;
    V.y = Vy.y;
    V.z = Vz.z;
    return V;
}

inline blt_4 operator!=(f8t_4 A, f8t_4 B) { return MkBlt_4( A.x != B.x, A.y != B.y, A.z != B.z, A.w != B.w); }
inline blt_4 operator!=(f8t_4 V, f8t A) { return MkBlt_4( V.x != A, V.y != A, V.z != A, V.w != A); }
inline blt_4 operator!=(f8t A, f8t_4 V) { return MkBlt_4( A != V.x, A != V.y, A != V.z, A != V.w); }
inline blt_4 operator==(f8t_4 A, f8t_4 B) { return MkBlt_4( A.x == B.x, A.y == B.y, A.z == B.z, A.w == B.w); }
inline blt_4 operator==(f8t_4 V, f8t A) { return MkBlt_4( V.x == A, V.y == A, V.z == A, V.w == A); }
inline blt_4 operator==(f8t A, f8t_4 V) { return MkBlt_4( A == V.x, A == V.y, A == V.z, A == V.w); }
inline f8t_4 Diagonal(f8t_4 Vx, f8t_4 Vy, f8t_4 Vz, f8t_4 Vw) {
    f8t_4 V;
    V.x = Vx.x;
    V.y = Vy.y;
    V.z = Vz.z;
    V.w = Vw.w;
    return V;
}

inline blt_2 operator!=(blt_2 A, blt_2 B) { return MkBlt_2( A.x != B.x, A.y != B.y); }
inline blt_2 operator!=(blt_2 V, blt A) { return MkBlt_2( V.x != A, V.y != A); }
inline blt_2 operator!=(blt A, blt_2 V) { return MkBlt_2( A != V.x, A != V.y); }
inline blt_2 operator==(blt_2 A, blt_2 B) { return MkBlt_2( A.x == B.x, A.y == B.y); }
inline blt_2 operator==(blt_2 V, blt A) { return MkBlt_2( V.x == A, V.y == A); }
inline blt_2 operator==(blt A, blt_2 V) { return MkBlt_2( A == V.x, A == V.y); }
inline blt_2 Diagonal(blt_2 Vx, blt_2 Vy) {
    blt_2 V;
    V.x = Vx.x;
    V.y = Vy.y;
    return V;
}

inline blt_3 operator!=(blt_3 A, blt_3 B) { return MkBlt_3( A.x != B.x, A.y != B.y, A.z != B.z); }
inline blt_3 operator!=(blt_3 V, blt A) { return MkBlt_3( V.x != A, V.y != A, V.z != A); }
inline blt_3 operator!=(blt A, blt_3 V) { return MkBlt_3( A != V.x, A != V.y, A != V.z); }
inline blt_3 operator==(blt_3 A, blt_3 B) { return MkBlt_3( A.x == B.x, A.y == B.y, A.z == B.z); }
inline blt_3 operator==(blt_3 V, blt A) { return MkBlt_3( V.x == A, V.y == A, V.z == A); }
inline blt_3 operator==(blt A, blt_3 V) { return MkBlt_3( A == V.x, A == V.y, A == V.z); }
inline blt_3 Diagonal(blt_3 Vx, blt_3 Vy, blt_3 Vz) {
    blt_3 V;
    V.x = Vx.x;
    V.y = Vy.y;
    V.z = Vz.z;
    return V;
}

inline blt_4 operator!=(blt_4 A, blt_4 B) { return MkBlt_4( A.x != B.x, A.y != B.y, A.z != B.z, A.w != B.w); }
inline blt_4 operator!=(blt_4 V, blt A) { return MkBlt_4( V.x != A, V.y != A, V.z != A, V.w != A); }
inline blt_4 operator!=(blt A, blt_4 V) { return MkBlt_4( A != V.x, A != V.y, A != V.z, A != V.w); }
inline blt_4 operator==(blt_4 A, blt_4 B) { return MkBlt_4( A.x == B.x, A.y == B.y, A.z == B.z, A.w == B.w); }
inline blt_4 operator==(blt_4 V, blt A) { return MkBlt_4( V.x == A, V.y == A, V.z == A, V.w == A); }
inline blt_4 operator==(blt A, blt_4 V) { return MkBlt_4( A == V.x, A == V.y, A == V.z, A == V.w); }
inline blt_4 Diagonal(blt_4 Vx, blt_4 Vy, blt_4 Vz, blt_4 Vw) {
    blt_4 V;
    V.x = Vx.x;
    V.y = Vy.y;
    V.z = Vz.z;
    V.w = Vw.w;
    return V;
}

inline blt_2 operator!(blt_2 A) { return MkBlt_2( !A.x, !A.y); }
inline blt_2 operator&&(blt_2 A, blt_2 B) { return MkBlt_2( A.x && B.x, A.y && B.y); }
inline blt_2 operator&&(blt_2 V, blt A) { return MkBlt_2( V.x && A, V.y && A); }
inline blt_2 operator&&(blt A, blt_2 V) { return MkBlt_2( A && V.x, A && V.y); }
inline blt_2 operator||(blt_2 A, blt_2 B) { return MkBlt_2( A.x || B.x, A.y || B.y); }
inline blt_2 operator||(blt_2 V, blt A) { return MkBlt_2( V.x || A, V.y || A); }
inline blt_2 operator||(blt A, blt_2 V) { return MkBlt_2( A || V.x, A || V.y); }
inline blt HzAnd(blt_2 V) { return V.x&&V.y; }
inline blt HzOr(blt_2 V) { return V.x||V.y; }

inline blt_3 operator!(blt_3 A) { return MkBlt_3( !A.x, !A.y, !A.z); }
inline blt_3 operator&&(blt_3 A, blt_3 B) { return MkBlt_3( A.x && B.x, A.y && B.y, A.z && B.z); }
inline blt_3 operator&&(blt_3 V, blt A) { return MkBlt_3( V.x && A, V.y && A, V.z && A); }
inline blt_3 operator&&(blt A, blt_3 V) { return MkBlt_3( A && V.x, A && V.y, A && V.z); }
inline blt_3 operator||(blt_3 A, blt_3 B) { return MkBlt_3( A.x || B.x, A.y || B.y, A.z || B.z); }
inline blt_3 operator||(blt_3 V, blt A) { return MkBlt_3( V.x || A, V.y || A, V.z || A); }
inline blt_3 operator||(blt A, blt_3 V) { return MkBlt_3( A || V.x, A || V.y, A || V.z); }
inline blt HzAnd(blt_3 V) { return V.x&&V.y&&V.z; }
inline blt HzOr(blt_3 V) { return V.x||V.y||V.z; }

inline blt_4 operator!(blt_4 A) { return MkBlt_4( !A.x, !A.y, !A.z, !A.w); }
inline blt_4 operator&&(blt_4 A, blt_4 B) { return MkBlt_4( A.x && B.x, A.y && B.y, A.z && B.z, A.w && B.w); }
inline blt_4 operator&&(blt_4 V, blt A) { return MkBlt_4( V.x && A, V.y && A, V.z && A, V.w && A); }
inline blt_4 operator&&(blt A, blt_4 V) { return MkBlt_4( A && V.x, A && V.y, A && V.z, A && V.w); }
inline blt_4 operator||(blt_4 A, blt_4 B) { return MkBlt_4( A.x || B.x, A.y || B.y, A.z || B.z, A.w || B.w); }
inline blt_4 operator||(blt_4 V, blt A) { return MkBlt_4( V.x || A, V.y || A, V.z || A, V.w || A); }
inline blt_4 operator||(blt A, blt_4 V) { return MkBlt_4( A || V.x, A || V.y, A || V.z, A || V.w); }
inline blt HzAnd(blt_4 V) { return V.x&&V.y&&V.z&&V.w; }
inline blt HzOr(blt_4 V) { return V.x||V.y||V.z||V.w; }

inline u1t_2 operator-(u1t_2 A) { return MkU1t_2( -A.x, -A.y); }
inline u1t_2 operator+(u1t_2 A, u1t_2 B) { return MkU1t_2( A.x + B.x, A.y + B.y); }
inline u1t_2 operator+(u1t_2 V, u1t A) { return MkU1t_2( V.x + A, V.y + A); }
inline u1t_2 operator+(u1t A, u1t_2 V) { return MkU1t_2( A + V.x, A + V.y); }
inline u1t_2 operator-(u1t_2 A, u1t_2 B) { return MkU1t_2( A.x - B.x, A.y - B.y); }
inline u1t_2 operator-(u1t_2 V, u1t A) { return MkU1t_2( V.x - A, V.y - A); }
inline u1t_2 operator-(u1t A, u1t_2 V) { return MkU1t_2( A - V.x, A - V.y); }
inline u1t_2 operator*(u1t_2 A, u1t_2 B) { return MkU1t_2( A.x * B.x, A.y * B.y); }
inline u1t_2 operator*(u1t_2 V, u1t A) { return MkU1t_2( V.x * A, V.y * A); }
inline u1t_2 operator*(u1t A, u1t_2 V) { return MkU1t_2( A * V.x, A * V.y); }
inline u1t_2 operator/(u1t_2 A, u1t_2 B) { return MkU1t_2( Div(A.x,B.x), Div(A.y,B.y)); }
inline u1t_2 operator/(u1t_2 V, u1t A) { return MkU1t_2( Div(V.x,A), Div(V.y,A)); }
inline u1t_2 operator/(u1t A, u1t_2 V) { return MkU1t_2( Div(A,V.x), Div(A,V.y)); }
inline blt_2 operator<(u1t_2 A, u1t_2 B) { return MkBlt_2( A.x < B.x, A.y < B.y); }
inline blt_2 operator<(u1t_2 V, u1t A) { return MkBlt_2( V.x < A, V.y < A); }
inline blt_2 operator<(u1t A, u1t_2 V) { return MkBlt_2( A < V.x, A < V.y); }
inline blt_2 operator<=(u1t_2 A, u1t_2 B) { return MkBlt_2( A.x <= B.x, A.y <= B.y); }
inline blt_2 operator<=(u1t_2 V, u1t A) { return MkBlt_2( V.x <= A, V.y <= A); }
inline blt_2 operator<=(u1t A, u1t_2 V) { return MkBlt_2( A <= V.x, A <= V.y); }
inline blt_2 operator>(u1t_2 A, u1t_2 B) { return MkBlt_2( A.x > B.x, A.y > B.y); }
inline blt_2 operator>(u1t_2 V, u1t A) { return MkBlt_2( V.x > A, V.y > A); }
inline blt_2 operator>(u1t A, u1t_2 V) { return MkBlt_2( A > V.x, A > V.y); }
inline blt_2 operator>=(u1t_2 A, u1t_2 B) { return MkBlt_2( A.x >= B.x, A.y >= B.y); }
inline blt_2 operator>=(u1t_2 V, u1t A) { return MkBlt_2( V.x >= A, V.y >= A); }
inline blt_2 operator>=(u1t A, u1t_2 V) { return MkBlt_2( A >= V.x, A >= V.y); }
inline u1t_2 VtMin(u1t_2 A, u1t_2 B) { return MkU1t_2( Min(A.x,B.x), Min(A.y,B.y)); }
inline u1t_2 VtMin(u1t_2 V, u1t A) { return MkU1t_2( Min(V.x,A), Min(V.y,A)); }
inline u1t_2 VtMin(u1t A, u1t_2 V) { return MkU1t_2( Min(A,V.x), Min(A,V.y)); }
inline u1t_2 VtMax(u1t_2 A, u1t_2 B) { return MkU1t_2( Max(A.x,B.x), Max(A.y,B.y)); }
inline u1t_2 VtMax(u1t_2 V, u1t A) { return MkU1t_2( Max(V.x,A), Max(V.y,A)); }
inline u1t_2 VtMax(u1t A, u1t_2 V) { return MkU1t_2( Max(A,V.x), Max(A,V.y)); }

inline u1t_3 operator-(u1t_3 A) { return MkU1t_3( -A.x, -A.y, -A.z); }
inline u1t_3 operator+(u1t_3 A, u1t_3 B) { return MkU1t_3( A.x + B.x, A.y + B.y, A.z + B.z); }
inline u1t_3 operator+(u1t_3 V, u1t A) { return MkU1t_3( V.x + A, V.y + A, V.z + A); }
inline u1t_3 operator+(u1t A, u1t_3 V) { return MkU1t_3( A + V.x, A + V.y, A + V.z); }
inline u1t_3 operator-(u1t_3 A, u1t_3 B) { return MkU1t_3( A.x - B.x, A.y - B.y, A.z - B.z); }
inline u1t_3 operator-(u1t_3 V, u1t A) { return MkU1t_3( V.x - A, V.y - A, V.z - A); }
inline u1t_3 operator-(u1t A, u1t_3 V) { return MkU1t_3( A - V.x, A - V.y, A - V.z); }
inline u1t_3 operator*(u1t_3 A, u1t_3 B) { return MkU1t_3( A.x * B.x, A.y * B.y, A.z * B.z); }
inline u1t_3 operator*(u1t_3 V, u1t A) { return MkU1t_3( V.x * A, V.y * A, V.z * A); }
inline u1t_3 operator*(u1t A, u1t_3 V) { return MkU1t_3( A * V.x, A * V.y, A * V.z); }
inline u1t_3 operator/(u1t_3 A, u1t_3 B) { return MkU1t_3( Div(A.x,B.x), Div(A.y,B.y), Div(A.z,B.z)); }
inline u1t_3 operator/(u1t_3 V, u1t A) { return MkU1t_3( Div(V.x,A), Div(V.y,A), Div(V.z,A)); }
inline u1t_3 operator/(u1t A, u1t_3 V) { return MkU1t_3( Div(A,V.x), Div(A,V.y), Div(A,V.z)); }
inline blt_3 operator<(u1t_3 A, u1t_3 B) { return MkBlt_3( A.x < B.x, A.y < B.y, A.z < B.z); }
inline blt_3 operator<(u1t_3 V, u1t A) { return MkBlt_3( V.x < A, V.y < A, V.z < A); }
inline blt_3 operator<(u1t A, u1t_3 V) { return MkBlt_3( A < V.x, A < V.y, A < V.z); }
inline blt_3 operator<=(u1t_3 A, u1t_3 B) { return MkBlt_3( A.x <= B.x, A.y <= B.y, A.z <= B.z); }
inline blt_3 operator<=(u1t_3 V, u1t A) { return MkBlt_3( V.x <= A, V.y <= A, V.z <= A); }
inline blt_3 operator<=(u1t A, u1t_3 V) { return MkBlt_3( A <= V.x, A <= V.y, A <= V.z); }
inline blt_3 operator>(u1t_3 A, u1t_3 B) { return MkBlt_3( A.x > B.x, A.y > B.y, A.z > B.z); }
inline blt_3 operator>(u1t_3 V, u1t A) { return MkBlt_3( V.x > A, V.y > A, V.z > A); }
inline blt_3 operator>(u1t A, u1t_3 V) { return MkBlt_3( A > V.x, A > V.y, A > V.z); }
inline blt_3 operator>=(u1t_3 A, u1t_3 B) { return MkBlt_3( A.x >= B.x, A.y >= B.y, A.z >= B.z); }
inline blt_3 operator>=(u1t_3 V, u1t A) { return MkBlt_3( V.x >= A, V.y >= A, V.z >= A); }
inline blt_3 operator>=(u1t A, u1t_3 V) { return MkBlt_3( A >= V.x, A >= V.y, A >= V.z); }
inline u1t_3 VtMin(u1t_3 A, u1t_3 B) { return MkU1t_3( Min(A.x,B.x), Min(A.y,B.y), Min(A.z,B.z)); }
inline u1t_3 VtMin(u1t_3 V, u1t A) { return MkU1t_3( Min(V.x,A), Min(V.y,A), Min(V.z,A)); }
inline u1t_3 VtMin(u1t A, u1t_3 V) { return MkU1t_3( Min(A,V.x), Min(A,V.y), Min(A,V.z)); }
inline u1t_3 VtMax(u1t_3 A, u1t_3 B) { return MkU1t_3( Max(A.x,B.x), Max(A.y,B.y), Max(A.z,B.z)); }
inline u1t_3 VtMax(u1t_3 V, u1t A) { return MkU1t_3( Max(V.x,A), Max(V.y,A), Max(V.z,A)); }
inline u1t_3 VtMax(u1t A, u1t_3 V) { return MkU1t_3( Max(A,V.x), Max(A,V.y), Max(A,V.z)); }

inline u1t_4 operator-(u1t_4 A) { return MkU1t_4( -A.x, -A.y, -A.z, -A.w); }
inline u1t_4 operator+(u1t_4 A, u1t_4 B) { return MkU1t_4( A.x + B.x, A.y + B.y, A.z + B.z, A.w + B.w); }
inline u1t_4 operator+(u1t_4 V, u1t A) { return MkU1t_4( V.x + A, V.y + A, V.z + A, V.w + A); }
inline u1t_4 operator+(u1t A, u1t_4 V) { return MkU1t_4( A + V.x, A + V.y, A + V.z, A + V.w); }
inline u1t_4 operator-(u1t_4 A, u1t_4 B) { return MkU1t_4( A.x - B.x, A.y - B.y, A.z - B.z, A.w - B.w); }
inline u1t_4 operator-(u1t_4 V, u1t A) { return MkU1t_4( V.x - A, V.y - A, V.z - A, V.w - A); }
inline u1t_4 operator-(u1t A, u1t_4 V) { return MkU1t_4( A - V.x, A - V.y, A - V.z, A - V.w); }
inline u1t_4 operator*(u1t_4 A, u1t_4 B) { return MkU1t_4( A.x * B.x, A.y * B.y, A.z * B.z, A.w * B.w); }
inline u1t_4 operator*(u1t_4 V, u1t A) { return MkU1t_4( V.x * A, V.y * A, V.z * A, V.w * A); }
inline u1t_4 operator*(u1t A, u1t_4 V) { return MkU1t_4( A * V.x, A * V.y, A * V.z, A * V.w); }
inline u1t_4 operator/(u1t_4 A, u1t_4 B) { return MkU1t_4( Div(A.x,B.x), Div(A.y,B.y), Div(A.z,B.z), Div(A.w,B.w)); }
inline u1t_4 operator/(u1t_4 V, u1t A) { return MkU1t_4( Div(V.x,A), Div(V.y,A), Div(V.z,A), Div(V.w,A)); }
inline u1t_4 operator/(u1t A, u1t_4 V) { return MkU1t_4( Div(A,V.x), Div(A,V.y), Div(A,V.z), Div(A,V.w)); }
inline blt_4 operator<(u1t_4 A, u1t_4 B) { return MkBlt_4( A.x < B.x, A.y < B.y, A.z < B.z, A.w < B.w); }
inline blt_4 operator<(u1t_4 V, u1t A) { return MkBlt_4( V.x < A, V.y < A, V.z < A, V.w < A); }
inline blt_4 operator<(u1t A, u1t_4 V) { return MkBlt_4( A < V.x, A < V.y, A < V.z, A < V.w); }
inline blt_4 operator<=(u1t_4 A, u1t_4 B) { return MkBlt_4( A.x <= B.x, A.y <= B.y, A.z <= B.z, A.w <= B.w); }
inline blt_4 operator<=(u1t_4 V, u1t A) { return MkBlt_4( V.x <= A, V.y <= A, V.z <= A, V.w <= A); }
inline blt_4 operator<=(u1t A, u1t_4 V) { return MkBlt_4( A <= V.x, A <= V.y, A <= V.z, A <= V.w); }
inline blt_4 operator>(u1t_4 A, u1t_4 B) { return MkBlt_4( A.x > B.x, A.y > B.y, A.z > B.z, A.w > B.w); }
inline blt_4 operator>(u1t_4 V, u1t A) { return MkBlt_4( V.x > A, V.y > A, V.z > A, V.w > A); }
inline blt_4 operator>(u1t A, u1t_4 V) { return MkBlt_4( A > V.x, A > V.y, A > V.z, A > V.w); }
inline blt_4 operator>=(u1t_4 A, u1t_4 B) { return MkBlt_4( A.x >= B.x, A.y >= B.y, A.z >= B.z, A.w >= B.w); }
inline blt_4 operator>=(u1t_4 V, u1t A) { return MkBlt_4( V.x >= A, V.y >= A, V.z >= A, V.w >= A); }
inline blt_4 operator>=(u1t A, u1t_4 V) { return MkBlt_4( A >= V.x, A >= V.y, A >= V.z, A >= V.w); }
inline u1t_4 VtMin(u1t_4 A, u1t_4 B) { return MkU1t_4( Min(A.x,B.x), Min(A.y,B.y), Min(A.z,B.z), Min(A.w,B.w)); }
inline u1t_4 VtMin(u1t_4 V, u1t A) { return MkU1t_4( Min(V.x,A), Min(V.y,A), Min(V.z,A), Min(V.w,A)); }
inline u1t_4 VtMin(u1t A, u1t_4 V) { return MkU1t_4( Min(A,V.x), Min(A,V.y), Min(A,V.z), Min(A,V.w)); }
inline u1t_4 VtMax(u1t_4 A, u1t_4 B) { return MkU1t_4( Max(A.x,B.x), Max(A.y,B.y), Max(A.z,B.z), Max(A.w,B.w)); }
inline u1t_4 VtMax(u1t_4 V, u1t A) { return MkU1t_4( Max(V.x,A), Max(V.y,A), Max(V.z,A), Max(V.w,A)); }
inline u1t_4 VtMax(u1t A, u1t_4 V) { return MkU1t_4( Max(A,V.x), Max(A,V.y), Max(A,V.z), Max(A,V.w)); }

inline i4t_2 operator-(i4t_2 A) { return MkI4t_2( -A.x, -A.y); }
inline i4t_2 operator+(i4t_2 A, i4t_2 B) { return MkI4t_2( A.x + B.x, A.y + B.y); }
inline i4t_2 operator+(i4t_2 V, i4t A) { return MkI4t_2( V.x + A, V.y + A); }
inline i4t_2 operator+(i4t A, i4t_2 V) { return MkI4t_2( A + V.x, A + V.y); }
inline i4t_2 operator-(i4t_2 A, i4t_2 B) { return MkI4t_2( A.x - B.x, A.y - B.y); }
inline i4t_2 operator-(i4t_2 V, i4t A) { return MkI4t_2( V.x - A, V.y - A); }
inline i4t_2 operator-(i4t A, i4t_2 V) { return MkI4t_2( A - V.x, A - V.y); }
inline i4t_2 operator*(i4t_2 A, i4t_2 B) { return MkI4t_2( A.x * B.x, A.y * B.y); }
inline i4t_2 operator*(i4t_2 V, i4t A) { return MkI4t_2( V.x * A, V.y * A); }
inline i4t_2 operator*(i4t A, i4t_2 V) { return MkI4t_2( A * V.x, A * V.y); }
inline i4t_2 operator/(i4t_2 A, i4t_2 B) { return MkI4t_2( Div(A.x,B.x), Div(A.y,B.y)); }
inline i4t_2 operator/(i4t_2 V, i4t A) { return MkI4t_2( Div(V.x,A), Div(V.y,A)); }
inline i4t_2 operator/(i4t A, i4t_2 V) { return MkI4t_2( Div(A,V.x), Div(A,V.y)); }
inline blt_2 operator<(i4t_2 A, i4t_2 B) { return MkBlt_2( A.x < B.x, A.y < B.y); }
inline blt_2 operator<(i4t_2 V, i4t A) { return MkBlt_2( V.x < A, V.y < A); }
inline blt_2 operator<(i4t A, i4t_2 V) { return MkBlt_2( A < V.x, A < V.y); }
inline blt_2 operator<=(i4t_2 A, i4t_2 B) { return MkBlt_2( A.x <= B.x, A.y <= B.y); }
inline blt_2 operator<=(i4t_2 V, i4t A) { return MkBlt_2( V.x <= A, V.y <= A); }
inline blt_2 operator<=(i4t A, i4t_2 V) { return MkBlt_2( A <= V.x, A <= V.y); }
inline blt_2 operator>(i4t_2 A, i4t_2 B) { return MkBlt_2( A.x > B.x, A.y > B.y); }
inline blt_2 operator>(i4t_2 V, i4t A) { return MkBlt_2( V.x > A, V.y > A); }
inline blt_2 operator>(i4t A, i4t_2 V) { return MkBlt_2( A > V.x, A > V.y); }
inline blt_2 operator>=(i4t_2 A, i4t_2 B) { return MkBlt_2( A.x >= B.x, A.y >= B.y); }
inline blt_2 operator>=(i4t_2 V, i4t A) { return MkBlt_2( V.x >= A, V.y >= A); }
inline blt_2 operator>=(i4t A, i4t_2 V) { return MkBlt_2( A >= V.x, A >= V.y); }
inline i4t_2 VtMin(i4t_2 A, i4t_2 B) { return MkI4t_2( Min(A.x,B.x), Min(A.y,B.y)); }
inline i4t_2 VtMin(i4t_2 V, i4t A) { return MkI4t_2( Min(V.x,A), Min(V.y,A)); }
inline i4t_2 VtMin(i4t A, i4t_2 V) { return MkI4t_2( Min(A,V.x), Min(A,V.y)); }
inline i4t_2 VtMax(i4t_2 A, i4t_2 B) { return MkI4t_2( Max(A.x,B.x), Max(A.y,B.y)); }
inline i4t_2 VtMax(i4t_2 V, i4t A) { return MkI4t_2( Max(V.x,A), Max(V.y,A)); }
inline i4t_2 VtMax(i4t A, i4t_2 V) { return MkI4t_2( Max(A,V.x), Max(A,V.y)); }

inline i4t_3 operator-(i4t_3 A) { return MkI4t_3( -A.x, -A.y, -A.z); }
inline i4t_3 operator+(i4t_3 A, i4t_3 B) { return MkI4t_3( A.x + B.x, A.y + B.y, A.z + B.z); }
inline i4t_3 operator+(i4t_3 V, i4t A) { return MkI4t_3( V.x + A, V.y + A, V.z + A); }
inline i4t_3 operator+(i4t A, i4t_3 V) { return MkI4t_3( A + V.x, A + V.y, A + V.z); }
inline i4t_3 operator-(i4t_3 A, i4t_3 B) { return MkI4t_3( A.x - B.x, A.y - B.y, A.z - B.z); }
inline i4t_3 operator-(i4t_3 V, i4t A) { return MkI4t_3( V.x - A, V.y - A, V.z - A); }
inline i4t_3 operator-(i4t A, i4t_3 V) { return MkI4t_3( A - V.x, A - V.y, A - V.z); }
inline i4t_3 operator*(i4t_3 A, i4t_3 B) { return MkI4t_3( A.x * B.x, A.y * B.y, A.z * B.z); }
inline i4t_3 operator*(i4t_3 V, i4t A) { return MkI4t_3( V.x * A, V.y * A, V.z * A); }
inline i4t_3 operator*(i4t A, i4t_3 V) { return MkI4t_3( A * V.x, A * V.y, A * V.z); }
inline i4t_3 operator/(i4t_3 A, i4t_3 B) { return MkI4t_3( Div(A.x,B.x), Div(A.y,B.y), Div(A.z,B.z)); }
inline i4t_3 operator/(i4t_3 V, i4t A) { return MkI4t_3( Div(V.x,A), Div(V.y,A), Div(V.z,A)); }
inline i4t_3 operator/(i4t A, i4t_3 V) { return MkI4t_3( Div(A,V.x), Div(A,V.y), Div(A,V.z)); }
inline blt_3 operator<(i4t_3 A, i4t_3 B) { return MkBlt_3( A.x < B.x, A.y < B.y, A.z < B.z); }
inline blt_3 operator<(i4t_3 V, i4t A) { return MkBlt_3( V.x < A, V.y < A, V.z < A); }
inline blt_3 operator<(i4t A, i4t_3 V) { return MkBlt_3( A < V.x, A < V.y, A < V.z); }
inline blt_3 operator<=(i4t_3 A, i4t_3 B) { return MkBlt_3( A.x <= B.x, A.y <= B.y, A.z <= B.z); }
inline blt_3 operator<=(i4t_3 V, i4t A) { return MkBlt_3( V.x <= A, V.y <= A, V.z <= A); }
inline blt_3 operator<=(i4t A, i4t_3 V) { return MkBlt_3( A <= V.x, A <= V.y, A <= V.z); }
inline blt_3 operator>(i4t_3 A, i4t_3 B) { return MkBlt_3( A.x > B.x, A.y > B.y, A.z > B.z); }
inline blt_3 operator>(i4t_3 V, i4t A) { return MkBlt_3( V.x > A, V.y > A, V.z > A); }
inline blt_3 operator>(i4t A, i4t_3 V) { return MkBlt_3( A > V.x, A > V.y, A > V.z); }
inline blt_3 operator>=(i4t_3 A, i4t_3 B) { return MkBlt_3( A.x >= B.x, A.y >= B.y, A.z >= B.z); }
inline blt_3 operator>=(i4t_3 V, i4t A) { return MkBlt_3( V.x >= A, V.y >= A, V.z >= A); }
inline blt_3 operator>=(i4t A, i4t_3 V) { return MkBlt_3( A >= V.x, A >= V.y, A >= V.z); }
inline i4t_3 VtMin(i4t_3 A, i4t_3 B) { return MkI4t_3( Min(A.x,B.x), Min(A.y,B.y), Min(A.z,B.z)); }
inline i4t_3 VtMin(i4t_3 V, i4t A) { return MkI4t_3( Min(V.x,A), Min(V.y,A), Min(V.z,A)); }
inline i4t_3 VtMin(i4t A, i4t_3 V) { return MkI4t_3( Min(A,V.x), Min(A,V.y), Min(A,V.z)); }
inline i4t_3 VtMax(i4t_3 A, i4t_3 B) { return MkI4t_3( Max(A.x,B.x), Max(A.y,B.y), Max(A.z,B.z)); }
inline i4t_3 VtMax(i4t_3 V, i4t A) { return MkI4t_3( Max(V.x,A), Max(V.y,A), Max(V.z,A)); }
inline i4t_3 VtMax(i4t A, i4t_3 V) { return MkI4t_3( Max(A,V.x), Max(A,V.y), Max(A,V.z)); }

inline i4t_4 operator-(i4t_4 A) { return MkI4t_4( -A.x, -A.y, -A.z, -A.w); }
inline i4t_4 operator+(i4t_4 A, i4t_4 B) { return MkI4t_4( A.x + B.x, A.y + B.y, A.z + B.z, A.w + B.w); }
inline i4t_4 operator+(i4t_4 V, i4t A) { return MkI4t_4( V.x + A, V.y + A, V.z + A, V.w + A); }
inline i4t_4 operator+(i4t A, i4t_4 V) { return MkI4t_4( A + V.x, A + V.y, A + V.z, A + V.w); }
inline i4t_4 operator-(i4t_4 A, i4t_4 B) { return MkI4t_4( A.x - B.x, A.y - B.y, A.z - B.z, A.w - B.w); }
inline i4t_4 operator-(i4t_4 V, i4t A) { return MkI4t_4( V.x - A, V.y - A, V.z - A, V.w - A); }
inline i4t_4 operator-(i4t A, i4t_4 V) { return MkI4t_4( A - V.x, A - V.y, A - V.z, A - V.w); }
inline i4t_4 operator*(i4t_4 A, i4t_4 B) { return MkI4t_4( A.x * B.x, A.y * B.y, A.z * B.z, A.w * B.w); }
inline i4t_4 operator*(i4t_4 V, i4t A) { return MkI4t_4( V.x * A, V.y * A, V.z * A, V.w * A); }
inline i4t_4 operator*(i4t A, i4t_4 V) { return MkI4t_4( A * V.x, A * V.y, A * V.z, A * V.w); }
inline i4t_4 operator/(i4t_4 A, i4t_4 B) { return MkI4t_4( Div(A.x,B.x), Div(A.y,B.y), Div(A.z,B.z), Div(A.w,B.w)); }
inline i4t_4 operator/(i4t_4 V, i4t A) { return MkI4t_4( Div(V.x,A), Div(V.y,A), Div(V.z,A), Div(V.w,A)); }
inline i4t_4 operator/(i4t A, i4t_4 V) { return MkI4t_4( Div(A,V.x), Div(A,V.y), Div(A,V.z), Div(A,V.w)); }
inline blt_4 operator<(i4t_4 A, i4t_4 B) { return MkBlt_4( A.x < B.x, A.y < B.y, A.z < B.z, A.w < B.w); }
inline blt_4 operator<(i4t_4 V, i4t A) { return MkBlt_4( V.x < A, V.y < A, V.z < A, V.w < A); }
inline blt_4 operator<(i4t A, i4t_4 V) { return MkBlt_4( A < V.x, A < V.y, A < V.z, A < V.w); }
inline blt_4 operator<=(i4t_4 A, i4t_4 B) { return MkBlt_4( A.x <= B.x, A.y <= B.y, A.z <= B.z, A.w <= B.w); }
inline blt_4 operator<=(i4t_4 V, i4t A) { return MkBlt_4( V.x <= A, V.y <= A, V.z <= A, V.w <= A); }
inline blt_4 operator<=(i4t A, i4t_4 V) { return MkBlt_4( A <= V.x, A <= V.y, A <= V.z, A <= V.w); }
inline blt_4 operator>(i4t_4 A, i4t_4 B) { return MkBlt_4( A.x > B.x, A.y > B.y, A.z > B.z, A.w > B.w); }
inline blt_4 operator>(i4t_4 V, i4t A) { return MkBlt_4( V.x > A, V.y > A, V.z > A, V.w > A); }
inline blt_4 operator>(i4t A, i4t_4 V) { return MkBlt_4( A > V.x, A > V.y, A > V.z, A > V.w); }
inline blt_4 operator>=(i4t_4 A, i4t_4 B) { return MkBlt_4( A.x >= B.x, A.y >= B.y, A.z >= B.z, A.w >= B.w); }
inline blt_4 operator>=(i4t_4 V, i4t A) { return MkBlt_4( V.x >= A, V.y >= A, V.z >= A, V.w >= A); }
inline blt_4 operator>=(i4t A, i4t_4 V) { return MkBlt_4( A >= V.x, A >= V.y, A >= V.z, A >= V.w); }
inline i4t_4 VtMin(i4t_4 A, i4t_4 B) { return MkI4t_4( Min(A.x,B.x), Min(A.y,B.y), Min(A.z,B.z), Min(A.w,B.w)); }
inline i4t_4 VtMin(i4t_4 V, i4t A) { return MkI4t_4( Min(V.x,A), Min(V.y,A), Min(V.z,A), Min(V.w,A)); }
inline i4t_4 VtMin(i4t A, i4t_4 V) { return MkI4t_4( Min(A,V.x), Min(A,V.y), Min(A,V.z), Min(A,V.w)); }
inline i4t_4 VtMax(i4t_4 A, i4t_4 B) { return MkI4t_4( Max(A.x,B.x), Max(A.y,B.y), Max(A.z,B.z), Max(A.w,B.w)); }
inline i4t_4 VtMax(i4t_4 V, i4t A) { return MkI4t_4( Max(V.x,A), Max(V.y,A), Max(V.z,A), Max(V.w,A)); }
inline i4t_4 VtMax(i4t A, i4t_4 V) { return MkI4t_4( Max(A,V.x), Max(A,V.y), Max(A,V.z), Max(A,V.w)); }

inline f4t_2 operator-(f4t_2 A) { return MkF4t_2( -A.x, -A.y); }
inline f4t_2 operator+(f4t_2 A, f4t_2 B) { return MkF4t_2( A.x + B.x, A.y + B.y); }
inline f4t_2 operator+(f4t_2 V, f4t A) { return MkF4t_2( V.x + A, V.y + A); }
inline f4t_2 operator+(f4t A, f4t_2 V) { return MkF4t_2( A + V.x, A + V.y); }
inline f4t_2 operator-(f4t_2 A, f4t_2 B) { return MkF4t_2( A.x - B.x, A.y - B.y); }
inline f4t_2 operator-(f4t_2 V, f4t A) { return MkF4t_2( V.x - A, V.y - A); }
inline f4t_2 operator-(f4t A, f4t_2 V) { return MkF4t_2( A - V.x, A - V.y); }
inline f4t_2 operator*(f4t_2 A, f4t_2 B) { return MkF4t_2( A.x * B.x, A.y * B.y); }
inline f4t_2 operator*(f4t_2 V, f4t A) { return MkF4t_2( V.x * A, V.y * A); }
inline f4t_2 operator*(f4t A, f4t_2 V) { return MkF4t_2( A * V.x, A * V.y); }
inline f4t_2 operator/(f4t_2 A, f4t_2 B) { return MkF4t_2( Div(A.x,B.x), Div(A.y,B.y)); }
inline f4t_2 operator/(f4t_2 V, f4t A) { return MkF4t_2( Div(V.x,A), Div(V.y,A)); }
inline f4t_2 operator/(f4t A, f4t_2 V) { return MkF4t_2( Div(A,V.x), Div(A,V.y)); }
inline blt_2 operator<(f4t_2 A, f4t_2 B) { return MkBlt_2( A.x < B.x, A.y < B.y); }
inline blt_2 operator<(f4t_2 V, f4t A) { return MkBlt_2( V.x < A, V.y < A); }
inline blt_2 operator<(f4t A, f4t_2 V) { return MkBlt_2( A < V.x, A < V.y); }
inline blt_2 operator<=(f4t_2 A, f4t_2 B) { return MkBlt_2( A.x <= B.x, A.y <= B.y); }
inline blt_2 operator<=(f4t_2 V, f4t A) { return MkBlt_2( V.x <= A, V.y <= A); }
inline blt_2 operator<=(f4t A, f4t_2 V) { return MkBlt_2( A <= V.x, A <= V.y); }
inline blt_2 operator>(f4t_2 A, f4t_2 B) { return MkBlt_2( A.x > B.x, A.y > B.y); }
inline blt_2 operator>(f4t_2 V, f4t A) { return MkBlt_2( V.x > A, V.y > A); }
inline blt_2 operator>(f4t A, f4t_2 V) { return MkBlt_2( A > V.x, A > V.y); }
inline blt_2 operator>=(f4t_2 A, f4t_2 B) { return MkBlt_2( A.x >= B.x, A.y >= B.y); }
inline blt_2 operator>=(f4t_2 V, f4t A) { return MkBlt_2( V.x >= A, V.y >= A); }
inline blt_2 operator>=(f4t A, f4t_2 V) { return MkBlt_2( A >= V.x, A >= V.y); }
inline f4t_2 VtMin(f4t_2 A, f4t_2 B) { return MkF4t_2( Min(A.x,B.x), Min(A.y,B.y)); }
inline f4t_2 VtMin(f4t_2 V, f4t A) { return MkF4t_2( Min(V.x,A), Min(V.y,A)); }
inline f4t_2 VtMin(f4t A, f4t_2 V) { return MkF4t_2( Min(A,V.x), Min(A,V.y)); }
inline f4t_2 VtMax(f4t_2 A, f4t_2 B) { return MkF4t_2( Max(A.x,B.x), Max(A.y,B.y)); }
inline f4t_2 VtMax(f4t_2 V, f4t A) { return MkF4t_2( Max(V.x,A), Max(V.y,A)); }
inline f4t_2 VtMax(f4t A, f4t_2 V) { return MkF4t_2( Max(A,V.x), Max(A,V.y)); }

inline f4t_3 operator-(f4t_3 A) { return MkF4t_3( -A.x, -A.y, -A.z); }
inline f4t_3 operator+(f4t_3 A, f4t_3 B) { return MkF4t_3( A.x + B.x, A.y + B.y, A.z + B.z); }
inline f4t_3 operator+(f4t_3 V, f4t A) { return MkF4t_3( V.x + A, V.y + A, V.z + A); }
inline f4t_3 operator+(f4t A, f4t_3 V) { return MkF4t_3( A + V.x, A + V.y, A + V.z); }
inline f4t_3 operator-(f4t_3 A, f4t_3 B) { return MkF4t_3( A.x - B.x, A.y - B.y, A.z - B.z); }
inline f4t_3 operator-(f4t_3 V, f4t A) { return MkF4t_3( V.x - A, V.y - A, V.z - A); }
inline f4t_3 operator-(f4t A, f4t_3 V) { return MkF4t_3( A - V.x, A - V.y, A - V.z); }
inline f4t_3 operator*(f4t_3 A, f4t_3 B) { return MkF4t_3( A.x * B.x, A.y * B.y, A.z * B.z); }
inline f4t_3 operator*(f4t_3 V, f4t A) { return MkF4t_3( V.x * A, V.y * A, V.z * A); }
inline f4t_3 operator*(f4t A, f4t_3 V) { return MkF4t_3( A * V.x, A * V.y, A * V.z); }
inline f4t_3 operator/(f4t_3 A, f4t_3 B) { return MkF4t_3( Div(A.x,B.x), Div(A.y,B.y), Div(A.z,B.z)); }
inline f4t_3 operator/(f4t_3 V, f4t A) { return MkF4t_3( Div(V.x,A), Div(V.y,A), Div(V.z,A)); }
inline f4t_3 operator/(f4t A, f4t_3 V) { return MkF4t_3( Div(A,V.x), Div(A,V.y), Div(A,V.z)); }
inline blt_3 operator<(f4t_3 A, f4t_3 B) { return MkBlt_3( A.x < B.x, A.y < B.y, A.z < B.z); }
inline blt_3 operator<(f4t_3 V, f4t A) { return MkBlt_3( V.x < A, V.y < A, V.z < A); }
inline blt_3 operator<(f4t A, f4t_3 V) { return MkBlt_3( A < V.x, A < V.y, A < V.z); }
inline blt_3 operator<=(f4t_3 A, f4t_3 B) { return MkBlt_3( A.x <= B.x, A.y <= B.y, A.z <= B.z); }
inline blt_3 operator<=(f4t_3 V, f4t A) { return MkBlt_3( V.x <= A, V.y <= A, V.z <= A); }
inline blt_3 operator<=(f4t A, f4t_3 V) { return MkBlt_3( A <= V.x, A <= V.y, A <= V.z); }
inline blt_3 operator>(f4t_3 A, f4t_3 B) { return MkBlt_3( A.x > B.x, A.y > B.y, A.z > B.z); }
inline blt_3 operator>(f4t_3 V, f4t A) { return MkBlt_3( V.x > A, V.y > A, V.z > A); }
inline blt_3 operator>(f4t A, f4t_3 V) { return MkBlt_3( A > V.x, A > V.y, A > V.z); }
inline blt_3 operator>=(f4t_3 A, f4t_3 B) { return MkBlt_3( A.x >= B.x, A.y >= B.y, A.z >= B.z); }
inline blt_3 operator>=(f4t_3 V, f4t A) { return MkBlt_3( V.x >= A, V.y >= A, V.z >= A); }
inline blt_3 operator>=(f4t A, f4t_3 V) { return MkBlt_3( A >= V.x, A >= V.y, A >= V.z); }
inline f4t_3 VtMin(f4t_3 A, f4t_3 B) { return MkF4t_3( Min(A.x,B.x), Min(A.y,B.y), Min(A.z,B.z)); }
inline f4t_3 VtMin(f4t_3 V, f4t A) { return MkF4t_3( Min(V.x,A), Min(V.y,A), Min(V.z,A)); }
inline f4t_3 VtMin(f4t A, f4t_3 V) { return MkF4t_3( Min(A,V.x), Min(A,V.y), Min(A,V.z)); }
inline f4t_3 VtMax(f4t_3 A, f4t_3 B) { return MkF4t_3( Max(A.x,B.x), Max(A.y,B.y), Max(A.z,B.z)); }
inline f4t_3 VtMax(f4t_3 V, f4t A) { return MkF4t_3( Max(V.x,A), Max(V.y,A), Max(V.z,A)); }
inline f4t_3 VtMax(f4t A, f4t_3 V) { return MkF4t_3( Max(A,V.x), Max(A,V.y), Max(A,V.z)); }

inline f4t_4 operator-(f4t_4 A) { return MkF4t_4( -A.x, -A.y, -A.z, -A.w); }
inline f4t_4 operator+(f4t_4 A, f4t_4 B) { return MkF4t_4( A.x + B.x, A.y + B.y, A.z + B.z, A.w + B.w); }
inline f4t_4 operator+(f4t_4 V, f4t A) { return MkF4t_4( V.x + A, V.y + A, V.z + A, V.w + A); }
inline f4t_4 operator+(f4t A, f4t_4 V) { return MkF4t_4( A + V.x, A + V.y, A + V.z, A + V.w); }
inline f4t_4 operator-(f4t_4 A, f4t_4 B) { return MkF4t_4( A.x - B.x, A.y - B.y, A.z - B.z, A.w - B.w); }
inline f4t_4 operator-(f4t_4 V, f4t A) { return MkF4t_4( V.x - A, V.y - A, V.z - A, V.w - A); }
inline f4t_4 operator-(f4t A, f4t_4 V) { return MkF4t_4( A - V.x, A - V.y, A - V.z, A - V.w); }
inline f4t_4 operator*(f4t_4 A, f4t_4 B) { return MkF4t_4( A.x * B.x, A.y * B.y, A.z * B.z, A.w * B.w); }
inline f4t_4 operator*(f4t_4 V, f4t A) { return MkF4t_4( V.x * A, V.y * A, V.z * A, V.w * A); }
inline f4t_4 operator*(f4t A, f4t_4 V) { return MkF4t_4( A * V.x, A * V.y, A * V.z, A * V.w); }
inline f4t_4 operator/(f4t_4 A, f4t_4 B) { return MkF4t_4( Div(A.x,B.x), Div(A.y,B.y), Div(A.z,B.z), Div(A.w,B.w)); }
inline f4t_4 operator/(f4t_4 V, f4t A) { return MkF4t_4( Div(V.x,A), Div(V.y,A), Div(V.z,A), Div(V.w,A)); }
inline f4t_4 operator/(f4t A, f4t_4 V) { return MkF4t_4( Div(A,V.x), Div(A,V.y), Div(A,V.z), Div(A,V.w)); }
inline blt_4 operator<(f4t_4 A, f4t_4 B) { return MkBlt_4( A.x < B.x, A.y < B.y, A.z < B.z, A.w < B.w); }
inline blt_4 operator<(f4t_4 V, f4t A) { return MkBlt_4( V.x < A, V.y < A, V.z < A, V.w < A); }
inline blt_4 operator<(f4t A, f4t_4 V) { return MkBlt_4( A < V.x, A < V.y, A < V.z, A < V.w); }
inline blt_4 operator<=(f4t_4 A, f4t_4 B) { return MkBlt_4( A.x <= B.x, A.y <= B.y, A.z <= B.z, A.w <= B.w); }
inline blt_4 operator<=(f4t_4 V, f4t A) { return MkBlt_4( V.x <= A, V.y <= A, V.z <= A, V.w <= A); }
inline blt_4 operator<=(f4t A, f4t_4 V) { return MkBlt_4( A <= V.x, A <= V.y, A <= V.z, A <= V.w); }
inline blt_4 operator>(f4t_4 A, f4t_4 B) { return MkBlt_4( A.x > B.x, A.y > B.y, A.z > B.z, A.w > B.w); }
inline blt_4 operator>(f4t_4 V, f4t A) { return MkBlt_4( V.x > A, V.y > A, V.z > A, V.w > A); }
inline blt_4 operator>(f4t A, f4t_4 V) { return MkBlt_4( A > V.x, A > V.y, A > V.z, A > V.w); }
inline blt_4 operator>=(f4t_4 A, f4t_4 B) { return MkBlt_4( A.x >= B.x, A.y >= B.y, A.z >= B.z, A.w >= B.w); }
inline blt_4 operator>=(f4t_4 V, f4t A) { return MkBlt_4( V.x >= A, V.y >= A, V.z >= A, V.w >= A); }
inline blt_4 operator>=(f4t A, f4t_4 V) { return MkBlt_4( A >= V.x, A >= V.y, A >= V.z, A >= V.w); }
inline f4t_4 VtMin(f4t_4 A, f4t_4 B) { return MkF4t_4( Min(A.x,B.x), Min(A.y,B.y), Min(A.z,B.z), Min(A.w,B.w)); }
inline f4t_4 VtMin(f4t_4 V, f4t A) { return MkF4t_4( Min(V.x,A), Min(V.y,A), Min(V.z,A), Min(V.w,A)); }
inline f4t_4 VtMin(f4t A, f4t_4 V) { return MkF4t_4( Min(A,V.x), Min(A,V.y), Min(A,V.z), Min(A,V.w)); }
inline f4t_4 VtMax(f4t_4 A, f4t_4 B) { return MkF4t_4( Max(A.x,B.x), Max(A.y,B.y), Max(A.z,B.z), Max(A.w,B.w)); }
inline f4t_4 VtMax(f4t_4 V, f4t A) { return MkF4t_4( Max(V.x,A), Max(V.y,A), Max(V.z,A), Max(V.w,A)); }
inline f4t_4 VtMax(f4t A, f4t_4 V) { return MkF4t_4( Max(A,V.x), Max(A,V.y), Max(A,V.z), Max(A,V.w)); }

inline f8t_2 operator-(f8t_2 A) { return MkF8t_2( -A.x, -A.y); }
inline f8t_2 operator+(f8t_2 A, f8t_2 B) { return MkF8t_2( A.x + B.x, A.y + B.y); }
inline f8t_2 operator+(f8t_2 V, f8t A) { return MkF8t_2( V.x + A, V.y + A); }
inline f8t_2 operator+(f8t A, f8t_2 V) { return MkF8t_2( A + V.x, A + V.y); }
inline f8t_2 operator-(f8t_2 A, f8t_2 B) { return MkF8t_2( A.x - B.x, A.y - B.y); }
inline f8t_2 operator-(f8t_2 V, f8t A) { return MkF8t_2( V.x - A, V.y - A); }
inline f8t_2 operator-(f8t A, f8t_2 V) { return MkF8t_2( A - V.x, A - V.y); }
inline f8t_2 operator*(f8t_2 A, f8t_2 B) { return MkF8t_2( A.x * B.x, A.y * B.y); }
inline f8t_2 operator*(f8t_2 V, f8t A) { return MkF8t_2( V.x * A, V.y * A); }
inline f8t_2 operator*(f8t A, f8t_2 V) { return MkF8t_2( A * V.x, A * V.y); }
inline f8t_2 operator/(f8t_2 A, f8t_2 B) { return MkF8t_2( Div(A.x,B.x), Div(A.y,B.y)); }
inline f8t_2 operator/(f8t_2 V, f8t A) { return MkF8t_2( Div(V.x,A), Div(V.y,A)); }
inline f8t_2 operator/(f8t A, f8t_2 V) { return MkF8t_2( Div(A,V.x), Div(A,V.y)); }
inline blt_2 operator<(f8t_2 A, f8t_2 B) { return MkBlt_2( A.x < B.x, A.y < B.y); }
inline blt_2 operator<(f8t_2 V, f8t A) { return MkBlt_2( V.x < A, V.y < A); }
inline blt_2 operator<(f8t A, f8t_2 V) { return MkBlt_2( A < V.x, A < V.y); }
inline blt_2 operator<=(f8t_2 A, f8t_2 B) { return MkBlt_2( A.x <= B.x, A.y <= B.y); }
inline blt_2 operator<=(f8t_2 V, f8t A) { return MkBlt_2( V.x <= A, V.y <= A); }
inline blt_2 operator<=(f8t A, f8t_2 V) { return MkBlt_2( A <= V.x, A <= V.y); }
inline blt_2 operator>(f8t_2 A, f8t_2 B) { return MkBlt_2( A.x > B.x, A.y > B.y); }
inline blt_2 operator>(f8t_2 V, f8t A) { return MkBlt_2( V.x > A, V.y > A); }
inline blt_2 operator>(f8t A, f8t_2 V) { return MkBlt_2( A > V.x, A > V.y); }
inline blt_2 operator>=(f8t_2 A, f8t_2 B) { return MkBlt_2( A.x >= B.x, A.y >= B.y); }
inline blt_2 operator>=(f8t_2 V, f8t A) { return MkBlt_2( V.x >= A, V.y >= A); }
inline blt_2 operator>=(f8t A, f8t_2 V) { return MkBlt_2( A >= V.x, A >= V.y); }
inline f8t_2 VtMin(f8t_2 A, f8t_2 B) { return MkF8t_2( Min(A.x,B.x), Min(A.y,B.y)); }
inline f8t_2 VtMin(f8t_2 V, f8t A) { return MkF8t_2( Min(V.x,A), Min(V.y,A)); }
inline f8t_2 VtMin(f8t A, f8t_2 V) { return MkF8t_2( Min(A,V.x), Min(A,V.y)); }
inline f8t_2 VtMax(f8t_2 A, f8t_2 B) { return MkF8t_2( Max(A.x,B.x), Max(A.y,B.y)); }
inline f8t_2 VtMax(f8t_2 V, f8t A) { return MkF8t_2( Max(V.x,A), Max(V.y,A)); }
inline f8t_2 VtMax(f8t A, f8t_2 V) { return MkF8t_2( Max(A,V.x), Max(A,V.y)); }

inline f8t_3 operator-(f8t_3 A) { return MkF8t_3( -A.x, -A.y, -A.z); }
inline f8t_3 operator+(f8t_3 A, f8t_3 B) { return MkF8t_3( A.x + B.x, A.y + B.y, A.z + B.z); }
inline f8t_3 operator+(f8t_3 V, f8t A) { return MkF8t_3( V.x + A, V.y + A, V.z + A); }
inline f8t_3 operator+(f8t A, f8t_3 V) { return MkF8t_3( A + V.x, A + V.y, A + V.z); }
inline f8t_3 operator-(f8t_3 A, f8t_3 B) { return MkF8t_3( A.x - B.x, A.y - B.y, A.z - B.z); }
inline f8t_3 operator-(f8t_3 V, f8t A) { return MkF8t_3( V.x - A, V.y - A, V.z - A); }
inline f8t_3 operator-(f8t A, f8t_3 V) { return MkF8t_3( A - V.x, A - V.y, A - V.z); }
inline f8t_3 operator*(f8t_3 A, f8t_3 B) { return MkF8t_3( A.x * B.x, A.y * B.y, A.z * B.z); }
inline f8t_3 operator*(f8t_3 V, f8t A) { return MkF8t_3( V.x * A, V.y * A, V.z * A); }
inline f8t_3 operator*(f8t A, f8t_3 V) { return MkF8t_3( A * V.x, A * V.y, A * V.z); }
inline f8t_3 operator/(f8t_3 A, f8t_3 B) { return MkF8t_3( Div(A.x,B.x), Div(A.y,B.y), Div(A.z,B.z)); }
inline f8t_3 operator/(f8t_3 V, f8t A) { return MkF8t_3( Div(V.x,A), Div(V.y,A), Div(V.z,A)); }
inline f8t_3 operator/(f8t A, f8t_3 V) { return MkF8t_3( Div(A,V.x), Div(A,V.y), Div(A,V.z)); }
inline blt_3 operator<(f8t_3 A, f8t_3 B) { return MkBlt_3( A.x < B.x, A.y < B.y, A.z < B.z); }
inline blt_3 operator<(f8t_3 V, f8t A) { return MkBlt_3( V.x < A, V.y < A, V.z < A); }
inline blt_3 operator<(f8t A, f8t_3 V) { return MkBlt_3( A < V.x, A < V.y, A < V.z); }
inline blt_3 operator<=(f8t_3 A, f8t_3 B) { return MkBlt_3( A.x <= B.x, A.y <= B.y, A.z <= B.z); }
inline blt_3 operator<=(f8t_3 V, f8t A) { return MkBlt_3( V.x <= A, V.y <= A, V.z <= A); }
inline blt_3 operator<=(f8t A, f8t_3 V) { return MkBlt_3( A <= V.x, A <= V.y, A <= V.z); }
inline blt_3 operator>(f8t_3 A, f8t_3 B) { return MkBlt_3( A.x > B.x, A.y > B.y, A.z > B.z); }
inline blt_3 operator>(f8t_3 V, f8t A) { return MkBlt_3( V.x > A, V.y > A, V.z > A); }
inline blt_3 operator>(f8t A, f8t_3 V) { return MkBlt_3( A > V.x, A > V.y, A > V.z); }
inline blt_3 operator>=(f8t_3 A, f8t_3 B) { return MkBlt_3( A.x >= B.x, A.y >= B.y, A.z >= B.z); }
inline blt_3 operator>=(f8t_3 V, f8t A) { return MkBlt_3( V.x >= A, V.y >= A, V.z >= A); }
inline blt_3 operator>=(f8t A, f8t_3 V) { return MkBlt_3( A >= V.x, A >= V.y, A >= V.z); }
inline f8t_3 VtMin(f8t_3 A, f8t_3 B) { return MkF8t_3( Min(A.x,B.x), Min(A.y,B.y), Min(A.z,B.z)); }
inline f8t_3 VtMin(f8t_3 V, f8t A) { return MkF8t_3( Min(V.x,A), Min(V.y,A), Min(V.z,A)); }
inline f8t_3 VtMin(f8t A, f8t_3 V) { return MkF8t_3( Min(A,V.x), Min(A,V.y), Min(A,V.z)); }
inline f8t_3 VtMax(f8t_3 A, f8t_3 B) { return MkF8t_3( Max(A.x,B.x), Max(A.y,B.y), Max(A.z,B.z)); }
inline f8t_3 VtMax(f8t_3 V, f8t A) { return MkF8t_3( Max(V.x,A), Max(V.y,A), Max(V.z,A)); }
inline f8t_3 VtMax(f8t A, f8t_3 V) { return MkF8t_3( Max(A,V.x), Max(A,V.y), Max(A,V.z)); }

inline f8t_4 operator-(f8t_4 A) { return MkF8t_4( -A.x, -A.y, -A.z, -A.w); }
inline f8t_4 operator+(f8t_4 A, f8t_4 B) { return MkF8t_4( A.x + B.x, A.y + B.y, A.z + B.z, A.w + B.w); }
inline f8t_4 operator+(f8t_4 V, f8t A) { return MkF8t_4( V.x + A, V.y + A, V.z + A, V.w + A); }
inline f8t_4 operator+(f8t A, f8t_4 V) { return MkF8t_4( A + V.x, A + V.y, A + V.z, A + V.w); }
inline f8t_4 operator-(f8t_4 A, f8t_4 B) { return MkF8t_4( A.x - B.x, A.y - B.y, A.z - B.z, A.w - B.w); }
inline f8t_4 operator-(f8t_4 V, f8t A) { return MkF8t_4( V.x - A, V.y - A, V.z - A, V.w - A); }
inline f8t_4 operator-(f8t A, f8t_4 V) { return MkF8t_4( A - V.x, A - V.y, A - V.z, A - V.w); }
inline f8t_4 operator*(f8t_4 A, f8t_4 B) { return MkF8t_4( A.x * B.x, A.y * B.y, A.z * B.z, A.w * B.w); }
inline f8t_4 operator*(f8t_4 V, f8t A) { return MkF8t_4( V.x * A, V.y * A, V.z * A, V.w * A); }
inline f8t_4 operator*(f8t A, f8t_4 V) { return MkF8t_4( A * V.x, A * V.y, A * V.z, A * V.w); }
inline f8t_4 operator/(f8t_4 A, f8t_4 B) { return MkF8t_4( Div(A.x,B.x), Div(A.y,B.y), Div(A.z,B.z), Div(A.w,B.w)); }
inline f8t_4 operator/(f8t_4 V, f8t A) { return MkF8t_4( Div(V.x,A), Div(V.y,A), Div(V.z,A), Div(V.w,A)); }
inline f8t_4 operator/(f8t A, f8t_4 V) { return MkF8t_4( Div(A,V.x), Div(A,V.y), Div(A,V.z), Div(A,V.w)); }
inline blt_4 operator<(f8t_4 A, f8t_4 B) { return MkBlt_4( A.x < B.x, A.y < B.y, A.z < B.z, A.w < B.w); }
inline blt_4 operator<(f8t_4 V, f8t A) { return MkBlt_4( V.x < A, V.y < A, V.z < A, V.w < A); }
inline blt_4 operator<(f8t A, f8t_4 V) { return MkBlt_4( A < V.x, A < V.y, A < V.z, A < V.w); }
inline blt_4 operator<=(f8t_4 A, f8t_4 B) { return MkBlt_4( A.x <= B.x, A.y <= B.y, A.z <= B.z, A.w <= B.w); }
inline blt_4 operator<=(f8t_4 V, f8t A) { return MkBlt_4( V.x <= A, V.y <= A, V.z <= A, V.w <= A); }
inline blt_4 operator<=(f8t A, f8t_4 V) { return MkBlt_4( A <= V.x, A <= V.y, A <= V.z, A <= V.w); }
inline blt_4 operator>(f8t_4 A, f8t_4 B) { return MkBlt_4( A.x > B.x, A.y > B.y, A.z > B.z, A.w > B.w); }
inline blt_4 operator>(f8t_4 V, f8t A) { return MkBlt_4( V.x > A, V.y > A, V.z > A, V.w > A); }
inline blt_4 operator>(f8t A, f8t_4 V) { return MkBlt_4( A > V.x, A > V.y, A > V.z, A > V.w); }
inline blt_4 operator>=(f8t_4 A, f8t_4 B) { return MkBlt_4( A.x >= B.x, A.y >= B.y, A.z >= B.z, A.w >= B.w); }
inline blt_4 operator>=(f8t_4 V, f8t A) { return MkBlt_4( V.x >= A, V.y >= A, V.z >= A, V.w >= A); }
inline blt_4 operator>=(f8t A, f8t_4 V) { return MkBlt_4( A >= V.x, A >= V.y, A >= V.z, A >= V.w); }
inline f8t_4 VtMin(f8t_4 A, f8t_4 B) { return MkF8t_4( Min(A.x,B.x), Min(A.y,B.y), Min(A.z,B.z), Min(A.w,B.w)); }
inline f8t_4 VtMin(f8t_4 V, f8t A) { return MkF8t_4( Min(V.x,A), Min(V.y,A), Min(V.z,A), Min(V.w,A)); }
inline f8t_4 VtMin(f8t A, f8t_4 V) { return MkF8t_4( Min(A,V.x), Min(A,V.y), Min(A,V.z), Min(A,V.w)); }
inline f8t_4 VtMax(f8t_4 A, f8t_4 B) { return MkF8t_4( Max(A.x,B.x), Max(A.y,B.y), Max(A.z,B.z), Max(A.w,B.w)); }
inline f8t_4 VtMax(f8t_4 V, f8t A) { return MkF8t_4( Max(V.x,A), Max(V.y,A), Max(V.z,A), Max(V.w,A)); }
inline f8t_4 VtMax(f8t A, f8t_4 V) { return MkF8t_4( Max(A,V.x), Max(A,V.y), Max(A,V.z), Max(A,V.w)); }

inline u1t_2& operator+=(u1t_2& Me, u1t_2 A) { return (Me = Me + A); }
inline u1t_2& operator+=(u1t_2& Me, u1t A) { return (Me = Me + A); }
inline u1t_2& operator-=(u1t_2& Me, u1t_2 A) { return (Me = Me - A); }
inline u1t_2& operator-=(u1t_2& Me, u1t A) { return (Me = Me - A); }
inline u1t_2& operator*=(u1t_2& Me, u1t_2 A) { return (Me = Me * A); }
inline u1t_2& operator*=(u1t_2& Me, u1t A) { return (Me = Me * A); }
inline u1t_2& operator/=(u1t_2& Me, u1t_2 A) { return (Me = Me / A); }
inline u1t_2& operator/=(u1t_2& Me, u1t A) { return (Me = Me / A); }
inline u1t HzAdd(u1t_2 V) { return V.x+V.y; }
inline u1t HzMul(u1t_2 V) { return V.x*V.y; }
inline u1t HzMin(u1t_2 V) { return OH_VARF_2(Min, V.x, V.y);; }
inline u1t HzMax(u1t_2 V) { return OH_VARF_2(Max, V.x, V.y);; }

inline u1t_3& operator+=(u1t_3& Me, u1t_3 A) { return (Me = Me + A); }
inline u1t_3& operator+=(u1t_3& Me, u1t A) { return (Me = Me + A); }
inline u1t_3& operator-=(u1t_3& Me, u1t_3 A) { return (Me = Me - A); }
inline u1t_3& operator-=(u1t_3& Me, u1t A) { return (Me = Me - A); }
inline u1t_3& operator*=(u1t_3& Me, u1t_3 A) { return (Me = Me * A); }
inline u1t_3& operator*=(u1t_3& Me, u1t A) { return (Me = Me * A); }
inline u1t_3& operator/=(u1t_3& Me, u1t_3 A) { return (Me = Me / A); }
inline u1t_3& operator/=(u1t_3& Me, u1t A) { return (Me = Me / A); }
inline u1t HzAdd(u1t_3 V) { return V.x+V.y+V.z; }
inline u1t HzMul(u1t_3 V) { return V.x*V.y*V.z; }
inline u1t HzMin(u1t_3 V) { return OH_VARF_3(Min, V.x, V.y, V.z);; }
inline u1t HzMax(u1t_3 V) { return OH_VARF_3(Max, V.x, V.y, V.z);; }

inline u1t_4& operator+=(u1t_4& Me, u1t_4 A) { return (Me = Me + A); }
inline u1t_4& operator+=(u1t_4& Me, u1t A) { return (Me = Me + A); }
inline u1t_4& operator-=(u1t_4& Me, u1t_4 A) { return (Me = Me - A); }
inline u1t_4& operator-=(u1t_4& Me, u1t A) { return (Me = Me - A); }
inline u1t_4& operator*=(u1t_4& Me, u1t_4 A) { return (Me = Me * A); }
inline u1t_4& operator*=(u1t_4& Me, u1t A) { return (Me = Me * A); }
inline u1t_4& operator/=(u1t_4& Me, u1t_4 A) { return (Me = Me / A); }
inline u1t_4& operator/=(u1t_4& Me, u1t A) { return (Me = Me / A); }
inline u1t HzAdd(u1t_4 V) { return V.x+V.y+V.z+V.w; }
inline u1t HzMul(u1t_4 V) { return V.x*V.y*V.z*V.w; }
inline u1t HzMin(u1t_4 V) { return OH_VARF_4(Min, V.x, V.y, V.z, V.w);; }
inline u1t HzMax(u1t_4 V) { return OH_VARF_4(Max, V.x, V.y, V.z, V.w);; }

inline i4t_2& operator+=(i4t_2& Me, i4t_2 A) { return (Me = Me + A); }
inline i4t_2& operator+=(i4t_2& Me, i4t A) { return (Me = Me + A); }
inline i4t_2& operator-=(i4t_2& Me, i4t_2 A) { return (Me = Me - A); }
inline i4t_2& operator-=(i4t_2& Me, i4t A) { return (Me = Me - A); }
inline i4t_2& operator*=(i4t_2& Me, i4t_2 A) { return (Me = Me * A); }
inline i4t_2& operator*=(i4t_2& Me, i4t A) { return (Me = Me * A); }
inline i4t_2& operator/=(i4t_2& Me, i4t_2 A) { return (Me = Me / A); }
inline i4t_2& operator/=(i4t_2& Me, i4t A) { return (Me = Me / A); }
inline i4t HzAdd(i4t_2 V) { return V.x+V.y; }
inline i4t HzMul(i4t_2 V) { return V.x*V.y; }
inline i4t HzMin(i4t_2 V) { return OH_VARF_2(Min, V.x, V.y);; }
inline i4t HzMax(i4t_2 V) { return OH_VARF_2(Max, V.x, V.y);; }

inline i4t_3& operator+=(i4t_3& Me, i4t_3 A) { return (Me = Me + A); }
inline i4t_3& operator+=(i4t_3& Me, i4t A) { return (Me = Me + A); }
inline i4t_3& operator-=(i4t_3& Me, i4t_3 A) { return (Me = Me - A); }
inline i4t_3& operator-=(i4t_3& Me, i4t A) { return (Me = Me - A); }
inline i4t_3& operator*=(i4t_3& Me, i4t_3 A) { return (Me = Me * A); }
inline i4t_3& operator*=(i4t_3& Me, i4t A) { return (Me = Me * A); }
inline i4t_3& operator/=(i4t_3& Me, i4t_3 A) { return (Me = Me / A); }
inline i4t_3& operator/=(i4t_3& Me, i4t A) { return (Me = Me / A); }
inline i4t HzAdd(i4t_3 V) { return V.x+V.y+V.z; }
inline i4t HzMul(i4t_3 V) { return V.x*V.y*V.z; }
inline i4t HzMin(i4t_3 V) { return OH_VARF_3(Min, V.x, V.y, V.z);; }
inline i4t HzMax(i4t_3 V) { return OH_VARF_3(Max, V.x, V.y, V.z);; }

inline i4t_4& operator+=(i4t_4& Me, i4t_4 A) { return (Me = Me + A); }
inline i4t_4& operator+=(i4t_4& Me, i4t A) { return (Me = Me + A); }
inline i4t_4& operator-=(i4t_4& Me, i4t_4 A) { return (Me = Me - A); }
inline i4t_4& operator-=(i4t_4& Me, i4t A) { return (Me = Me - A); }
inline i4t_4& operator*=(i4t_4& Me, i4t_4 A) { return (Me = Me * A); }
inline i4t_4& operator*=(i4t_4& Me, i4t A) { return (Me = Me * A); }
inline i4t_4& operator/=(i4t_4& Me, i4t_4 A) { return (Me = Me / A); }
inline i4t_4& operator/=(i4t_4& Me, i4t A) { return (Me = Me / A); }
inline i4t HzAdd(i4t_4 V) { return V.x+V.y+V.z+V.w; }
inline i4t HzMul(i4t_4 V) { return V.x*V.y*V.z*V.w; }
inline i4t HzMin(i4t_4 V) { return OH_VARF_4(Min, V.x, V.y, V.z, V.w);; }
inline i4t HzMax(i4t_4 V) { return OH_VARF_4(Max, V.x, V.y, V.z, V.w);; }

inline f4t_2& operator+=(f4t_2& Me, f4t_2 A) { return (Me = Me + A); }
inline f4t_2& operator+=(f4t_2& Me, f4t A) { return (Me = Me + A); }
inline f4t_2& operator-=(f4t_2& Me, f4t_2 A) { return (Me = Me - A); }
inline f4t_2& operator-=(f4t_2& Me, f4t A) { return (Me = Me - A); }
inline f4t_2& operator*=(f4t_2& Me, f4t_2 A) { return (Me = Me * A); }
inline f4t_2& operator*=(f4t_2& Me, f4t A) { return (Me = Me * A); }
inline f4t_2& operator/=(f4t_2& Me, f4t_2 A) { return (Me = Me / A); }
inline f4t_2& operator/=(f4t_2& Me, f4t A) { return (Me = Me / A); }
inline f4t HzAdd(f4t_2 V) { return V.x+V.y; }
inline f4t HzMul(f4t_2 V) { return V.x*V.y; }
inline f4t HzMin(f4t_2 V) { return OH_VARF_2(Min, V.x, V.y);; }
inline f4t HzMax(f4t_2 V) { return OH_VARF_2(Max, V.x, V.y);; }

inline f4t_3& operator+=(f4t_3& Me, f4t_3 A) { return (Me = Me + A); }
inline f4t_3& operator+=(f4t_3& Me, f4t A) { return (Me = Me + A); }
inline f4t_3& operator-=(f4t_3& Me, f4t_3 A) { return (Me = Me - A); }
inline f4t_3& operator-=(f4t_3& Me, f4t A) { return (Me = Me - A); }
inline f4t_3& operator*=(f4t_3& Me, f4t_3 A) { return (Me = Me * A); }
inline f4t_3& operator*=(f4t_3& Me, f4t A) { return (Me = Me * A); }
inline f4t_3& operator/=(f4t_3& Me, f4t_3 A) { return (Me = Me / A); }
inline f4t_3& operator/=(f4t_3& Me, f4t A) { return (Me = Me / A); }
inline f4t HzAdd(f4t_3 V) { return V.x+V.y+V.z; }
inline f4t HzMul(f4t_3 V) { return V.x*V.y*V.z; }
inline f4t HzMin(f4t_3 V) { return OH_VARF_3(Min, V.x, V.y, V.z);; }
inline f4t HzMax(f4t_3 V) { return OH_VARF_3(Max, V.x, V.y, V.z);; }

inline f4t_4& operator+=(f4t_4& Me, f4t_4 A) { return (Me = Me + A); }
inline f4t_4& operator+=(f4t_4& Me, f4t A) { return (Me = Me + A); }
inline f4t_4& operator-=(f4t_4& Me, f4t_4 A) { return (Me = Me - A); }
inline f4t_4& operator-=(f4t_4& Me, f4t A) { return (Me = Me - A); }
inline f4t_4& operator*=(f4t_4& Me, f4t_4 A) { return (Me = Me * A); }
inline f4t_4& operator*=(f4t_4& Me, f4t A) { return (Me = Me * A); }
inline f4t_4& operator/=(f4t_4& Me, f4t_4 A) { return (Me = Me / A); }
inline f4t_4& operator/=(f4t_4& Me, f4t A) { return (Me = Me / A); }
inline f4t HzAdd(f4t_4 V) { return V.x+V.y+V.z+V.w; }
inline f4t HzMul(f4t_4 V) { return V.x*V.y*V.z*V.w; }
inline f4t HzMin(f4t_4 V) { return OH_VARF_4(Min, V.x, V.y, V.z, V.w);; }
inline f4t HzMax(f4t_4 V) { return OH_VARF_4(Max, V.x, V.y, V.z, V.w);; }

inline f8t_2& operator+=(f8t_2& Me, f8t_2 A) { return (Me = Me + A); }
inline f8t_2& operator+=(f8t_2& Me, f8t A) { return (Me = Me + A); }
inline f8t_2& operator-=(f8t_2& Me, f8t_2 A) { return (Me = Me - A); }
inline f8t_2& operator-=(f8t_2& Me, f8t A) { return (Me = Me - A); }
inline f8t_2& operator*=(f8t_2& Me, f8t_2 A) { return (Me = Me * A); }
inline f8t_2& operator*=(f8t_2& Me, f8t A) { return (Me = Me * A); }
inline f8t_2& operator/=(f8t_2& Me, f8t_2 A) { return (Me = Me / A); }
inline f8t_2& operator/=(f8t_2& Me, f8t A) { return (Me = Me / A); }
inline f8t HzAdd(f8t_2 V) { return V.x+V.y; }
inline f8t HzMul(f8t_2 V) { return V.x*V.y; }
inline f8t HzMin(f8t_2 V) { return OH_VARF_2(Min, V.x, V.y);; }
inline f8t HzMax(f8t_2 V) { return OH_VARF_2(Max, V.x, V.y);; }

inline f8t_3& operator+=(f8t_3& Me, f8t_3 A) { return (Me = Me + A); }
inline f8t_3& operator+=(f8t_3& Me, f8t A) { return (Me = Me + A); }
inline f8t_3& operator-=(f8t_3& Me, f8t_3 A) { return (Me = Me - A); }
inline f8t_3& operator-=(f8t_3& Me, f8t A) { return (Me = Me - A); }
inline f8t_3& operator*=(f8t_3& Me, f8t_3 A) { return (Me = Me * A); }
inline f8t_3& operator*=(f8t_3& Me, f8t A) { return (Me = Me * A); }
inline f8t_3& operator/=(f8t_3& Me, f8t_3 A) { return (Me = Me / A); }
inline f8t_3& operator/=(f8t_3& Me, f8t A) { return (Me = Me / A); }
inline f8t HzAdd(f8t_3 V) { return V.x+V.y+V.z; }
inline f8t HzMul(f8t_3 V) { return V.x*V.y*V.z; }
inline f8t HzMin(f8t_3 V) { return OH_VARF_3(Min, V.x, V.y, V.z);; }
inline f8t HzMax(f8t_3 V) { return OH_VARF_3(Max, V.x, V.y, V.z);; }

inline f8t_4& operator+=(f8t_4& Me, f8t_4 A) { return (Me = Me + A); }
inline f8t_4& operator+=(f8t_4& Me, f8t A) { return (Me = Me + A); }
inline f8t_4& operator-=(f8t_4& Me, f8t_4 A) { return (Me = Me - A); }
inline f8t_4& operator-=(f8t_4& Me, f8t A) { return (Me = Me - A); }
inline f8t_4& operator*=(f8t_4& Me, f8t_4 A) { return (Me = Me * A); }
inline f8t_4& operator*=(f8t_4& Me, f8t A) { return (Me = Me * A); }
inline f8t_4& operator/=(f8t_4& Me, f8t_4 A) { return (Me = Me / A); }
inline f8t_4& operator/=(f8t_4& Me, f8t A) { return (Me = Me / A); }
inline f8t HzAdd(f8t_4 V) { return V.x+V.y+V.z+V.w; }
inline f8t HzMul(f8t_4 V) { return V.x*V.y*V.z*V.w; }
inline f8t HzMin(f8t_4 V) { return OH_VARF_4(Min, V.x, V.y, V.z, V.w);; }
inline f8t HzMax(f8t_4 V) { return OH_VARF_4(Max, V.x, V.y, V.z, V.w);; }

inline i4t_2 VtCeilDiv(i4t_2 A, i4t_2 B) { return MkI4t_2( CeilDiv(A.x,B.x), CeilDiv(A.y,B.y)); }
inline i4t_2 VtCeilDiv(i4t_2 V, i4t A) { return MkI4t_2( CeilDiv(V.x,A), CeilDiv(V.y,A)); }
inline i4t_2 VtCeilDiv(i4t A, i4t_2 V) { return MkI4t_2( CeilDiv(A,V.x), CeilDiv(A,V.y)); }
inline i4t_2 VtPow2CDiv(i4t_2 A, i4t_2 B) { return MkI4t_2( Pow2CDiv(A.x,B.x), Pow2CDiv(A.y,B.y)); }
inline i4t_2 VtPow2CDiv(i4t_2 V, i4t A) { return MkI4t_2( Pow2CDiv(V.x,A), Pow2CDiv(V.y,A)); }
inline i4t_2 VtPow2CDiv(i4t A, i4t_2 V) { return MkI4t_2( Pow2CDiv(A,V.x), Pow2CDiv(A,V.y)); }
inline i4t_2 VtPow2Div(i4t_2 A, i4t_2 B) { return MkI4t_2( Pow2Div(A.x,B.x), Pow2Div(A.y,B.y)); }
inline i4t_2 VtPow2Div(i4t_2 V, i4t A) { return MkI4t_2( Pow2Div(V.x,A), Pow2Div(V.y,A)); }
inline i4t_2 VtPow2Div(i4t A, i4t_2 V) { return MkI4t_2( Pow2Div(A,V.x), Pow2Div(A,V.y)); }
inline i4t_2 VtPow2Mul(i4t_2 A, i4t_2 B) { return MkI4t_2( Pow2Mul(A.x,B.x), Pow2Mul(A.y,B.y)); }
inline i4t_2 VtPow2Mul(i4t_2 V, i4t A) { return MkI4t_2( Pow2Mul(V.x,A), Pow2Mul(V.y,A)); }
inline i4t_2 VtPow2Mul(i4t A, i4t_2 V) { return MkI4t_2( Pow2Mul(A,V.x), Pow2Mul(A,V.y)); }
inline i4t_2 VtPow2Rem(i4t_2 A, i4t_2 B) { return MkI4t_2( Pow2Rem(A.x,B.x), Pow2Rem(A.y,B.y)); }
inline i4t_2 VtPow2Rem(i4t_2 V, i4t A) { return MkI4t_2( Pow2Rem(V.x,A), Pow2Rem(V.y,A)); }
inline i4t_2 VtPow2Rem(i4t A, i4t_2 V) { return MkI4t_2( Pow2Rem(A,V.x), Pow2Rem(A,V.y)); }
inline i4t_2 VtRem(i4t_2 A, i4t_2 B) { return MkI4t_2( Rem(A.x,B.x), Rem(A.y,B.y)); }
inline i4t_2 VtRem(i4t_2 V, i4t A) { return MkI4t_2( Rem(V.x,A), Rem(V.y,A)); }
inline i4t_2 VtRem(i4t A, i4t_2 V) { return MkI4t_2( Rem(A,V.x), Rem(A,V.y)); }

inline i4t_3 VtCeilDiv(i4t_3 A, i4t_3 B) { return MkI4t_3( CeilDiv(A.x,B.x), CeilDiv(A.y,B.y), CeilDiv(A.z,B.z)); }
inline i4t_3 VtCeilDiv(i4t_3 V, i4t A) { return MkI4t_3( CeilDiv(V.x,A), CeilDiv(V.y,A), CeilDiv(V.z,A)); }
inline i4t_3 VtCeilDiv(i4t A, i4t_3 V) { return MkI4t_3( CeilDiv(A,V.x), CeilDiv(A,V.y), CeilDiv(A,V.z)); }
inline i4t_3 VtPow2CDiv(i4t_3 A, i4t_3 B) { return MkI4t_3( Pow2CDiv(A.x,B.x), Pow2CDiv(A.y,B.y), Pow2CDiv(A.z,B.z)); }
inline i4t_3 VtPow2CDiv(i4t_3 V, i4t A) { return MkI4t_3( Pow2CDiv(V.x,A), Pow2CDiv(V.y,A), Pow2CDiv(V.z,A)); }
inline i4t_3 VtPow2CDiv(i4t A, i4t_3 V) { return MkI4t_3( Pow2CDiv(A,V.x), Pow2CDiv(A,V.y), Pow2CDiv(A,V.z)); }
inline i4t_3 VtPow2Div(i4t_3 A, i4t_3 B) { return MkI4t_3( Pow2Div(A.x,B.x), Pow2Div(A.y,B.y), Pow2Div(A.z,B.z)); }
inline i4t_3 VtPow2Div(i4t_3 V, i4t A) { return MkI4t_3( Pow2Div(V.x,A), Pow2Div(V.y,A), Pow2Div(V.z,A)); }
inline i4t_3 VtPow2Div(i4t A, i4t_3 V) { return MkI4t_3( Pow2Div(A,V.x), Pow2Div(A,V.y), Pow2Div(A,V.z)); }
inline i4t_3 VtPow2Mul(i4t_3 A, i4t_3 B) { return MkI4t_3( Pow2Mul(A.x,B.x), Pow2Mul(A.y,B.y), Pow2Mul(A.z,B.z)); }
inline i4t_3 VtPow2Mul(i4t_3 V, i4t A) { return MkI4t_3( Pow2Mul(V.x,A), Pow2Mul(V.y,A), Pow2Mul(V.z,A)); }
inline i4t_3 VtPow2Mul(i4t A, i4t_3 V) { return MkI4t_3( Pow2Mul(A,V.x), Pow2Mul(A,V.y), Pow2Mul(A,V.z)); }
inline i4t_3 VtPow2Rem(i4t_3 A, i4t_3 B) { return MkI4t_3( Pow2Rem(A.x,B.x), Pow2Rem(A.y,B.y), Pow2Rem(A.z,B.z)); }
inline i4t_3 VtPow2Rem(i4t_3 V, i4t A) { return MkI4t_3( Pow2Rem(V.x,A), Pow2Rem(V.y,A), Pow2Rem(V.z,A)); }
inline i4t_3 VtPow2Rem(i4t A, i4t_3 V) { return MkI4t_3( Pow2Rem(A,V.x), Pow2Rem(A,V.y), Pow2Rem(A,V.z)); }
inline i4t_3 VtRem(i4t_3 A, i4t_3 B) { return MkI4t_3( Rem(A.x,B.x), Rem(A.y,B.y), Rem(A.z,B.z)); }
inline i4t_3 VtRem(i4t_3 V, i4t A) { return MkI4t_3( Rem(V.x,A), Rem(V.y,A), Rem(V.z,A)); }
inline i4t_3 VtRem(i4t A, i4t_3 V) { return MkI4t_3( Rem(A,V.x), Rem(A,V.y), Rem(A,V.z)); }

inline i4t_4 VtCeilDiv(i4t_4 A, i4t_4 B) { return MkI4t_4( CeilDiv(A.x,B.x), CeilDiv(A.y,B.y), CeilDiv(A.z,B.z), CeilDiv(A.w,B.w)); }
inline i4t_4 VtCeilDiv(i4t_4 V, i4t A) { return MkI4t_4( CeilDiv(V.x,A), CeilDiv(V.y,A), CeilDiv(V.z,A), CeilDiv(V.w,A)); }
inline i4t_4 VtCeilDiv(i4t A, i4t_4 V) { return MkI4t_4( CeilDiv(A,V.x), CeilDiv(A,V.y), CeilDiv(A,V.z), CeilDiv(A,V.w)); }
inline i4t_4 VtPow2CDiv(i4t_4 A, i4t_4 B) { return MkI4t_4( Pow2CDiv(A.x,B.x), Pow2CDiv(A.y,B.y), Pow2CDiv(A.z,B.z), Pow2CDiv(A.w,B.w)); }
inline i4t_4 VtPow2CDiv(i4t_4 V, i4t A) { return MkI4t_4( Pow2CDiv(V.x,A), Pow2CDiv(V.y,A), Pow2CDiv(V.z,A), Pow2CDiv(V.w,A)); }
inline i4t_4 VtPow2CDiv(i4t A, i4t_4 V) { return MkI4t_4( Pow2CDiv(A,V.x), Pow2CDiv(A,V.y), Pow2CDiv(A,V.z), Pow2CDiv(A,V.w)); }
inline i4t_4 VtPow2Div(i4t_4 A, i4t_4 B) { return MkI4t_4( Pow2Div(A.x,B.x), Pow2Div(A.y,B.y), Pow2Div(A.z,B.z), Pow2Div(A.w,B.w)); }
inline i4t_4 VtPow2Div(i4t_4 V, i4t A) { return MkI4t_4( Pow2Div(V.x,A), Pow2Div(V.y,A), Pow2Div(V.z,A), Pow2Div(V.w,A)); }
inline i4t_4 VtPow2Div(i4t A, i4t_4 V) { return MkI4t_4( Pow2Div(A,V.x), Pow2Div(A,V.y), Pow2Div(A,V.z), Pow2Div(A,V.w)); }
inline i4t_4 VtPow2Mul(i4t_4 A, i4t_4 B) { return MkI4t_4( Pow2Mul(A.x,B.x), Pow2Mul(A.y,B.y), Pow2Mul(A.z,B.z), Pow2Mul(A.w,B.w)); }
inline i4t_4 VtPow2Mul(i4t_4 V, i4t A) { return MkI4t_4( Pow2Mul(V.x,A), Pow2Mul(V.y,A), Pow2Mul(V.z,A), Pow2Mul(V.w,A)); }
inline i4t_4 VtPow2Mul(i4t A, i4t_4 V) { return MkI4t_4( Pow2Mul(A,V.x), Pow2Mul(A,V.y), Pow2Mul(A,V.z), Pow2Mul(A,V.w)); }
inline i4t_4 VtPow2Rem(i4t_4 A, i4t_4 B) { return MkI4t_4( Pow2Rem(A.x,B.x), Pow2Rem(A.y,B.y), Pow2Rem(A.z,B.z), Pow2Rem(A.w,B.w)); }
inline i4t_4 VtPow2Rem(i4t_4 V, i4t A) { return MkI4t_4( Pow2Rem(V.x,A), Pow2Rem(V.y,A), Pow2Rem(V.z,A), Pow2Rem(V.w,A)); }
inline i4t_4 VtPow2Rem(i4t A, i4t_4 V) { return MkI4t_4( Pow2Rem(A,V.x), Pow2Rem(A,V.y), Pow2Rem(A,V.z), Pow2Rem(A,V.w)); }
inline i4t_4 VtRem(i4t_4 A, i4t_4 B) { return MkI4t_4( Rem(A.x,B.x), Rem(A.y,B.y), Rem(A.z,B.z), Rem(A.w,B.w)); }
inline i4t_4 VtRem(i4t_4 V, i4t A) { return MkI4t_4( Rem(V.x,A), Rem(V.y,A), Rem(V.z,A), Rem(V.w,A)); }
inline i4t_4 VtRem(i4t A, i4t_4 V) { return MkI4t_4( Rem(A,V.x), Rem(A,V.y), Rem(A,V.z), Rem(A,V.w)); }

inline f4t_2 Ceil(f4t_2 A) { return MkF4t_2( Ceil(A.x), Ceil(A.y)); }
inline f4t_2 Sin(f4t_2 A) { return MkF4t_2( Sin(A.x), Sin(A.y)); }
inline f4t_2 Cos(f4t_2 A) { return MkF4t_2( Cos(A.x), Cos(A.y)); }
inline f4t_2 Tan(f4t_2 A) { return MkF4t_2( Tan(A.x), Tan(A.y)); }
inline f4t_2 InvSin(f4t_2 A) { return MkF4t_2( InvSin(A.x), InvSin(A.y)); }
inline f4t_2 InvCos(f4t_2 A) { return MkF4t_2( InvCos(A.x), InvCos(A.y)); }
inline f4t_2 InvTan(f4t_2 A) { return MkF4t_2( InvTan(A.x), InvTan(A.y)); }
inline f4t_2 ToRadians(f4t_2 A) { return MkF4t_2( ToRadians(A.x), ToRadians(A.y)); }
inline f4t_2 ToDegrees(f4t_2 A) { return MkF4t_2( ToDegrees(A.x), ToDegrees(A.y)); }
inline f4t_2 Round(f4t_2 A) { return MkF4t_2( Round(A.x), Round(A.y)); }
inline f4t_2 Recip(f4t_2 A) { return MkF4t_2( Recip(A.x), Recip(A.y)); }
inline f4t_2 Sign(f4t_2 A) { return MkF4t_2( Sign(A.x), Sign(A.y)); }
inline f4t_2 Exp(f4t_2 A) { return MkF4t_2( Exp(A.x), Exp(A.y)); }
inline f4t_2 Log(f4t_2 A) { return MkF4t_2( Log(A.x), Log(A.y)); }
inline f4t_2 Sqrt(f4t_2 A) { return MkF4t_2( Sqrt(A.x), Sqrt(A.y)); }
inline f4t_2 RSqrt(f4t_2 A) { return MkF4t_2( RSqrt(A.x), RSqrt(A.y)); }
inline f4t_2 Fract(f4t_2 A) { return MkF4t_2( Fract(A.x), Fract(A.y)); }
inline f4t Len(f4t_2 V) { return Sqrt(HzAdd(V*V)); }
inline f4t_2 Norm(f4t_2 V) { return V/Len(V); }
inline f4t_2 VtLerp(f4t_2 MinVec, f4t_2 Lerp, f4t_2 MaxVec) { return (MkF4t_2(1)-Lerp)*MinVec + Lerp*MaxVec; }
inline f4t_2 VtDeLerp(f4t_2 MinVec, f4t_2 Vec, f4t_2 MaxVec) { return (Vec - MinVec)/(MaxVec - MinVec); }
inline f4t_2 VtRem(f4t_2 A, f4t_2 B) { return MkF4t_2( Rem(A.x,B.x), Rem(A.y,B.y)); }
inline f4t_2 VtRem(f4t_2 V, f4t A) { return MkF4t_2( Rem(V.x,A), Rem(V.y,A)); }
inline f4t_2 VtRem(f4t A, f4t_2 V) { return MkF4t_2( Rem(A,V.x), Rem(A,V.y)); }
inline f4t_3 Ceil(f4t_3 A) { return MkF4t_3( Ceil(A.x), Ceil(A.y), Ceil(A.z)); }
inline f4t_3 Sin(f4t_3 A) { return MkF4t_3( Sin(A.x), Sin(A.y), Sin(A.z)); }
inline f4t_3 Cos(f4t_3 A) { return MkF4t_3( Cos(A.x), Cos(A.y), Cos(A.z)); }
inline f4t_3 Tan(f4t_3 A) { return MkF4t_3( Tan(A.x), Tan(A.y), Tan(A.z)); }
inline f4t_3 InvSin(f4t_3 A) { return MkF4t_3( InvSin(A.x), InvSin(A.y), InvSin(A.z)); }
inline f4t_3 InvCos(f4t_3 A) { return MkF4t_3( InvCos(A.x), InvCos(A.y), InvCos(A.z)); }
inline f4t_3 InvTan(f4t_3 A) { return MkF4t_3( InvTan(A.x), InvTan(A.y), InvTan(A.z)); }
inline f4t_3 ToRadians(f4t_3 A) { return MkF4t_3( ToRadians(A.x), ToRadians(A.y), ToRadians(A.z)); }
inline f4t_3 ToDegrees(f4t_3 A) { return MkF4t_3( ToDegrees(A.x), ToDegrees(A.y), ToDegrees(A.z)); }
inline f4t_3 Round(f4t_3 A) { return MkF4t_3( Round(A.x), Round(A.y), Round(A.z)); }
inline f4t_3 Recip(f4t_3 A) { return MkF4t_3( Recip(A.x), Recip(A.y), Recip(A.z)); }
inline f4t_3 Sign(f4t_3 A) { return MkF4t_3( Sign(A.x), Sign(A.y), Sign(A.z)); }
inline f4t_3 Exp(f4t_3 A) { return MkF4t_3( Exp(A.x), Exp(A.y), Exp(A.z)); }
inline f4t_3 Log(f4t_3 A) { return MkF4t_3( Log(A.x), Log(A.y), Log(A.z)); }
inline f4t_3 Sqrt(f4t_3 A) { return MkF4t_3( Sqrt(A.x), Sqrt(A.y), Sqrt(A.z)); }
inline f4t_3 RSqrt(f4t_3 A) { return MkF4t_3( RSqrt(A.x), RSqrt(A.y), RSqrt(A.z)); }
inline f4t_3 Fract(f4t_3 A) { return MkF4t_3( Fract(A.x), Fract(A.y), Fract(A.z)); }
inline f4t Len(f4t_3 V) { return Sqrt(HzAdd(V*V)); }
inline f4t_3 Norm(f4t_3 V) { return V/Len(V); }
inline f4t_3 VtLerp(f4t_3 MinVec, f4t_3 Lerp, f4t_3 MaxVec) { return (MkF4t_3(1)-Lerp)*MinVec + Lerp*MaxVec; }
inline f4t_3 VtDeLerp(f4t_3 MinVec, f4t_3 Vec, f4t_3 MaxVec) { return (Vec - MinVec)/(MaxVec - MinVec); }
inline f4t_3 VtRem(f4t_3 A, f4t_3 B) { return MkF4t_3( Rem(A.x,B.x), Rem(A.y,B.y), Rem(A.z,B.z)); }
inline f4t_3 VtRem(f4t_3 V, f4t A) { return MkF4t_3( Rem(V.x,A), Rem(V.y,A), Rem(V.z,A)); }
inline f4t_3 VtRem(f4t A, f4t_3 V) { return MkF4t_3( Rem(A,V.x), Rem(A,V.y), Rem(A,V.z)); }
inline f4t_4 Ceil(f4t_4 A) { return MkF4t_4( Ceil(A.x), Ceil(A.y), Ceil(A.z), Ceil(A.w)); }
inline f4t_4 Sin(f4t_4 A) { return MkF4t_4( Sin(A.x), Sin(A.y), Sin(A.z), Sin(A.w)); }
inline f4t_4 Cos(f4t_4 A) { return MkF4t_4( Cos(A.x), Cos(A.y), Cos(A.z), Cos(A.w)); }
inline f4t_4 Tan(f4t_4 A) { return MkF4t_4( Tan(A.x), Tan(A.y), Tan(A.z), Tan(A.w)); }
inline f4t_4 InvSin(f4t_4 A) { return MkF4t_4( InvSin(A.x), InvSin(A.y), InvSin(A.z), InvSin(A.w)); }
inline f4t_4 InvCos(f4t_4 A) { return MkF4t_4( InvCos(A.x), InvCos(A.y), InvCos(A.z), InvCos(A.w)); }
inline f4t_4 InvTan(f4t_4 A) { return MkF4t_4( InvTan(A.x), InvTan(A.y), InvTan(A.z), InvTan(A.w)); }
inline f4t_4 ToRadians(f4t_4 A) { return MkF4t_4( ToRadians(A.x), ToRadians(A.y), ToRadians(A.z), ToRadians(A.w)); }
inline f4t_4 ToDegrees(f4t_4 A) { return MkF4t_4( ToDegrees(A.x), ToDegrees(A.y), ToDegrees(A.z), ToDegrees(A.w)); }
inline f4t_4 Round(f4t_4 A) { return MkF4t_4( Round(A.x), Round(A.y), Round(A.z), Round(A.w)); }
inline f4t_4 Recip(f4t_4 A) { return MkF4t_4( Recip(A.x), Recip(A.y), Recip(A.z), Recip(A.w)); }
inline f4t_4 Sign(f4t_4 A) { return MkF4t_4( Sign(A.x), Sign(A.y), Sign(A.z), Sign(A.w)); }
inline f4t_4 Exp(f4t_4 A) { return MkF4t_4( Exp(A.x), Exp(A.y), Exp(A.z), Exp(A.w)); }
inline f4t_4 Log(f4t_4 A) { return MkF4t_4( Log(A.x), Log(A.y), Log(A.z), Log(A.w)); }
inline f4t_4 Sqrt(f4t_4 A) { return MkF4t_4( Sqrt(A.x), Sqrt(A.y), Sqrt(A.z), Sqrt(A.w)); }
inline f4t_4 RSqrt(f4t_4 A) { return MkF4t_4( RSqrt(A.x), RSqrt(A.y), RSqrt(A.z), RSqrt(A.w)); }
inline f4t_4 Fract(f4t_4 A) { return MkF4t_4( Fract(A.x), Fract(A.y), Fract(A.z), Fract(A.w)); }
inline f4t Len(f4t_4 V) { return Sqrt(HzAdd(V*V)); }
inline f4t_4 Norm(f4t_4 V) { return V/Len(V); }
inline f4t_4 VtLerp(f4t_4 MinVec, f4t_4 Lerp, f4t_4 MaxVec) { return (MkF4t_4(1)-Lerp)*MinVec + Lerp*MaxVec; }
inline f4t_4 VtDeLerp(f4t_4 MinVec, f4t_4 Vec, f4t_4 MaxVec) { return (Vec - MinVec)/(MaxVec - MinVec); }
inline f4t_4 VtRem(f4t_4 A, f4t_4 B) { return MkF4t_4( Rem(A.x,B.x), Rem(A.y,B.y), Rem(A.z,B.z), Rem(A.w,B.w)); }
inline f4t_4 VtRem(f4t_4 V, f4t A) { return MkF4t_4( Rem(V.x,A), Rem(V.y,A), Rem(V.z,A), Rem(V.w,A)); }
inline f4t_4 VtRem(f4t A, f4t_4 V) { return MkF4t_4( Rem(A,V.x), Rem(A,V.y), Rem(A,V.z), Rem(A,V.w)); }
inline f8t_2 Ceil(f8t_2 A) { return MkF8t_2( Ceil(A.x), Ceil(A.y)); }
inline f8t_2 Sin(f8t_2 A) { return MkF8t_2( Sin(A.x), Sin(A.y)); }
inline f8t_2 Cos(f8t_2 A) { return MkF8t_2( Cos(A.x), Cos(A.y)); }
inline f8t_2 Tan(f8t_2 A) { return MkF8t_2( Tan(A.x), Tan(A.y)); }
inline f8t_2 InvSin(f8t_2 A) { return MkF8t_2( InvSin(A.x), InvSin(A.y)); }
inline f8t_2 InvCos(f8t_2 A) { return MkF8t_2( InvCos(A.x), InvCos(A.y)); }
inline f8t_2 InvTan(f8t_2 A) { return MkF8t_2( InvTan(A.x), InvTan(A.y)); }
inline f8t_2 ToRadians(f8t_2 A) { return MkF8t_2( ToRadians(A.x), ToRadians(A.y)); }
inline f8t_2 ToDegrees(f8t_2 A) { return MkF8t_2( ToDegrees(A.x), ToDegrees(A.y)); }
inline f8t_2 Round(f8t_2 A) { return MkF8t_2( Round(A.x), Round(A.y)); }
inline f8t_2 Recip(f8t_2 A) { return MkF8t_2( Recip(A.x), Recip(A.y)); }
inline f8t_2 Sign(f8t_2 A) { return MkF8t_2( Sign(A.x), Sign(A.y)); }
inline f8t_2 Exp(f8t_2 A) { return MkF8t_2( Exp(A.x), Exp(A.y)); }
inline f8t_2 Log(f8t_2 A) { return MkF8t_2( Log(A.x), Log(A.y)); }
inline f8t_2 Sqrt(f8t_2 A) { return MkF8t_2( Sqrt(A.x), Sqrt(A.y)); }
inline f8t_2 RSqrt(f8t_2 A) { return MkF8t_2( RSqrt(A.x), RSqrt(A.y)); }
inline f8t_2 Fract(f8t_2 A) { return MkF8t_2( Fract(A.x), Fract(A.y)); }
inline f8t Len(f8t_2 V) { return Sqrt(HzAdd(V*V)); }
inline f8t_2 Norm(f8t_2 V) { return V/Len(V); }
inline f8t_2 VtLerp(f8t_2 MinVec, f8t_2 Lerp, f8t_2 MaxVec) { return (MkF8t_2(1)-Lerp)*MinVec + Lerp*MaxVec; }
inline f8t_2 VtDeLerp(f8t_2 MinVec, f8t_2 Vec, f8t_2 MaxVec) { return (Vec - MinVec)/(MaxVec - MinVec); }
inline f8t_2 VtRem(f8t_2 A, f8t_2 B) { return MkF8t_2( Rem(A.x,B.x), Rem(A.y,B.y)); }
inline f8t_2 VtRem(f8t_2 V, f8t A) { return MkF8t_2( Rem(V.x,A), Rem(V.y,A)); }
inline f8t_2 VtRem(f8t A, f8t_2 V) { return MkF8t_2( Rem(A,V.x), Rem(A,V.y)); }
inline f8t_3 Ceil(f8t_3 A) { return MkF8t_3( Ceil(A.x), Ceil(A.y), Ceil(A.z)); }
inline f8t_3 Sin(f8t_3 A) { return MkF8t_3( Sin(A.x), Sin(A.y), Sin(A.z)); }
inline f8t_3 Cos(f8t_3 A) { return MkF8t_3( Cos(A.x), Cos(A.y), Cos(A.z)); }
inline f8t_3 Tan(f8t_3 A) { return MkF8t_3( Tan(A.x), Tan(A.y), Tan(A.z)); }
inline f8t_3 InvSin(f8t_3 A) { return MkF8t_3( InvSin(A.x), InvSin(A.y), InvSin(A.z)); }
inline f8t_3 InvCos(f8t_3 A) { return MkF8t_3( InvCos(A.x), InvCos(A.y), InvCos(A.z)); }
inline f8t_3 InvTan(f8t_3 A) { return MkF8t_3( InvTan(A.x), InvTan(A.y), InvTan(A.z)); }
inline f8t_3 ToRadians(f8t_3 A) { return MkF8t_3( ToRadians(A.x), ToRadians(A.y), ToRadians(A.z)); }
inline f8t_3 ToDegrees(f8t_3 A) { return MkF8t_3( ToDegrees(A.x), ToDegrees(A.y), ToDegrees(A.z)); }
inline f8t_3 Round(f8t_3 A) { return MkF8t_3( Round(A.x), Round(A.y), Round(A.z)); }
inline f8t_3 Recip(f8t_3 A) { return MkF8t_3( Recip(A.x), Recip(A.y), Recip(A.z)); }
inline f8t_3 Sign(f8t_3 A) { return MkF8t_3( Sign(A.x), Sign(A.y), Sign(A.z)); }
inline f8t_3 Exp(f8t_3 A) { return MkF8t_3( Exp(A.x), Exp(A.y), Exp(A.z)); }
inline f8t_3 Log(f8t_3 A) { return MkF8t_3( Log(A.x), Log(A.y), Log(A.z)); }
inline f8t_3 Sqrt(f8t_3 A) { return MkF8t_3( Sqrt(A.x), Sqrt(A.y), Sqrt(A.z)); }
inline f8t_3 RSqrt(f8t_3 A) { return MkF8t_3( RSqrt(A.x), RSqrt(A.y), RSqrt(A.z)); }
inline f8t_3 Fract(f8t_3 A) { return MkF8t_3( Fract(A.x), Fract(A.y), Fract(A.z)); }
inline f8t Len(f8t_3 V) { return Sqrt(HzAdd(V*V)); }
inline f8t_3 Norm(f8t_3 V) { return V/Len(V); }
inline f8t_3 VtLerp(f8t_3 MinVec, f8t_3 Lerp, f8t_3 MaxVec) { return (MkF8t_3(1)-Lerp)*MinVec + Lerp*MaxVec; }
inline f8t_3 VtDeLerp(f8t_3 MinVec, f8t_3 Vec, f8t_3 MaxVec) { return (Vec - MinVec)/(MaxVec - MinVec); }
inline f8t_3 VtRem(f8t_3 A, f8t_3 B) { return MkF8t_3( Rem(A.x,B.x), Rem(A.y,B.y), Rem(A.z,B.z)); }
inline f8t_3 VtRem(f8t_3 V, f8t A) { return MkF8t_3( Rem(V.x,A), Rem(V.y,A), Rem(V.z,A)); }
inline f8t_3 VtRem(f8t A, f8t_3 V) { return MkF8t_3( Rem(A,V.x), Rem(A,V.y), Rem(A,V.z)); }
inline f8t_4 Ceil(f8t_4 A) { return MkF8t_4( Ceil(A.x), Ceil(A.y), Ceil(A.z), Ceil(A.w)); }
inline f8t_4 Sin(f8t_4 A) { return MkF8t_4( Sin(A.x), Sin(A.y), Sin(A.z), Sin(A.w)); }
inline f8t_4 Cos(f8t_4 A) { return MkF8t_4( Cos(A.x), Cos(A.y), Cos(A.z), Cos(A.w)); }
inline f8t_4 Tan(f8t_4 A) { return MkF8t_4( Tan(A.x), Tan(A.y), Tan(A.z), Tan(A.w)); }
inline f8t_4 InvSin(f8t_4 A) { return MkF8t_4( InvSin(A.x), InvSin(A.y), InvSin(A.z), InvSin(A.w)); }
inline f8t_4 InvCos(f8t_4 A) { return MkF8t_4( InvCos(A.x), InvCos(A.y), InvCos(A.z), InvCos(A.w)); }
inline f8t_4 InvTan(f8t_4 A) { return MkF8t_4( InvTan(A.x), InvTan(A.y), InvTan(A.z), InvTan(A.w)); }
inline f8t_4 ToRadians(f8t_4 A) { return MkF8t_4( ToRadians(A.x), ToRadians(A.y), ToRadians(A.z), ToRadians(A.w)); }
inline f8t_4 ToDegrees(f8t_4 A) { return MkF8t_4( ToDegrees(A.x), ToDegrees(A.y), ToDegrees(A.z), ToDegrees(A.w)); }
inline f8t_4 Round(f8t_4 A) { return MkF8t_4( Round(A.x), Round(A.y), Round(A.z), Round(A.w)); }
inline f8t_4 Recip(f8t_4 A) { return MkF8t_4( Recip(A.x), Recip(A.y), Recip(A.z), Recip(A.w)); }
inline f8t_4 Sign(f8t_4 A) { return MkF8t_4( Sign(A.x), Sign(A.y), Sign(A.z), Sign(A.w)); }
inline f8t_4 Exp(f8t_4 A) { return MkF8t_4( Exp(A.x), Exp(A.y), Exp(A.z), Exp(A.w)); }
inline f8t_4 Log(f8t_4 A) { return MkF8t_4( Log(A.x), Log(A.y), Log(A.z), Log(A.w)); }
inline f8t_4 Sqrt(f8t_4 A) { return MkF8t_4( Sqrt(A.x), Sqrt(A.y), Sqrt(A.z), Sqrt(A.w)); }
inline f8t_4 RSqrt(f8t_4 A) { return MkF8t_4( RSqrt(A.x), RSqrt(A.y), RSqrt(A.z), RSqrt(A.w)); }
inline f8t_4 Fract(f8t_4 A) { return MkF8t_4( Fract(A.x), Fract(A.y), Fract(A.z), Fract(A.w)); }
inline f8t Len(f8t_4 V) { return Sqrt(HzAdd(V*V)); }
inline f8t_4 Norm(f8t_4 V) { return V/Len(V); }
inline f8t_4 VtLerp(f8t_4 MinVec, f8t_4 Lerp, f8t_4 MaxVec) { return (MkF8t_4(1)-Lerp)*MinVec + Lerp*MaxVec; }
inline f8t_4 VtDeLerp(f8t_4 MinVec, f8t_4 Vec, f8t_4 MaxVec) { return (Vec - MinVec)/(MaxVec - MinVec); }
inline f8t_4 VtRem(f8t_4 A, f8t_4 B) { return MkF8t_4( Rem(A.x,B.x), Rem(A.y,B.y), Rem(A.z,B.z), Rem(A.w,B.w)); }
inline f8t_4 VtRem(f8t_4 V, f8t A) { return MkF8t_4( Rem(V.x,A), Rem(V.y,A), Rem(V.z,A), Rem(V.w,A)); }
inline f8t_4 VtRem(f8t A, f8t_4 V) { return MkF8t_4( Rem(A,V.x), Rem(A,V.y), Rem(A,V.z), Rem(A,V.w)); }
inline blt AllEq(u1t_2 A, u1t_2 B)  { return HzAnd(A == B); }
inline blt AllNeq(u1t_2 A, u1t_2 B)  { return HzAnd(A != B); }
inline blt AnyEq(u1t_2 A, u1t_2 B)  { return HzOr(A == B); }
inline blt AnyNeq(u1t_2 A, u1t_2 B)  { return HzOr(A != B); }
inline u1t_2 VtIfElse(blt_2 Q, u1t_2 A, u1t_2 B) { return MkU1t_2( Q.x ? A.x : B.x, Q.y ? A.y : B.y); }
inline u1t_2 VtIfElse(blt_2 Q, u1t A, u1t B) { return MkU1t_2( Q.x ? A : B, Q.y ? A : B); }

inline blt AllEq(u1t_3 A, u1t_3 B)  { return HzAnd(A == B); }
inline blt AllNeq(u1t_3 A, u1t_3 B)  { return HzAnd(A != B); }
inline blt AnyEq(u1t_3 A, u1t_3 B)  { return HzOr(A == B); }
inline blt AnyNeq(u1t_3 A, u1t_3 B)  { return HzOr(A != B); }
inline u1t_3 VtIfElse(blt_3 Q, u1t_3 A, u1t_3 B) { return MkU1t_3( Q.x ? A.x : B.x, Q.y ? A.y : B.y, Q.z ? A.z : B.z); }
inline u1t_3 VtIfElse(blt_3 Q, u1t A, u1t B) { return MkU1t_3( Q.x ? A : B, Q.y ? A : B, Q.z ? A : B); }

inline blt AllEq(u1t_4 A, u1t_4 B)  { return HzAnd(A == B); }
inline blt AllNeq(u1t_4 A, u1t_4 B)  { return HzAnd(A != B); }
inline blt AnyEq(u1t_4 A, u1t_4 B)  { return HzOr(A == B); }
inline blt AnyNeq(u1t_4 A, u1t_4 B)  { return HzOr(A != B); }
inline u1t_4 VtIfElse(blt_4 Q, u1t_4 A, u1t_4 B) { return MkU1t_4( Q.x ? A.x : B.x, Q.y ? A.y : B.y, Q.z ? A.z : B.z, Q.w ? A.w : B.w); }
inline u1t_4 VtIfElse(blt_4 Q, u1t A, u1t B) { return MkU1t_4( Q.x ? A : B, Q.y ? A : B, Q.z ? A : B, Q.w ? A : B); }

inline blt AllEq(i4t_2 A, i4t_2 B)  { return HzAnd(A == B); }
inline blt AllNeq(i4t_2 A, i4t_2 B)  { return HzAnd(A != B); }
inline blt AnyEq(i4t_2 A, i4t_2 B)  { return HzOr(A == B); }
inline blt AnyNeq(i4t_2 A, i4t_2 B)  { return HzOr(A != B); }
inline i4t_2 VtIfElse(blt_2 Q, i4t_2 A, i4t_2 B) { return MkI4t_2( Q.x ? A.x : B.x, Q.y ? A.y : B.y); }
inline i4t_2 VtIfElse(blt_2 Q, i4t A, i4t B) { return MkI4t_2( Q.x ? A : B, Q.y ? A : B); }

inline blt AllEq(i4t_3 A, i4t_3 B)  { return HzAnd(A == B); }
inline blt AllNeq(i4t_3 A, i4t_3 B)  { return HzAnd(A != B); }
inline blt AnyEq(i4t_3 A, i4t_3 B)  { return HzOr(A == B); }
inline blt AnyNeq(i4t_3 A, i4t_3 B)  { return HzOr(A != B); }
inline i4t_3 VtIfElse(blt_3 Q, i4t_3 A, i4t_3 B) { return MkI4t_3( Q.x ? A.x : B.x, Q.y ? A.y : B.y, Q.z ? A.z : B.z); }
inline i4t_3 VtIfElse(blt_3 Q, i4t A, i4t B) { return MkI4t_3( Q.x ? A : B, Q.y ? A : B, Q.z ? A : B); }

inline blt AllEq(i4t_4 A, i4t_4 B)  { return HzAnd(A == B); }
inline blt AllNeq(i4t_4 A, i4t_4 B)  { return HzAnd(A != B); }
inline blt AnyEq(i4t_4 A, i4t_4 B)  { return HzOr(A == B); }
inline blt AnyNeq(i4t_4 A, i4t_4 B)  { return HzOr(A != B); }
inline i4t_4 VtIfElse(blt_4 Q, i4t_4 A, i4t_4 B) { return MkI4t_4( Q.x ? A.x : B.x, Q.y ? A.y : B.y, Q.z ? A.z : B.z, Q.w ? A.w : B.w); }
inline i4t_4 VtIfElse(blt_4 Q, i4t A, i4t B) { return MkI4t_4( Q.x ? A : B, Q.y ? A : B, Q.z ? A : B, Q.w ? A : B); }

inline blt AllEq(f4t_2 A, f4t_2 B)  { return HzAnd(A == B); }
inline blt AllNeq(f4t_2 A, f4t_2 B)  { return HzAnd(A != B); }
inline blt AnyEq(f4t_2 A, f4t_2 B)  { return HzOr(A == B); }
inline blt AnyNeq(f4t_2 A, f4t_2 B)  { return HzOr(A != B); }
inline f4t_2 VtIfElse(blt_2 Q, f4t_2 A, f4t_2 B) { return MkF4t_2( Q.x ? A.x : B.x, Q.y ? A.y : B.y); }
inline f4t_2 VtIfElse(blt_2 Q, f4t A, f4t B) { return MkF4t_2( Q.x ? A : B, Q.y ? A : B); }

inline blt AllEq(f4t_3 A, f4t_3 B)  { return HzAnd(A == B); }
inline blt AllNeq(f4t_3 A, f4t_3 B)  { return HzAnd(A != B); }
inline blt AnyEq(f4t_3 A, f4t_3 B)  { return HzOr(A == B); }
inline blt AnyNeq(f4t_3 A, f4t_3 B)  { return HzOr(A != B); }
inline f4t_3 VtIfElse(blt_3 Q, f4t_3 A, f4t_3 B) { return MkF4t_3( Q.x ? A.x : B.x, Q.y ? A.y : B.y, Q.z ? A.z : B.z); }
inline f4t_3 VtIfElse(blt_3 Q, f4t A, f4t B) { return MkF4t_3( Q.x ? A : B, Q.y ? A : B, Q.z ? A : B); }

inline blt AllEq(f4t_4 A, f4t_4 B)  { return HzAnd(A == B); }
inline blt AllNeq(f4t_4 A, f4t_4 B)  { return HzAnd(A != B); }
inline blt AnyEq(f4t_4 A, f4t_4 B)  { return HzOr(A == B); }
inline blt AnyNeq(f4t_4 A, f4t_4 B)  { return HzOr(A != B); }
inline f4t_4 VtIfElse(blt_4 Q, f4t_4 A, f4t_4 B) { return MkF4t_4( Q.x ? A.x : B.x, Q.y ? A.y : B.y, Q.z ? A.z : B.z, Q.w ? A.w : B.w); }
inline f4t_4 VtIfElse(blt_4 Q, f4t A, f4t B) { return MkF4t_4( Q.x ? A : B, Q.y ? A : B, Q.z ? A : B, Q.w ? A : B); }

inline blt AllEq(f8t_2 A, f8t_2 B)  { return HzAnd(A == B); }
inline blt AllNeq(f8t_2 A, f8t_2 B)  { return HzAnd(A != B); }
inline blt AnyEq(f8t_2 A, f8t_2 B)  { return HzOr(A == B); }
inline blt AnyNeq(f8t_2 A, f8t_2 B)  { return HzOr(A != B); }
inline f8t_2 VtIfElse(blt_2 Q, f8t_2 A, f8t_2 B) { return MkF8t_2( Q.x ? A.x : B.x, Q.y ? A.y : B.y); }
inline f8t_2 VtIfElse(blt_2 Q, f8t A, f8t B) { return MkF8t_2( Q.x ? A : B, Q.y ? A : B); }

inline blt AllEq(f8t_3 A, f8t_3 B)  { return HzAnd(A == B); }
inline blt AllNeq(f8t_3 A, f8t_3 B)  { return HzAnd(A != B); }
inline blt AnyEq(f8t_3 A, f8t_3 B)  { return HzOr(A == B); }
inline blt AnyNeq(f8t_3 A, f8t_3 B)  { return HzOr(A != B); }
inline f8t_3 VtIfElse(blt_3 Q, f8t_3 A, f8t_3 B) { return MkF8t_3( Q.x ? A.x : B.x, Q.y ? A.y : B.y, Q.z ? A.z : B.z); }
inline f8t_3 VtIfElse(blt_3 Q, f8t A, f8t B) { return MkF8t_3( Q.x ? A : B, Q.y ? A : B, Q.z ? A : B); }

inline blt AllEq(f8t_4 A, f8t_4 B)  { return HzAnd(A == B); }
inline blt AllNeq(f8t_4 A, f8t_4 B)  { return HzAnd(A != B); }
inline blt AnyEq(f8t_4 A, f8t_4 B)  { return HzOr(A == B); }
inline blt AnyNeq(f8t_4 A, f8t_4 B)  { return HzOr(A != B); }
inline f8t_4 VtIfElse(blt_4 Q, f8t_4 A, f8t_4 B) { return MkF8t_4( Q.x ? A.x : B.x, Q.y ? A.y : B.y, Q.z ? A.z : B.z, Q.w ? A.w : B.w); }
inline f8t_4 VtIfElse(blt_4 Q, f8t A, f8t B) { return MkF8t_4( Q.x ? A : B, Q.y ? A : B, Q.z ? A : B, Q.w ? A : B); }

inline blt AllEq(blt_2 A, blt_2 B)  { return HzAnd(A == B); }
inline blt AllNeq(blt_2 A, blt_2 B)  { return HzAnd(A != B); }
inline blt AnyEq(blt_2 A, blt_2 B)  { return HzOr(A == B); }
inline blt AnyNeq(blt_2 A, blt_2 B)  { return HzOr(A != B); }
inline blt_2 VtIfElse(blt_2 Q, blt_2 A, blt_2 B) { return MkBlt_2( Q.x ? A.x : B.x, Q.y ? A.y : B.y); }
inline blt_2 VtIfElse(blt_2 Q, blt A, blt B) { return MkBlt_2( Q.x ? A : B, Q.y ? A : B); }

inline blt AllEq(blt_3 A, blt_3 B)  { return HzAnd(A == B); }
inline blt AllNeq(blt_3 A, blt_3 B)  { return HzAnd(A != B); }
inline blt AnyEq(blt_3 A, blt_3 B)  { return HzOr(A == B); }
inline blt AnyNeq(blt_3 A, blt_3 B)  { return HzOr(A != B); }
inline blt_3 VtIfElse(blt_3 Q, blt_3 A, blt_3 B) { return MkBlt_3( Q.x ? A.x : B.x, Q.y ? A.y : B.y, Q.z ? A.z : B.z); }
inline blt_3 VtIfElse(blt_3 Q, blt A, blt B) { return MkBlt_3( Q.x ? A : B, Q.y ? A : B, Q.z ? A : B); }

inline blt AllEq(blt_4 A, blt_4 B)  { return HzAnd(A == B); }
inline blt AllNeq(blt_4 A, blt_4 B)  { return HzAnd(A != B); }
inline blt AnyEq(blt_4 A, blt_4 B)  { return HzOr(A == B); }
inline blt AnyNeq(blt_4 A, blt_4 B)  { return HzOr(A != B); }
inline blt_4 VtIfElse(blt_4 Q, blt_4 A, blt_4 B) { return MkBlt_4( Q.x ? A.x : B.x, Q.y ? A.y : B.y, Q.z ? A.z : B.z, Q.w ? A.w : B.w); }
inline blt_4 VtIfElse(blt_4 Q, blt A, blt B) { return MkBlt_4( Q.x ? A : B, Q.y ? A : B, Q.z ? A : B, Q.w ? A : B); }

inline blt AllLt(u1t_2 A, u1t_2 B)  { return HzAnd(A < B); }
inline blt AllLte(u1t_2 A, u1t_2 B) { return HzAnd(A <= B); }
inline blt AllGt(u1t_2 A, u1t_2 B)  { return HzAnd(A > B); }
inline blt AllGte(u1t_2 A, u1t_2 B) { return HzAnd(A >= B); }
inline blt AnyLt(u1t_2 A, u1t_2 B)  { return HzOr(A < B); }
inline blt AnyLte(u1t_2 A, u1t_2 B) { return HzOr(A <= B); }
inline blt AnyGt(u1t_2 A, u1t_2 B)  { return HzOr(A > B); }
inline blt AnyGte(u1t_2 A, u1t_2 B) { return HzOr(A >= B); }
inline u1t DotP(u1t_2 A, u1t_2 B) { return HzAdd(A * B); }
inline u1t SqLen(u1t_2 V) { return HzAdd(V*V); }
inline u1t_2 MAdd(u1t_2 A,u1t_2 B,u1t_2 C) { return (A*B) + C; }
inline u1t_2 VtClamp(u1t_2 MinVal, u1t_2 V, u1t_2 MaxVal) { return VtMin(VtMax(V, MinVal), MaxVal); }

inline blt AllLt(u1t_3 A, u1t_3 B)  { return HzAnd(A < B); }
inline blt AllLte(u1t_3 A, u1t_3 B) { return HzAnd(A <= B); }
inline blt AllGt(u1t_3 A, u1t_3 B)  { return HzAnd(A > B); }
inline blt AllGte(u1t_3 A, u1t_3 B) { return HzAnd(A >= B); }
inline blt AnyLt(u1t_3 A, u1t_3 B)  { return HzOr(A < B); }
inline blt AnyLte(u1t_3 A, u1t_3 B) { return HzOr(A <= B); }
inline blt AnyGt(u1t_3 A, u1t_3 B)  { return HzOr(A > B); }
inline blt AnyGte(u1t_3 A, u1t_3 B) { return HzOr(A >= B); }
inline u1t DotP(u1t_3 A, u1t_3 B) { return HzAdd(A * B); }
inline u1t SqLen(u1t_3 V) { return HzAdd(V*V); }
inline u1t_3 MAdd(u1t_3 A,u1t_3 B,u1t_3 C) { return (A*B) + C; }
inline u1t_3 VtClamp(u1t_3 MinVal, u1t_3 V, u1t_3 MaxVal) { return VtMin(VtMax(V, MinVal), MaxVal); }

inline blt AllLt(u1t_4 A, u1t_4 B)  { return HzAnd(A < B); }
inline blt AllLte(u1t_4 A, u1t_4 B) { return HzAnd(A <= B); }
inline blt AllGt(u1t_4 A, u1t_4 B)  { return HzAnd(A > B); }
inline blt AllGte(u1t_4 A, u1t_4 B) { return HzAnd(A >= B); }
inline blt AnyLt(u1t_4 A, u1t_4 B)  { return HzOr(A < B); }
inline blt AnyLte(u1t_4 A, u1t_4 B) { return HzOr(A <= B); }
inline blt AnyGt(u1t_4 A, u1t_4 B)  { return HzOr(A > B); }
inline blt AnyGte(u1t_4 A, u1t_4 B) { return HzOr(A >= B); }
inline u1t DotP(u1t_4 A, u1t_4 B) { return HzAdd(A * B); }
inline u1t SqLen(u1t_4 V) { return HzAdd(V*V); }
inline u1t_4 MAdd(u1t_4 A,u1t_4 B,u1t_4 C) { return (A*B) + C; }
inline u1t_4 VtClamp(u1t_4 MinVal, u1t_4 V, u1t_4 MaxVal) { return VtMin(VtMax(V, MinVal), MaxVal); }

inline blt AllLt(i4t_2 A, i4t_2 B)  { return HzAnd(A < B); }
inline blt AllLte(i4t_2 A, i4t_2 B) { return HzAnd(A <= B); }
inline blt AllGt(i4t_2 A, i4t_2 B)  { return HzAnd(A > B); }
inline blt AllGte(i4t_2 A, i4t_2 B) { return HzAnd(A >= B); }
inline blt AnyLt(i4t_2 A, i4t_2 B)  { return HzOr(A < B); }
inline blt AnyLte(i4t_2 A, i4t_2 B) { return HzOr(A <= B); }
inline blt AnyGt(i4t_2 A, i4t_2 B)  { return HzOr(A > B); }
inline blt AnyGte(i4t_2 A, i4t_2 B) { return HzOr(A >= B); }
inline i4t DotP(i4t_2 A, i4t_2 B) { return HzAdd(A * B); }
inline i4t SqLen(i4t_2 V) { return HzAdd(V*V); }
inline i4t_2 MAdd(i4t_2 A,i4t_2 B,i4t_2 C) { return (A*B) + C; }
inline i4t_2 VtClamp(i4t_2 MinVal, i4t_2 V, i4t_2 MaxVal) { return VtMin(VtMax(V, MinVal), MaxVal); }

inline blt AllLt(i4t_3 A, i4t_3 B)  { return HzAnd(A < B); }
inline blt AllLte(i4t_3 A, i4t_3 B) { return HzAnd(A <= B); }
inline blt AllGt(i4t_3 A, i4t_3 B)  { return HzAnd(A > B); }
inline blt AllGte(i4t_3 A, i4t_3 B) { return HzAnd(A >= B); }
inline blt AnyLt(i4t_3 A, i4t_3 B)  { return HzOr(A < B); }
inline blt AnyLte(i4t_3 A, i4t_3 B) { return HzOr(A <= B); }
inline blt AnyGt(i4t_3 A, i4t_3 B)  { return HzOr(A > B); }
inline blt AnyGte(i4t_3 A, i4t_3 B) { return HzOr(A >= B); }
inline i4t DotP(i4t_3 A, i4t_3 B) { return HzAdd(A * B); }
inline i4t SqLen(i4t_3 V) { return HzAdd(V*V); }
inline i4t_3 MAdd(i4t_3 A,i4t_3 B,i4t_3 C) { return (A*B) + C; }
inline i4t_3 VtClamp(i4t_3 MinVal, i4t_3 V, i4t_3 MaxVal) { return VtMin(VtMax(V, MinVal), MaxVal); }

inline blt AllLt(i4t_4 A, i4t_4 B)  { return HzAnd(A < B); }
inline blt AllLte(i4t_4 A, i4t_4 B) { return HzAnd(A <= B); }
inline blt AllGt(i4t_4 A, i4t_4 B)  { return HzAnd(A > B); }
inline blt AllGte(i4t_4 A, i4t_4 B) { return HzAnd(A >= B); }
inline blt AnyLt(i4t_4 A, i4t_4 B)  { return HzOr(A < B); }
inline blt AnyLte(i4t_4 A, i4t_4 B) { return HzOr(A <= B); }
inline blt AnyGt(i4t_4 A, i4t_4 B)  { return HzOr(A > B); }
inline blt AnyGte(i4t_4 A, i4t_4 B) { return HzOr(A >= B); }
inline i4t DotP(i4t_4 A, i4t_4 B) { return HzAdd(A * B); }
inline i4t SqLen(i4t_4 V) { return HzAdd(V*V); }
inline i4t_4 MAdd(i4t_4 A,i4t_4 B,i4t_4 C) { return (A*B) + C; }
inline i4t_4 VtClamp(i4t_4 MinVal, i4t_4 V, i4t_4 MaxVal) { return VtMin(VtMax(V, MinVal), MaxVal); }

inline blt AllLt(f4t_2 A, f4t_2 B)  { return HzAnd(A < B); }
inline blt AllLte(f4t_2 A, f4t_2 B) { return HzAnd(A <= B); }
inline blt AllGt(f4t_2 A, f4t_2 B)  { return HzAnd(A > B); }
inline blt AllGte(f4t_2 A, f4t_2 B) { return HzAnd(A >= B); }
inline blt AnyLt(f4t_2 A, f4t_2 B)  { return HzOr(A < B); }
inline blt AnyLte(f4t_2 A, f4t_2 B) { return HzOr(A <= B); }
inline blt AnyGt(f4t_2 A, f4t_2 B)  { return HzOr(A > B); }
inline blt AnyGte(f4t_2 A, f4t_2 B) { return HzOr(A >= B); }
inline f4t DotP(f4t_2 A, f4t_2 B) { return HzAdd(A * B); }
inline f4t SqLen(f4t_2 V) { return HzAdd(V*V); }
inline f4t_2 MAdd(f4t_2 A,f4t_2 B,f4t_2 C) { return (A*B) + C; }
inline f4t_2 VtClamp(f4t_2 MinVal, f4t_2 V, f4t_2 MaxVal) { return VtMin(VtMax(V, MinVal), MaxVal); }

inline blt AllLt(f4t_3 A, f4t_3 B)  { return HzAnd(A < B); }
inline blt AllLte(f4t_3 A, f4t_3 B) { return HzAnd(A <= B); }
inline blt AllGt(f4t_3 A, f4t_3 B)  { return HzAnd(A > B); }
inline blt AllGte(f4t_3 A, f4t_3 B) { return HzAnd(A >= B); }
inline blt AnyLt(f4t_3 A, f4t_3 B)  { return HzOr(A < B); }
inline blt AnyLte(f4t_3 A, f4t_3 B) { return HzOr(A <= B); }
inline blt AnyGt(f4t_3 A, f4t_3 B)  { return HzOr(A > B); }
inline blt AnyGte(f4t_3 A, f4t_3 B) { return HzOr(A >= B); }
inline f4t DotP(f4t_3 A, f4t_3 B) { return HzAdd(A * B); }
inline f4t SqLen(f4t_3 V) { return HzAdd(V*V); }
inline f4t_3 MAdd(f4t_3 A,f4t_3 B,f4t_3 C) { return (A*B) + C; }
inline f4t_3 VtClamp(f4t_3 MinVal, f4t_3 V, f4t_3 MaxVal) { return VtMin(VtMax(V, MinVal), MaxVal); }

inline blt AllLt(f4t_4 A, f4t_4 B)  { return HzAnd(A < B); }
inline blt AllLte(f4t_4 A, f4t_4 B) { return HzAnd(A <= B); }
inline blt AllGt(f4t_4 A, f4t_4 B)  { return HzAnd(A > B); }
inline blt AllGte(f4t_4 A, f4t_4 B) { return HzAnd(A >= B); }
inline blt AnyLt(f4t_4 A, f4t_4 B)  { return HzOr(A < B); }
inline blt AnyLte(f4t_4 A, f4t_4 B) { return HzOr(A <= B); }
inline blt AnyGt(f4t_4 A, f4t_4 B)  { return HzOr(A > B); }
inline blt AnyGte(f4t_4 A, f4t_4 B) { return HzOr(A >= B); }
inline f4t DotP(f4t_4 A, f4t_4 B) { return HzAdd(A * B); }
inline f4t SqLen(f4t_4 V) { return HzAdd(V*V); }
inline f4t_4 MAdd(f4t_4 A,f4t_4 B,f4t_4 C) { return (A*B) + C; }
inline f4t_4 VtClamp(f4t_4 MinVal, f4t_4 V, f4t_4 MaxVal) { return VtMin(VtMax(V, MinVal), MaxVal); }

inline blt AllLt(f8t_2 A, f8t_2 B)  { return HzAnd(A < B); }
inline blt AllLte(f8t_2 A, f8t_2 B) { return HzAnd(A <= B); }
inline blt AllGt(f8t_2 A, f8t_2 B)  { return HzAnd(A > B); }
inline blt AllGte(f8t_2 A, f8t_2 B) { return HzAnd(A >= B); }
inline blt AnyLt(f8t_2 A, f8t_2 B)  { return HzOr(A < B); }
inline blt AnyLte(f8t_2 A, f8t_2 B) { return HzOr(A <= B); }
inline blt AnyGt(f8t_2 A, f8t_2 B)  { return HzOr(A > B); }
inline blt AnyGte(f8t_2 A, f8t_2 B) { return HzOr(A >= B); }
inline f8t DotP(f8t_2 A, f8t_2 B) { return HzAdd(A * B); }
inline f8t SqLen(f8t_2 V) { return HzAdd(V*V); }
inline f8t_2 MAdd(f8t_2 A,f8t_2 B,f8t_2 C) { return (A*B) + C; }
inline f8t_2 VtClamp(f8t_2 MinVal, f8t_2 V, f8t_2 MaxVal) { return VtMin(VtMax(V, MinVal), MaxVal); }

inline blt AllLt(f8t_3 A, f8t_3 B)  { return HzAnd(A < B); }
inline blt AllLte(f8t_3 A, f8t_3 B) { return HzAnd(A <= B); }
inline blt AllGt(f8t_3 A, f8t_3 B)  { return HzAnd(A > B); }
inline blt AllGte(f8t_3 A, f8t_3 B) { return HzAnd(A >= B); }
inline blt AnyLt(f8t_3 A, f8t_3 B)  { return HzOr(A < B); }
inline blt AnyLte(f8t_3 A, f8t_3 B) { return HzOr(A <= B); }
inline blt AnyGt(f8t_3 A, f8t_3 B)  { return HzOr(A > B); }
inline blt AnyGte(f8t_3 A, f8t_3 B) { return HzOr(A >= B); }
inline f8t DotP(f8t_3 A, f8t_3 B) { return HzAdd(A * B); }
inline f8t SqLen(f8t_3 V) { return HzAdd(V*V); }
inline f8t_3 MAdd(f8t_3 A,f8t_3 B,f8t_3 C) { return (A*B) + C; }
inline f8t_3 VtClamp(f8t_3 MinVal, f8t_3 V, f8t_3 MaxVal) { return VtMin(VtMax(V, MinVal), MaxVal); }

inline blt AllLt(f8t_4 A, f8t_4 B)  { return HzAnd(A < B); }
inline blt AllLte(f8t_4 A, f8t_4 B) { return HzAnd(A <= B); }
inline blt AllGt(f8t_4 A, f8t_4 B)  { return HzAnd(A > B); }
inline blt AllGte(f8t_4 A, f8t_4 B) { return HzAnd(A >= B); }
inline blt AnyLt(f8t_4 A, f8t_4 B)  { return HzOr(A < B); }
inline blt AnyLte(f8t_4 A, f8t_4 B) { return HzOr(A <= B); }
inline blt AnyGt(f8t_4 A, f8t_4 B)  { return HzOr(A > B); }
inline blt AnyGte(f8t_4 A, f8t_4 B) { return HzOr(A >= B); }
inline f8t DotP(f8t_4 A, f8t_4 B) { return HzAdd(A * B); }
inline f8t SqLen(f8t_4 V) { return HzAdd(V*V); }
inline f8t_4 MAdd(f8t_4 A,f8t_4 B,f8t_4 C) { return (A*B) + C; }
inline f8t_4 VtClamp(f8t_4 MinVal, f8t_4 V, f8t_4 MaxVal) { return VtMin(VtMax(V, MinVal), MaxVal); }

inline f4t_2 VtClamp01(f4t_2 V) { return VtClamp(MkF4t_2(0), V, MkF4t_2(1)); }

inline f4t_3 VtClamp01(f4t_3 V) { return VtClamp(MkF4t_3(0), V, MkF4t_3(1)); }

inline f4t_4 VtClamp01(f4t_4 V) { return VtClamp(MkF4t_4(0), V, MkF4t_4(1)); }

inline f8t_2 VtClamp01(f8t_2 V) { return VtClamp(MkF8t_2(0), V, MkF8t_2(1)); }

inline f8t_3 VtClamp01(f8t_3 V) { return VtClamp(MkF8t_3(0), V, MkF8t_3(1)); }

inline f8t_4 VtClamp01(f8t_4 V) { return VtClamp(MkF8t_4(0), V, MkF8t_4(1)); }

inline u1t_3 CrossP(u1t_3 A, u1t_3 B)  { return MkU1t_3( (A.y * B.z) - (A.z * B.y), -(A.x * B.z) + (A.z * B.x), (A.x * B.y) - (A.y * B.x) ); }
inline i4t_3 CrossP(i4t_3 A, i4t_3 B)  { return MkI4t_3( (A.y * B.z) - (A.z * B.y), -(A.x * B.z) + (A.z * B.x), (A.x * B.y) - (A.y * B.x) ); }
inline f4t_3 CrossP(f4t_3 A, f4t_3 B)  { return MkF4t_3( (A.y * B.z) - (A.z * B.y), -(A.x * B.z) + (A.z * B.x), (A.x * B.y) - (A.y * B.x) ); }
inline f8t_3 CrossP(f8t_3 A, f8t_3 B)  { return MkF8t_3( (A.y * B.z) - (A.z * B.y), -(A.x * B.z) + (A.z * B.x), (A.x * B.y) - (A.y * B.x) ); }


inline u1t_3 VConcat(u1t_2 XY, u1t Z) { return MkU1t_3(XY.x, XY.y, Z); }
inline u1t_3 VConcat(u1t X, u1t_2 YZ) { return MkU1t_3(X, YZ.x, YZ.y); }

inline u1t_4 VConcat(u1t_2 XY, u1t Z, u1t W) { return MkU1t_4(XY.x, XY.y, Z, W); }
inline u1t_4 VConcat(u1t X, u1t_2 YZ, u1t W) { return MkU1t_4(X, YZ.x, YZ.y, W); }
inline u1t_4 VConcat(u1t X, u1t Y, u1t_2 ZW) { return MkU1t_4(X, Y, ZW.x, ZW.y); }
inline u1t_4 VConcat(u1t_3 XYZ, u1t W) { return MkU1t_4(XYZ.x, XYZ.y, XYZ.z, W); }
inline u1t_4 VConcat(u1t X, u1t_3 YZW) { return MkU1t_4(X, YZW.x, YZW.y, YZW.z); }
inline u1t_4 VConcat(u1t_2 XY, u1t_2 ZW) { return MkU1t_4(XY.x, XY.y, ZW.x, ZW.y); }

inline i4t_3 VConcat(i4t_2 XY, i4t Z) { return MkI4t_3(XY.x, XY.y, Z); }
inline i4t_3 VConcat(i4t X, i4t_2 YZ) { return MkI4t_3(X, YZ.x, YZ.y); }

inline i4t_4 VConcat(i4t_2 XY, i4t Z, i4t W) { return MkI4t_4(XY.x, XY.y, Z, W); }
inline i4t_4 VConcat(i4t X, i4t_2 YZ, i4t W) { return MkI4t_4(X, YZ.x, YZ.y, W); }
inline i4t_4 VConcat(i4t X, i4t Y, i4t_2 ZW) { return MkI4t_4(X, Y, ZW.x, ZW.y); }
inline i4t_4 VConcat(i4t_3 XYZ, i4t W) { return MkI4t_4(XYZ.x, XYZ.y, XYZ.z, W); }
inline i4t_4 VConcat(i4t X, i4t_3 YZW) { return MkI4t_4(X, YZW.x, YZW.y, YZW.z); }
inline i4t_4 VConcat(i4t_2 XY, i4t_2 ZW) { return MkI4t_4(XY.x, XY.y, ZW.x, ZW.y); }

inline f4t_3 VConcat(f4t_2 XY, f4t Z) { return MkF4t_3(XY.x, XY.y, Z); }
inline f4t_3 VConcat(f4t X, f4t_2 YZ) { return MkF4t_3(X, YZ.x, YZ.y); }

inline f4t_4 VConcat(f4t_2 XY, f4t Z, f4t W) { return MkF4t_4(XY.x, XY.y, Z, W); }
inline f4t_4 VConcat(f4t X, f4t_2 YZ, f4t W) { return MkF4t_4(X, YZ.x, YZ.y, W); }
inline f4t_4 VConcat(f4t X, f4t Y, f4t_2 ZW) { return MkF4t_4(X, Y, ZW.x, ZW.y); }
inline f4t_4 VConcat(f4t_3 XYZ, f4t W) { return MkF4t_4(XYZ.x, XYZ.y, XYZ.z, W); }
inline f4t_4 VConcat(f4t X, f4t_3 YZW) { return MkF4t_4(X, YZW.x, YZW.y, YZW.z); }
inline f4t_4 VConcat(f4t_2 XY, f4t_2 ZW) { return MkF4t_4(XY.x, XY.y, ZW.x, ZW.y); }

inline f8t_3 VConcat(f8t_2 XY, f8t Z) { return MkF8t_3(XY.x, XY.y, Z); }
inline f8t_3 VConcat(f8t X, f8t_2 YZ) { return MkF8t_3(X, YZ.x, YZ.y); }

inline f8t_4 VConcat(f8t_2 XY, f8t Z, f8t W) { return MkF8t_4(XY.x, XY.y, Z, W); }
inline f8t_4 VConcat(f8t X, f8t_2 YZ, f8t W) { return MkF8t_4(X, YZ.x, YZ.y, W); }
inline f8t_4 VConcat(f8t X, f8t Y, f8t_2 ZW) { return MkF8t_4(X, Y, ZW.x, ZW.y); }
inline f8t_4 VConcat(f8t_3 XYZ, f8t W) { return MkF8t_4(XYZ.x, XYZ.y, XYZ.z, W); }
inline f8t_4 VConcat(f8t X, f8t_3 YZW) { return MkF8t_4(X, YZW.x, YZW.y, YZW.z); }
inline f8t_4 VConcat(f8t_2 XY, f8t_2 ZW) { return MkF8t_4(XY.x, XY.y, ZW.x, ZW.y); }

inline blt_3 VConcat(blt_2 XY, blt Z) { return MkBlt_3(XY.x, XY.y, Z); }
inline blt_3 VConcat(blt X, blt_2 YZ) { return MkBlt_3(X, YZ.x, YZ.y); }

inline blt_4 VConcat(blt_2 XY, blt Z, blt W) { return MkBlt_4(XY.x, XY.y, Z, W); }
inline blt_4 VConcat(blt X, blt_2 YZ, blt W) { return MkBlt_4(X, YZ.x, YZ.y, W); }
inline blt_4 VConcat(blt X, blt Y, blt_2 ZW) { return MkBlt_4(X, Y, ZW.x, ZW.y); }
inline blt_4 VConcat(blt_3 XYZ, blt W) { return MkBlt_4(XYZ.x, XYZ.y, XYZ.z, W); }
inline blt_4 VConcat(blt X, blt_3 YZW) { return MkBlt_4(X, YZW.x, YZW.y, YZW.z); }
inline blt_4 VConcat(blt_2 XY, blt_2 ZW) { return MkBlt_4(XY.x, XY.y, ZW.x, ZW.y); }


inline u1t_2 SwizzXX(u1t_2 V) { return MkU1t_2(V.x, V.x); }
inline u1t_2 SwizzXY(u1t_2 V) { return MkU1t_2(V.x, V.y); }
inline u1t_2 SwizzX0(u1t_2 V) { return MkU1t_2(V.x, (u1t)0); }
inline u1t_2 SwizzYX(u1t_2 V) { return MkU1t_2(V.y, V.x); }
inline u1t_2 SwizzYY(u1t_2 V) { return MkU1t_2(V.y, V.y); }
inline u1t_2 SwizzY0(u1t_2 V) { return MkU1t_2(V.y, (u1t)0); }
inline u1t_2 Swizz0X(u1t_2 V) { return MkU1t_2((u1t)0, V.x); }
inline u1t_2 Swizz0Y(u1t_2 V) { return MkU1t_2((u1t)0, V.y); }
inline u1t_3 SwizzXXX(u1t_2 V) { return MkU1t_3(V.x, V.x, V.x); }
inline u1t_3 SwizzXXY(u1t_2 V) { return MkU1t_3(V.x, V.x, V.y); }
inline u1t_3 SwizzXX0(u1t_2 V) { return MkU1t_3(V.x, V.x, (u1t)0); }
inline u1t_3 SwizzXYX(u1t_2 V) { return MkU1t_3(V.x, V.y, V.x); }
inline u1t_3 SwizzXYY(u1t_2 V) { return MkU1t_3(V.x, V.y, V.y); }
inline u1t_3 SwizzXY0(u1t_2 V) { return MkU1t_3(V.x, V.y, (u1t)0); }
inline u1t_3 SwizzX0X(u1t_2 V) { return MkU1t_3(V.x, (u1t)0, V.x); }
inline u1t_3 SwizzX0Y(u1t_2 V) { return MkU1t_3(V.x, (u1t)0, V.y); }
inline u1t_3 SwizzX00(u1t_2 V) { return MkU1t_3(V.x, (u1t)0, (u1t)0); }
inline u1t_3 SwizzYXX(u1t_2 V) { return MkU1t_3(V.y, V.x, V.x); }
inline u1t_3 SwizzYXY(u1t_2 V) { return MkU1t_3(V.y, V.x, V.y); }
inline u1t_3 SwizzYX0(u1t_2 V) { return MkU1t_3(V.y, V.x, (u1t)0); }
inline u1t_3 SwizzYYX(u1t_2 V) { return MkU1t_3(V.y, V.y, V.x); }
inline u1t_3 SwizzYYY(u1t_2 V) { return MkU1t_3(V.y, V.y, V.y); }
inline u1t_3 SwizzYY0(u1t_2 V) { return MkU1t_3(V.y, V.y, (u1t)0); }
inline u1t_3 SwizzY0X(u1t_2 V) { return MkU1t_3(V.y, (u1t)0, V.x); }
inline u1t_3 SwizzY0Y(u1t_2 V) { return MkU1t_3(V.y, (u1t)0, V.y); }
inline u1t_3 SwizzY00(u1t_2 V) { return MkU1t_3(V.y, (u1t)0, (u1t)0); }
inline u1t_3 Swizz0XX(u1t_2 V) { return MkU1t_3((u1t)0, V.x, V.x); }
inline u1t_3 Swizz0XY(u1t_2 V) { return MkU1t_3((u1t)0, V.x, V.y); }
inline u1t_3 Swizz0X0(u1t_2 V) { return MkU1t_3((u1t)0, V.x, (u1t)0); }
inline u1t_3 Swizz0YX(u1t_2 V) { return MkU1t_3((u1t)0, V.y, V.x); }
inline u1t_3 Swizz0YY(u1t_2 V) { return MkU1t_3((u1t)0, V.y, V.y); }
inline u1t_3 Swizz0Y0(u1t_2 V) { return MkU1t_3((u1t)0, V.y, (u1t)0); }
inline u1t_3 Swizz00X(u1t_2 V) { return MkU1t_3((u1t)0, (u1t)0, V.x); }
inline u1t_3 Swizz00Y(u1t_2 V) { return MkU1t_3((u1t)0, (u1t)0, V.y); }
inline u1t_4 SwizzXXXX(u1t_2 V) { return MkU1t_4(V.x, V.x, V.x, V.x); }
inline u1t_4 SwizzXXXY(u1t_2 V) { return MkU1t_4(V.x, V.x, V.x, V.y); }
inline u1t_4 SwizzXXX0(u1t_2 V) { return MkU1t_4(V.x, V.x, V.x, (u1t)0); }
inline u1t_4 SwizzXXYX(u1t_2 V) { return MkU1t_4(V.x, V.x, V.y, V.x); }
inline u1t_4 SwizzXXYY(u1t_2 V) { return MkU1t_4(V.x, V.x, V.y, V.y); }
inline u1t_4 SwizzXXY0(u1t_2 V) { return MkU1t_4(V.x, V.x, V.y, (u1t)0); }
inline u1t_4 SwizzXX0X(u1t_2 V) { return MkU1t_4(V.x, V.x, (u1t)0, V.x); }
inline u1t_4 SwizzXX0Y(u1t_2 V) { return MkU1t_4(V.x, V.x, (u1t)0, V.y); }
inline u1t_4 SwizzXX00(u1t_2 V) { return MkU1t_4(V.x, V.x, (u1t)0, (u1t)0); }
inline u1t_4 SwizzXYXX(u1t_2 V) { return MkU1t_4(V.x, V.y, V.x, V.x); }
inline u1t_4 SwizzXYXY(u1t_2 V) { return MkU1t_4(V.x, V.y, V.x, V.y); }
inline u1t_4 SwizzXYX0(u1t_2 V) { return MkU1t_4(V.x, V.y, V.x, (u1t)0); }
inline u1t_4 SwizzXYYX(u1t_2 V) { return MkU1t_4(V.x, V.y, V.y, V.x); }
inline u1t_4 SwizzXYYY(u1t_2 V) { return MkU1t_4(V.x, V.y, V.y, V.y); }
inline u1t_4 SwizzXYY0(u1t_2 V) { return MkU1t_4(V.x, V.y, V.y, (u1t)0); }
inline u1t_4 SwizzXY0X(u1t_2 V) { return MkU1t_4(V.x, V.y, (u1t)0, V.x); }
inline u1t_4 SwizzXY0Y(u1t_2 V) { return MkU1t_4(V.x, V.y, (u1t)0, V.y); }
inline u1t_4 SwizzXY00(u1t_2 V) { return MkU1t_4(V.x, V.y, (u1t)0, (u1t)0); }
inline u1t_4 SwizzX0XX(u1t_2 V) { return MkU1t_4(V.x, (u1t)0, V.x, V.x); }
inline u1t_4 SwizzX0XY(u1t_2 V) { return MkU1t_4(V.x, (u1t)0, V.x, V.y); }
inline u1t_4 SwizzX0X0(u1t_2 V) { return MkU1t_4(V.x, (u1t)0, V.x, (u1t)0); }
inline u1t_4 SwizzX0YX(u1t_2 V) { return MkU1t_4(V.x, (u1t)0, V.y, V.x); }
inline u1t_4 SwizzX0YY(u1t_2 V) { return MkU1t_4(V.x, (u1t)0, V.y, V.y); }
inline u1t_4 SwizzX0Y0(u1t_2 V) { return MkU1t_4(V.x, (u1t)0, V.y, (u1t)0); }
inline u1t_4 SwizzX00X(u1t_2 V) { return MkU1t_4(V.x, (u1t)0, (u1t)0, V.x); }
inline u1t_4 SwizzX00Y(u1t_2 V) { return MkU1t_4(V.x, (u1t)0, (u1t)0, V.y); }
inline u1t_4 SwizzX000(u1t_2 V) { return MkU1t_4(V.x, (u1t)0, (u1t)0, (u1t)0); }
inline u1t_4 SwizzYXXX(u1t_2 V) { return MkU1t_4(V.y, V.x, V.x, V.x); }
inline u1t_4 SwizzYXXY(u1t_2 V) { return MkU1t_4(V.y, V.x, V.x, V.y); }
inline u1t_4 SwizzYXX0(u1t_2 V) { return MkU1t_4(V.y, V.x, V.x, (u1t)0); }
inline u1t_4 SwizzYXYX(u1t_2 V) { return MkU1t_4(V.y, V.x, V.y, V.x); }
inline u1t_4 SwizzYXYY(u1t_2 V) { return MkU1t_4(V.y, V.x, V.y, V.y); }
inline u1t_4 SwizzYXY0(u1t_2 V) { return MkU1t_4(V.y, V.x, V.y, (u1t)0); }
inline u1t_4 SwizzYX0X(u1t_2 V) { return MkU1t_4(V.y, V.x, (u1t)0, V.x); }
inline u1t_4 SwizzYX0Y(u1t_2 V) { return MkU1t_4(V.y, V.x, (u1t)0, V.y); }
inline u1t_4 SwizzYX00(u1t_2 V) { return MkU1t_4(V.y, V.x, (u1t)0, (u1t)0); }
inline u1t_4 SwizzYYXX(u1t_2 V) { return MkU1t_4(V.y, V.y, V.x, V.x); }
inline u1t_4 SwizzYYXY(u1t_2 V) { return MkU1t_4(V.y, V.y, V.x, V.y); }
inline u1t_4 SwizzYYX0(u1t_2 V) { return MkU1t_4(V.y, V.y, V.x, (u1t)0); }
inline u1t_4 SwizzYYYX(u1t_2 V) { return MkU1t_4(V.y, V.y, V.y, V.x); }
inline u1t_4 SwizzYYYY(u1t_2 V) { return MkU1t_4(V.y, V.y, V.y, V.y); }
inline u1t_4 SwizzYYY0(u1t_2 V) { return MkU1t_4(V.y, V.y, V.y, (u1t)0); }
inline u1t_4 SwizzYY0X(u1t_2 V) { return MkU1t_4(V.y, V.y, (u1t)0, V.x); }
inline u1t_4 SwizzYY0Y(u1t_2 V) { return MkU1t_4(V.y, V.y, (u1t)0, V.y); }
inline u1t_4 SwizzYY00(u1t_2 V) { return MkU1t_4(V.y, V.y, (u1t)0, (u1t)0); }
inline u1t_4 SwizzY0XX(u1t_2 V) { return MkU1t_4(V.y, (u1t)0, V.x, V.x); }
inline u1t_4 SwizzY0XY(u1t_2 V) { return MkU1t_4(V.y, (u1t)0, V.x, V.y); }
inline u1t_4 SwizzY0X0(u1t_2 V) { return MkU1t_4(V.y, (u1t)0, V.x, (u1t)0); }
inline u1t_4 SwizzY0YX(u1t_2 V) { return MkU1t_4(V.y, (u1t)0, V.y, V.x); }
inline u1t_4 SwizzY0YY(u1t_2 V) { return MkU1t_4(V.y, (u1t)0, V.y, V.y); }
inline u1t_4 SwizzY0Y0(u1t_2 V) { return MkU1t_4(V.y, (u1t)0, V.y, (u1t)0); }
inline u1t_4 SwizzY00X(u1t_2 V) { return MkU1t_4(V.y, (u1t)0, (u1t)0, V.x); }
inline u1t_4 SwizzY00Y(u1t_2 V) { return MkU1t_4(V.y, (u1t)0, (u1t)0, V.y); }
inline u1t_4 SwizzY000(u1t_2 V) { return MkU1t_4(V.y, (u1t)0, (u1t)0, (u1t)0); }
inline u1t_4 Swizz0XXX(u1t_2 V) { return MkU1t_4((u1t)0, V.x, V.x, V.x); }
inline u1t_4 Swizz0XXY(u1t_2 V) { return MkU1t_4((u1t)0, V.x, V.x, V.y); }
inline u1t_4 Swizz0XX0(u1t_2 V) { return MkU1t_4((u1t)0, V.x, V.x, (u1t)0); }
inline u1t_4 Swizz0XYX(u1t_2 V) { return MkU1t_4((u1t)0, V.x, V.y, V.x); }
inline u1t_4 Swizz0XYY(u1t_2 V) { return MkU1t_4((u1t)0, V.x, V.y, V.y); }
inline u1t_4 Swizz0XY0(u1t_2 V) { return MkU1t_4((u1t)0, V.x, V.y, (u1t)0); }
inline u1t_4 Swizz0X0X(u1t_2 V) { return MkU1t_4((u1t)0, V.x, (u1t)0, V.x); }
inline u1t_4 Swizz0X0Y(u1t_2 V) { return MkU1t_4((u1t)0, V.x, (u1t)0, V.y); }
inline u1t_4 Swizz0X00(u1t_2 V) { return MkU1t_4((u1t)0, V.x, (u1t)0, (u1t)0); }
inline u1t_4 Swizz0YXX(u1t_2 V) { return MkU1t_4((u1t)0, V.y, V.x, V.x); }
inline u1t_4 Swizz0YXY(u1t_2 V) { return MkU1t_4((u1t)0, V.y, V.x, V.y); }
inline u1t_4 Swizz0YX0(u1t_2 V) { return MkU1t_4((u1t)0, V.y, V.x, (u1t)0); }
inline u1t_4 Swizz0YYX(u1t_2 V) { return MkU1t_4((u1t)0, V.y, V.y, V.x); }
inline u1t_4 Swizz0YYY(u1t_2 V) { return MkU1t_4((u1t)0, V.y, V.y, V.y); }
inline u1t_4 Swizz0YY0(u1t_2 V) { return MkU1t_4((u1t)0, V.y, V.y, (u1t)0); }
inline u1t_4 Swizz0Y0X(u1t_2 V) { return MkU1t_4((u1t)0, V.y, (u1t)0, V.x); }
inline u1t_4 Swizz0Y0Y(u1t_2 V) { return MkU1t_4((u1t)0, V.y, (u1t)0, V.y); }
inline u1t_4 Swizz0Y00(u1t_2 V) { return MkU1t_4((u1t)0, V.y, (u1t)0, (u1t)0); }
inline u1t_4 Swizz00XX(u1t_2 V) { return MkU1t_4((u1t)0, (u1t)0, V.x, V.x); }
inline u1t_4 Swizz00XY(u1t_2 V) { return MkU1t_4((u1t)0, (u1t)0, V.x, V.y); }
inline u1t_4 Swizz00X0(u1t_2 V) { return MkU1t_4((u1t)0, (u1t)0, V.x, (u1t)0); }
inline u1t_4 Swizz00YX(u1t_2 V) { return MkU1t_4((u1t)0, (u1t)0, V.y, V.x); }
inline u1t_4 Swizz00YY(u1t_2 V) { return MkU1t_4((u1t)0, (u1t)0, V.y, V.y); }
inline u1t_4 Swizz00Y0(u1t_2 V) { return MkU1t_4((u1t)0, (u1t)0, V.y, (u1t)0); }
inline u1t_4 Swizz000X(u1t_2 V) { return MkU1t_4((u1t)0, (u1t)0, (u1t)0, V.x); }
inline u1t_4 Swizz000Y(u1t_2 V) { return MkU1t_4((u1t)0, (u1t)0, (u1t)0, V.y); }
inline u1t_2 SwizzXX(u1t_3 V) { return MkU1t_2(V.x, V.x); }
inline u1t_2 SwizzXY(u1t_3 V) { return MkU1t_2(V.x, V.y); }
inline u1t_2 SwizzXZ(u1t_3 V) { return MkU1t_2(V.x, V.z); }
inline u1t_2 SwizzX0(u1t_3 V) { return MkU1t_2(V.x, (u1t)0); }
inline u1t_2 SwizzYX(u1t_3 V) { return MkU1t_2(V.y, V.x); }
inline u1t_2 SwizzYY(u1t_3 V) { return MkU1t_2(V.y, V.y); }
inline u1t_2 SwizzYZ(u1t_3 V) { return MkU1t_2(V.y, V.z); }
inline u1t_2 SwizzY0(u1t_3 V) { return MkU1t_2(V.y, (u1t)0); }
inline u1t_2 SwizzZX(u1t_3 V) { return MkU1t_2(V.z, V.x); }
inline u1t_2 SwizzZY(u1t_3 V) { return MkU1t_2(V.z, V.y); }
inline u1t_2 SwizzZZ(u1t_3 V) { return MkU1t_2(V.z, V.z); }
inline u1t_2 SwizzZ0(u1t_3 V) { return MkU1t_2(V.z, (u1t)0); }
inline u1t_2 Swizz0X(u1t_3 V) { return MkU1t_2((u1t)0, V.x); }
inline u1t_2 Swizz0Y(u1t_3 V) { return MkU1t_2((u1t)0, V.y); }
inline u1t_2 Swizz0Z(u1t_3 V) { return MkU1t_2((u1t)0, V.z); }
inline u1t_3 SwizzXXX(u1t_3 V) { return MkU1t_3(V.x, V.x, V.x); }
inline u1t_3 SwizzXXY(u1t_3 V) { return MkU1t_3(V.x, V.x, V.y); }
inline u1t_3 SwizzXXZ(u1t_3 V) { return MkU1t_3(V.x, V.x, V.z); }
inline u1t_3 SwizzXX0(u1t_3 V) { return MkU1t_3(V.x, V.x, (u1t)0); }
inline u1t_3 SwizzXYX(u1t_3 V) { return MkU1t_3(V.x, V.y, V.x); }
inline u1t_3 SwizzXYY(u1t_3 V) { return MkU1t_3(V.x, V.y, V.y); }
inline u1t_3 SwizzXYZ(u1t_3 V) { return MkU1t_3(V.x, V.y, V.z); }
inline u1t_3 SwizzXY0(u1t_3 V) { return MkU1t_3(V.x, V.y, (u1t)0); }
inline u1t_3 SwizzXZX(u1t_3 V) { return MkU1t_3(V.x, V.z, V.x); }
inline u1t_3 SwizzXZY(u1t_3 V) { return MkU1t_3(V.x, V.z, V.y); }
inline u1t_3 SwizzXZZ(u1t_3 V) { return MkU1t_3(V.x, V.z, V.z); }
inline u1t_3 SwizzXZ0(u1t_3 V) { return MkU1t_3(V.x, V.z, (u1t)0); }
inline u1t_3 SwizzX0X(u1t_3 V) { return MkU1t_3(V.x, (u1t)0, V.x); }
inline u1t_3 SwizzX0Y(u1t_3 V) { return MkU1t_3(V.x, (u1t)0, V.y); }
inline u1t_3 SwizzX0Z(u1t_3 V) { return MkU1t_3(V.x, (u1t)0, V.z); }
inline u1t_3 SwizzX00(u1t_3 V) { return MkU1t_3(V.x, (u1t)0, (u1t)0); }
inline u1t_3 SwizzYXX(u1t_3 V) { return MkU1t_3(V.y, V.x, V.x); }
inline u1t_3 SwizzYXY(u1t_3 V) { return MkU1t_3(V.y, V.x, V.y); }
inline u1t_3 SwizzYXZ(u1t_3 V) { return MkU1t_3(V.y, V.x, V.z); }
inline u1t_3 SwizzYX0(u1t_3 V) { return MkU1t_3(V.y, V.x, (u1t)0); }
inline u1t_3 SwizzYYX(u1t_3 V) { return MkU1t_3(V.y, V.y, V.x); }
inline u1t_3 SwizzYYY(u1t_3 V) { return MkU1t_3(V.y, V.y, V.y); }
inline u1t_3 SwizzYYZ(u1t_3 V) { return MkU1t_3(V.y, V.y, V.z); }
inline u1t_3 SwizzYY0(u1t_3 V) { return MkU1t_3(V.y, V.y, (u1t)0); }
inline u1t_3 SwizzYZX(u1t_3 V) { return MkU1t_3(V.y, V.z, V.x); }
inline u1t_3 SwizzYZY(u1t_3 V) { return MkU1t_3(V.y, V.z, V.y); }
inline u1t_3 SwizzYZZ(u1t_3 V) { return MkU1t_3(V.y, V.z, V.z); }
inline u1t_3 SwizzYZ0(u1t_3 V) { return MkU1t_3(V.y, V.z, (u1t)0); }
inline u1t_3 SwizzY0X(u1t_3 V) { return MkU1t_3(V.y, (u1t)0, V.x); }
inline u1t_3 SwizzY0Y(u1t_3 V) { return MkU1t_3(V.y, (u1t)0, V.y); }
inline u1t_3 SwizzY0Z(u1t_3 V) { return MkU1t_3(V.y, (u1t)0, V.z); }
inline u1t_3 SwizzY00(u1t_3 V) { return MkU1t_3(V.y, (u1t)0, (u1t)0); }
inline u1t_3 SwizzZXX(u1t_3 V) { return MkU1t_3(V.z, V.x, V.x); }
inline u1t_3 SwizzZXY(u1t_3 V) { return MkU1t_3(V.z, V.x, V.y); }
inline u1t_3 SwizzZXZ(u1t_3 V) { return MkU1t_3(V.z, V.x, V.z); }
inline u1t_3 SwizzZX0(u1t_3 V) { return MkU1t_3(V.z, V.x, (u1t)0); }
inline u1t_3 SwizzZYX(u1t_3 V) { return MkU1t_3(V.z, V.y, V.x); }
inline u1t_3 SwizzZYY(u1t_3 V) { return MkU1t_3(V.z, V.y, V.y); }
inline u1t_3 SwizzZYZ(u1t_3 V) { return MkU1t_3(V.z, V.y, V.z); }
inline u1t_3 SwizzZY0(u1t_3 V) { return MkU1t_3(V.z, V.y, (u1t)0); }
inline u1t_3 SwizzZZX(u1t_3 V) { return MkU1t_3(V.z, V.z, V.x); }
inline u1t_3 SwizzZZY(u1t_3 V) { return MkU1t_3(V.z, V.z, V.y); }
inline u1t_3 SwizzZZZ(u1t_3 V) { return MkU1t_3(V.z, V.z, V.z); }
inline u1t_3 SwizzZZ0(u1t_3 V) { return MkU1t_3(V.z, V.z, (u1t)0); }
inline u1t_3 SwizzZ0X(u1t_3 V) { return MkU1t_3(V.z, (u1t)0, V.x); }
inline u1t_3 SwizzZ0Y(u1t_3 V) { return MkU1t_3(V.z, (u1t)0, V.y); }
inline u1t_3 SwizzZ0Z(u1t_3 V) { return MkU1t_3(V.z, (u1t)0, V.z); }
inline u1t_3 SwizzZ00(u1t_3 V) { return MkU1t_3(V.z, (u1t)0, (u1t)0); }
inline u1t_3 Swizz0XX(u1t_3 V) { return MkU1t_3((u1t)0, V.x, V.x); }
inline u1t_3 Swizz0XY(u1t_3 V) { return MkU1t_3((u1t)0, V.x, V.y); }
inline u1t_3 Swizz0XZ(u1t_3 V) { return MkU1t_3((u1t)0, V.x, V.z); }
inline u1t_3 Swizz0X0(u1t_3 V) { return MkU1t_3((u1t)0, V.x, (u1t)0); }
inline u1t_3 Swizz0YX(u1t_3 V) { return MkU1t_3((u1t)0, V.y, V.x); }
inline u1t_3 Swizz0YY(u1t_3 V) { return MkU1t_3((u1t)0, V.y, V.y); }
inline u1t_3 Swizz0YZ(u1t_3 V) { return MkU1t_3((u1t)0, V.y, V.z); }
inline u1t_3 Swizz0Y0(u1t_3 V) { return MkU1t_3((u1t)0, V.y, (u1t)0); }
inline u1t_3 Swizz0ZX(u1t_3 V) { return MkU1t_3((u1t)0, V.z, V.x); }
inline u1t_3 Swizz0ZY(u1t_3 V) { return MkU1t_3((u1t)0, V.z, V.y); }
inline u1t_3 Swizz0ZZ(u1t_3 V) { return MkU1t_3((u1t)0, V.z, V.z); }
inline u1t_3 Swizz0Z0(u1t_3 V) { return MkU1t_3((u1t)0, V.z, (u1t)0); }
inline u1t_3 Swizz00X(u1t_3 V) { return MkU1t_3((u1t)0, (u1t)0, V.x); }
inline u1t_3 Swizz00Y(u1t_3 V) { return MkU1t_3((u1t)0, (u1t)0, V.y); }
inline u1t_3 Swizz00Z(u1t_3 V) { return MkU1t_3((u1t)0, (u1t)0, V.z); }
inline u1t_4 SwizzXXXX(u1t_3 V) { return MkU1t_4(V.x, V.x, V.x, V.x); }
inline u1t_4 SwizzXXXY(u1t_3 V) { return MkU1t_4(V.x, V.x, V.x, V.y); }
inline u1t_4 SwizzXXXZ(u1t_3 V) { return MkU1t_4(V.x, V.x, V.x, V.z); }
inline u1t_4 SwizzXXX0(u1t_3 V) { return MkU1t_4(V.x, V.x, V.x, (u1t)0); }
inline u1t_4 SwizzXXYX(u1t_3 V) { return MkU1t_4(V.x, V.x, V.y, V.x); }
inline u1t_4 SwizzXXYY(u1t_3 V) { return MkU1t_4(V.x, V.x, V.y, V.y); }
inline u1t_4 SwizzXXYZ(u1t_3 V) { return MkU1t_4(V.x, V.x, V.y, V.z); }
inline u1t_4 SwizzXXY0(u1t_3 V) { return MkU1t_4(V.x, V.x, V.y, (u1t)0); }
inline u1t_4 SwizzXXZX(u1t_3 V) { return MkU1t_4(V.x, V.x, V.z, V.x); }
inline u1t_4 SwizzXXZY(u1t_3 V) { return MkU1t_4(V.x, V.x, V.z, V.y); }
inline u1t_4 SwizzXXZZ(u1t_3 V) { return MkU1t_4(V.x, V.x, V.z, V.z); }
inline u1t_4 SwizzXXZ0(u1t_3 V) { return MkU1t_4(V.x, V.x, V.z, (u1t)0); }
inline u1t_4 SwizzXX0X(u1t_3 V) { return MkU1t_4(V.x, V.x, (u1t)0, V.x); }
inline u1t_4 SwizzXX0Y(u1t_3 V) { return MkU1t_4(V.x, V.x, (u1t)0, V.y); }
inline u1t_4 SwizzXX0Z(u1t_3 V) { return MkU1t_4(V.x, V.x, (u1t)0, V.z); }
inline u1t_4 SwizzXX00(u1t_3 V) { return MkU1t_4(V.x, V.x, (u1t)0, (u1t)0); }
inline u1t_4 SwizzXYXX(u1t_3 V) { return MkU1t_4(V.x, V.y, V.x, V.x); }
inline u1t_4 SwizzXYXY(u1t_3 V) { return MkU1t_4(V.x, V.y, V.x, V.y); }
inline u1t_4 SwizzXYXZ(u1t_3 V) { return MkU1t_4(V.x, V.y, V.x, V.z); }
inline u1t_4 SwizzXYX0(u1t_3 V) { return MkU1t_4(V.x, V.y, V.x, (u1t)0); }
inline u1t_4 SwizzXYYX(u1t_3 V) { return MkU1t_4(V.x, V.y, V.y, V.x); }
inline u1t_4 SwizzXYYY(u1t_3 V) { return MkU1t_4(V.x, V.y, V.y, V.y); }
inline u1t_4 SwizzXYYZ(u1t_3 V) { return MkU1t_4(V.x, V.y, V.y, V.z); }
inline u1t_4 SwizzXYY0(u1t_3 V) { return MkU1t_4(V.x, V.y, V.y, (u1t)0); }
inline u1t_4 SwizzXYZX(u1t_3 V) { return MkU1t_4(V.x, V.y, V.z, V.x); }
inline u1t_4 SwizzXYZY(u1t_3 V) { return MkU1t_4(V.x, V.y, V.z, V.y); }
inline u1t_4 SwizzXYZZ(u1t_3 V) { return MkU1t_4(V.x, V.y, V.z, V.z); }
inline u1t_4 SwizzXYZ0(u1t_3 V) { return MkU1t_4(V.x, V.y, V.z, (u1t)0); }
inline u1t_4 SwizzXY0X(u1t_3 V) { return MkU1t_4(V.x, V.y, (u1t)0, V.x); }
inline u1t_4 SwizzXY0Y(u1t_3 V) { return MkU1t_4(V.x, V.y, (u1t)0, V.y); }
inline u1t_4 SwizzXY0Z(u1t_3 V) { return MkU1t_4(V.x, V.y, (u1t)0, V.z); }
inline u1t_4 SwizzXY00(u1t_3 V) { return MkU1t_4(V.x, V.y, (u1t)0, (u1t)0); }
inline u1t_4 SwizzXZXX(u1t_3 V) { return MkU1t_4(V.x, V.z, V.x, V.x); }
inline u1t_4 SwizzXZXY(u1t_3 V) { return MkU1t_4(V.x, V.z, V.x, V.y); }
inline u1t_4 SwizzXZXZ(u1t_3 V) { return MkU1t_4(V.x, V.z, V.x, V.z); }
inline u1t_4 SwizzXZX0(u1t_3 V) { return MkU1t_4(V.x, V.z, V.x, (u1t)0); }
inline u1t_4 SwizzXZYX(u1t_3 V) { return MkU1t_4(V.x, V.z, V.y, V.x); }
inline u1t_4 SwizzXZYY(u1t_3 V) { return MkU1t_4(V.x, V.z, V.y, V.y); }
inline u1t_4 SwizzXZYZ(u1t_3 V) { return MkU1t_4(V.x, V.z, V.y, V.z); }
inline u1t_4 SwizzXZY0(u1t_3 V) { return MkU1t_4(V.x, V.z, V.y, (u1t)0); }
inline u1t_4 SwizzXZZX(u1t_3 V) { return MkU1t_4(V.x, V.z, V.z, V.x); }
inline u1t_4 SwizzXZZY(u1t_3 V) { return MkU1t_4(V.x, V.z, V.z, V.y); }
inline u1t_4 SwizzXZZZ(u1t_3 V) { return MkU1t_4(V.x, V.z, V.z, V.z); }
inline u1t_4 SwizzXZZ0(u1t_3 V) { return MkU1t_4(V.x, V.z, V.z, (u1t)0); }
inline u1t_4 SwizzXZ0X(u1t_3 V) { return MkU1t_4(V.x, V.z, (u1t)0, V.x); }
inline u1t_4 SwizzXZ0Y(u1t_3 V) { return MkU1t_4(V.x, V.z, (u1t)0, V.y); }
inline u1t_4 SwizzXZ0Z(u1t_3 V) { return MkU1t_4(V.x, V.z, (u1t)0, V.z); }
inline u1t_4 SwizzXZ00(u1t_3 V) { return MkU1t_4(V.x, V.z, (u1t)0, (u1t)0); }
inline u1t_4 SwizzX0XX(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, V.x, V.x); }
inline u1t_4 SwizzX0XY(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, V.x, V.y); }
inline u1t_4 SwizzX0XZ(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, V.x, V.z); }
inline u1t_4 SwizzX0X0(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, V.x, (u1t)0); }
inline u1t_4 SwizzX0YX(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, V.y, V.x); }
inline u1t_4 SwizzX0YY(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, V.y, V.y); }
inline u1t_4 SwizzX0YZ(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, V.y, V.z); }
inline u1t_4 SwizzX0Y0(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, V.y, (u1t)0); }
inline u1t_4 SwizzX0ZX(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, V.z, V.x); }
inline u1t_4 SwizzX0ZY(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, V.z, V.y); }
inline u1t_4 SwizzX0ZZ(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, V.z, V.z); }
inline u1t_4 SwizzX0Z0(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, V.z, (u1t)0); }
inline u1t_4 SwizzX00X(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, (u1t)0, V.x); }
inline u1t_4 SwizzX00Y(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, (u1t)0, V.y); }
inline u1t_4 SwizzX00Z(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, (u1t)0, V.z); }
inline u1t_4 SwizzX000(u1t_3 V) { return MkU1t_4(V.x, (u1t)0, (u1t)0, (u1t)0); }
inline u1t_4 SwizzYXXX(u1t_3 V) { return MkU1t_4(V.y, V.x, V.x, V.x); }
inline u1t_4 SwizzYXXY(u1t_3 V) { return MkU1t_4(V.y, V.x, V.x, V.y); }
inline u1t_4 SwizzYXXZ(u1t_3 V) { return MkU1t_4(V.y, V.x, V.x, V.z); }
inline u1t_4 SwizzYXX0(u1t_3 V) { return MkU1t_4(V.y, V.x, V.x, (u1t)0); }
inline u1t_4 SwizzYXYX(u1t_3 V) { return MkU1t_4(V.y, V.x, V.y, V.x); }
inline u1t_4 SwizzYXYY(u1t_3 V) { return MkU1t_4(V.y, V.x, V.y, V.y); }
inline u1t_4 SwizzYXYZ(u1t_3 V) { return MkU1t_4(V.y, V.x, V.y, V.z); }
inline u1t_4 SwizzYXY0(u1t_3 V) { return MkU1t_4(V.y, V.x, V.y, (u1t)0); }
inline u1t_4 SwizzYXZX(u1t_3 V) { return MkU1t_4(V.y, V.x, V.z, V.x); }
inline u1t_4 SwizzYXZY(u1t_3 V) { return MkU1t_4(V.y, V.x, V.z, V.y); }
inline u1t_4 SwizzYXZZ(u1t_3 V) { return MkU1t_4(V.y, V.x, V.z, V.z); }
inline u1t_4 SwizzYXZ0(u1t_3 V) { return MkU1t_4(V.y, V.x, V.z, (u1t)0); }
inline u1t_4 SwizzYX0X(u1t_3 V) { return MkU1t_4(V.y, V.x, (u1t)0, V.x); }
inline u1t_4 SwizzYX0Y(u1t_3 V) { return MkU1t_4(V.y, V.x, (u1t)0, V.y); }
inline u1t_4 SwizzYX0Z(u1t_3 V) { return MkU1t_4(V.y, V.x, (u1t)0, V.z); }
inline u1t_4 SwizzYX00(u1t_3 V) { return MkU1t_4(V.y, V.x, (u1t)0, (u1t)0); }
inline u1t_4 SwizzYYXX(u1t_3 V) { return MkU1t_4(V.y, V.y, V.x, V.x); }
inline u1t_4 SwizzYYXY(u1t_3 V) { return MkU1t_4(V.y, V.y, V.x, V.y); }
inline u1t_4 SwizzYYXZ(u1t_3 V) { return MkU1t_4(V.y, V.y, V.x, V.z); }
inline u1t_4 SwizzYYX0(u1t_3 V) { return MkU1t_4(V.y, V.y, V.x, (u1t)0); }
inline u1t_4 SwizzYYYX(u1t_3 V) { return MkU1t_4(V.y, V.y, V.y, V.x); }
inline u1t_4 SwizzYYYY(u1t_3 V) { return MkU1t_4(V.y, V.y, V.y, V.y); }
inline u1t_4 SwizzYYYZ(u1t_3 V) { return MkU1t_4(V.y, V.y, V.y, V.z); }
inline u1t_4 SwizzYYY0(u1t_3 V) { return MkU1t_4(V.y, V.y, V.y, (u1t)0); }
inline u1t_4 SwizzYYZX(u1t_3 V) { return MkU1t_4(V.y, V.y, V.z, V.x); }
inline u1t_4 SwizzYYZY(u1t_3 V) { return MkU1t_4(V.y, V.y, V.z, V.y); }
inline u1t_4 SwizzYYZZ(u1t_3 V) { return MkU1t_4(V.y, V.y, V.z, V.z); }
inline u1t_4 SwizzYYZ0(u1t_3 V) { return MkU1t_4(V.y, V.y, V.z, (u1t)0); }
inline u1t_4 SwizzYY0X(u1t_3 V) { return MkU1t_4(V.y, V.y, (u1t)0, V.x); }
inline u1t_4 SwizzYY0Y(u1t_3 V) { return MkU1t_4(V.y, V.y, (u1t)0, V.y); }
inline u1t_4 SwizzYY0Z(u1t_3 V) { return MkU1t_4(V.y, V.y, (u1t)0, V.z); }
inline u1t_4 SwizzYY00(u1t_3 V) { return MkU1t_4(V.y, V.y, (u1t)0, (u1t)0); }
inline u1t_4 SwizzYZXX(u1t_3 V) { return MkU1t_4(V.y, V.z, V.x, V.x); }
inline u1t_4 SwizzYZXY(u1t_3 V) { return MkU1t_4(V.y, V.z, V.x, V.y); }
inline u1t_4 SwizzYZXZ(u1t_3 V) { return MkU1t_4(V.y, V.z, V.x, V.z); }
inline u1t_4 SwizzYZX0(u1t_3 V) { return MkU1t_4(V.y, V.z, V.x, (u1t)0); }
inline u1t_4 SwizzYZYX(u1t_3 V) { return MkU1t_4(V.y, V.z, V.y, V.x); }
inline u1t_4 SwizzYZYY(u1t_3 V) { return MkU1t_4(V.y, V.z, V.y, V.y); }
inline u1t_4 SwizzYZYZ(u1t_3 V) { return MkU1t_4(V.y, V.z, V.y, V.z); }
inline u1t_4 SwizzYZY0(u1t_3 V) { return MkU1t_4(V.y, V.z, V.y, (u1t)0); }
inline u1t_4 SwizzYZZX(u1t_3 V) { return MkU1t_4(V.y, V.z, V.z, V.x); }
inline u1t_4 SwizzYZZY(u1t_3 V) { return MkU1t_4(V.y, V.z, V.z, V.y); }
inline u1t_4 SwizzYZZZ(u1t_3 V) { return MkU1t_4(V.y, V.z, V.z, V.z); }
inline u1t_4 SwizzYZZ0(u1t_3 V) { return MkU1t_4(V.y, V.z, V.z, (u1t)0); }
inline u1t_4 SwizzYZ0X(u1t_3 V) { return MkU1t_4(V.y, V.z, (u1t)0, V.x); }
inline u1t_4 SwizzYZ0Y(u1t_3 V) { return MkU1t_4(V.y, V.z, (u1t)0, V.y); }
inline u1t_4 SwizzYZ0Z(u1t_3 V) { return MkU1t_4(V.y, V.z, (u1t)0, V.z); }
inline u1t_4 SwizzYZ00(u1t_3 V) { return MkU1t_4(V.y, V.z, (u1t)0, (u1t)0); }
inline u1t_4 SwizzY0XX(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, V.x, V.x); }
inline u1t_4 SwizzY0XY(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, V.x, V.y); }
inline u1t_4 SwizzY0XZ(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, V.x, V.z); }
inline u1t_4 SwizzY0X0(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, V.x, (u1t)0); }
inline u1t_4 SwizzY0YX(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, V.y, V.x); }
inline u1t_4 SwizzY0YY(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, V.y, V.y); }
inline u1t_4 SwizzY0YZ(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, V.y, V.z); }
inline u1t_4 SwizzY0Y0(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, V.y, (u1t)0); }
inline u1t_4 SwizzY0ZX(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, V.z, V.x); }
inline u1t_4 SwizzY0ZY(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, V.z, V.y); }
inline u1t_4 SwizzY0ZZ(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, V.z, V.z); }
inline u1t_4 SwizzY0Z0(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, V.z, (u1t)0); }
inline u1t_4 SwizzY00X(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, (u1t)0, V.x); }
inline u1t_4 SwizzY00Y(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, (u1t)0, V.y); }
inline u1t_4 SwizzY00Z(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, (u1t)0, V.z); }
inline u1t_4 SwizzY000(u1t_3 V) { return MkU1t_4(V.y, (u1t)0, (u1t)0, (u1t)0); }
inline u1t_4 SwizzZXXX(u1t_3 V) { return MkU1t_4(V.z, V.x, V.x, V.x); }
inline u1t_4 SwizzZXXY(u1t_3 V) { return MkU1t_4(V.z, V.x, V.x, V.y); }
inline u1t_4 SwizzZXXZ(u1t_3 V) { return MkU1t_4(V.z, V.x, V.x, V.z); }
inline u1t_4 SwizzZXX0(u1t_3 V) { return MkU1t_4(V.z, V.x, V.x, (u1t)0); }
inline u1t_4 SwizzZXYX(u1t_3 V) { return MkU1t_4(V.z, V.x, V.y, V.x); }
inline u1t_4 SwizzZXYY(u1t_3 V) { return MkU1t_4(V.z, V.x, V.y, V.y); }
inline u1t_4 SwizzZXYZ(u1t_3 V) { return MkU1t_4(V.z, V.x, V.y, V.z); }
inline u1t_4 SwizzZXY0(u1t_3 V) { return MkU1t_4(V.z, V.x, V.y, (u1t)0); }
inline u1t_4 SwizzZXZX(u1t_3 V) { return MkU1t_4(V.z, V.x, V.z, V.x); }
inline u1t_4 SwizzZXZY(u1t_3 V) { return MkU1t_4(V.z, V.x, V.z, V.y); }
inline u1t_4 SwizzZXZZ(u1t_3 V) { return MkU1t_4(V.z, V.x, V.z, V.z); }
inline u1t_4 SwizzZXZ0(u1t_3 V) { return MkU1t_4(V.z, V.x, V.z, (u1t)0); }
inline u1t_4 SwizzZX0X(u1t_3 V) { return MkU1t_4(V.z, V.x, (u1t)0, V.x); }
inline u1t_4 SwizzZX0Y(u1t_3 V) { return MkU1t_4(V.z, V.x, (u1t)0, V.y); }
inline u1t_4 SwizzZX0Z(u1t_3 V) { return MkU1t_4(V.z, V.x, (u1t)0, V.z); }
inline u1t_4 SwizzZX00(u1t_3 V) { return MkU1t_4(V.z, V.x, (u1t)0, (u1t)0); }
inline u1t_4 SwizzZYXX(u1t_3 V) { return MkU1t_4(V.z, V.y, V.x, V.x); }
inline u1t_4 SwizzZYXY(u1t_3 V) { return MkU1t_4(V.z, V.y, V.x, V.y); }
inline u1t_4 SwizzZYXZ(u1t_3 V) { return MkU1t_4(V.z, V.y, V.x, V.z); }
inline u1t_4 SwizzZYX0(u1t_3 V) { return MkU1t_4(V.z, V.y, V.x, (u1t)0); }
inline u1t_4 SwizzZYYX(u1t_3 V) { return MkU1t_4(V.z, V.y, V.y, V.x); }
inline u1t_4 SwizzZYYY(u1t_3 V) { return MkU1t_4(V.z, V.y, V.y, V.y); }
inline u1t_4 SwizzZYYZ(u1t_3 V) { return MkU1t_4(V.z, V.y, V.y, V.z); }
inline u1t_4 SwizzZYY0(u1t_3 V) { return MkU1t_4(V.z, V.y, V.y, (u1t)0); }
inline u1t_4 SwizzZYZX(u1t_3 V) { return MkU1t_4(V.z, V.y, V.z, V.x); }
inline u1t_4 SwizzZYZY(u1t_3 V) { return MkU1t_4(V.z, V.y, V.z, V.y); }
inline u1t_4 SwizzZYZZ(u1t_3 V) { return MkU1t_4(V.z, V.y, V.z, V.z); }
inline u1t_4 SwizzZYZ0(u1t_3 V) { return MkU1t_4(V.z, V.y, V.z, (u1t)0); }
inline u1t_4 SwizzZY0X(u1t_3 V) { return MkU1t_4(V.z, V.y, (u1t)0, V.x); }
inline u1t_4 SwizzZY0Y(u1t_3 V) { return MkU1t_4(V.z, V.y, (u1t)0, V.y); }
inline u1t_4 SwizzZY0Z(u1t_3 V) { return MkU1t_4(V.z, V.y, (u1t)0, V.z); }
inline u1t_4 SwizzZY00(u1t_3 V) { return MkU1t_4(V.z, V.y, (u1t)0, (u1t)0); }
inline u1t_4 SwizzZZXX(u1t_3 V) { return MkU1t_4(V.z, V.z, V.x, V.x); }
inline u1t_4 SwizzZZXY(u1t_3 V) { return MkU1t_4(V.z, V.z, V.x, V.y); }
inline u1t_4 SwizzZZXZ(u1t_3 V) { return MkU1t_4(V.z, V.z, V.x, V.z); }
inline u1t_4 SwizzZZX0(u1t_3 V) { return MkU1t_4(V.z, V.z, V.x, (u1t)0); }
inline u1t_4 SwizzZZYX(u1t_3 V) { return MkU1t_4(V.z, V.z, V.y, V.x); }
inline u1t_4 SwizzZZYY(u1t_3 V) { return MkU1t_4(V.z, V.z, V.y, V.y); }
inline u1t_4 SwizzZZYZ(u1t_3 V) { return MkU1t_4(V.z, V.z, V.y, V.z); }
inline u1t_4 SwizzZZY0(u1t_3 V) { return MkU1t_4(V.z, V.z, V.y, (u1t)0); }
inline u1t_4 SwizzZZZX(u1t_3 V) { return MkU1t_4(V.z, V.z, V.z, V.x); }
inline u1t_4 SwizzZZZY(u1t_3 V) { return MkU1t_4(V.z, V.z, V.z, V.y); }
inline u1t_4 SwizzZZZZ(u1t_3 V) { return MkU1t_4(V.z, V.z, V.z, V.z); }
inline u1t_4 SwizzZZZ0(u1t_3 V) { return MkU1t_4(V.z, V.z, V.z, (u1t)0); }
inline u1t_4 SwizzZZ0X(u1t_3 V) { return MkU1t_4(V.z, V.z, (u1t)0, V.x); }
inline u1t_4 SwizzZZ0Y(u1t_3 V) { return MkU1t_4(V.z, V.z, (u1t)0, V.y); }
inline u1t_4 SwizzZZ0Z(u1t_3 V) { return MkU1t_4(V.z, V.z, (u1t)0, V.z); }
inline u1t_4 SwizzZZ00(u1t_3 V) { return MkU1t_4(V.z, V.z, (u1t)0, (u1t)0); }
inline u1t_4 SwizzZ0XX(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, V.x, V.x); }
inline u1t_4 SwizzZ0XY(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, V.x, V.y); }
inline u1t_4 SwizzZ0XZ(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, V.x, V.z); }
inline u1t_4 SwizzZ0X0(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, V.x, (u1t)0); }
inline u1t_4 SwizzZ0YX(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, V.y, V.x); }
inline u1t_4 SwizzZ0YY(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, V.y, V.y); }
inline u1t_4 SwizzZ0YZ(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, V.y, V.z); }
inline u1t_4 SwizzZ0Y0(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, V.y, (u1t)0); }
inline u1t_4 SwizzZ0ZX(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, V.z, V.x); }
inline u1t_4 SwizzZ0ZY(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, V.z, V.y); }
inline u1t_4 SwizzZ0ZZ(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, V.z, V.z); }
inline u1t_4 SwizzZ0Z0(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, V.z, (u1t)0); }
inline u1t_4 SwizzZ00X(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, (u1t)0, V.x); }
inline u1t_4 SwizzZ00Y(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, (u1t)0, V.y); }
inline u1t_4 SwizzZ00Z(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, (u1t)0, V.z); }
inline u1t_4 SwizzZ000(u1t_3 V) { return MkU1t_4(V.z, (u1t)0, (u1t)0, (u1t)0); }
inline u1t_4 Swizz0XXX(u1t_3 V) { return MkU1t_4((u1t)0, V.x, V.x, V.x); }
inline u1t_4 Swizz0XXY(u1t_3 V) { return MkU1t_4((u1t)0, V.x, V.x, V.y); }
inline u1t_4 Swizz0XXZ(u1t_3 V) { return MkU1t_4((u1t)0, V.x, V.x, V.z); }
inline u1t_4 Swizz0XX0(u1t_3 V) { return MkU1t_4((u1t)0, V.x, V.x, (u1t)0); }
inline u1t_4 Swizz0XYX(u1t_3 V) { return MkU1t_4((u1t)0, V.x, V.y, V.x); }
inline u1t_4 Swizz0XYY(u1t_3 V) { return MkU1t_4((u1t)0, V.x, V.y, V.y); }
inline u1t_4 Swizz0XYZ(u1t_3 V) { return MkU1t_4((u1t)0, V.x, V.y, V.z); }
inline u1t_4 Swizz0XY0(u1t_3 V) { return MkU1t_4((u1t)0, V.x, V.y, (u1t)0); }
inline u1t_4 Swizz0XZX(u1t_3 V) { return MkU1t_4((u1t)0, V.x, V.z, V.x); }
inline u1t_4 Swizz0XZY(u1t_3 V) { return MkU1t_4((u1t)0, V.x, V.z, V.y); }
inline u1t_4 Swizz0XZZ(u1t_3 V) { return MkU1t_4((u1t)0, V.x, V.z, V.z); }
inline u1t_4 Swizz0XZ0(u1t_3 V) { return MkU1t_4((u1t)0, V.x, V.z, (u1t)0); }
inline u1t_4 Swizz0X0X(u1t_3 V) { return MkU1t_4((u1t)0, V.x, (u1t)0, V.x); }
inline u1t_4 Swizz0X0Y(u1t_3 V) { return MkU1t_4((u1t)0, V.x, (u1t)0, V.y); }
inline u1t_4 Swizz0X0Z(u1t_3 V) { return MkU1t_4((u1t)0, V.x, (u1t)0, V.z); }
inline u1t_4 Swizz0X00(u1t_3 V) { return MkU1t_4((u1t)0, V.x, (u1t)0, (u1t)0); }
inline u1t_4 Swizz0YXX(u1t_3 V) { return MkU1t_4((u1t)0, V.y, V.x, V.x); }
inline u1t_4 Swizz0YXY(u1t_3 V) { return MkU1t_4((u1t)0, V.y, V.x, V.y); }
inline u1t_4 Swizz0YXZ(u1t_3 V) { return MkU1t_4((u1t)0, V.y, V.x, V.z); }
inline u1t_4 Swizz0YX0(u1t_3 V) { return MkU1t_4((u1t)0, V.y, V.x, (u1t)0); }
inline u1t_4 Swizz0YYX(u1t_3 V) { return MkU1t_4((u1t)0, V.y, V.y, V.x); }
inline u1t_4 Swizz0YYY(u1t_3 V) { return MkU1t_4((u1t)0, V.y, V.y, V.y); }
inline u1t_4 Swizz0YYZ(u1t_3 V) { return MkU1t_4((u1t)0, V.y, V.y, V.z); }
inline u1t_4 Swizz0YY0(u1t_3 V) { return MkU1t_4((u1t)0, V.y, V.y, (u1t)0); }
inline u1t_4 Swizz0YZX(u1t_3 V) { return MkU1t_4((u1t)0, V.y, V.z, V.x); }
inline u1t_4 Swizz0YZY(u1t_3 V) { return MkU1t_4((u1t)0, V.y, V.z, V.y); }
inline u1t_4 Swizz0YZZ(u1t_3 V) { return MkU1t_4((u1t)0, V.y, V.z, V.z); }
inline u1t_4 Swizz0YZ0(u1t_3 V) { return MkU1t_4((u1t)0, V.y, V.z, (u1t)0); }
inline u1t_4 Swizz0Y0X(u1t_3 V) { return MkU1t_4((u1t)0, V.y, (u1t)0, V.x); }
inline u1t_4 Swizz0Y0Y(u1t_3 V) { return MkU1t_4((u1t)0, V.y, (u1t)0, V.y); }
inline u1t_4 Swizz0Y0Z(u1t_3 V) { return MkU1t_4((u1t)0, V.y, (u1t)0, V.z); }
inline u1t_4 Swizz0Y00(u1t_3 V) { return MkU1t_4((u1t)0, V.y, (u1t)0, (u1t)0); }
inline u1t_4 Swizz0ZXX(u1t_3 V) { return MkU1t_4((u1t)0, V.z, V.x, V.x); }
inline u1t_4 Swizz0ZXY(u1t_3 V) { return MkU1t_4((u1t)0, V.z, V.x, V.y); }
inline u1t_4 Swizz0ZXZ(u1t_3 V) { return MkU1t_4((u1t)0, V.z, V.x, V.z); }
inline u1t_4 Swizz0ZX0(u1t_3 V) { return MkU1t_4((u1t)0, V.z, V.x, (u1t)0); }
inline u1t_4 Swizz0ZYX(u1t_3 V) { return MkU1t_4((u1t)0, V.z, V.y, V.x); }
inline u1t_4 Swizz0ZYY(u1t_3 V) { return MkU1t_4((u1t)0, V.z, V.y, V.y); }
inline u1t_4 Swizz0ZYZ(u1t_3 V) { return MkU1t_4((u1t)0, V.z, V.y, V.z); }
inline u1t_4 Swizz0ZY0(u1t_3 V) { return MkU1t_4((u1t)0, V.z, V.y, (u1t)0); }
inline u1t_4 Swizz0ZZX(u1t_3 V) { return MkU1t_4((u1t)0, V.z, V.z, V.x); }
inline u1t_4 Swizz0ZZY(u1t_3 V) { return MkU1t_4((u1t)0, V.z, V.z, V.y); }
inline u1t_4 Swizz0ZZZ(u1t_3 V) { return MkU1t_4((u1t)0, V.z, V.z, V.z); }
inline u1t_4 Swizz0ZZ0(u1t_3 V) { return MkU1t_4((u1t)0, V.z, V.z, (u1t)0); }
inline u1t_4 Swizz0Z0X(u1t_3 V) { return MkU1t_4((u1t)0, V.z, (u1t)0, V.x); }
inline u1t_4 Swizz0Z0Y(u1t_3 V) { return MkU1t_4((u1t)0, V.z, (u1t)0, V.y); }
inline u1t_4 Swizz0Z0Z(u1t_3 V) { return MkU1t_4((u1t)0, V.z, (u1t)0, V.z); }
inline u1t_4 Swizz0Z00(u1t_3 V) { return MkU1t_4((u1t)0, V.z, (u1t)0, (u1t)0); }
inline u1t_4 Swizz00XX(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, V.x, V.x); }
inline u1t_4 Swizz00XY(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, V.x, V.y); }
inline u1t_4 Swizz00XZ(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, V.x, V.z); }
inline u1t_4 Swizz00X0(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, V.x, (u1t)0); }
inline u1t_4 Swizz00YX(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, V.y, V.x); }
inline u1t_4 Swizz00YY(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, V.y, V.y); }
inline u1t_4 Swizz00YZ(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, V.y, V.z); }
inline u1t_4 Swizz00Y0(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, V.y, (u1t)0); }
inline u1t_4 Swizz00ZX(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, V.z, V.x); }
inline u1t_4 Swizz00ZY(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, V.z, V.y); }
inline u1t_4 Swizz00ZZ(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, V.z, V.z); }
inline u1t_4 Swizz00Z0(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, V.z, (u1t)0); }
inline u1t_4 Swizz000X(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, (u1t)0, V.x); }
inline u1t_4 Swizz000Y(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, (u1t)0, V.y); }
inline u1t_4 Swizz000Z(u1t_3 V) { return MkU1t_4((u1t)0, (u1t)0, (u1t)0, V.z); }
inline u1t_2 SwizzXX(u1t_4 V) { return MkU1t_2(V.x, V.x); }
inline u1t_2 SwizzXY(u1t_4 V) { return MkU1t_2(V.x, V.y); }
inline u1t_2 SwizzXZ(u1t_4 V) { return MkU1t_2(V.x, V.z); }
inline u1t_2 SwizzXW(u1t_4 V) { return MkU1t_2(V.x, V.w); }
inline u1t_2 SwizzX0(u1t_4 V) { return MkU1t_2(V.x, (u1t)0); }
inline u1t_2 SwizzYX(u1t_4 V) { return MkU1t_2(V.y, V.x); }
inline u1t_2 SwizzYY(u1t_4 V) { return MkU1t_2(V.y, V.y); }
inline u1t_2 SwizzYZ(u1t_4 V) { return MkU1t_2(V.y, V.z); }
inline u1t_2 SwizzYW(u1t_4 V) { return MkU1t_2(V.y, V.w); }
inline u1t_2 SwizzY0(u1t_4 V) { return MkU1t_2(V.y, (u1t)0); }
inline u1t_2 SwizzZX(u1t_4 V) { return MkU1t_2(V.z, V.x); }
inline u1t_2 SwizzZY(u1t_4 V) { return MkU1t_2(V.z, V.y); }
inline u1t_2 SwizzZZ(u1t_4 V) { return MkU1t_2(V.z, V.z); }
inline u1t_2 SwizzZW(u1t_4 V) { return MkU1t_2(V.z, V.w); }
inline u1t_2 SwizzZ0(u1t_4 V) { return MkU1t_2(V.z, (u1t)0); }
inline u1t_2 SwizzWX(u1t_4 V) { return MkU1t_2(V.w, V.x); }
inline u1t_2 SwizzWY(u1t_4 V) { return MkU1t_2(V.w, V.y); }
inline u1t_2 SwizzWZ(u1t_4 V) { return MkU1t_2(V.w, V.z); }
inline u1t_2 SwizzWW(u1t_4 V) { return MkU1t_2(V.w, V.w); }
inline u1t_2 SwizzW0(u1t_4 V) { return MkU1t_2(V.w, (u1t)0); }
inline u1t_2 Swizz0X(u1t_4 V) { return MkU1t_2((u1t)0, V.x); }
inline u1t_2 Swizz0Y(u1t_4 V) { return MkU1t_2((u1t)0, V.y); }
inline u1t_2 Swizz0Z(u1t_4 V) { return MkU1t_2((u1t)0, V.z); }
inline u1t_2 Swizz0W(u1t_4 V) { return MkU1t_2((u1t)0, V.w); }
inline u1t_3 SwizzXXX(u1t_4 V) { return MkU1t_3(V.x, V.x, V.x); }
inline u1t_3 SwizzXXY(u1t_4 V) { return MkU1t_3(V.x, V.x, V.y); }
inline u1t_3 SwizzXXZ(u1t_4 V) { return MkU1t_3(V.x, V.x, V.z); }
inline u1t_3 SwizzXXW(u1t_4 V) { return MkU1t_3(V.x, V.x, V.w); }
inline u1t_3 SwizzXX0(u1t_4 V) { return MkU1t_3(V.x, V.x, (u1t)0); }
inline u1t_3 SwizzXYX(u1t_4 V) { return MkU1t_3(V.x, V.y, V.x); }
inline u1t_3 SwizzXYY(u1t_4 V) { return MkU1t_3(V.x, V.y, V.y); }
inline u1t_3 SwizzXYZ(u1t_4 V) { return MkU1t_3(V.x, V.y, V.z); }
inline u1t_3 SwizzXYW(u1t_4 V) { return MkU1t_3(V.x, V.y, V.w); }
inline u1t_3 SwizzXY0(u1t_4 V) { return MkU1t_3(V.x, V.y, (u1t)0); }
inline u1t_3 SwizzXZX(u1t_4 V) { return MkU1t_3(V.x, V.z, V.x); }
inline u1t_3 SwizzXZY(u1t_4 V) { return MkU1t_3(V.x, V.z, V.y); }
inline u1t_3 SwizzXZZ(u1t_4 V) { return MkU1t_3(V.x, V.z, V.z); }
inline u1t_3 SwizzXZW(u1t_4 V) { return MkU1t_3(V.x, V.z, V.w); }
inline u1t_3 SwizzXZ0(u1t_4 V) { return MkU1t_3(V.x, V.z, (u1t)0); }
inline u1t_3 SwizzXWX(u1t_4 V) { return MkU1t_3(V.x, V.w, V.x); }
inline u1t_3 SwizzXWY(u1t_4 V) { return MkU1t_3(V.x, V.w, V.y); }
inline u1t_3 SwizzXWZ(u1t_4 V) { return MkU1t_3(V.x, V.w, V.z); }
inline u1t_3 SwizzXWW(u1t_4 V) { return MkU1t_3(V.x, V.w, V.w); }
inline u1t_3 SwizzXW0(u1t_4 V) { return MkU1t_3(V.x, V.w, (u1t)0); }
inline u1t_3 SwizzX0X(u1t_4 V) { return MkU1t_3(V.x, (u1t)0, V.x); }
inline u1t_3 SwizzX0Y(u1t_4 V) { return MkU1t_3(V.x, (u1t)0, V.y); }
inline u1t_3 SwizzX0Z(u1t_4 V) { return MkU1t_3(V.x, (u1t)0, V.z); }
inline u1t_3 SwizzX0W(u1t_4 V) { return MkU1t_3(V.x, (u1t)0, V.w); }
inline u1t_3 SwizzX00(u1t_4 V) { return MkU1t_3(V.x, (u1t)0, (u1t)0); }
inline u1t_3 SwizzYXX(u1t_4 V) { return MkU1t_3(V.y, V.x, V.x); }
inline u1t_3 SwizzYXY(u1t_4 V) { return MkU1t_3(V.y, V.x, V.y); }
inline u1t_3 SwizzYXZ(u1t_4 V) { return MkU1t_3(V.y, V.x, V.z); }
inline u1t_3 SwizzYXW(u1t_4 V) { return MkU1t_3(V.y, V.x, V.w); }
inline u1t_3 SwizzYX0(u1t_4 V) { return MkU1t_3(V.y, V.x, (u1t)0); }
inline u1t_3 SwizzYYX(u1t_4 V) { return MkU1t_3(V.y, V.y, V.x); }
inline u1t_3 SwizzYYY(u1t_4 V) { return MkU1t_3(V.y, V.y, V.y); }
inline u1t_3 SwizzYYZ(u1t_4 V) { return MkU1t_3(V.y, V.y, V.z); }
inline u1t_3 SwizzYYW(u1t_4 V) { return MkU1t_3(V.y, V.y, V.w); }
inline u1t_3 SwizzYY0(u1t_4 V) { return MkU1t_3(V.y, V.y, (u1t)0); }
inline u1t_3 SwizzYZX(u1t_4 V) { return MkU1t_3(V.y, V.z, V.x); }
inline u1t_3 SwizzYZY(u1t_4 V) { return MkU1t_3(V.y, V.z, V.y); }
inline u1t_3 SwizzYZZ(u1t_4 V) { return MkU1t_3(V.y, V.z, V.z); }
inline u1t_3 SwizzYZW(u1t_4 V) { return MkU1t_3(V.y, V.z, V.w); }
inline u1t_3 SwizzYZ0(u1t_4 V) { return MkU1t_3(V.y, V.z, (u1t)0); }
inline u1t_3 SwizzYWX(u1t_4 V) { return MkU1t_3(V.y, V.w, V.x); }
inline u1t_3 SwizzYWY(u1t_4 V) { return MkU1t_3(V.y, V.w, V.y); }
inline u1t_3 SwizzYWZ(u1t_4 V) { return MkU1t_3(V.y, V.w, V.z); }
inline u1t_3 SwizzYWW(u1t_4 V) { return MkU1t_3(V.y, V.w, V.w); }
inline u1t_3 SwizzYW0(u1t_4 V) { return MkU1t_3(V.y, V.w, (u1t)0); }
inline u1t_3 SwizzY0X(u1t_4 V) { return MkU1t_3(V.y, (u1t)0, V.x); }
inline u1t_3 SwizzY0Y(u1t_4 V) { return MkU1t_3(V.y, (u1t)0, V.y); }
inline u1t_3 SwizzY0Z(u1t_4 V) { return MkU1t_3(V.y, (u1t)0, V.z); }
inline u1t_3 SwizzY0W(u1t_4 V) { return MkU1t_3(V.y, (u1t)0, V.w); }
inline u1t_3 SwizzY00(u1t_4 V) { return MkU1t_3(V.y, (u1t)0, (u1t)0); }
inline u1t_3 SwizzZXX(u1t_4 V) { return MkU1t_3(V.z, V.x, V.x); }
inline u1t_3 SwizzZXY(u1t_4 V) { return MkU1t_3(V.z, V.x, V.y); }
inline u1t_3 SwizzZXZ(u1t_4 V) { return MkU1t_3(V.z, V.x, V.z); }
inline u1t_3 SwizzZXW(u1t_4 V) { return MkU1t_3(V.z, V.x, V.w); }
inline u1t_3 SwizzZX0(u1t_4 V) { return MkU1t_3(V.z, V.x, (u1t)0); }
inline u1t_3 SwizzZYX(u1t_4 V) { return MkU1t_3(V.z, V.y, V.x); }
inline u1t_3 SwizzZYY(u1t_4 V) { return MkU1t_3(V.z, V.y, V.y); }
inline u1t_3 SwizzZYZ(u1t_4 V) { return MkU1t_3(V.z, V.y, V.z); }
inline u1t_3 SwizzZYW(u1t_4 V) { return MkU1t_3(V.z, V.y, V.w); }
inline u1t_3 SwizzZY0(u1t_4 V) { return MkU1t_3(V.z, V.y, (u1t)0); }
inline u1t_3 SwizzZZX(u1t_4 V) { return MkU1t_3(V.z, V.z, V.x); }
inline u1t_3 SwizzZZY(u1t_4 V) { return MkU1t_3(V.z, V.z, V.y); }
inline u1t_3 SwizzZZZ(u1t_4 V) { return MkU1t_3(V.z, V.z, V.z); }
inline u1t_3 SwizzZZW(u1t_4 V) { return MkU1t_3(V.z, V.z, V.w); }
inline u1t_3 SwizzZZ0(u1t_4 V) { return MkU1t_3(V.z, V.z, (u1t)0); }
inline u1t_3 SwizzZWX(u1t_4 V) { return MkU1t_3(V.z, V.w, V.x); }
inline u1t_3 SwizzZWY(u1t_4 V) { return MkU1t_3(V.z, V.w, V.y); }
inline u1t_3 SwizzZWZ(u1t_4 V) { return MkU1t_3(V.z, V.w, V.z); }
inline u1t_3 SwizzZWW(u1t_4 V) { return MkU1t_3(V.z, V.w, V.w); }
inline u1t_3 SwizzZW0(u1t_4 V) { return MkU1t_3(V.z, V.w, (u1t)0); }
inline u1t_3 SwizzZ0X(u1t_4 V) { return MkU1t_3(V.z, (u1t)0, V.x); }
inline u1t_3 SwizzZ0Y(u1t_4 V) { return MkU1t_3(V.z, (u1t)0, V.y); }
inline u1t_3 SwizzZ0Z(u1t_4 V) { return MkU1t_3(V.z, (u1t)0, V.z); }
inline u1t_3 SwizzZ0W(u1t_4 V) { return MkU1t_3(V.z, (u1t)0, V.w); }
inline u1t_3 SwizzZ00(u1t_4 V) { return MkU1t_3(V.z, (u1t)0, (u1t)0); }
inline u1t_3 SwizzWXX(u1t_4 V) { return MkU1t_3(V.w, V.x, V.x); }
inline u1t_3 SwizzWXY(u1t_4 V) { return MkU1t_3(V.w, V.x, V.y); }
inline u1t_3 SwizzWXZ(u1t_4 V) { return MkU1t_3(V.w, V.x, V.z); }
inline u1t_3 SwizzWXW(u1t_4 V) { return MkU1t_3(V.w, V.x, V.w); }
inline u1t_3 SwizzWX0(u1t_4 V) { return MkU1t_3(V.w, V.x, (u1t)0); }
inline u1t_3 SwizzWYX(u1t_4 V) { return MkU1t_3(V.w, V.y, V.x); }
inline u1t_3 SwizzWYY(u1t_4 V) { return MkU1t_3(V.w, V.y, V.y); }
inline u1t_3 SwizzWYZ(u1t_4 V) { return MkU1t_3(V.w, V.y, V.z); }
inline u1t_3 SwizzWYW(u1t_4 V) { return MkU1t_3(V.w, V.y, V.w); }
inline u1t_3 SwizzWY0(u1t_4 V) { return MkU1t_3(V.w, V.y, (u1t)0); }
inline u1t_3 SwizzWZX(u1t_4 V) { return MkU1t_3(V.w, V.z, V.x); }
inline u1t_3 SwizzWZY(u1t_4 V) { return MkU1t_3(V.w, V.z, V.y); }
inline u1t_3 SwizzWZZ(u1t_4 V) { return MkU1t_3(V.w, V.z, V.z); }
inline u1t_3 SwizzWZW(u1t_4 V) { return MkU1t_3(V.w, V.z, V.w); }
inline u1t_3 SwizzWZ0(u1t_4 V) { return MkU1t_3(V.w, V.z, (u1t)0); }
inline u1t_3 SwizzWWX(u1t_4 V) { return MkU1t_3(V.w, V.w, V.x); }
inline u1t_3 SwizzWWY(u1t_4 V) { return MkU1t_3(V.w, V.w, V.y); }
inline u1t_3 SwizzWWZ(u1t_4 V) { return MkU1t_3(V.w, V.w, V.z); }
inline u1t_3 SwizzWWW(u1t_4 V) { return MkU1t_3(V.w, V.w, V.w); }
inline u1t_3 SwizzWW0(u1t_4 V) { return MkU1t_3(V.w, V.w, (u1t)0); }
inline u1t_3 SwizzW0X(u1t_4 V) { return MkU1t_3(V.w, (u1t)0, V.x); }
inline u1t_3 SwizzW0Y(u1t_4 V) { return MkU1t_3(V.w, (u1t)0, V.y); }
inline u1t_3 SwizzW0Z(u1t_4 V) { return MkU1t_3(V.w, (u1t)0, V.z); }
inline u1t_3 SwizzW0W(u1t_4 V) { return MkU1t_3(V.w, (u1t)0, V.w); }
inline u1t_3 SwizzW00(u1t_4 V) { return MkU1t_3(V.w, (u1t)0, (u1t)0); }
inline u1t_3 Swizz0XX(u1t_4 V) { return MkU1t_3((u1t)0, V.x, V.x); }
inline u1t_3 Swizz0XY(u1t_4 V) { return MkU1t_3((u1t)0, V.x, V.y); }
inline u1t_3 Swizz0XZ(u1t_4 V) { return MkU1t_3((u1t)0, V.x, V.z); }
inline u1t_3 Swizz0XW(u1t_4 V) { return MkU1t_3((u1t)0, V.x, V.w); }
inline u1t_3 Swizz0X0(u1t_4 V) { return MkU1t_3((u1t)0, V.x, (u1t)0); }
inline u1t_3 Swizz0YX(u1t_4 V) { return MkU1t_3((u1t)0, V.y, V.x); }
inline u1t_3 Swizz0YY(u1t_4 V) { return MkU1t_3((u1t)0, V.y, V.y); }
inline u1t_3 Swizz0YZ(u1t_4 V) { return MkU1t_3((u1t)0, V.y, V.z); }
inline u1t_3 Swizz0YW(u1t_4 V) { return MkU1t_3((u1t)0, V.y, V.w); }
inline u1t_3 Swizz0Y0(u1t_4 V) { return MkU1t_3((u1t)0, V.y, (u1t)0); }
inline u1t_3 Swizz0ZX(u1t_4 V) { return MkU1t_3((u1t)0, V.z, V.x); }
inline u1t_3 Swizz0ZY(u1t_4 V) { return MkU1t_3((u1t)0, V.z, V.y); }
inline u1t_3 Swizz0ZZ(u1t_4 V) { return MkU1t_3((u1t)0, V.z, V.z); }
inline u1t_3 Swizz0ZW(u1t_4 V) { return MkU1t_3((u1t)0, V.z, V.w); }
inline u1t_3 Swizz0Z0(u1t_4 V) { return MkU1t_3((u1t)0, V.z, (u1t)0); }
inline u1t_3 Swizz0WX(u1t_4 V) { return MkU1t_3((u1t)0, V.w, V.x); }
inline u1t_3 Swizz0WY(u1t_4 V) { return MkU1t_3((u1t)0, V.w, V.y); }
inline u1t_3 Swizz0WZ(u1t_4 V) { return MkU1t_3((u1t)0, V.w, V.z); }
inline u1t_3 Swizz0WW(u1t_4 V) { return MkU1t_3((u1t)0, V.w, V.w); }
inline u1t_3 Swizz0W0(u1t_4 V) { return MkU1t_3((u1t)0, V.w, (u1t)0); }
inline u1t_3 Swizz00X(u1t_4 V) { return MkU1t_3((u1t)0, (u1t)0, V.x); }
inline u1t_3 Swizz00Y(u1t_4 V) { return MkU1t_3((u1t)0, (u1t)0, V.y); }
inline u1t_3 Swizz00Z(u1t_4 V) { return MkU1t_3((u1t)0, (u1t)0, V.z); }
inline u1t_3 Swizz00W(u1t_4 V) { return MkU1t_3((u1t)0, (u1t)0, V.w); }
inline u1t_4 SwizzXXXX(u1t_4 V) { return MkU1t_4(V.x, V.x, V.x, V.x); }
inline u1t_4 SwizzXXXY(u1t_4 V) { return MkU1t_4(V.x, V.x, V.x, V.y); }
inline u1t_4 SwizzXXXZ(u1t_4 V) { return MkU1t_4(V.x, V.x, V.x, V.z); }
inline u1t_4 SwizzXXXW(u1t_4 V) { return MkU1t_4(V.x, V.x, V.x, V.w); }
inline u1t_4 SwizzXXX0(u1t_4 V) { return MkU1t_4(V.x, V.x, V.x, (u1t)0); }
inline u1t_4 SwizzXXYX(u1t_4 V) { return MkU1t_4(V.x, V.x, V.y, V.x); }
inline u1t_4 SwizzXXYY(u1t_4 V) { return MkU1t_4(V.x, V.x, V.y, V.y); }
inline u1t_4 SwizzXXYZ(u1t_4 V) { return MkU1t_4(V.x, V.x, V.y, V.z); }
inline u1t_4 SwizzXXYW(u1t_4 V) { return MkU1t_4(V.x, V.x, V.y, V.w); }
inline u1t_4 SwizzXXY0(u1t_4 V) { return MkU1t_4(V.x, V.x, V.y, (u1t)0); }
inline u1t_4 SwizzXXZX(u1t_4 V) { return MkU1t_4(V.x, V.x, V.z, V.x); }
inline u1t_4 SwizzXXZY(u1t_4 V) { return MkU1t_4(V.x, V.x, V.z, V.y); }
inline u1t_4 SwizzXXZZ(u1t_4 V) { return MkU1t_4(V.x, V.x, V.z, V.z); }
inline u1t_4 SwizzXXZW(u1t_4 V) { return MkU1t_4(V.x, V.x, V.z, V.w); }
inline u1t_4 SwizzXXZ0(u1t_4 V) { return MkU1t_4(V.x, V.x, V.z, (u1t)0); }
inline u1t_4 SwizzXXWX(u1t_4 V) { return MkU1t_4(V.x, V.x, V.w, V.x); }
inline u1t_4 SwizzXXWY(u1t_4 V) { return MkU1t_4(V.x, V.x, V.w, V.y); }
inline u1t_4 SwizzXXWZ(u1t_4 V) { return MkU1t_4(V.x, V.x, V.w, V.z); }
inline u1t_4 SwizzXXWW(u1t_4 V) { return MkU1t_4(V.x, V.x, V.w, V.w); }
inline u1t_4 SwizzXXW0(u1t_4 V) { return MkU1t_4(V.x, V.x, V.w, (u1t)0); }
inline u1t_4 SwizzXX0X(u1t_4 V) { return MkU1t_4(V.x, V.x, (u1t)0, V.x); }
inline u1t_4 SwizzXX0Y(u1t_4 V) { return MkU1t_4(V.x, V.x, (u1t)0, V.y); }
inline u1t_4 SwizzXX0Z(u1t_4 V) { return MkU1t_4(V.x, V.x, (u1t)0, V.z); }
inline u1t_4 SwizzXX0W(u1t_4 V) { return MkU1t_4(V.x, V.x, (u1t)0, V.w); }
inline u1t_4 SwizzXX00(u1t_4 V) { return MkU1t_4(V.x, V.x, (u1t)0, (u1t)0); }
inline u1t_4 SwizzXYXX(u1t_4 V) { return MkU1t_4(V.x, V.y, V.x, V.x); }
inline u1t_4 SwizzXYXY(u1t_4 V) { return MkU1t_4(V.x, V.y, V.x, V.y); }
inline u1t_4 SwizzXYXZ(u1t_4 V) { return MkU1t_4(V.x, V.y, V.x, V.z); }
inline u1t_4 SwizzXYXW(u1t_4 V) { return MkU1t_4(V.x, V.y, V.x, V.w); }
inline u1t_4 SwizzXYX0(u1t_4 V) { return MkU1t_4(V.x, V.y, V.x, (u1t)0); }
inline u1t_4 SwizzXYYX(u1t_4 V) { return MkU1t_4(V.x, V.y, V.y, V.x); }
inline u1t_4 SwizzXYYY(u1t_4 V) { return MkU1t_4(V.x, V.y, V.y, V.y); }
inline u1t_4 SwizzXYYZ(u1t_4 V) { return MkU1t_4(V.x, V.y, V.y, V.z); }
inline u1t_4 SwizzXYYW(u1t_4 V) { return MkU1t_4(V.x, V.y, V.y, V.w); }
inline u1t_4 SwizzXYY0(u1t_4 V) { return MkU1t_4(V.x, V.y, V.y, (u1t)0); }
inline u1t_4 SwizzXYZX(u1t_4 V) { return MkU1t_4(V.x, V.y, V.z, V.x); }
inline u1t_4 SwizzXYZY(u1t_4 V) { return MkU1t_4(V.x, V.y, V.z, V.y); }
inline u1t_4 SwizzXYZZ(u1t_4 V) { return MkU1t_4(V.x, V.y, V.z, V.z); }
inline u1t_4 SwizzXYZW(u1t_4 V) { return MkU1t_4(V.x, V.y, V.z, V.w); }
inline u1t_4 SwizzXYZ0(u1t_4 V) { return MkU1t_4(V.x, V.y, V.z, (u1t)0); }
inline u1t_4 SwizzXYWX(u1t_4 V) { return MkU1t_4(V.x, V.y, V.w, V.x); }
inline u1t_4 SwizzXYWY(u1t_4 V) { return MkU1t_4(V.x, V.y, V.w, V.y); }
inline u1t_4 SwizzXYWZ(u1t_4 V) { return MkU1t_4(V.x, V.y, V.w, V.z); }
inline u1t_4 SwizzXYWW(u1t_4 V) { return MkU1t_4(V.x, V.y, V.w, V.w); }
inline u1t_4 SwizzXYW0(u1t_4 V) { return MkU1t_4(V.x, V.y, V.w, (u1t)0); }
inline u1t_4 SwizzXY0X(u1t_4 V) { return MkU1t_4(V.x, V.y, (u1t)0, V.x); }
inline u1t_4 SwizzXY0Y(u1t_4 V) { return MkU1t_4(V.x, V.y, (u1t)0, V.y); }
inline u1t_4 SwizzXY0Z(u1t_4 V) { return MkU1t_4(V.x, V.y, (u1t)0, V.z); }
inline u1t_4 SwizzXY0W(u1t_4 V) { return MkU1t_4(V.x, V.y, (u1t)0, V.w); }
inline u1t_4 SwizzXY00(u1t_4 V) { return MkU1t_4(V.x, V.y, (u1t)0, (u1t)0); }
inline u1t_4 SwizzXZXX(u1t_4 V) { return MkU1t_4(V.x, V.z, V.x, V.x); }
inline u1t_4 SwizzXZXY(u1t_4 V) { return MkU1t_4(V.x, V.z, V.x, V.y); }
inline u1t_4 SwizzXZXZ(u1t_4 V) { return MkU1t_4(V.x, V.z, V.x, V.z); }
inline u1t_4 SwizzXZXW(u1t_4 V) { return MkU1t_4(V.x, V.z, V.x, V.w); }
inline u1t_4 SwizzXZX0(u1t_4 V) { return MkU1t_4(V.x, V.z, V.x, (u1t)0); }
inline u1t_4 SwizzXZYX(u1t_4 V) { return MkU1t_4(V.x, V.z, V.y, V.x); }
inline u1t_4 SwizzXZYY(u1t_4 V) { return MkU1t_4(V.x, V.z, V.y, V.y); }
inline u1t_4 SwizzXZYZ(u1t_4 V) { return MkU1t_4(V.x, V.z, V.y, V.z); }
inline u1t_4 SwizzXZYW(u1t_4 V) { return MkU1t_4(V.x, V.z, V.y, V.w); }
inline u1t_4 SwizzXZY0(u1t_4 V) { return MkU1t_4(V.x, V.z, V.y, (u1t)0); }
inline u1t_4 SwizzXZZX(u1t_4 V) { return MkU1t_4(V.x, V.z, V.z, V.x); }
inline u1t_4 SwizzXZZY(u1t_4 V) { return MkU1t_4(V.x, V.z, V.z, V.y); }
inline u1t_4 SwizzXZZZ(u1t_4 V) { return MkU1t_4(V.x, V.z, V.z, V.z); }
inline u1t_4 SwizzXZZW(u1t_4 V) { return MkU1t_4(V.x, V.z, V.z, V.w); }
inline u1t_4 SwizzXZZ0(u1t_4 V) { return MkU1t_4(V.x, V.z, V.z, (u1t)0); }
inline u1t_4 SwizzXZWX(u1t_4 V) { return MkU1t_4(V.x, V.z, V.w, V.x); }
inline u1t_4 SwizzXZWY(u1t_4 V) { return MkU1t_4(V.x, V.z, V.w, V.y); }
inline u1t_4 SwizzXZWZ(u1t_4 V) { return MkU1t_4(V.x, V.z, V.w, V.z); }
inline u1t_4 SwizzXZWW(u1t_4 V) { return MkU1t_4(V.x, V.z, V.w, V.w); }
inline u1t_4 SwizzXZW0(u1t_4 V) { return MkU1t_4(V.x, V.z, V.w, (u1t)0); }
inline u1t_4 SwizzXZ0X(u1t_4 V) { return MkU1t_4(V.x, V.z, (u1t)0, V.x); }
inline u1t_4 SwizzXZ0Y(u1t_4 V) { return MkU1t_4(V.x, V.z, (u1t)0, V.y); }
inline u1t_4 SwizzXZ0Z(u1t_4 V) { return MkU1t_4(V.x, V.z, (u1t)0, V.z); }
inline u1t_4 SwizzXZ0W(u1t_4 V) { return MkU1t_4(V.x, V.z, (u1t)0, V.w); }
inline u1t_4 SwizzXZ00(u1t_4 V) { return MkU1t_4(V.x, V.z, (u1t)0, (u1t)0); }
inline u1t_4 SwizzXWXX(u1t_4 V) { return MkU1t_4(V.x, V.w, V.x, V.x); }
inline u1t_4 SwizzXWXY(u1t_4 V) { return MkU1t_4(V.x, V.w, V.x, V.y); }
inline u1t_4 SwizzXWXZ(u1t_4 V) { return MkU1t_4(V.x, V.w, V.x, V.z); }
inline u1t_4 SwizzXWXW(u1t_4 V) { return MkU1t_4(V.x, V.w, V.x, V.w); }
inline u1t_4 SwizzXWX0(u1t_4 V) { return MkU1t_4(V.x, V.w, V.x, (u1t)0); }
inline u1t_4 SwizzXWYX(u1t_4 V) { return MkU1t_4(V.x, V.w, V.y, V.x); }
inline u1t_4 SwizzXWYY(u1t_4 V) { return MkU1t_4(V.x, V.w, V.y, V.y); }
inline u1t_4 SwizzXWYZ(u1t_4 V) { return MkU1t_4(V.x, V.w, V.y, V.z); }
inline u1t_4 SwizzXWYW(u1t_4 V) { return MkU1t_4(V.x, V.w, V.y, V.w); }
inline u1t_4 SwizzXWY0(u1t_4 V) { return MkU1t_4(V.x, V.w, V.y, (u1t)0); }
inline u1t_4 SwizzXWZX(u1t_4 V) { return MkU1t_4(V.x, V.w, V.z, V.x); }
inline u1t_4 SwizzXWZY(u1t_4 V) { return MkU1t_4(V.x, V.w, V.z, V.y); }
inline u1t_4 SwizzXWZZ(u1t_4 V) { return MkU1t_4(V.x, V.w, V.z, V.z); }
inline u1t_4 SwizzXWZW(u1t_4 V) { return MkU1t_4(V.x, V.w, V.z, V.w); }
inline u1t_4 SwizzXWZ0(u1t_4 V) { return MkU1t_4(V.x, V.w, V.z, (u1t)0); }
inline u1t_4 SwizzXWWX(u1t_4 V) { return MkU1t_4(V.x, V.w, V.w, V.x); }
inline u1t_4 SwizzXWWY(u1t_4 V) { return MkU1t_4(V.x, V.w, V.w, V.y); }
inline u1t_4 SwizzXWWZ(u1t_4 V) { return MkU1t_4(V.x, V.w, V.w, V.z); }
inline u1t_4 SwizzXWWW(u1t_4 V) { return MkU1t_4(V.x, V.w, V.w, V.w); }
inline u1t_4 SwizzXWW0(u1t_4 V) { return MkU1t_4(V.x, V.w, V.w, (u1t)0); }
inline u1t_4 SwizzXW0X(u1t_4 V) { return MkU1t_4(V.x, V.w, (u1t)0, V.x); }
inline u1t_4 SwizzXW0Y(u1t_4 V) { return MkU1t_4(V.x, V.w, (u1t)0, V.y); }
inline u1t_4 SwizzXW0Z(u1t_4 V) { return MkU1t_4(V.x, V.w, (u1t)0, V.z); }
inline u1t_4 SwizzXW0W(u1t_4 V) { return MkU1t_4(V.x, V.w, (u1t)0, V.w); }
inline u1t_4 SwizzXW00(u1t_4 V) { return MkU1t_4(V.x, V.w, (u1t)0, (u1t)0); }
inline u1t_4 SwizzX0XX(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.x, V.x); }
inline u1t_4 SwizzX0XY(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.x, V.y); }
inline u1t_4 SwizzX0XZ(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.x, V.z); }
inline u1t_4 SwizzX0XW(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.x, V.w); }
inline u1t_4 SwizzX0X0(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.x, (u1t)0); }
inline u1t_4 SwizzX0YX(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.y, V.x); }
inline u1t_4 SwizzX0YY(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.y, V.y); }
inline u1t_4 SwizzX0YZ(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.y, V.z); }
inline u1t_4 SwizzX0YW(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.y, V.w); }
inline u1t_4 SwizzX0Y0(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.y, (u1t)0); }
inline u1t_4 SwizzX0ZX(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.z, V.x); }
inline u1t_4 SwizzX0ZY(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.z, V.y); }
inline u1t_4 SwizzX0ZZ(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.z, V.z); }
inline u1t_4 SwizzX0ZW(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.z, V.w); }
inline u1t_4 SwizzX0Z0(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.z, (u1t)0); }
inline u1t_4 SwizzX0WX(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.w, V.x); }
inline u1t_4 SwizzX0WY(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.w, V.y); }
inline u1t_4 SwizzX0WZ(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.w, V.z); }
inline u1t_4 SwizzX0WW(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.w, V.w); }
inline u1t_4 SwizzX0W0(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, V.w, (u1t)0); }
inline u1t_4 SwizzX00X(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, (u1t)0, V.x); }
inline u1t_4 SwizzX00Y(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, (u1t)0, V.y); }
inline u1t_4 SwizzX00Z(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, (u1t)0, V.z); }
inline u1t_4 SwizzX00W(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, (u1t)0, V.w); }
inline u1t_4 SwizzX000(u1t_4 V) { return MkU1t_4(V.x, (u1t)0, (u1t)0, (u1t)0); }
inline u1t_4 SwizzYXXX(u1t_4 V) { return MkU1t_4(V.y, V.x, V.x, V.x); }
inline u1t_4 SwizzYXXY(u1t_4 V) { return MkU1t_4(V.y, V.x, V.x, V.y); }
inline u1t_4 SwizzYXXZ(u1t_4 V) { return MkU1t_4(V.y, V.x, V.x, V.z); }
inline u1t_4 SwizzYXXW(u1t_4 V) { return MkU1t_4(V.y, V.x, V.x, V.w); }
inline u1t_4 SwizzYXX0(u1t_4 V) { return MkU1t_4(V.y, V.x, V.x, (u1t)0); }
inline u1t_4 SwizzYXYX(u1t_4 V) { return MkU1t_4(V.y, V.x, V.y, V.x); }
inline u1t_4 SwizzYXYY(u1t_4 V) { return MkU1t_4(V.y, V.x, V.y, V.y); }
inline u1t_4 SwizzYXYZ(u1t_4 V) { return MkU1t_4(V.y, V.x, V.y, V.z); }
inline u1t_4 SwizzYXYW(u1t_4 V) { return MkU1t_4(V.y, V.x, V.y, V.w); }
inline u1t_4 SwizzYXY0(u1t_4 V) { return MkU1t_4(V.y, V.x, V.y, (u1t)0); }
inline u1t_4 SwizzYXZX(u1t_4 V) { return MkU1t_4(V.y, V.x, V.z, V.x); }
inline u1t_4 SwizzYXZY(u1t_4 V) { return MkU1t_4(V.y, V.x, V.z, V.y); }
inline u1t_4 SwizzYXZZ(u1t_4 V) { return MkU1t_4(V.y, V.x, V.z, V.z); }
inline u1t_4 SwizzYXZW(u1t_4 V) { return MkU1t_4(V.y, V.x, V.z, V.w); }
inline u1t_4 SwizzYXZ0(u1t_4 V) { return MkU1t_4(V.y, V.x, V.z, (u1t)0); }
inline u1t_4 SwizzYXWX(u1t_4 V) { return MkU1t_4(V.y, V.x, V.w, V.x); }
inline u1t_4 SwizzYXWY(u1t_4 V) { return MkU1t_4(V.y, V.x, V.w, V.y); }
inline u1t_4 SwizzYXWZ(u1t_4 V) { return MkU1t_4(V.y, V.x, V.w, V.z); }
inline u1t_4 SwizzYXWW(u1t_4 V) { return MkU1t_4(V.y, V.x, V.w, V.w); }
inline u1t_4 SwizzYXW0(u1t_4 V) { return MkU1t_4(V.y, V.x, V.w, (u1t)0); }
inline u1t_4 SwizzYX0X(u1t_4 V) { return MkU1t_4(V.y, V.x, (u1t)0, V.x); }
inline u1t_4 SwizzYX0Y(u1t_4 V) { return MkU1t_4(V.y, V.x, (u1t)0, V.y); }
inline u1t_4 SwizzYX0Z(u1t_4 V) { return MkU1t_4(V.y, V.x, (u1t)0, V.z); }
inline u1t_4 SwizzYX0W(u1t_4 V) { return MkU1t_4(V.y, V.x, (u1t)0, V.w); }
inline u1t_4 SwizzYX00(u1t_4 V) { return MkU1t_4(V.y, V.x, (u1t)0, (u1t)0); }
inline u1t_4 SwizzYYXX(u1t_4 V) { return MkU1t_4(V.y, V.y, V.x, V.x); }
inline u1t_4 SwizzYYXY(u1t_4 V) { return MkU1t_4(V.y, V.y, V.x, V.y); }
inline u1t_4 SwizzYYXZ(u1t_4 V) { return MkU1t_4(V.y, V.y, V.x, V.z); }
inline u1t_4 SwizzYYXW(u1t_4 V) { return MkU1t_4(V.y, V.y, V.x, V.w); }
inline u1t_4 SwizzYYX0(u1t_4 V) { return MkU1t_4(V.y, V.y, V.x, (u1t)0); }
inline u1t_4 SwizzYYYX(u1t_4 V) { return MkU1t_4(V.y, V.y, V.y, V.x); }
inline u1t_4 SwizzYYYY(u1t_4 V) { return MkU1t_4(V.y, V.y, V.y, V.y); }
inline u1t_4 SwizzYYYZ(u1t_4 V) { return MkU1t_4(V.y, V.y, V.y, V.z); }
inline u1t_4 SwizzYYYW(u1t_4 V) { return MkU1t_4(V.y, V.y, V.y, V.w); }
inline u1t_4 SwizzYYY0(u1t_4 V) { return MkU1t_4(V.y, V.y, V.y, (u1t)0); }
inline u1t_4 SwizzYYZX(u1t_4 V) { return MkU1t_4(V.y, V.y, V.z, V.x); }
inline u1t_4 SwizzYYZY(u1t_4 V) { return MkU1t_4(V.y, V.y, V.z, V.y); }
inline u1t_4 SwizzYYZZ(u1t_4 V) { return MkU1t_4(V.y, V.y, V.z, V.z); }
inline u1t_4 SwizzYYZW(u1t_4 V) { return MkU1t_4(V.y, V.y, V.z, V.w); }
inline u1t_4 SwizzYYZ0(u1t_4 V) { return MkU1t_4(V.y, V.y, V.z, (u1t)0); }
inline u1t_4 SwizzYYWX(u1t_4 V) { return MkU1t_4(V.y, V.y, V.w, V.x); }
inline u1t_4 SwizzYYWY(u1t_4 V) { return MkU1t_4(V.y, V.y, V.w, V.y); }
inline u1t_4 SwizzYYWZ(u1t_4 V) { return MkU1t_4(V.y, V.y, V.w, V.z); }
inline u1t_4 SwizzYYWW(u1t_4 V) { return MkU1t_4(V.y, V.y, V.w, V.w); }
inline u1t_4 SwizzYYW0(u1t_4 V) { return MkU1t_4(V.y, V.y, V.w, (u1t)0); }
inline u1t_4 SwizzYY0X(u1t_4 V) { return MkU1t_4(V.y, V.y, (u1t)0, V.x); }
inline u1t_4 SwizzYY0Y(u1t_4 V) { return MkU1t_4(V.y, V.y, (u1t)0, V.y); }
inline u1t_4 SwizzYY0Z(u1t_4 V) { return MkU1t_4(V.y, V.y, (u1t)0, V.z); }
inline u1t_4 SwizzYY0W(u1t_4 V) { return MkU1t_4(V.y, V.y, (u1t)0, V.w); }
inline u1t_4 SwizzYY00(u1t_4 V) { return MkU1t_4(V.y, V.y, (u1t)0, (u1t)0); }
inline u1t_4 SwizzYZXX(u1t_4 V) { return MkU1t_4(V.y, V.z, V.x, V.x); }
inline u1t_4 SwizzYZXY(u1t_4 V) { return MkU1t_4(V.y, V.z, V.x, V.y); }
inline u1t_4 SwizzYZXZ(u1t_4 V) { return MkU1t_4(V.y, V.z, V.x, V.z); }
inline u1t_4 SwizzYZXW(u1t_4 V) { return MkU1t_4(V.y, V.z, V.x, V.w); }
inline u1t_4 SwizzYZX0(u1t_4 V) { return MkU1t_4(V.y, V.z, V.x, (u1t)0); }
inline u1t_4 SwizzYZYX(u1t_4 V) { return MkU1t_4(V.y, V.z, V.y, V.x); }
inline u1t_4 SwizzYZYY(u1t_4 V) { return MkU1t_4(V.y, V.z, V.y, V.y); }
inline u1t_4 SwizzYZYZ(u1t_4 V) { return MkU1t_4(V.y, V.z, V.y, V.z); }
inline u1t_4 SwizzYZYW(u1t_4 V) { return MkU1t_4(V.y, V.z, V.y, V.w); }
inline u1t_4 SwizzYZY0(u1t_4 V) { return MkU1t_4(V.y, V.z, V.y, (u1t)0); }
inline u1t_4 SwizzYZZX(u1t_4 V) { return MkU1t_4(V.y, V.z, V.z, V.x); }
inline u1t_4 SwizzYZZY(u1t_4 V) { return MkU1t_4(V.y, V.z, V.z, V.y); }
inline u1t_4 SwizzYZZZ(u1t_4 V) { return MkU1t_4(V.y, V.z, V.z, V.z); }
inline u1t_4 SwizzYZZW(u1t_4 V) { return MkU1t_4(V.y, V.z, V.z, V.w); }
inline u1t_4 SwizzYZZ0(u1t_4 V) { return MkU1t_4(V.y, V.z, V.z, (u1t)0); }
inline u1t_4 SwizzYZWX(u1t_4 V) { return MkU1t_4(V.y, V.z, V.w, V.x); }
inline u1t_4 SwizzYZWY(u1t_4 V) { return MkU1t_4(V.y, V.z, V.w, V.y); }
inline u1t_4 SwizzYZWZ(u1t_4 V) { return MkU1t_4(V.y, V.z, V.w, V.z); }
inline u1t_4 SwizzYZWW(u1t_4 V) { return MkU1t_4(V.y, V.z, V.w, V.w); }
inline u1t_4 SwizzYZW0(u1t_4 V) { return MkU1t_4(V.y, V.z, V.w, (u1t)0); }
inline u1t_4 SwizzYZ0X(u1t_4 V) { return MkU1t_4(V.y, V.z, (u1t)0, V.x); }
inline u1t_4 SwizzYZ0Y(u1t_4 V) { return MkU1t_4(V.y, V.z, (u1t)0, V.y); }
inline u1t_4 SwizzYZ0Z(u1t_4 V) { return MkU1t_4(V.y, V.z, (u1t)0, V.z); }
inline u1t_4 SwizzYZ0W(u1t_4 V) { return MkU1t_4(V.y, V.z, (u1t)0, V.w); }
inline u1t_4 SwizzYZ00(u1t_4 V) { return MkU1t_4(V.y, V.z, (u1t)0, (u1t)0); }
inline u1t_4 SwizzYWXX(u1t_4 V) { return MkU1t_4(V.y, V.w, V.x, V.x); }
inline u1t_4 SwizzYWXY(u1t_4 V) { return MkU1t_4(V.y, V.w, V.x, V.y); }
inline u1t_4 SwizzYWXZ(u1t_4 V) { return MkU1t_4(V.y, V.w, V.x, V.z); }
inline u1t_4 SwizzYWXW(u1t_4 V) { return MkU1t_4(V.y, V.w, V.x, V.w); }
inline u1t_4 SwizzYWX0(u1t_4 V) { return MkU1t_4(V.y, V.w, V.x, (u1t)0); }
inline u1t_4 SwizzYWYX(u1t_4 V) { return MkU1t_4(V.y, V.w, V.y, V.x); }
inline u1t_4 SwizzYWYY(u1t_4 V) { return MkU1t_4(V.y, V.w, V.y, V.y); }
inline u1t_4 SwizzYWYZ(u1t_4 V) { return MkU1t_4(V.y, V.w, V.y, V.z); }
inline u1t_4 SwizzYWYW(u1t_4 V) { return MkU1t_4(V.y, V.w, V.y, V.w); }
inline u1t_4 SwizzYWY0(u1t_4 V) { return MkU1t_4(V.y, V.w, V.y, (u1t)0); }
inline u1t_4 SwizzYWZX(u1t_4 V) { return MkU1t_4(V.y, V.w, V.z, V.x); }
inline u1t_4 SwizzYWZY(u1t_4 V) { return MkU1t_4(V.y, V.w, V.z, V.y); }
inline u1t_4 SwizzYWZZ(u1t_4 V) { return MkU1t_4(V.y, V.w, V.z, V.z); }
inline u1t_4 SwizzYWZW(u1t_4 V) { return MkU1t_4(V.y, V.w, V.z, V.w); }
inline u1t_4 SwizzYWZ0(u1t_4 V) { return MkU1t_4(V.y, V.w, V.z, (u1t)0); }
inline u1t_4 SwizzYWWX(u1t_4 V) { return MkU1t_4(V.y, V.w, V.w, V.x); }
inline u1t_4 SwizzYWWY(u1t_4 V) { return MkU1t_4(V.y, V.w, V.w, V.y); }
inline u1t_4 SwizzYWWZ(u1t_4 V) { return MkU1t_4(V.y, V.w, V.w, V.z); }
inline u1t_4 SwizzYWWW(u1t_4 V) { return MkU1t_4(V.y, V.w, V.w, V.w); }
inline u1t_4 SwizzYWW0(u1t_4 V) { return MkU1t_4(V.y, V.w, V.w, (u1t)0); }
inline u1t_4 SwizzYW0X(u1t_4 V) { return MkU1t_4(V.y, V.w, (u1t)0, V.x); }
inline u1t_4 SwizzYW0Y(u1t_4 V) { return MkU1t_4(V.y, V.w, (u1t)0, V.y); }
inline u1t_4 SwizzYW0Z(u1t_4 V) { return MkU1t_4(V.y, V.w, (u1t)0, V.z); }
inline u1t_4 SwizzYW0W(u1t_4 V) { return MkU1t_4(V.y, V.w, (u1t)0, V.w); }
inline u1t_4 SwizzYW00(u1t_4 V) { return MkU1t_4(V.y, V.w, (u1t)0, (u1t)0); }
inline u1t_4 SwizzY0XX(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.x, V.x); }
inline u1t_4 SwizzY0XY(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.x, V.y); }
inline u1t_4 SwizzY0XZ(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.x, V.z); }
inline u1t_4 SwizzY0XW(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.x, V.w); }
inline u1t_4 SwizzY0X0(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.x, (u1t)0); }
inline u1t_4 SwizzY0YX(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.y, V.x); }
inline u1t_4 SwizzY0YY(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.y, V.y); }
inline u1t_4 SwizzY0YZ(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.y, V.z); }
inline u1t_4 SwizzY0YW(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.y, V.w); }
inline u1t_4 SwizzY0Y0(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.y, (u1t)0); }
inline u1t_4 SwizzY0ZX(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.z, V.x); }
inline u1t_4 SwizzY0ZY(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.z, V.y); }
inline u1t_4 SwizzY0ZZ(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.z, V.z); }
inline u1t_4 SwizzY0ZW(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.z, V.w); }
inline u1t_4 SwizzY0Z0(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.z, (u1t)0); }
inline u1t_4 SwizzY0WX(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.w, V.x); }
inline u1t_4 SwizzY0WY(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.w, V.y); }
inline u1t_4 SwizzY0WZ(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.w, V.z); }
inline u1t_4 SwizzY0WW(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.w, V.w); }
inline u1t_4 SwizzY0W0(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, V.w, (u1t)0); }
inline u1t_4 SwizzY00X(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, (u1t)0, V.x); }
inline u1t_4 SwizzY00Y(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, (u1t)0, V.y); }
inline u1t_4 SwizzY00Z(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, (u1t)0, V.z); }
inline u1t_4 SwizzY00W(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, (u1t)0, V.w); }
inline u1t_4 SwizzY000(u1t_4 V) { return MkU1t_4(V.y, (u1t)0, (u1t)0, (u1t)0); }
inline u1t_4 SwizzZXXX(u1t_4 V) { return MkU1t_4(V.z, V.x, V.x, V.x); }
inline u1t_4 SwizzZXXY(u1t_4 V) { return MkU1t_4(V.z, V.x, V.x, V.y); }
inline u1t_4 SwizzZXXZ(u1t_4 V) { return MkU1t_4(V.z, V.x, V.x, V.z); }
inline u1t_4 SwizzZXXW(u1t_4 V) { return MkU1t_4(V.z, V.x, V.x, V.w); }
inline u1t_4 SwizzZXX0(u1t_4 V) { return MkU1t_4(V.z, V.x, V.x, (u1t)0); }
inline u1t_4 SwizzZXYX(u1t_4 V) { return MkU1t_4(V.z, V.x, V.y, V.x); }
inline u1t_4 SwizzZXYY(u1t_4 V) { return MkU1t_4(V.z, V.x, V.y, V.y); }
inline u1t_4 SwizzZXYZ(u1t_4 V) { return MkU1t_4(V.z, V.x, V.y, V.z); }
inline u1t_4 SwizzZXYW(u1t_4 V) { return MkU1t_4(V.z, V.x, V.y, V.w); }
inline u1t_4 SwizzZXY0(u1t_4 V) { return MkU1t_4(V.z, V.x, V.y, (u1t)0); }
inline u1t_4 SwizzZXZX(u1t_4 V) { return MkU1t_4(V.z, V.x, V.z, V.x); }
inline u1t_4 SwizzZXZY(u1t_4 V) { return MkU1t_4(V.z, V.x, V.z, V.y); }
inline u1t_4 SwizzZXZZ(u1t_4 V) { return MkU1t_4(V.z, V.x, V.z, V.z); }
inline u1t_4 SwizzZXZW(u1t_4 V) { return MkU1t_4(V.z, V.x, V.z, V.w); }
inline u1t_4 SwizzZXZ0(u1t_4 V) { return MkU1t_4(V.z, V.x, V.z, (u1t)0); }
inline u1t_4 SwizzZXWX(u1t_4 V) { return MkU1t_4(V.z, V.x, V.w, V.x); }
inline u1t_4 SwizzZXWY(u1t_4 V) { return MkU1t_4(V.z, V.x, V.w, V.y); }
inline u1t_4 SwizzZXWZ(u1t_4 V) { return MkU1t_4(V.z, V.x, V.w, V.z); }
inline u1t_4 SwizzZXWW(u1t_4 V) { return MkU1t_4(V.z, V.x, V.w, V.w); }
inline u1t_4 SwizzZXW0(u1t_4 V) { return MkU1t_4(V.z, V.x, V.w, (u1t)0); }
inline u1t_4 SwizzZX0X(u1t_4 V) { return MkU1t_4(V.z, V.x, (u1t)0, V.x); }
inline u1t_4 SwizzZX0Y(u1t_4 V) { return MkU1t_4(V.z, V.x, (u1t)0, V.y); }
inline u1t_4 SwizzZX0Z(u1t_4 V) { return MkU1t_4(V.z, V.x, (u1t)0, V.z); }
inline u1t_4 SwizzZX0W(u1t_4 V) { return MkU1t_4(V.z, V.x, (u1t)0, V.w); }
inline u1t_4 SwizzZX00(u1t_4 V) { return MkU1t_4(V.z, V.x, (u1t)0, (u1t)0); }
inline u1t_4 SwizzZYXX(u1t_4 V) { return MkU1t_4(V.z, V.y, V.x, V.x); }
inline u1t_4 SwizzZYXY(u1t_4 V) { return MkU1t_4(V.z, V.y, V.x, V.y); }
inline u1t_4 SwizzZYXZ(u1t_4 V) { return MkU1t_4(V.z, V.y, V.x, V.z); }
inline u1t_4 SwizzZYXW(u1t_4 V) { return MkU1t_4(V.z, V.y, V.x, V.w); }
inline u1t_4 SwizzZYX0(u1t_4 V) { return MkU1t_4(V.z, V.y, V.x, (u1t)0); }
inline u1t_4 SwizzZYYX(u1t_4 V) { return MkU1t_4(V.z, V.y, V.y, V.x); }
inline u1t_4 SwizzZYYY(u1t_4 V) { return MkU1t_4(V.z, V.y, V.y, V.y); }
inline u1t_4 SwizzZYYZ(u1t_4 V) { return MkU1t_4(V.z, V.y, V.y, V.z); }
inline u1t_4 SwizzZYYW(u1t_4 V) { return MkU1t_4(V.z, V.y, V.y, V.w); }
inline u1t_4 SwizzZYY0(u1t_4 V) { return MkU1t_4(V.z, V.y, V.y, (u1t)0); }
inline u1t_4 SwizzZYZX(u1t_4 V) { return MkU1t_4(V.z, V.y, V.z, V.x); }
inline u1t_4 SwizzZYZY(u1t_4 V) { return MkU1t_4(V.z, V.y, V.z, V.y); }
inline u1t_4 SwizzZYZZ(u1t_4 V) { return MkU1t_4(V.z, V.y, V.z, V.z); }
inline u1t_4 SwizzZYZW(u1t_4 V) { return MkU1t_4(V.z, V.y, V.z, V.w); }
inline u1t_4 SwizzZYZ0(u1t_4 V) { return MkU1t_4(V.z, V.y, V.z, (u1t)0); }
inline u1t_4 SwizzZYWX(u1t_4 V) { return MkU1t_4(V.z, V.y, V.w, V.x); }
inline u1t_4 SwizzZYWY(u1t_4 V) { return MkU1t_4(V.z, V.y, V.w, V.y); }
inline u1t_4 SwizzZYWZ(u1t_4 V) { return MkU1t_4(V.z, V.y, V.w, V.z); }
inline u1t_4 SwizzZYWW(u1t_4 V) { return MkU1t_4(V.z, V.y, V.w, V.w); }
inline u1t_4 SwizzZYW0(u1t_4 V) { return MkU1t_4(V.z, V.y, V.w, (u1t)0); }
inline u1t_4 SwizzZY0X(u1t_4 V) { return MkU1t_4(V.z, V.y, (u1t)0, V.x); }
inline u1t_4 SwizzZY0Y(u1t_4 V) { return MkU1t_4(V.z, V.y, (u1t)0, V.y); }
inline u1t_4 SwizzZY0Z(u1t_4 V) { return MkU1t_4(V.z, V.y, (u1t)0, V.z); }
inline u1t_4 SwizzZY0W(u1t_4 V) { return MkU1t_4(V.z, V.y, (u1t)0, V.w); }
inline u1t_4 SwizzZY00(u1t_4 V) { return MkU1t_4(V.z, V.y, (u1t)0, (u1t)0); }
inline u1t_4 SwizzZZXX(u1t_4 V) { return MkU1t_4(V.z, V.z, V.x, V.x); }
inline u1t_4 SwizzZZXY(u1t_4 V) { return MkU1t_4(V.z, V.z, V.x, V.y); }
inline u1t_4 SwizzZZXZ(u1t_4 V) { return MkU1t_4(V.z, V.z, V.x, V.z); }
inline u1t_4 SwizzZZXW(u1t_4 V) { return MkU1t_4(V.z, V.z, V.x, V.w); }
inline u1t_4 SwizzZZX0(u1t_4 V) { return MkU1t_4(V.z, V.z, V.x, (u1t)0); }
inline u1t_4 SwizzZZYX(u1t_4 V) { return MkU1t_4(V.z, V.z, V.y, V.x); }
inline u1t_4 SwizzZZYY(u1t_4 V) { return MkU1t_4(V.z, V.z, V.y, V.y); }
inline u1t_4 SwizzZZYZ(u1t_4 V) { return MkU1t_4(V.z, V.z, V.y, V.z); }
inline u1t_4 SwizzZZYW(u1t_4 V) { return MkU1t_4(V.z, V.z, V.y, V.w); }
inline u1t_4 SwizzZZY0(u1t_4 V) { return MkU1t_4(V.z, V.z, V.y, (u1t)0); }
inline u1t_4 SwizzZZZX(u1t_4 V) { return MkU1t_4(V.z, V.z, V.z, V.x); }
inline u1t_4 SwizzZZZY(u1t_4 V) { return MkU1t_4(V.z, V.z, V.z, V.y); }
inline u1t_4 SwizzZZZZ(u1t_4 V) { return MkU1t_4(V.z, V.z, V.z, V.z); }
inline u1t_4 SwizzZZZW(u1t_4 V) { return MkU1t_4(V.z, V.z, V.z, V.w); }
inline u1t_4 SwizzZZZ0(u1t_4 V) { return MkU1t_4(V.z, V.z, V.z, (u1t)0); }
inline u1t_4 SwizzZZWX(u1t_4 V) { return MkU1t_4(V.z, V.z, V.w, V.x); }
inline u1t_4 SwizzZZWY(u1t_4 V) { return MkU1t_4(V.z, V.z, V.w, V.y); }
inline u1t_4 SwizzZZWZ(u1t_4 V) { return MkU1t_4(V.z, V.z, V.w, V.z); }
inline u1t_4 SwizzZZWW(u1t_4 V) { return MkU1t_4(V.z, V.z, V.w, V.w); }
inline u1t_4 SwizzZZW0(u1t_4 V) { return MkU1t_4(V.z, V.z, V.w, (u1t)0); }
inline u1t_4 SwizzZZ0X(u1t_4 V) { return MkU1t_4(V.z, V.z, (u1t)0, V.x); }
inline u1t_4 SwizzZZ0Y(u1t_4 V) { return MkU1t_4(V.z, V.z, (u1t)0, V.y); }
inline u1t_4 SwizzZZ0Z(u1t_4 V) { return MkU1t_4(V.z, V.z, (u1t)0, V.z); }
inline u1t_4 SwizzZZ0W(u1t_4 V) { return MkU1t_4(V.z, V.z, (u1t)0, V.w); }
inline u1t_4 SwizzZZ00(u1t_4 V) { return MkU1t_4(V.z, V.z, (u1t)0, (u1t)0); }
inline u1t_4 SwizzZWXX(u1t_4 V) { return MkU1t_4(V.z, V.w, V.x, V.x); }
inline u1t_4 SwizzZWXY(u1t_4 V) { return MkU1t_4(V.z, V.w, V.x, V.y); }
inline u1t_4 SwizzZWXZ(u1t_4 V) { return MkU1t_4(V.z, V.w, V.x, V.z); }
inline u1t_4 SwizzZWXW(u1t_4 V) { return MkU1t_4(V.z, V.w, V.x, V.w); }
inline u1t_4 SwizzZWX0(u1t_4 V) { return MkU1t_4(V.z, V.w, V.x, (u1t)0); }
inline u1t_4 SwizzZWYX(u1t_4 V) { return MkU1t_4(V.z, V.w, V.y, V.x); }
inline u1t_4 SwizzZWYY(u1t_4 V) { return MkU1t_4(V.z, V.w, V.y, V.y); }
inline u1t_4 SwizzZWYZ(u1t_4 V) { return MkU1t_4(V.z, V.w, V.y, V.z); }
inline u1t_4 SwizzZWYW(u1t_4 V) { return MkU1t_4(V.z, V.w, V.y, V.w); }
inline u1t_4 SwizzZWY0(u1t_4 V) { return MkU1t_4(V.z, V.w, V.y, (u1t)0); }
inline u1t_4 SwizzZWZX(u1t_4 V) { return MkU1t_4(V.z, V.w, V.z, V.x); }
inline u1t_4 SwizzZWZY(u1t_4 V) { return MkU1t_4(V.z, V.w, V.z, V.y); }
inline u1t_4 SwizzZWZZ(u1t_4 V) { return MkU1t_4(V.z, V.w, V.z, V.z); }
inline u1t_4 SwizzZWZW(u1t_4 V) { return MkU1t_4(V.z, V.w, V.z, V.w); }
inline u1t_4 SwizzZWZ0(u1t_4 V) { return MkU1t_4(V.z, V.w, V.z, (u1t)0); }
inline u1t_4 SwizzZWWX(u1t_4 V) { return MkU1t_4(V.z, V.w, V.w, V.x); }
inline u1t_4 SwizzZWWY(u1t_4 V) { return MkU1t_4(V.z, V.w, V.w, V.y); }
inline u1t_4 SwizzZWWZ(u1t_4 V) { return MkU1t_4(V.z, V.w, V.w, V.z); }
inline u1t_4 SwizzZWWW(u1t_4 V) { return MkU1t_4(V.z, V.w, V.w, V.w); }
inline u1t_4 SwizzZWW0(u1t_4 V) { return MkU1t_4(V.z, V.w, V.w, (u1t)0); }
inline u1t_4 SwizzZW0X(u1t_4 V) { return MkU1t_4(V.z, V.w, (u1t)0, V.x); }
inline u1t_4 SwizzZW0Y(u1t_4 V) { return MkU1t_4(V.z, V.w, (u1t)0, V.y); }
inline u1t_4 SwizzZW0Z(u1t_4 V) { return MkU1t_4(V.z, V.w, (u1t)0, V.z); }
inline u1t_4 SwizzZW0W(u1t_4 V) { return MkU1t_4(V.z, V.w, (u1t)0, V.w); }
inline u1t_4 SwizzZW00(u1t_4 V) { return MkU1t_4(V.z, V.w, (u1t)0, (u1t)0); }
inline u1t_4 SwizzZ0XX(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.x, V.x); }
inline u1t_4 SwizzZ0XY(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.x, V.y); }
inline u1t_4 SwizzZ0XZ(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.x, V.z); }
inline u1t_4 SwizzZ0XW(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.x, V.w); }
inline u1t_4 SwizzZ0X0(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.x, (u1t)0); }
inline u1t_4 SwizzZ0YX(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.y, V.x); }
inline u1t_4 SwizzZ0YY(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.y, V.y); }
inline u1t_4 SwizzZ0YZ(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.y, V.z); }
inline u1t_4 SwizzZ0YW(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.y, V.w); }
inline u1t_4 SwizzZ0Y0(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.y, (u1t)0); }
inline u1t_4 SwizzZ0ZX(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.z, V.x); }
inline u1t_4 SwizzZ0ZY(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.z, V.y); }
inline u1t_4 SwizzZ0ZZ(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.z, V.z); }
inline u1t_4 SwizzZ0ZW(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.z, V.w); }
inline u1t_4 SwizzZ0Z0(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.z, (u1t)0); }
inline u1t_4 SwizzZ0WX(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.w, V.x); }
inline u1t_4 SwizzZ0WY(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.w, V.y); }
inline u1t_4 SwizzZ0WZ(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.w, V.z); }
inline u1t_4 SwizzZ0WW(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.w, V.w); }
inline u1t_4 SwizzZ0W0(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, V.w, (u1t)0); }
inline u1t_4 SwizzZ00X(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, (u1t)0, V.x); }
inline u1t_4 SwizzZ00Y(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, (u1t)0, V.y); }
inline u1t_4 SwizzZ00Z(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, (u1t)0, V.z); }
inline u1t_4 SwizzZ00W(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, (u1t)0, V.w); }
inline u1t_4 SwizzZ000(u1t_4 V) { return MkU1t_4(V.z, (u1t)0, (u1t)0, (u1t)0); }
inline u1t_4 SwizzWXXX(u1t_4 V) { return MkU1t_4(V.w, V.x, V.x, V.x); }
inline u1t_4 SwizzWXXY(u1t_4 V) { return MkU1t_4(V.w, V.x, V.x, V.y); }
inline u1t_4 SwizzWXXZ(u1t_4 V) { return MkU1t_4(V.w, V.x, V.x, V.z); }
inline u1t_4 SwizzWXXW(u1t_4 V) { return MkU1t_4(V.w, V.x, V.x, V.w); }
inline u1t_4 SwizzWXX0(u1t_4 V) { return MkU1t_4(V.w, V.x, V.x, (u1t)0); }
inline u1t_4 SwizzWXYX(u1t_4 V) { return MkU1t_4(V.w, V.x, V.y, V.x); }
inline u1t_4 SwizzWXYY(u1t_4 V) { return MkU1t_4(V.w, V.x, V.y, V.y); }
inline u1t_4 SwizzWXYZ(u1t_4 V) { return MkU1t_4(V.w, V.x, V.y, V.z); }
inline u1t_4 SwizzWXYW(u1t_4 V) { return MkU1t_4(V.w, V.x, V.y, V.w); }
inline u1t_4 SwizzWXY0(u1t_4 V) { return MkU1t_4(V.w, V.x, V.y, (u1t)0); }
inline u1t_4 SwizzWXZX(u1t_4 V) { return MkU1t_4(V.w, V.x, V.z, V.x); }
inline u1t_4 SwizzWXZY(u1t_4 V) { return MkU1t_4(V.w, V.x, V.z, V.y); }
inline u1t_4 SwizzWXZZ(u1t_4 V) { return MkU1t_4(V.w, V.x, V.z, V.z); }
inline u1t_4 SwizzWXZW(u1t_4 V) { return MkU1t_4(V.w, V.x, V.z, V.w); }
inline u1t_4 SwizzWXZ0(u1t_4 V) { return MkU1t_4(V.w, V.x, V.z, (u1t)0); }
inline u1t_4 SwizzWXWX(u1t_4 V) { return MkU1t_4(V.w, V.x, V.w, V.x); }
inline u1t_4 SwizzWXWY(u1t_4 V) { return MkU1t_4(V.w, V.x, V.w, V.y); }
inline u1t_4 SwizzWXWZ(u1t_4 V) { return MkU1t_4(V.w, V.x, V.w, V.z); }
inline u1t_4 SwizzWXWW(u1t_4 V) { return MkU1t_4(V.w, V.x, V.w, V.w); }
inline u1t_4 SwizzWXW0(u1t_4 V) { return MkU1t_4(V.w, V.x, V.w, (u1t)0); }
inline u1t_4 SwizzWX0X(u1t_4 V) { return MkU1t_4(V.w, V.x, (u1t)0, V.x); }
inline u1t_4 SwizzWX0Y(u1t_4 V) { return MkU1t_4(V.w, V.x, (u1t)0, V.y); }
inline u1t_4 SwizzWX0Z(u1t_4 V) { return MkU1t_4(V.w, V.x, (u1t)0, V.z); }
inline u1t_4 SwizzWX0W(u1t_4 V) { return MkU1t_4(V.w, V.x, (u1t)0, V.w); }
inline u1t_4 SwizzWX00(u1t_4 V) { return MkU1t_4(V.w, V.x, (u1t)0, (u1t)0); }
inline u1t_4 SwizzWYXX(u1t_4 V) { return MkU1t_4(V.w, V.y, V.x, V.x); }
inline u1t_4 SwizzWYXY(u1t_4 V) { return MkU1t_4(V.w, V.y, V.x, V.y); }
inline u1t_4 SwizzWYXZ(u1t_4 V) { return MkU1t_4(V.w, V.y, V.x, V.z); }
inline u1t_4 SwizzWYXW(u1t_4 V) { return MkU1t_4(V.w, V.y, V.x, V.w); }
inline u1t_4 SwizzWYX0(u1t_4 V) { return MkU1t_4(V.w, V.y, V.x, (u1t)0); }
inline u1t_4 SwizzWYYX(u1t_4 V) { return MkU1t_4(V.w, V.y, V.y, V.x); }
inline u1t_4 SwizzWYYY(u1t_4 V) { return MkU1t_4(V.w, V.y, V.y, V.y); }
inline u1t_4 SwizzWYYZ(u1t_4 V) { return MkU1t_4(V.w, V.y, V.y, V.z); }
inline u1t_4 SwizzWYYW(u1t_4 V) { return MkU1t_4(V.w, V.y, V.y, V.w); }
inline u1t_4 SwizzWYY0(u1t_4 V) { return MkU1t_4(V.w, V.y, V.y, (u1t)0); }
inline u1t_4 SwizzWYZX(u1t_4 V) { return MkU1t_4(V.w, V.y, V.z, V.x); }
inline u1t_4 SwizzWYZY(u1t_4 V) { return MkU1t_4(V.w, V.y, V.z, V.y); }
inline u1t_4 SwizzWYZZ(u1t_4 V) { return MkU1t_4(V.w, V.y, V.z, V.z); }
inline u1t_4 SwizzWYZW(u1t_4 V) { return MkU1t_4(V.w, V.y, V.z, V.w); }
inline u1t_4 SwizzWYZ0(u1t_4 V) { return MkU1t_4(V.w, V.y, V.z, (u1t)0); }
inline u1t_4 SwizzWYWX(u1t_4 V) { return MkU1t_4(V.w, V.y, V.w, V.x); }
inline u1t_4 SwizzWYWY(u1t_4 V) { return MkU1t_4(V.w, V.y, V.w, V.y); }
inline u1t_4 SwizzWYWZ(u1t_4 V) { return MkU1t_4(V.w, V.y, V.w, V.z); }
inline u1t_4 SwizzWYWW(u1t_4 V) { return MkU1t_4(V.w, V.y, V.w, V.w); }
inline u1t_4 SwizzWYW0(u1t_4 V) { return MkU1t_4(V.w, V.y, V.w, (u1t)0); }
inline u1t_4 SwizzWY0X(u1t_4 V) { return MkU1t_4(V.w, V.y, (u1t)0, V.x); }
inline u1t_4 SwizzWY0Y(u1t_4 V) { return MkU1t_4(V.w, V.y, (u1t)0, V.y); }
inline u1t_4 SwizzWY0Z(u1t_4 V) { return MkU1t_4(V.w, V.y, (u1t)0, V.z); }
inline u1t_4 SwizzWY0W(u1t_4 V) { return MkU1t_4(V.w, V.y, (u1t)0, V.w); }
inline u1t_4 SwizzWY00(u1t_4 V) { return MkU1t_4(V.w, V.y, (u1t)0, (u1t)0); }
inline u1t_4 SwizzWZXX(u1t_4 V) { return MkU1t_4(V.w, V.z, V.x, V.x); }
inline u1t_4 SwizzWZXY(u1t_4 V) { return MkU1t_4(V.w, V.z, V.x, V.y); }
inline u1t_4 SwizzWZXZ(u1t_4 V) { return MkU1t_4(V.w, V.z, V.x, V.z); }
inline u1t_4 SwizzWZXW(u1t_4 V) { return MkU1t_4(V.w, V.z, V.x, V.w); }
inline u1t_4 SwizzWZX0(u1t_4 V) { return MkU1t_4(V.w, V.z, V.x, (u1t)0); }
inline u1t_4 SwizzWZYX(u1t_4 V) { return MkU1t_4(V.w, V.z, V.y, V.x); }
inline u1t_4 SwizzWZYY(u1t_4 V) { return MkU1t_4(V.w, V.z, V.y, V.y); }
inline u1t_4 SwizzWZYZ(u1t_4 V) { return MkU1t_4(V.w, V.z, V.y, V.z); }
inline u1t_4 SwizzWZYW(u1t_4 V) { return MkU1t_4(V.w, V.z, V.y, V.w); }
inline u1t_4 SwizzWZY0(u1t_4 V) { return MkU1t_4(V.w, V.z, V.y, (u1t)0); }
inline u1t_4 SwizzWZZX(u1t_4 V) { return MkU1t_4(V.w, V.z, V.z, V.x); }
inline u1t_4 SwizzWZZY(u1t_4 V) { return MkU1t_4(V.w, V.z, V.z, V.y); }
inline u1t_4 SwizzWZZZ(u1t_4 V) { return MkU1t_4(V.w, V.z, V.z, V.z); }
inline u1t_4 SwizzWZZW(u1t_4 V) { return MkU1t_4(V.w, V.z, V.z, V.w); }
inline u1t_4 SwizzWZZ0(u1t_4 V) { return MkU1t_4(V.w, V.z, V.z, (u1t)0); }
inline u1t_4 SwizzWZWX(u1t_4 V) { return MkU1t_4(V.w, V.z, V.w, V.x); }
inline u1t_4 SwizzWZWY(u1t_4 V) { return MkU1t_4(V.w, V.z, V.w, V.y); }
inline u1t_4 SwizzWZWZ(u1t_4 V) { return MkU1t_4(V.w, V.z, V.w, V.z); }
inline u1t_4 SwizzWZWW(u1t_4 V) { return MkU1t_4(V.w, V.z, V.w, V.w); }
inline u1t_4 SwizzWZW0(u1t_4 V) { return MkU1t_4(V.w, V.z, V.w, (u1t)0); }
inline u1t_4 SwizzWZ0X(u1t_4 V) { return MkU1t_4(V.w, V.z, (u1t)0, V.x); }
inline u1t_4 SwizzWZ0Y(u1t_4 V) { return MkU1t_4(V.w, V.z, (u1t)0, V.y); }
inline u1t_4 SwizzWZ0Z(u1t_4 V) { return MkU1t_4(V.w, V.z, (u1t)0, V.z); }
inline u1t_4 SwizzWZ0W(u1t_4 V) { return MkU1t_4(V.w, V.z, (u1t)0, V.w); }
inline u1t_4 SwizzWZ00(u1t_4 V) { return MkU1t_4(V.w, V.z, (u1t)0, (u1t)0); }
inline u1t_4 SwizzWWXX(u1t_4 V) { return MkU1t_4(V.w, V.w, V.x, V.x); }
inline u1t_4 SwizzWWXY(u1t_4 V) { return MkU1t_4(V.w, V.w, V.x, V.y); }
inline u1t_4 SwizzWWXZ(u1t_4 V) { return MkU1t_4(V.w, V.w, V.x, V.z); }
inline u1t_4 SwizzWWXW(u1t_4 V) { return MkU1t_4(V.w, V.w, V.x, V.w); }
inline u1t_4 SwizzWWX0(u1t_4 V) { return MkU1t_4(V.w, V.w, V.x, (u1t)0); }
inline u1t_4 SwizzWWYX(u1t_4 V) { return MkU1t_4(V.w, V.w, V.y, V.x); }
inline u1t_4 SwizzWWYY(u1t_4 V) { return MkU1t_4(V.w, V.w, V.y, V.y); }
inline u1t_4 SwizzWWYZ(u1t_4 V) { return MkU1t_4(V.w, V.w, V.y, V.z); }
inline u1t_4 SwizzWWYW(u1t_4 V) { return MkU1t_4(V.w, V.w, V.y, V.w); }
inline u1t_4 SwizzWWY0(u1t_4 V) { return MkU1t_4(V.w, V.w, V.y, (u1t)0); }
inline u1t_4 SwizzWWZX(u1t_4 V) { return MkU1t_4(V.w, V.w, V.z, V.x); }
inline u1t_4 SwizzWWZY(u1t_4 V) { return MkU1t_4(V.w, V.w, V.z, V.y); }
inline u1t_4 SwizzWWZZ(u1t_4 V) { return MkU1t_4(V.w, V.w, V.z, V.z); }
inline u1t_4 SwizzWWZW(u1t_4 V) { return MkU1t_4(V.w, V.w, V.z, V.w); }
inline u1t_4 SwizzWWZ0(u1t_4 V) { return MkU1t_4(V.w, V.w, V.z, (u1t)0); }
inline u1t_4 SwizzWWWX(u1t_4 V) { return MkU1t_4(V.w, V.w, V.w, V.x); }
inline u1t_4 SwizzWWWY(u1t_4 V) { return MkU1t_4(V.w, V.w, V.w, V.y); }
inline u1t_4 SwizzWWWZ(u1t_4 V) { return MkU1t_4(V.w, V.w, V.w, V.z); }
inline u1t_4 SwizzWWWW(u1t_4 V) { return MkU1t_4(V.w, V.w, V.w, V.w); }
inline u1t_4 SwizzWWW0(u1t_4 V) { return MkU1t_4(V.w, V.w, V.w, (u1t)0); }
inline u1t_4 SwizzWW0X(u1t_4 V) { return MkU1t_4(V.w, V.w, (u1t)0, V.x); }
inline u1t_4 SwizzWW0Y(u1t_4 V) { return MkU1t_4(V.w, V.w, (u1t)0, V.y); }
inline u1t_4 SwizzWW0Z(u1t_4 V) { return MkU1t_4(V.w, V.w, (u1t)0, V.z); }
inline u1t_4 SwizzWW0W(u1t_4 V) { return MkU1t_4(V.w, V.w, (u1t)0, V.w); }
inline u1t_4 SwizzWW00(u1t_4 V) { return MkU1t_4(V.w, V.w, (u1t)0, (u1t)0); }
inline u1t_4 SwizzW0XX(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.x, V.x); }
inline u1t_4 SwizzW0XY(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.x, V.y); }
inline u1t_4 SwizzW0XZ(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.x, V.z); }
inline u1t_4 SwizzW0XW(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.x, V.w); }
inline u1t_4 SwizzW0X0(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.x, (u1t)0); }
inline u1t_4 SwizzW0YX(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.y, V.x); }
inline u1t_4 SwizzW0YY(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.y, V.y); }
inline u1t_4 SwizzW0YZ(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.y, V.z); }
inline u1t_4 SwizzW0YW(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.y, V.w); }
inline u1t_4 SwizzW0Y0(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.y, (u1t)0); }
inline u1t_4 SwizzW0ZX(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.z, V.x); }
inline u1t_4 SwizzW0ZY(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.z, V.y); }
inline u1t_4 SwizzW0ZZ(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.z, V.z); }
inline u1t_4 SwizzW0ZW(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.z, V.w); }
inline u1t_4 SwizzW0Z0(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.z, (u1t)0); }
inline u1t_4 SwizzW0WX(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.w, V.x); }
inline u1t_4 SwizzW0WY(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.w, V.y); }
inline u1t_4 SwizzW0WZ(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.w, V.z); }
inline u1t_4 SwizzW0WW(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.w, V.w); }
inline u1t_4 SwizzW0W0(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, V.w, (u1t)0); }
inline u1t_4 SwizzW00X(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, (u1t)0, V.x); }
inline u1t_4 SwizzW00Y(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, (u1t)0, V.y); }
inline u1t_4 SwizzW00Z(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, (u1t)0, V.z); }
inline u1t_4 SwizzW00W(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, (u1t)0, V.w); }
inline u1t_4 SwizzW000(u1t_4 V) { return MkU1t_4(V.w, (u1t)0, (u1t)0, (u1t)0); }
inline u1t_4 Swizz0XXX(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.x, V.x); }
inline u1t_4 Swizz0XXY(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.x, V.y); }
inline u1t_4 Swizz0XXZ(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.x, V.z); }
inline u1t_4 Swizz0XXW(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.x, V.w); }
inline u1t_4 Swizz0XX0(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.x, (u1t)0); }
inline u1t_4 Swizz0XYX(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.y, V.x); }
inline u1t_4 Swizz0XYY(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.y, V.y); }
inline u1t_4 Swizz0XYZ(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.y, V.z); }
inline u1t_4 Swizz0XYW(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.y, V.w); }
inline u1t_4 Swizz0XY0(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.y, (u1t)0); }
inline u1t_4 Swizz0XZX(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.z, V.x); }
inline u1t_4 Swizz0XZY(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.z, V.y); }
inline u1t_4 Swizz0XZZ(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.z, V.z); }
inline u1t_4 Swizz0XZW(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.z, V.w); }
inline u1t_4 Swizz0XZ0(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.z, (u1t)0); }
inline u1t_4 Swizz0XWX(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.w, V.x); }
inline u1t_4 Swizz0XWY(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.w, V.y); }
inline u1t_4 Swizz0XWZ(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.w, V.z); }
inline u1t_4 Swizz0XWW(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.w, V.w); }
inline u1t_4 Swizz0XW0(u1t_4 V) { return MkU1t_4((u1t)0, V.x, V.w, (u1t)0); }
inline u1t_4 Swizz0X0X(u1t_4 V) { return MkU1t_4((u1t)0, V.x, (u1t)0, V.x); }
inline u1t_4 Swizz0X0Y(u1t_4 V) { return MkU1t_4((u1t)0, V.x, (u1t)0, V.y); }
inline u1t_4 Swizz0X0Z(u1t_4 V) { return MkU1t_4((u1t)0, V.x, (u1t)0, V.z); }
inline u1t_4 Swizz0X0W(u1t_4 V) { return MkU1t_4((u1t)0, V.x, (u1t)0, V.w); }
inline u1t_4 Swizz0X00(u1t_4 V) { return MkU1t_4((u1t)0, V.x, (u1t)0, (u1t)0); }
inline u1t_4 Swizz0YXX(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.x, V.x); }
inline u1t_4 Swizz0YXY(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.x, V.y); }
inline u1t_4 Swizz0YXZ(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.x, V.z); }
inline u1t_4 Swizz0YXW(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.x, V.w); }
inline u1t_4 Swizz0YX0(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.x, (u1t)0); }
inline u1t_4 Swizz0YYX(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.y, V.x); }
inline u1t_4 Swizz0YYY(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.y, V.y); }
inline u1t_4 Swizz0YYZ(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.y, V.z); }
inline u1t_4 Swizz0YYW(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.y, V.w); }
inline u1t_4 Swizz0YY0(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.y, (u1t)0); }
inline u1t_4 Swizz0YZX(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.z, V.x); }
inline u1t_4 Swizz0YZY(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.z, V.y); }
inline u1t_4 Swizz0YZZ(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.z, V.z); }
inline u1t_4 Swizz0YZW(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.z, V.w); }
inline u1t_4 Swizz0YZ0(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.z, (u1t)0); }
inline u1t_4 Swizz0YWX(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.w, V.x); }
inline u1t_4 Swizz0YWY(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.w, V.y); }
inline u1t_4 Swizz0YWZ(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.w, V.z); }
inline u1t_4 Swizz0YWW(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.w, V.w); }
inline u1t_4 Swizz0YW0(u1t_4 V) { return MkU1t_4((u1t)0, V.y, V.w, (u1t)0); }
inline u1t_4 Swizz0Y0X(u1t_4 V) { return MkU1t_4((u1t)0, V.y, (u1t)0, V.x); }
inline u1t_4 Swizz0Y0Y(u1t_4 V) { return MkU1t_4((u1t)0, V.y, (u1t)0, V.y); }
inline u1t_4 Swizz0Y0Z(u1t_4 V) { return MkU1t_4((u1t)0, V.y, (u1t)0, V.z); }
inline u1t_4 Swizz0Y0W(u1t_4 V) { return MkU1t_4((u1t)0, V.y, (u1t)0, V.w); }
inline u1t_4 Swizz0Y00(u1t_4 V) { return MkU1t_4((u1t)0, V.y, (u1t)0, (u1t)0); }
inline u1t_4 Swizz0ZXX(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.x, V.x); }
inline u1t_4 Swizz0ZXY(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.x, V.y); }
inline u1t_4 Swizz0ZXZ(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.x, V.z); }
inline u1t_4 Swizz0ZXW(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.x, V.w); }
inline u1t_4 Swizz0ZX0(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.x, (u1t)0); }
inline u1t_4 Swizz0ZYX(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.y, V.x); }
inline u1t_4 Swizz0ZYY(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.y, V.y); }
inline u1t_4 Swizz0ZYZ(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.y, V.z); }
inline u1t_4 Swizz0ZYW(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.y, V.w); }
inline u1t_4 Swizz0ZY0(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.y, (u1t)0); }
inline u1t_4 Swizz0ZZX(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.z, V.x); }
inline u1t_4 Swizz0ZZY(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.z, V.y); }
inline u1t_4 Swizz0ZZZ(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.z, V.z); }
inline u1t_4 Swizz0ZZW(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.z, V.w); }
inline u1t_4 Swizz0ZZ0(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.z, (u1t)0); }
inline u1t_4 Swizz0ZWX(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.w, V.x); }
inline u1t_4 Swizz0ZWY(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.w, V.y); }
inline u1t_4 Swizz0ZWZ(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.w, V.z); }
inline u1t_4 Swizz0ZWW(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.w, V.w); }
inline u1t_4 Swizz0ZW0(u1t_4 V) { return MkU1t_4((u1t)0, V.z, V.w, (u1t)0); }
inline u1t_4 Swizz0Z0X(u1t_4 V) { return MkU1t_4((u1t)0, V.z, (u1t)0, V.x); }
inline u1t_4 Swizz0Z0Y(u1t_4 V) { return MkU1t_4((u1t)0, V.z, (u1t)0, V.y); }
inline u1t_4 Swizz0Z0Z(u1t_4 V) { return MkU1t_4((u1t)0, V.z, (u1t)0, V.z); }
inline u1t_4 Swizz0Z0W(u1t_4 V) { return MkU1t_4((u1t)0, V.z, (u1t)0, V.w); }
inline u1t_4 Swizz0Z00(u1t_4 V) { return MkU1t_4((u1t)0, V.z, (u1t)0, (u1t)0); }
inline u1t_4 Swizz0WXX(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.x, V.x); }
inline u1t_4 Swizz0WXY(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.x, V.y); }
inline u1t_4 Swizz0WXZ(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.x, V.z); }
inline u1t_4 Swizz0WXW(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.x, V.w); }
inline u1t_4 Swizz0WX0(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.x, (u1t)0); }
inline u1t_4 Swizz0WYX(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.y, V.x); }
inline u1t_4 Swizz0WYY(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.y, V.y); }
inline u1t_4 Swizz0WYZ(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.y, V.z); }
inline u1t_4 Swizz0WYW(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.y, V.w); }
inline u1t_4 Swizz0WY0(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.y, (u1t)0); }
inline u1t_4 Swizz0WZX(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.z, V.x); }
inline u1t_4 Swizz0WZY(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.z, V.y); }
inline u1t_4 Swizz0WZZ(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.z, V.z); }
inline u1t_4 Swizz0WZW(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.z, V.w); }
inline u1t_4 Swizz0WZ0(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.z, (u1t)0); }
inline u1t_4 Swizz0WWX(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.w, V.x); }
inline u1t_4 Swizz0WWY(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.w, V.y); }
inline u1t_4 Swizz0WWZ(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.w, V.z); }
inline u1t_4 Swizz0WWW(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.w, V.w); }
inline u1t_4 Swizz0WW0(u1t_4 V) { return MkU1t_4((u1t)0, V.w, V.w, (u1t)0); }
inline u1t_4 Swizz0W0X(u1t_4 V) { return MkU1t_4((u1t)0, V.w, (u1t)0, V.x); }
inline u1t_4 Swizz0W0Y(u1t_4 V) { return MkU1t_4((u1t)0, V.w, (u1t)0, V.y); }
inline u1t_4 Swizz0W0Z(u1t_4 V) { return MkU1t_4((u1t)0, V.w, (u1t)0, V.z); }
inline u1t_4 Swizz0W0W(u1t_4 V) { return MkU1t_4((u1t)0, V.w, (u1t)0, V.w); }
inline u1t_4 Swizz0W00(u1t_4 V) { return MkU1t_4((u1t)0, V.w, (u1t)0, (u1t)0); }
inline u1t_4 Swizz00XX(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.x, V.x); }
inline u1t_4 Swizz00XY(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.x, V.y); }
inline u1t_4 Swizz00XZ(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.x, V.z); }
inline u1t_4 Swizz00XW(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.x, V.w); }
inline u1t_4 Swizz00X0(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.x, (u1t)0); }
inline u1t_4 Swizz00YX(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.y, V.x); }
inline u1t_4 Swizz00YY(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.y, V.y); }
inline u1t_4 Swizz00YZ(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.y, V.z); }
inline u1t_4 Swizz00YW(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.y, V.w); }
inline u1t_4 Swizz00Y0(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.y, (u1t)0); }
inline u1t_4 Swizz00ZX(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.z, V.x); }
inline u1t_4 Swizz00ZY(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.z, V.y); }
inline u1t_4 Swizz00ZZ(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.z, V.z); }
inline u1t_4 Swizz00ZW(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.z, V.w); }
inline u1t_4 Swizz00Z0(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.z, (u1t)0); }
inline u1t_4 Swizz00WX(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.w, V.x); }
inline u1t_4 Swizz00WY(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.w, V.y); }
inline u1t_4 Swizz00WZ(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.w, V.z); }
inline u1t_4 Swizz00WW(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.w, V.w); }
inline u1t_4 Swizz00W0(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, V.w, (u1t)0); }
inline u1t_4 Swizz000X(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, (u1t)0, V.x); }
inline u1t_4 Swizz000Y(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, (u1t)0, V.y); }
inline u1t_4 Swizz000Z(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, (u1t)0, V.z); }
inline u1t_4 Swizz000W(u1t_4 V) { return MkU1t_4((u1t)0, (u1t)0, (u1t)0, V.w); }
inline i4t_2 SwizzXX(i4t_2 V) { return MkI4t_2(V.x, V.x); }
inline i4t_2 SwizzXY(i4t_2 V) { return MkI4t_2(V.x, V.y); }
inline i4t_2 SwizzX0(i4t_2 V) { return MkI4t_2(V.x, (i4t)0); }
inline i4t_2 SwizzYX(i4t_2 V) { return MkI4t_2(V.y, V.x); }
inline i4t_2 SwizzYY(i4t_2 V) { return MkI4t_2(V.y, V.y); }
inline i4t_2 SwizzY0(i4t_2 V) { return MkI4t_2(V.y, (i4t)0); }
inline i4t_2 Swizz0X(i4t_2 V) { return MkI4t_2((i4t)0, V.x); }
inline i4t_2 Swizz0Y(i4t_2 V) { return MkI4t_2((i4t)0, V.y); }
inline i4t_3 SwizzXXX(i4t_2 V) { return MkI4t_3(V.x, V.x, V.x); }
inline i4t_3 SwizzXXY(i4t_2 V) { return MkI4t_3(V.x, V.x, V.y); }
inline i4t_3 SwizzXX0(i4t_2 V) { return MkI4t_3(V.x, V.x, (i4t)0); }
inline i4t_3 SwizzXYX(i4t_2 V) { return MkI4t_3(V.x, V.y, V.x); }
inline i4t_3 SwizzXYY(i4t_2 V) { return MkI4t_3(V.x, V.y, V.y); }
inline i4t_3 SwizzXY0(i4t_2 V) { return MkI4t_3(V.x, V.y, (i4t)0); }
inline i4t_3 SwizzX0X(i4t_2 V) { return MkI4t_3(V.x, (i4t)0, V.x); }
inline i4t_3 SwizzX0Y(i4t_2 V) { return MkI4t_3(V.x, (i4t)0, V.y); }
inline i4t_3 SwizzX00(i4t_2 V) { return MkI4t_3(V.x, (i4t)0, (i4t)0); }
inline i4t_3 SwizzYXX(i4t_2 V) { return MkI4t_3(V.y, V.x, V.x); }
inline i4t_3 SwizzYXY(i4t_2 V) { return MkI4t_3(V.y, V.x, V.y); }
inline i4t_3 SwizzYX0(i4t_2 V) { return MkI4t_3(V.y, V.x, (i4t)0); }
inline i4t_3 SwizzYYX(i4t_2 V) { return MkI4t_3(V.y, V.y, V.x); }
inline i4t_3 SwizzYYY(i4t_2 V) { return MkI4t_3(V.y, V.y, V.y); }
inline i4t_3 SwizzYY0(i4t_2 V) { return MkI4t_3(V.y, V.y, (i4t)0); }
inline i4t_3 SwizzY0X(i4t_2 V) { return MkI4t_3(V.y, (i4t)0, V.x); }
inline i4t_3 SwizzY0Y(i4t_2 V) { return MkI4t_3(V.y, (i4t)0, V.y); }
inline i4t_3 SwizzY00(i4t_2 V) { return MkI4t_3(V.y, (i4t)0, (i4t)0); }
inline i4t_3 Swizz0XX(i4t_2 V) { return MkI4t_3((i4t)0, V.x, V.x); }
inline i4t_3 Swizz0XY(i4t_2 V) { return MkI4t_3((i4t)0, V.x, V.y); }
inline i4t_3 Swizz0X0(i4t_2 V) { return MkI4t_3((i4t)0, V.x, (i4t)0); }
inline i4t_3 Swizz0YX(i4t_2 V) { return MkI4t_3((i4t)0, V.y, V.x); }
inline i4t_3 Swizz0YY(i4t_2 V) { return MkI4t_3((i4t)0, V.y, V.y); }
inline i4t_3 Swizz0Y0(i4t_2 V) { return MkI4t_3((i4t)0, V.y, (i4t)0); }
inline i4t_3 Swizz00X(i4t_2 V) { return MkI4t_3((i4t)0, (i4t)0, V.x); }
inline i4t_3 Swizz00Y(i4t_2 V) { return MkI4t_3((i4t)0, (i4t)0, V.y); }
inline i4t_4 SwizzXXXX(i4t_2 V) { return MkI4t_4(V.x, V.x, V.x, V.x); }
inline i4t_4 SwizzXXXY(i4t_2 V) { return MkI4t_4(V.x, V.x, V.x, V.y); }
inline i4t_4 SwizzXXX0(i4t_2 V) { return MkI4t_4(V.x, V.x, V.x, (i4t)0); }
inline i4t_4 SwizzXXYX(i4t_2 V) { return MkI4t_4(V.x, V.x, V.y, V.x); }
inline i4t_4 SwizzXXYY(i4t_2 V) { return MkI4t_4(V.x, V.x, V.y, V.y); }
inline i4t_4 SwizzXXY0(i4t_2 V) { return MkI4t_4(V.x, V.x, V.y, (i4t)0); }
inline i4t_4 SwizzXX0X(i4t_2 V) { return MkI4t_4(V.x, V.x, (i4t)0, V.x); }
inline i4t_4 SwizzXX0Y(i4t_2 V) { return MkI4t_4(V.x, V.x, (i4t)0, V.y); }
inline i4t_4 SwizzXX00(i4t_2 V) { return MkI4t_4(V.x, V.x, (i4t)0, (i4t)0); }
inline i4t_4 SwizzXYXX(i4t_2 V) { return MkI4t_4(V.x, V.y, V.x, V.x); }
inline i4t_4 SwizzXYXY(i4t_2 V) { return MkI4t_4(V.x, V.y, V.x, V.y); }
inline i4t_4 SwizzXYX0(i4t_2 V) { return MkI4t_4(V.x, V.y, V.x, (i4t)0); }
inline i4t_4 SwizzXYYX(i4t_2 V) { return MkI4t_4(V.x, V.y, V.y, V.x); }
inline i4t_4 SwizzXYYY(i4t_2 V) { return MkI4t_4(V.x, V.y, V.y, V.y); }
inline i4t_4 SwizzXYY0(i4t_2 V) { return MkI4t_4(V.x, V.y, V.y, (i4t)0); }
inline i4t_4 SwizzXY0X(i4t_2 V) { return MkI4t_4(V.x, V.y, (i4t)0, V.x); }
inline i4t_4 SwizzXY0Y(i4t_2 V) { return MkI4t_4(V.x, V.y, (i4t)0, V.y); }
inline i4t_4 SwizzXY00(i4t_2 V) { return MkI4t_4(V.x, V.y, (i4t)0, (i4t)0); }
inline i4t_4 SwizzX0XX(i4t_2 V) { return MkI4t_4(V.x, (i4t)0, V.x, V.x); }
inline i4t_4 SwizzX0XY(i4t_2 V) { return MkI4t_4(V.x, (i4t)0, V.x, V.y); }
inline i4t_4 SwizzX0X0(i4t_2 V) { return MkI4t_4(V.x, (i4t)0, V.x, (i4t)0); }
inline i4t_4 SwizzX0YX(i4t_2 V) { return MkI4t_4(V.x, (i4t)0, V.y, V.x); }
inline i4t_4 SwizzX0YY(i4t_2 V) { return MkI4t_4(V.x, (i4t)0, V.y, V.y); }
inline i4t_4 SwizzX0Y0(i4t_2 V) { return MkI4t_4(V.x, (i4t)0, V.y, (i4t)0); }
inline i4t_4 SwizzX00X(i4t_2 V) { return MkI4t_4(V.x, (i4t)0, (i4t)0, V.x); }
inline i4t_4 SwizzX00Y(i4t_2 V) { return MkI4t_4(V.x, (i4t)0, (i4t)0, V.y); }
inline i4t_4 SwizzX000(i4t_2 V) { return MkI4t_4(V.x, (i4t)0, (i4t)0, (i4t)0); }
inline i4t_4 SwizzYXXX(i4t_2 V) { return MkI4t_4(V.y, V.x, V.x, V.x); }
inline i4t_4 SwizzYXXY(i4t_2 V) { return MkI4t_4(V.y, V.x, V.x, V.y); }
inline i4t_4 SwizzYXX0(i4t_2 V) { return MkI4t_4(V.y, V.x, V.x, (i4t)0); }
inline i4t_4 SwizzYXYX(i4t_2 V) { return MkI4t_4(V.y, V.x, V.y, V.x); }
inline i4t_4 SwizzYXYY(i4t_2 V) { return MkI4t_4(V.y, V.x, V.y, V.y); }
inline i4t_4 SwizzYXY0(i4t_2 V) { return MkI4t_4(V.y, V.x, V.y, (i4t)0); }
inline i4t_4 SwizzYX0X(i4t_2 V) { return MkI4t_4(V.y, V.x, (i4t)0, V.x); }
inline i4t_4 SwizzYX0Y(i4t_2 V) { return MkI4t_4(V.y, V.x, (i4t)0, V.y); }
inline i4t_4 SwizzYX00(i4t_2 V) { return MkI4t_4(V.y, V.x, (i4t)0, (i4t)0); }
inline i4t_4 SwizzYYXX(i4t_2 V) { return MkI4t_4(V.y, V.y, V.x, V.x); }
inline i4t_4 SwizzYYXY(i4t_2 V) { return MkI4t_4(V.y, V.y, V.x, V.y); }
inline i4t_4 SwizzYYX0(i4t_2 V) { return MkI4t_4(V.y, V.y, V.x, (i4t)0); }
inline i4t_4 SwizzYYYX(i4t_2 V) { return MkI4t_4(V.y, V.y, V.y, V.x); }
inline i4t_4 SwizzYYYY(i4t_2 V) { return MkI4t_4(V.y, V.y, V.y, V.y); }
inline i4t_4 SwizzYYY0(i4t_2 V) { return MkI4t_4(V.y, V.y, V.y, (i4t)0); }
inline i4t_4 SwizzYY0X(i4t_2 V) { return MkI4t_4(V.y, V.y, (i4t)0, V.x); }
inline i4t_4 SwizzYY0Y(i4t_2 V) { return MkI4t_4(V.y, V.y, (i4t)0, V.y); }
inline i4t_4 SwizzYY00(i4t_2 V) { return MkI4t_4(V.y, V.y, (i4t)0, (i4t)0); }
inline i4t_4 SwizzY0XX(i4t_2 V) { return MkI4t_4(V.y, (i4t)0, V.x, V.x); }
inline i4t_4 SwizzY0XY(i4t_2 V) { return MkI4t_4(V.y, (i4t)0, V.x, V.y); }
inline i4t_4 SwizzY0X0(i4t_2 V) { return MkI4t_4(V.y, (i4t)0, V.x, (i4t)0); }
inline i4t_4 SwizzY0YX(i4t_2 V) { return MkI4t_4(V.y, (i4t)0, V.y, V.x); }
inline i4t_4 SwizzY0YY(i4t_2 V) { return MkI4t_4(V.y, (i4t)0, V.y, V.y); }
inline i4t_4 SwizzY0Y0(i4t_2 V) { return MkI4t_4(V.y, (i4t)0, V.y, (i4t)0); }
inline i4t_4 SwizzY00X(i4t_2 V) { return MkI4t_4(V.y, (i4t)0, (i4t)0, V.x); }
inline i4t_4 SwizzY00Y(i4t_2 V) { return MkI4t_4(V.y, (i4t)0, (i4t)0, V.y); }
inline i4t_4 SwizzY000(i4t_2 V) { return MkI4t_4(V.y, (i4t)0, (i4t)0, (i4t)0); }
inline i4t_4 Swizz0XXX(i4t_2 V) { return MkI4t_4((i4t)0, V.x, V.x, V.x); }
inline i4t_4 Swizz0XXY(i4t_2 V) { return MkI4t_4((i4t)0, V.x, V.x, V.y); }
inline i4t_4 Swizz0XX0(i4t_2 V) { return MkI4t_4((i4t)0, V.x, V.x, (i4t)0); }
inline i4t_4 Swizz0XYX(i4t_2 V) { return MkI4t_4((i4t)0, V.x, V.y, V.x); }
inline i4t_4 Swizz0XYY(i4t_2 V) { return MkI4t_4((i4t)0, V.x, V.y, V.y); }
inline i4t_4 Swizz0XY0(i4t_2 V) { return MkI4t_4((i4t)0, V.x, V.y, (i4t)0); }
inline i4t_4 Swizz0X0X(i4t_2 V) { return MkI4t_4((i4t)0, V.x, (i4t)0, V.x); }
inline i4t_4 Swizz0X0Y(i4t_2 V) { return MkI4t_4((i4t)0, V.x, (i4t)0, V.y); }
inline i4t_4 Swizz0X00(i4t_2 V) { return MkI4t_4((i4t)0, V.x, (i4t)0, (i4t)0); }
inline i4t_4 Swizz0YXX(i4t_2 V) { return MkI4t_4((i4t)0, V.y, V.x, V.x); }
inline i4t_4 Swizz0YXY(i4t_2 V) { return MkI4t_4((i4t)0, V.y, V.x, V.y); }
inline i4t_4 Swizz0YX0(i4t_2 V) { return MkI4t_4((i4t)0, V.y, V.x, (i4t)0); }
inline i4t_4 Swizz0YYX(i4t_2 V) { return MkI4t_4((i4t)0, V.y, V.y, V.x); }
inline i4t_4 Swizz0YYY(i4t_2 V) { return MkI4t_4((i4t)0, V.y, V.y, V.y); }
inline i4t_4 Swizz0YY0(i4t_2 V) { return MkI4t_4((i4t)0, V.y, V.y, (i4t)0); }
inline i4t_4 Swizz0Y0X(i4t_2 V) { return MkI4t_4((i4t)0, V.y, (i4t)0, V.x); }
inline i4t_4 Swizz0Y0Y(i4t_2 V) { return MkI4t_4((i4t)0, V.y, (i4t)0, V.y); }
inline i4t_4 Swizz0Y00(i4t_2 V) { return MkI4t_4((i4t)0, V.y, (i4t)0, (i4t)0); }
inline i4t_4 Swizz00XX(i4t_2 V) { return MkI4t_4((i4t)0, (i4t)0, V.x, V.x); }
inline i4t_4 Swizz00XY(i4t_2 V) { return MkI4t_4((i4t)0, (i4t)0, V.x, V.y); }
inline i4t_4 Swizz00X0(i4t_2 V) { return MkI4t_4((i4t)0, (i4t)0, V.x, (i4t)0); }
inline i4t_4 Swizz00YX(i4t_2 V) { return MkI4t_4((i4t)0, (i4t)0, V.y, V.x); }
inline i4t_4 Swizz00YY(i4t_2 V) { return MkI4t_4((i4t)0, (i4t)0, V.y, V.y); }
inline i4t_4 Swizz00Y0(i4t_2 V) { return MkI4t_4((i4t)0, (i4t)0, V.y, (i4t)0); }
inline i4t_4 Swizz000X(i4t_2 V) { return MkI4t_4((i4t)0, (i4t)0, (i4t)0, V.x); }
inline i4t_4 Swizz000Y(i4t_2 V) { return MkI4t_4((i4t)0, (i4t)0, (i4t)0, V.y); }
inline i4t_2 SwizzXX(i4t_3 V) { return MkI4t_2(V.x, V.x); }
inline i4t_2 SwizzXY(i4t_3 V) { return MkI4t_2(V.x, V.y); }
inline i4t_2 SwizzXZ(i4t_3 V) { return MkI4t_2(V.x, V.z); }
inline i4t_2 SwizzX0(i4t_3 V) { return MkI4t_2(V.x, (i4t)0); }
inline i4t_2 SwizzYX(i4t_3 V) { return MkI4t_2(V.y, V.x); }
inline i4t_2 SwizzYY(i4t_3 V) { return MkI4t_2(V.y, V.y); }
inline i4t_2 SwizzYZ(i4t_3 V) { return MkI4t_2(V.y, V.z); }
inline i4t_2 SwizzY0(i4t_3 V) { return MkI4t_2(V.y, (i4t)0); }
inline i4t_2 SwizzZX(i4t_3 V) { return MkI4t_2(V.z, V.x); }
inline i4t_2 SwizzZY(i4t_3 V) { return MkI4t_2(V.z, V.y); }
inline i4t_2 SwizzZZ(i4t_3 V) { return MkI4t_2(V.z, V.z); }
inline i4t_2 SwizzZ0(i4t_3 V) { return MkI4t_2(V.z, (i4t)0); }
inline i4t_2 Swizz0X(i4t_3 V) { return MkI4t_2((i4t)0, V.x); }
inline i4t_2 Swizz0Y(i4t_3 V) { return MkI4t_2((i4t)0, V.y); }
inline i4t_2 Swizz0Z(i4t_3 V) { return MkI4t_2((i4t)0, V.z); }
inline i4t_3 SwizzXXX(i4t_3 V) { return MkI4t_3(V.x, V.x, V.x); }
inline i4t_3 SwizzXXY(i4t_3 V) { return MkI4t_3(V.x, V.x, V.y); }
inline i4t_3 SwizzXXZ(i4t_3 V) { return MkI4t_3(V.x, V.x, V.z); }
inline i4t_3 SwizzXX0(i4t_3 V) { return MkI4t_3(V.x, V.x, (i4t)0); }
inline i4t_3 SwizzXYX(i4t_3 V) { return MkI4t_3(V.x, V.y, V.x); }
inline i4t_3 SwizzXYY(i4t_3 V) { return MkI4t_3(V.x, V.y, V.y); }
inline i4t_3 SwizzXYZ(i4t_3 V) { return MkI4t_3(V.x, V.y, V.z); }
inline i4t_3 SwizzXY0(i4t_3 V) { return MkI4t_3(V.x, V.y, (i4t)0); }
inline i4t_3 SwizzXZX(i4t_3 V) { return MkI4t_3(V.x, V.z, V.x); }
inline i4t_3 SwizzXZY(i4t_3 V) { return MkI4t_3(V.x, V.z, V.y); }
inline i4t_3 SwizzXZZ(i4t_3 V) { return MkI4t_3(V.x, V.z, V.z); }
inline i4t_3 SwizzXZ0(i4t_3 V) { return MkI4t_3(V.x, V.z, (i4t)0); }
inline i4t_3 SwizzX0X(i4t_3 V) { return MkI4t_3(V.x, (i4t)0, V.x); }
inline i4t_3 SwizzX0Y(i4t_3 V) { return MkI4t_3(V.x, (i4t)0, V.y); }
inline i4t_3 SwizzX0Z(i4t_3 V) { return MkI4t_3(V.x, (i4t)0, V.z); }
inline i4t_3 SwizzX00(i4t_3 V) { return MkI4t_3(V.x, (i4t)0, (i4t)0); }
inline i4t_3 SwizzYXX(i4t_3 V) { return MkI4t_3(V.y, V.x, V.x); }
inline i4t_3 SwizzYXY(i4t_3 V) { return MkI4t_3(V.y, V.x, V.y); }
inline i4t_3 SwizzYXZ(i4t_3 V) { return MkI4t_3(V.y, V.x, V.z); }
inline i4t_3 SwizzYX0(i4t_3 V) { return MkI4t_3(V.y, V.x, (i4t)0); }
inline i4t_3 SwizzYYX(i4t_3 V) { return MkI4t_3(V.y, V.y, V.x); }
inline i4t_3 SwizzYYY(i4t_3 V) { return MkI4t_3(V.y, V.y, V.y); }
inline i4t_3 SwizzYYZ(i4t_3 V) { return MkI4t_3(V.y, V.y, V.z); }
inline i4t_3 SwizzYY0(i4t_3 V) { return MkI4t_3(V.y, V.y, (i4t)0); }
inline i4t_3 SwizzYZX(i4t_3 V) { return MkI4t_3(V.y, V.z, V.x); }
inline i4t_3 SwizzYZY(i4t_3 V) { return MkI4t_3(V.y, V.z, V.y); }
inline i4t_3 SwizzYZZ(i4t_3 V) { return MkI4t_3(V.y, V.z, V.z); }
inline i4t_3 SwizzYZ0(i4t_3 V) { return MkI4t_3(V.y, V.z, (i4t)0); }
inline i4t_3 SwizzY0X(i4t_3 V) { return MkI4t_3(V.y, (i4t)0, V.x); }
inline i4t_3 SwizzY0Y(i4t_3 V) { return MkI4t_3(V.y, (i4t)0, V.y); }
inline i4t_3 SwizzY0Z(i4t_3 V) { return MkI4t_3(V.y, (i4t)0, V.z); }
inline i4t_3 SwizzY00(i4t_3 V) { return MkI4t_3(V.y, (i4t)0, (i4t)0); }
inline i4t_3 SwizzZXX(i4t_3 V) { return MkI4t_3(V.z, V.x, V.x); }
inline i4t_3 SwizzZXY(i4t_3 V) { return MkI4t_3(V.z, V.x, V.y); }
inline i4t_3 SwizzZXZ(i4t_3 V) { return MkI4t_3(V.z, V.x, V.z); }
inline i4t_3 SwizzZX0(i4t_3 V) { return MkI4t_3(V.z, V.x, (i4t)0); }
inline i4t_3 SwizzZYX(i4t_3 V) { return MkI4t_3(V.z, V.y, V.x); }
inline i4t_3 SwizzZYY(i4t_3 V) { return MkI4t_3(V.z, V.y, V.y); }
inline i4t_3 SwizzZYZ(i4t_3 V) { return MkI4t_3(V.z, V.y, V.z); }
inline i4t_3 SwizzZY0(i4t_3 V) { return MkI4t_3(V.z, V.y, (i4t)0); }
inline i4t_3 SwizzZZX(i4t_3 V) { return MkI4t_3(V.z, V.z, V.x); }
inline i4t_3 SwizzZZY(i4t_3 V) { return MkI4t_3(V.z, V.z, V.y); }
inline i4t_3 SwizzZZZ(i4t_3 V) { return MkI4t_3(V.z, V.z, V.z); }
inline i4t_3 SwizzZZ0(i4t_3 V) { return MkI4t_3(V.z, V.z, (i4t)0); }
inline i4t_3 SwizzZ0X(i4t_3 V) { return MkI4t_3(V.z, (i4t)0, V.x); }
inline i4t_3 SwizzZ0Y(i4t_3 V) { return MkI4t_3(V.z, (i4t)0, V.y); }
inline i4t_3 SwizzZ0Z(i4t_3 V) { return MkI4t_3(V.z, (i4t)0, V.z); }
inline i4t_3 SwizzZ00(i4t_3 V) { return MkI4t_3(V.z, (i4t)0, (i4t)0); }
inline i4t_3 Swizz0XX(i4t_3 V) { return MkI4t_3((i4t)0, V.x, V.x); }
inline i4t_3 Swizz0XY(i4t_3 V) { return MkI4t_3((i4t)0, V.x, V.y); }
inline i4t_3 Swizz0XZ(i4t_3 V) { return MkI4t_3((i4t)0, V.x, V.z); }
inline i4t_3 Swizz0X0(i4t_3 V) { return MkI4t_3((i4t)0, V.x, (i4t)0); }
inline i4t_3 Swizz0YX(i4t_3 V) { return MkI4t_3((i4t)0, V.y, V.x); }
inline i4t_3 Swizz0YY(i4t_3 V) { return MkI4t_3((i4t)0, V.y, V.y); }
inline i4t_3 Swizz0YZ(i4t_3 V) { return MkI4t_3((i4t)0, V.y, V.z); }
inline i4t_3 Swizz0Y0(i4t_3 V) { return MkI4t_3((i4t)0, V.y, (i4t)0); }
inline i4t_3 Swizz0ZX(i4t_3 V) { return MkI4t_3((i4t)0, V.z, V.x); }
inline i4t_3 Swizz0ZY(i4t_3 V) { return MkI4t_3((i4t)0, V.z, V.y); }
inline i4t_3 Swizz0ZZ(i4t_3 V) { return MkI4t_3((i4t)0, V.z, V.z); }
inline i4t_3 Swizz0Z0(i4t_3 V) { return MkI4t_3((i4t)0, V.z, (i4t)0); }
inline i4t_3 Swizz00X(i4t_3 V) { return MkI4t_3((i4t)0, (i4t)0, V.x); }
inline i4t_3 Swizz00Y(i4t_3 V) { return MkI4t_3((i4t)0, (i4t)0, V.y); }
inline i4t_3 Swizz00Z(i4t_3 V) { return MkI4t_3((i4t)0, (i4t)0, V.z); }
inline i4t_4 SwizzXXXX(i4t_3 V) { return MkI4t_4(V.x, V.x, V.x, V.x); }
inline i4t_4 SwizzXXXY(i4t_3 V) { return MkI4t_4(V.x, V.x, V.x, V.y); }
inline i4t_4 SwizzXXXZ(i4t_3 V) { return MkI4t_4(V.x, V.x, V.x, V.z); }
inline i4t_4 SwizzXXX0(i4t_3 V) { return MkI4t_4(V.x, V.x, V.x, (i4t)0); }
inline i4t_4 SwizzXXYX(i4t_3 V) { return MkI4t_4(V.x, V.x, V.y, V.x); }
inline i4t_4 SwizzXXYY(i4t_3 V) { return MkI4t_4(V.x, V.x, V.y, V.y); }
inline i4t_4 SwizzXXYZ(i4t_3 V) { return MkI4t_4(V.x, V.x, V.y, V.z); }
inline i4t_4 SwizzXXY0(i4t_3 V) { return MkI4t_4(V.x, V.x, V.y, (i4t)0); }
inline i4t_4 SwizzXXZX(i4t_3 V) { return MkI4t_4(V.x, V.x, V.z, V.x); }
inline i4t_4 SwizzXXZY(i4t_3 V) { return MkI4t_4(V.x, V.x, V.z, V.y); }
inline i4t_4 SwizzXXZZ(i4t_3 V) { return MkI4t_4(V.x, V.x, V.z, V.z); }
inline i4t_4 SwizzXXZ0(i4t_3 V) { return MkI4t_4(V.x, V.x, V.z, (i4t)0); }
inline i4t_4 SwizzXX0X(i4t_3 V) { return MkI4t_4(V.x, V.x, (i4t)0, V.x); }
inline i4t_4 SwizzXX0Y(i4t_3 V) { return MkI4t_4(V.x, V.x, (i4t)0, V.y); }
inline i4t_4 SwizzXX0Z(i4t_3 V) { return MkI4t_4(V.x, V.x, (i4t)0, V.z); }
inline i4t_4 SwizzXX00(i4t_3 V) { return MkI4t_4(V.x, V.x, (i4t)0, (i4t)0); }
inline i4t_4 SwizzXYXX(i4t_3 V) { return MkI4t_4(V.x, V.y, V.x, V.x); }
inline i4t_4 SwizzXYXY(i4t_3 V) { return MkI4t_4(V.x, V.y, V.x, V.y); }
inline i4t_4 SwizzXYXZ(i4t_3 V) { return MkI4t_4(V.x, V.y, V.x, V.z); }
inline i4t_4 SwizzXYX0(i4t_3 V) { return MkI4t_4(V.x, V.y, V.x, (i4t)0); }
inline i4t_4 SwizzXYYX(i4t_3 V) { return MkI4t_4(V.x, V.y, V.y, V.x); }
inline i4t_4 SwizzXYYY(i4t_3 V) { return MkI4t_4(V.x, V.y, V.y, V.y); }
inline i4t_4 SwizzXYYZ(i4t_3 V) { return MkI4t_4(V.x, V.y, V.y, V.z); }
inline i4t_4 SwizzXYY0(i4t_3 V) { return MkI4t_4(V.x, V.y, V.y, (i4t)0); }
inline i4t_4 SwizzXYZX(i4t_3 V) { return MkI4t_4(V.x, V.y, V.z, V.x); }
inline i4t_4 SwizzXYZY(i4t_3 V) { return MkI4t_4(V.x, V.y, V.z, V.y); }
inline i4t_4 SwizzXYZZ(i4t_3 V) { return MkI4t_4(V.x, V.y, V.z, V.z); }
inline i4t_4 SwizzXYZ0(i4t_3 V) { return MkI4t_4(V.x, V.y, V.z, (i4t)0); }
inline i4t_4 SwizzXY0X(i4t_3 V) { return MkI4t_4(V.x, V.y, (i4t)0, V.x); }
inline i4t_4 SwizzXY0Y(i4t_3 V) { return MkI4t_4(V.x, V.y, (i4t)0, V.y); }
inline i4t_4 SwizzXY0Z(i4t_3 V) { return MkI4t_4(V.x, V.y, (i4t)0, V.z); }
inline i4t_4 SwizzXY00(i4t_3 V) { return MkI4t_4(V.x, V.y, (i4t)0, (i4t)0); }
inline i4t_4 SwizzXZXX(i4t_3 V) { return MkI4t_4(V.x, V.z, V.x, V.x); }
inline i4t_4 SwizzXZXY(i4t_3 V) { return MkI4t_4(V.x, V.z, V.x, V.y); }
inline i4t_4 SwizzXZXZ(i4t_3 V) { return MkI4t_4(V.x, V.z, V.x, V.z); }
inline i4t_4 SwizzXZX0(i4t_3 V) { return MkI4t_4(V.x, V.z, V.x, (i4t)0); }
inline i4t_4 SwizzXZYX(i4t_3 V) { return MkI4t_4(V.x, V.z, V.y, V.x); }
inline i4t_4 SwizzXZYY(i4t_3 V) { return MkI4t_4(V.x, V.z, V.y, V.y); }
inline i4t_4 SwizzXZYZ(i4t_3 V) { return MkI4t_4(V.x, V.z, V.y, V.z); }
inline i4t_4 SwizzXZY0(i4t_3 V) { return MkI4t_4(V.x, V.z, V.y, (i4t)0); }
inline i4t_4 SwizzXZZX(i4t_3 V) { return MkI4t_4(V.x, V.z, V.z, V.x); }
inline i4t_4 SwizzXZZY(i4t_3 V) { return MkI4t_4(V.x, V.z, V.z, V.y); }
inline i4t_4 SwizzXZZZ(i4t_3 V) { return MkI4t_4(V.x, V.z, V.z, V.z); }
inline i4t_4 SwizzXZZ0(i4t_3 V) { return MkI4t_4(V.x, V.z, V.z, (i4t)0); }
inline i4t_4 SwizzXZ0X(i4t_3 V) { return MkI4t_4(V.x, V.z, (i4t)0, V.x); }
inline i4t_4 SwizzXZ0Y(i4t_3 V) { return MkI4t_4(V.x, V.z, (i4t)0, V.y); }
inline i4t_4 SwizzXZ0Z(i4t_3 V) { return MkI4t_4(V.x, V.z, (i4t)0, V.z); }
inline i4t_4 SwizzXZ00(i4t_3 V) { return MkI4t_4(V.x, V.z, (i4t)0, (i4t)0); }
inline i4t_4 SwizzX0XX(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, V.x, V.x); }
inline i4t_4 SwizzX0XY(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, V.x, V.y); }
inline i4t_4 SwizzX0XZ(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, V.x, V.z); }
inline i4t_4 SwizzX0X0(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, V.x, (i4t)0); }
inline i4t_4 SwizzX0YX(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, V.y, V.x); }
inline i4t_4 SwizzX0YY(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, V.y, V.y); }
inline i4t_4 SwizzX0YZ(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, V.y, V.z); }
inline i4t_4 SwizzX0Y0(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, V.y, (i4t)0); }
inline i4t_4 SwizzX0ZX(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, V.z, V.x); }
inline i4t_4 SwizzX0ZY(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, V.z, V.y); }
inline i4t_4 SwizzX0ZZ(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, V.z, V.z); }
inline i4t_4 SwizzX0Z0(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, V.z, (i4t)0); }
inline i4t_4 SwizzX00X(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, (i4t)0, V.x); }
inline i4t_4 SwizzX00Y(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, (i4t)0, V.y); }
inline i4t_4 SwizzX00Z(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, (i4t)0, V.z); }
inline i4t_4 SwizzX000(i4t_3 V) { return MkI4t_4(V.x, (i4t)0, (i4t)0, (i4t)0); }
inline i4t_4 SwizzYXXX(i4t_3 V) { return MkI4t_4(V.y, V.x, V.x, V.x); }
inline i4t_4 SwizzYXXY(i4t_3 V) { return MkI4t_4(V.y, V.x, V.x, V.y); }
inline i4t_4 SwizzYXXZ(i4t_3 V) { return MkI4t_4(V.y, V.x, V.x, V.z); }
inline i4t_4 SwizzYXX0(i4t_3 V) { return MkI4t_4(V.y, V.x, V.x, (i4t)0); }
inline i4t_4 SwizzYXYX(i4t_3 V) { return MkI4t_4(V.y, V.x, V.y, V.x); }
inline i4t_4 SwizzYXYY(i4t_3 V) { return MkI4t_4(V.y, V.x, V.y, V.y); }
inline i4t_4 SwizzYXYZ(i4t_3 V) { return MkI4t_4(V.y, V.x, V.y, V.z); }
inline i4t_4 SwizzYXY0(i4t_3 V) { return MkI4t_4(V.y, V.x, V.y, (i4t)0); }
inline i4t_4 SwizzYXZX(i4t_3 V) { return MkI4t_4(V.y, V.x, V.z, V.x); }
inline i4t_4 SwizzYXZY(i4t_3 V) { return MkI4t_4(V.y, V.x, V.z, V.y); }
inline i4t_4 SwizzYXZZ(i4t_3 V) { return MkI4t_4(V.y, V.x, V.z, V.z); }
inline i4t_4 SwizzYXZ0(i4t_3 V) { return MkI4t_4(V.y, V.x, V.z, (i4t)0); }
inline i4t_4 SwizzYX0X(i4t_3 V) { return MkI4t_4(V.y, V.x, (i4t)0, V.x); }
inline i4t_4 SwizzYX0Y(i4t_3 V) { return MkI4t_4(V.y, V.x, (i4t)0, V.y); }
inline i4t_4 SwizzYX0Z(i4t_3 V) { return MkI4t_4(V.y, V.x, (i4t)0, V.z); }
inline i4t_4 SwizzYX00(i4t_3 V) { return MkI4t_4(V.y, V.x, (i4t)0, (i4t)0); }
inline i4t_4 SwizzYYXX(i4t_3 V) { return MkI4t_4(V.y, V.y, V.x, V.x); }
inline i4t_4 SwizzYYXY(i4t_3 V) { return MkI4t_4(V.y, V.y, V.x, V.y); }
inline i4t_4 SwizzYYXZ(i4t_3 V) { return MkI4t_4(V.y, V.y, V.x, V.z); }
inline i4t_4 SwizzYYX0(i4t_3 V) { return MkI4t_4(V.y, V.y, V.x, (i4t)0); }
inline i4t_4 SwizzYYYX(i4t_3 V) { return MkI4t_4(V.y, V.y, V.y, V.x); }
inline i4t_4 SwizzYYYY(i4t_3 V) { return MkI4t_4(V.y, V.y, V.y, V.y); }
inline i4t_4 SwizzYYYZ(i4t_3 V) { return MkI4t_4(V.y, V.y, V.y, V.z); }
inline i4t_4 SwizzYYY0(i4t_3 V) { return MkI4t_4(V.y, V.y, V.y, (i4t)0); }
inline i4t_4 SwizzYYZX(i4t_3 V) { return MkI4t_4(V.y, V.y, V.z, V.x); }
inline i4t_4 SwizzYYZY(i4t_3 V) { return MkI4t_4(V.y, V.y, V.z, V.y); }
inline i4t_4 SwizzYYZZ(i4t_3 V) { return MkI4t_4(V.y, V.y, V.z, V.z); }
inline i4t_4 SwizzYYZ0(i4t_3 V) { return MkI4t_4(V.y, V.y, V.z, (i4t)0); }
inline i4t_4 SwizzYY0X(i4t_3 V) { return MkI4t_4(V.y, V.y, (i4t)0, V.x); }
inline i4t_4 SwizzYY0Y(i4t_3 V) { return MkI4t_4(V.y, V.y, (i4t)0, V.y); }
inline i4t_4 SwizzYY0Z(i4t_3 V) { return MkI4t_4(V.y, V.y, (i4t)0, V.z); }
inline i4t_4 SwizzYY00(i4t_3 V) { return MkI4t_4(V.y, V.y, (i4t)0, (i4t)0); }
inline i4t_4 SwizzYZXX(i4t_3 V) { return MkI4t_4(V.y, V.z, V.x, V.x); }
inline i4t_4 SwizzYZXY(i4t_3 V) { return MkI4t_4(V.y, V.z, V.x, V.y); }
inline i4t_4 SwizzYZXZ(i4t_3 V) { return MkI4t_4(V.y, V.z, V.x, V.z); }
inline i4t_4 SwizzYZX0(i4t_3 V) { return MkI4t_4(V.y, V.z, V.x, (i4t)0); }
inline i4t_4 SwizzYZYX(i4t_3 V) { return MkI4t_4(V.y, V.z, V.y, V.x); }
inline i4t_4 SwizzYZYY(i4t_3 V) { return MkI4t_4(V.y, V.z, V.y, V.y); }
inline i4t_4 SwizzYZYZ(i4t_3 V) { return MkI4t_4(V.y, V.z, V.y, V.z); }
inline i4t_4 SwizzYZY0(i4t_3 V) { return MkI4t_4(V.y, V.z, V.y, (i4t)0); }
inline i4t_4 SwizzYZZX(i4t_3 V) { return MkI4t_4(V.y, V.z, V.z, V.x); }
inline i4t_4 SwizzYZZY(i4t_3 V) { return MkI4t_4(V.y, V.z, V.z, V.y); }
inline i4t_4 SwizzYZZZ(i4t_3 V) { return MkI4t_4(V.y, V.z, V.z, V.z); }
inline i4t_4 SwizzYZZ0(i4t_3 V) { return MkI4t_4(V.y, V.z, V.z, (i4t)0); }
inline i4t_4 SwizzYZ0X(i4t_3 V) { return MkI4t_4(V.y, V.z, (i4t)0, V.x); }
inline i4t_4 SwizzYZ0Y(i4t_3 V) { return MkI4t_4(V.y, V.z, (i4t)0, V.y); }
inline i4t_4 SwizzYZ0Z(i4t_3 V) { return MkI4t_4(V.y, V.z, (i4t)0, V.z); }
inline i4t_4 SwizzYZ00(i4t_3 V) { return MkI4t_4(V.y, V.z, (i4t)0, (i4t)0); }
inline i4t_4 SwizzY0XX(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, V.x, V.x); }
inline i4t_4 SwizzY0XY(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, V.x, V.y); }
inline i4t_4 SwizzY0XZ(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, V.x, V.z); }
inline i4t_4 SwizzY0X0(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, V.x, (i4t)0); }
inline i4t_4 SwizzY0YX(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, V.y, V.x); }
inline i4t_4 SwizzY0YY(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, V.y, V.y); }
inline i4t_4 SwizzY0YZ(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, V.y, V.z); }
inline i4t_4 SwizzY0Y0(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, V.y, (i4t)0); }
inline i4t_4 SwizzY0ZX(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, V.z, V.x); }
inline i4t_4 SwizzY0ZY(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, V.z, V.y); }
inline i4t_4 SwizzY0ZZ(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, V.z, V.z); }
inline i4t_4 SwizzY0Z0(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, V.z, (i4t)0); }
inline i4t_4 SwizzY00X(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, (i4t)0, V.x); }
inline i4t_4 SwizzY00Y(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, (i4t)0, V.y); }
inline i4t_4 SwizzY00Z(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, (i4t)0, V.z); }
inline i4t_4 SwizzY000(i4t_3 V) { return MkI4t_4(V.y, (i4t)0, (i4t)0, (i4t)0); }
inline i4t_4 SwizzZXXX(i4t_3 V) { return MkI4t_4(V.z, V.x, V.x, V.x); }
inline i4t_4 SwizzZXXY(i4t_3 V) { return MkI4t_4(V.z, V.x, V.x, V.y); }
inline i4t_4 SwizzZXXZ(i4t_3 V) { return MkI4t_4(V.z, V.x, V.x, V.z); }
inline i4t_4 SwizzZXX0(i4t_3 V) { return MkI4t_4(V.z, V.x, V.x, (i4t)0); }
inline i4t_4 SwizzZXYX(i4t_3 V) { return MkI4t_4(V.z, V.x, V.y, V.x); }
inline i4t_4 SwizzZXYY(i4t_3 V) { return MkI4t_4(V.z, V.x, V.y, V.y); }
inline i4t_4 SwizzZXYZ(i4t_3 V) { return MkI4t_4(V.z, V.x, V.y, V.z); }
inline i4t_4 SwizzZXY0(i4t_3 V) { return MkI4t_4(V.z, V.x, V.y, (i4t)0); }
inline i4t_4 SwizzZXZX(i4t_3 V) { return MkI4t_4(V.z, V.x, V.z, V.x); }
inline i4t_4 SwizzZXZY(i4t_3 V) { return MkI4t_4(V.z, V.x, V.z, V.y); }
inline i4t_4 SwizzZXZZ(i4t_3 V) { return MkI4t_4(V.z, V.x, V.z, V.z); }
inline i4t_4 SwizzZXZ0(i4t_3 V) { return MkI4t_4(V.z, V.x, V.z, (i4t)0); }
inline i4t_4 SwizzZX0X(i4t_3 V) { return MkI4t_4(V.z, V.x, (i4t)0, V.x); }
inline i4t_4 SwizzZX0Y(i4t_3 V) { return MkI4t_4(V.z, V.x, (i4t)0, V.y); }
inline i4t_4 SwizzZX0Z(i4t_3 V) { return MkI4t_4(V.z, V.x, (i4t)0, V.z); }
inline i4t_4 SwizzZX00(i4t_3 V) { return MkI4t_4(V.z, V.x, (i4t)0, (i4t)0); }
inline i4t_4 SwizzZYXX(i4t_3 V) { return MkI4t_4(V.z, V.y, V.x, V.x); }
inline i4t_4 SwizzZYXY(i4t_3 V) { return MkI4t_4(V.z, V.y, V.x, V.y); }
inline i4t_4 SwizzZYXZ(i4t_3 V) { return MkI4t_4(V.z, V.y, V.x, V.z); }
inline i4t_4 SwizzZYX0(i4t_3 V) { return MkI4t_4(V.z, V.y, V.x, (i4t)0); }
inline i4t_4 SwizzZYYX(i4t_3 V) { return MkI4t_4(V.z, V.y, V.y, V.x); }
inline i4t_4 SwizzZYYY(i4t_3 V) { return MkI4t_4(V.z, V.y, V.y, V.y); }
inline i4t_4 SwizzZYYZ(i4t_3 V) { return MkI4t_4(V.z, V.y, V.y, V.z); }
inline i4t_4 SwizzZYY0(i4t_3 V) { return MkI4t_4(V.z, V.y, V.y, (i4t)0); }
inline i4t_4 SwizzZYZX(i4t_3 V) { return MkI4t_4(V.z, V.y, V.z, V.x); }
inline i4t_4 SwizzZYZY(i4t_3 V) { return MkI4t_4(V.z, V.y, V.z, V.y); }
inline i4t_4 SwizzZYZZ(i4t_3 V) { return MkI4t_4(V.z, V.y, V.z, V.z); }
inline i4t_4 SwizzZYZ0(i4t_3 V) { return MkI4t_4(V.z, V.y, V.z, (i4t)0); }
inline i4t_4 SwizzZY0X(i4t_3 V) { return MkI4t_4(V.z, V.y, (i4t)0, V.x); }
inline i4t_4 SwizzZY0Y(i4t_3 V) { return MkI4t_4(V.z, V.y, (i4t)0, V.y); }
inline i4t_4 SwizzZY0Z(i4t_3 V) { return MkI4t_4(V.z, V.y, (i4t)0, V.z); }
inline i4t_4 SwizzZY00(i4t_3 V) { return MkI4t_4(V.z, V.y, (i4t)0, (i4t)0); }
inline i4t_4 SwizzZZXX(i4t_3 V) { return MkI4t_4(V.z, V.z, V.x, V.x); }
inline i4t_4 SwizzZZXY(i4t_3 V) { return MkI4t_4(V.z, V.z, V.x, V.y); }
inline i4t_4 SwizzZZXZ(i4t_3 V) { return MkI4t_4(V.z, V.z, V.x, V.z); }
inline i4t_4 SwizzZZX0(i4t_3 V) { return MkI4t_4(V.z, V.z, V.x, (i4t)0); }
inline i4t_4 SwizzZZYX(i4t_3 V) { return MkI4t_4(V.z, V.z, V.y, V.x); }
inline i4t_4 SwizzZZYY(i4t_3 V) { return MkI4t_4(V.z, V.z, V.y, V.y); }
inline i4t_4 SwizzZZYZ(i4t_3 V) { return MkI4t_4(V.z, V.z, V.y, V.z); }
inline i4t_4 SwizzZZY0(i4t_3 V) { return MkI4t_4(V.z, V.z, V.y, (i4t)0); }
inline i4t_4 SwizzZZZX(i4t_3 V) { return MkI4t_4(V.z, V.z, V.z, V.x); }
inline i4t_4 SwizzZZZY(i4t_3 V) { return MkI4t_4(V.z, V.z, V.z, V.y); }
inline i4t_4 SwizzZZZZ(i4t_3 V) { return MkI4t_4(V.z, V.z, V.z, V.z); }
inline i4t_4 SwizzZZZ0(i4t_3 V) { return MkI4t_4(V.z, V.z, V.z, (i4t)0); }
inline i4t_4 SwizzZZ0X(i4t_3 V) { return MkI4t_4(V.z, V.z, (i4t)0, V.x); }
inline i4t_4 SwizzZZ0Y(i4t_3 V) { return MkI4t_4(V.z, V.z, (i4t)0, V.y); }
inline i4t_4 SwizzZZ0Z(i4t_3 V) { return MkI4t_4(V.z, V.z, (i4t)0, V.z); }
inline i4t_4 SwizzZZ00(i4t_3 V) { return MkI4t_4(V.z, V.z, (i4t)0, (i4t)0); }
inline i4t_4 SwizzZ0XX(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, V.x, V.x); }
inline i4t_4 SwizzZ0XY(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, V.x, V.y); }
inline i4t_4 SwizzZ0XZ(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, V.x, V.z); }
inline i4t_4 SwizzZ0X0(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, V.x, (i4t)0); }
inline i4t_4 SwizzZ0YX(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, V.y, V.x); }
inline i4t_4 SwizzZ0YY(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, V.y, V.y); }
inline i4t_4 SwizzZ0YZ(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, V.y, V.z); }
inline i4t_4 SwizzZ0Y0(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, V.y, (i4t)0); }
inline i4t_4 SwizzZ0ZX(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, V.z, V.x); }
inline i4t_4 SwizzZ0ZY(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, V.z, V.y); }
inline i4t_4 SwizzZ0ZZ(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, V.z, V.z); }
inline i4t_4 SwizzZ0Z0(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, V.z, (i4t)0); }
inline i4t_4 SwizzZ00X(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, (i4t)0, V.x); }
inline i4t_4 SwizzZ00Y(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, (i4t)0, V.y); }
inline i4t_4 SwizzZ00Z(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, (i4t)0, V.z); }
inline i4t_4 SwizzZ000(i4t_3 V) { return MkI4t_4(V.z, (i4t)0, (i4t)0, (i4t)0); }
inline i4t_4 Swizz0XXX(i4t_3 V) { return MkI4t_4((i4t)0, V.x, V.x, V.x); }
inline i4t_4 Swizz0XXY(i4t_3 V) { return MkI4t_4((i4t)0, V.x, V.x, V.y); }
inline i4t_4 Swizz0XXZ(i4t_3 V) { return MkI4t_4((i4t)0, V.x, V.x, V.z); }
inline i4t_4 Swizz0XX0(i4t_3 V) { return MkI4t_4((i4t)0, V.x, V.x, (i4t)0); }
inline i4t_4 Swizz0XYX(i4t_3 V) { return MkI4t_4((i4t)0, V.x, V.y, V.x); }
inline i4t_4 Swizz0XYY(i4t_3 V) { return MkI4t_4((i4t)0, V.x, V.y, V.y); }
inline i4t_4 Swizz0XYZ(i4t_3 V) { return MkI4t_4((i4t)0, V.x, V.y, V.z); }
inline i4t_4 Swizz0XY0(i4t_3 V) { return MkI4t_4((i4t)0, V.x, V.y, (i4t)0); }
inline i4t_4 Swizz0XZX(i4t_3 V) { return MkI4t_4((i4t)0, V.x, V.z, V.x); }
inline i4t_4 Swizz0XZY(i4t_3 V) { return MkI4t_4((i4t)0, V.x, V.z, V.y); }
inline i4t_4 Swizz0XZZ(i4t_3 V) { return MkI4t_4((i4t)0, V.x, V.z, V.z); }
inline i4t_4 Swizz0XZ0(i4t_3 V) { return MkI4t_4((i4t)0, V.x, V.z, (i4t)0); }
inline i4t_4 Swizz0X0X(i4t_3 V) { return MkI4t_4((i4t)0, V.x, (i4t)0, V.x); }
inline i4t_4 Swizz0X0Y(i4t_3 V) { return MkI4t_4((i4t)0, V.x, (i4t)0, V.y); }
inline i4t_4 Swizz0X0Z(i4t_3 V) { return MkI4t_4((i4t)0, V.x, (i4t)0, V.z); }
inline i4t_4 Swizz0X00(i4t_3 V) { return MkI4t_4((i4t)0, V.x, (i4t)0, (i4t)0); }
inline i4t_4 Swizz0YXX(i4t_3 V) { return MkI4t_4((i4t)0, V.y, V.x, V.x); }
inline i4t_4 Swizz0YXY(i4t_3 V) { return MkI4t_4((i4t)0, V.y, V.x, V.y); }
inline i4t_4 Swizz0YXZ(i4t_3 V) { return MkI4t_4((i4t)0, V.y, V.x, V.z); }
inline i4t_4 Swizz0YX0(i4t_3 V) { return MkI4t_4((i4t)0, V.y, V.x, (i4t)0); }
inline i4t_4 Swizz0YYX(i4t_3 V) { return MkI4t_4((i4t)0, V.y, V.y, V.x); }
inline i4t_4 Swizz0YYY(i4t_3 V) { return MkI4t_4((i4t)0, V.y, V.y, V.y); }
inline i4t_4 Swizz0YYZ(i4t_3 V) { return MkI4t_4((i4t)0, V.y, V.y, V.z); }
inline i4t_4 Swizz0YY0(i4t_3 V) { return MkI4t_4((i4t)0, V.y, V.y, (i4t)0); }
inline i4t_4 Swizz0YZX(i4t_3 V) { return MkI4t_4((i4t)0, V.y, V.z, V.x); }
inline i4t_4 Swizz0YZY(i4t_3 V) { return MkI4t_4((i4t)0, V.y, V.z, V.y); }
inline i4t_4 Swizz0YZZ(i4t_3 V) { return MkI4t_4((i4t)0, V.y, V.z, V.z); }
inline i4t_4 Swizz0YZ0(i4t_3 V) { return MkI4t_4((i4t)0, V.y, V.z, (i4t)0); }
inline i4t_4 Swizz0Y0X(i4t_3 V) { return MkI4t_4((i4t)0, V.y, (i4t)0, V.x); }
inline i4t_4 Swizz0Y0Y(i4t_3 V) { return MkI4t_4((i4t)0, V.y, (i4t)0, V.y); }
inline i4t_4 Swizz0Y0Z(i4t_3 V) { return MkI4t_4((i4t)0, V.y, (i4t)0, V.z); }
inline i4t_4 Swizz0Y00(i4t_3 V) { return MkI4t_4((i4t)0, V.y, (i4t)0, (i4t)0); }
inline i4t_4 Swizz0ZXX(i4t_3 V) { return MkI4t_4((i4t)0, V.z, V.x, V.x); }
inline i4t_4 Swizz0ZXY(i4t_3 V) { return MkI4t_4((i4t)0, V.z, V.x, V.y); }
inline i4t_4 Swizz0ZXZ(i4t_3 V) { return MkI4t_4((i4t)0, V.z, V.x, V.z); }
inline i4t_4 Swizz0ZX0(i4t_3 V) { return MkI4t_4((i4t)0, V.z, V.x, (i4t)0); }
inline i4t_4 Swizz0ZYX(i4t_3 V) { return MkI4t_4((i4t)0, V.z, V.y, V.x); }
inline i4t_4 Swizz0ZYY(i4t_3 V) { return MkI4t_4((i4t)0, V.z, V.y, V.y); }
inline i4t_4 Swizz0ZYZ(i4t_3 V) { return MkI4t_4((i4t)0, V.z, V.y, V.z); }
inline i4t_4 Swizz0ZY0(i4t_3 V) { return MkI4t_4((i4t)0, V.z, V.y, (i4t)0); }
inline i4t_4 Swizz0ZZX(i4t_3 V) { return MkI4t_4((i4t)0, V.z, V.z, V.x); }
inline i4t_4 Swizz0ZZY(i4t_3 V) { return MkI4t_4((i4t)0, V.z, V.z, V.y); }
inline i4t_4 Swizz0ZZZ(i4t_3 V) { return MkI4t_4((i4t)0, V.z, V.z, V.z); }
inline i4t_4 Swizz0ZZ0(i4t_3 V) { return MkI4t_4((i4t)0, V.z, V.z, (i4t)0); }
inline i4t_4 Swizz0Z0X(i4t_3 V) { return MkI4t_4((i4t)0, V.z, (i4t)0, V.x); }
inline i4t_4 Swizz0Z0Y(i4t_3 V) { return MkI4t_4((i4t)0, V.z, (i4t)0, V.y); }
inline i4t_4 Swizz0Z0Z(i4t_3 V) { return MkI4t_4((i4t)0, V.z, (i4t)0, V.z); }
inline i4t_4 Swizz0Z00(i4t_3 V) { return MkI4t_4((i4t)0, V.z, (i4t)0, (i4t)0); }
inline i4t_4 Swizz00XX(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, V.x, V.x); }
inline i4t_4 Swizz00XY(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, V.x, V.y); }
inline i4t_4 Swizz00XZ(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, V.x, V.z); }
inline i4t_4 Swizz00X0(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, V.x, (i4t)0); }
inline i4t_4 Swizz00YX(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, V.y, V.x); }
inline i4t_4 Swizz00YY(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, V.y, V.y); }
inline i4t_4 Swizz00YZ(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, V.y, V.z); }
inline i4t_4 Swizz00Y0(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, V.y, (i4t)0); }
inline i4t_4 Swizz00ZX(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, V.z, V.x); }
inline i4t_4 Swizz00ZY(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, V.z, V.y); }
inline i4t_4 Swizz00ZZ(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, V.z, V.z); }
inline i4t_4 Swizz00Z0(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, V.z, (i4t)0); }
inline i4t_4 Swizz000X(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, (i4t)0, V.x); }
inline i4t_4 Swizz000Y(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, (i4t)0, V.y); }
inline i4t_4 Swizz000Z(i4t_3 V) { return MkI4t_4((i4t)0, (i4t)0, (i4t)0, V.z); }
inline i4t_2 SwizzXX(i4t_4 V) { return MkI4t_2(V.x, V.x); }
inline i4t_2 SwizzXY(i4t_4 V) { return MkI4t_2(V.x, V.y); }
inline i4t_2 SwizzXZ(i4t_4 V) { return MkI4t_2(V.x, V.z); }
inline i4t_2 SwizzXW(i4t_4 V) { return MkI4t_2(V.x, V.w); }
inline i4t_2 SwizzX0(i4t_4 V) { return MkI4t_2(V.x, (i4t)0); }
inline i4t_2 SwizzYX(i4t_4 V) { return MkI4t_2(V.y, V.x); }
inline i4t_2 SwizzYY(i4t_4 V) { return MkI4t_2(V.y, V.y); }
inline i4t_2 SwizzYZ(i4t_4 V) { return MkI4t_2(V.y, V.z); }
inline i4t_2 SwizzYW(i4t_4 V) { return MkI4t_2(V.y, V.w); }
inline i4t_2 SwizzY0(i4t_4 V) { return MkI4t_2(V.y, (i4t)0); }
inline i4t_2 SwizzZX(i4t_4 V) { return MkI4t_2(V.z, V.x); }
inline i4t_2 SwizzZY(i4t_4 V) { return MkI4t_2(V.z, V.y); }
inline i4t_2 SwizzZZ(i4t_4 V) { return MkI4t_2(V.z, V.z); }
inline i4t_2 SwizzZW(i4t_4 V) { return MkI4t_2(V.z, V.w); }
inline i4t_2 SwizzZ0(i4t_4 V) { return MkI4t_2(V.z, (i4t)0); }
inline i4t_2 SwizzWX(i4t_4 V) { return MkI4t_2(V.w, V.x); }
inline i4t_2 SwizzWY(i4t_4 V) { return MkI4t_2(V.w, V.y); }
inline i4t_2 SwizzWZ(i4t_4 V) { return MkI4t_2(V.w, V.z); }
inline i4t_2 SwizzWW(i4t_4 V) { return MkI4t_2(V.w, V.w); }
inline i4t_2 SwizzW0(i4t_4 V) { return MkI4t_2(V.w, (i4t)0); }
inline i4t_2 Swizz0X(i4t_4 V) { return MkI4t_2((i4t)0, V.x); }
inline i4t_2 Swizz0Y(i4t_4 V) { return MkI4t_2((i4t)0, V.y); }
inline i4t_2 Swizz0Z(i4t_4 V) { return MkI4t_2((i4t)0, V.z); }
inline i4t_2 Swizz0W(i4t_4 V) { return MkI4t_2((i4t)0, V.w); }
inline i4t_3 SwizzXXX(i4t_4 V) { return MkI4t_3(V.x, V.x, V.x); }
inline i4t_3 SwizzXXY(i4t_4 V) { return MkI4t_3(V.x, V.x, V.y); }
inline i4t_3 SwizzXXZ(i4t_4 V) { return MkI4t_3(V.x, V.x, V.z); }
inline i4t_3 SwizzXXW(i4t_4 V) { return MkI4t_3(V.x, V.x, V.w); }
inline i4t_3 SwizzXX0(i4t_4 V) { return MkI4t_3(V.x, V.x, (i4t)0); }
inline i4t_3 SwizzXYX(i4t_4 V) { return MkI4t_3(V.x, V.y, V.x); }
inline i4t_3 SwizzXYY(i4t_4 V) { return MkI4t_3(V.x, V.y, V.y); }
inline i4t_3 SwizzXYZ(i4t_4 V) { return MkI4t_3(V.x, V.y, V.z); }
inline i4t_3 SwizzXYW(i4t_4 V) { return MkI4t_3(V.x, V.y, V.w); }
inline i4t_3 SwizzXY0(i4t_4 V) { return MkI4t_3(V.x, V.y, (i4t)0); }
inline i4t_3 SwizzXZX(i4t_4 V) { return MkI4t_3(V.x, V.z, V.x); }
inline i4t_3 SwizzXZY(i4t_4 V) { return MkI4t_3(V.x, V.z, V.y); }
inline i4t_3 SwizzXZZ(i4t_4 V) { return MkI4t_3(V.x, V.z, V.z); }
inline i4t_3 SwizzXZW(i4t_4 V) { return MkI4t_3(V.x, V.z, V.w); }
inline i4t_3 SwizzXZ0(i4t_4 V) { return MkI4t_3(V.x, V.z, (i4t)0); }
inline i4t_3 SwizzXWX(i4t_4 V) { return MkI4t_3(V.x, V.w, V.x); }
inline i4t_3 SwizzXWY(i4t_4 V) { return MkI4t_3(V.x, V.w, V.y); }
inline i4t_3 SwizzXWZ(i4t_4 V) { return MkI4t_3(V.x, V.w, V.z); }
inline i4t_3 SwizzXWW(i4t_4 V) { return MkI4t_3(V.x, V.w, V.w); }
inline i4t_3 SwizzXW0(i4t_4 V) { return MkI4t_3(V.x, V.w, (i4t)0); }
inline i4t_3 SwizzX0X(i4t_4 V) { return MkI4t_3(V.x, (i4t)0, V.x); }
inline i4t_3 SwizzX0Y(i4t_4 V) { return MkI4t_3(V.x, (i4t)0, V.y); }
inline i4t_3 SwizzX0Z(i4t_4 V) { return MkI4t_3(V.x, (i4t)0, V.z); }
inline i4t_3 SwizzX0W(i4t_4 V) { return MkI4t_3(V.x, (i4t)0, V.w); }
inline i4t_3 SwizzX00(i4t_4 V) { return MkI4t_3(V.x, (i4t)0, (i4t)0); }
inline i4t_3 SwizzYXX(i4t_4 V) { return MkI4t_3(V.y, V.x, V.x); }
inline i4t_3 SwizzYXY(i4t_4 V) { return MkI4t_3(V.y, V.x, V.y); }
inline i4t_3 SwizzYXZ(i4t_4 V) { return MkI4t_3(V.y, V.x, V.z); }
inline i4t_3 SwizzYXW(i4t_4 V) { return MkI4t_3(V.y, V.x, V.w); }
inline i4t_3 SwizzYX0(i4t_4 V) { return MkI4t_3(V.y, V.x, (i4t)0); }
inline i4t_3 SwizzYYX(i4t_4 V) { return MkI4t_3(V.y, V.y, V.x); }
inline i4t_3 SwizzYYY(i4t_4 V) { return MkI4t_3(V.y, V.y, V.y); }
inline i4t_3 SwizzYYZ(i4t_4 V) { return MkI4t_3(V.y, V.y, V.z); }
inline i4t_3 SwizzYYW(i4t_4 V) { return MkI4t_3(V.y, V.y, V.w); }
inline i4t_3 SwizzYY0(i4t_4 V) { return MkI4t_3(V.y, V.y, (i4t)0); }
inline i4t_3 SwizzYZX(i4t_4 V) { return MkI4t_3(V.y, V.z, V.x); }
inline i4t_3 SwizzYZY(i4t_4 V) { return MkI4t_3(V.y, V.z, V.y); }
inline i4t_3 SwizzYZZ(i4t_4 V) { return MkI4t_3(V.y, V.z, V.z); }
inline i4t_3 SwizzYZW(i4t_4 V) { return MkI4t_3(V.y, V.z, V.w); }
inline i4t_3 SwizzYZ0(i4t_4 V) { return MkI4t_3(V.y, V.z, (i4t)0); }
inline i4t_3 SwizzYWX(i4t_4 V) { return MkI4t_3(V.y, V.w, V.x); }
inline i4t_3 SwizzYWY(i4t_4 V) { return MkI4t_3(V.y, V.w, V.y); }
inline i4t_3 SwizzYWZ(i4t_4 V) { return MkI4t_3(V.y, V.w, V.z); }
inline i4t_3 SwizzYWW(i4t_4 V) { return MkI4t_3(V.y, V.w, V.w); }
inline i4t_3 SwizzYW0(i4t_4 V) { return MkI4t_3(V.y, V.w, (i4t)0); }
inline i4t_3 SwizzY0X(i4t_4 V) { return MkI4t_3(V.y, (i4t)0, V.x); }
inline i4t_3 SwizzY0Y(i4t_4 V) { return MkI4t_3(V.y, (i4t)0, V.y); }
inline i4t_3 SwizzY0Z(i4t_4 V) { return MkI4t_3(V.y, (i4t)0, V.z); }
inline i4t_3 SwizzY0W(i4t_4 V) { return MkI4t_3(V.y, (i4t)0, V.w); }
inline i4t_3 SwizzY00(i4t_4 V) { return MkI4t_3(V.y, (i4t)0, (i4t)0); }
inline i4t_3 SwizzZXX(i4t_4 V) { return MkI4t_3(V.z, V.x, V.x); }
inline i4t_3 SwizzZXY(i4t_4 V) { return MkI4t_3(V.z, V.x, V.y); }
inline i4t_3 SwizzZXZ(i4t_4 V) { return MkI4t_3(V.z, V.x, V.z); }
inline i4t_3 SwizzZXW(i4t_4 V) { return MkI4t_3(V.z, V.x, V.w); }
inline i4t_3 SwizzZX0(i4t_4 V) { return MkI4t_3(V.z, V.x, (i4t)0); }
inline i4t_3 SwizzZYX(i4t_4 V) { return MkI4t_3(V.z, V.y, V.x); }
inline i4t_3 SwizzZYY(i4t_4 V) { return MkI4t_3(V.z, V.y, V.y); }
inline i4t_3 SwizzZYZ(i4t_4 V) { return MkI4t_3(V.z, V.y, V.z); }
inline i4t_3 SwizzZYW(i4t_4 V) { return MkI4t_3(V.z, V.y, V.w); }
inline i4t_3 SwizzZY0(i4t_4 V) { return MkI4t_3(V.z, V.y, (i4t)0); }
inline i4t_3 SwizzZZX(i4t_4 V) { return MkI4t_3(V.z, V.z, V.x); }
inline i4t_3 SwizzZZY(i4t_4 V) { return MkI4t_3(V.z, V.z, V.y); }
inline i4t_3 SwizzZZZ(i4t_4 V) { return MkI4t_3(V.z, V.z, V.z); }
inline i4t_3 SwizzZZW(i4t_4 V) { return MkI4t_3(V.z, V.z, V.w); }
inline i4t_3 SwizzZZ0(i4t_4 V) { return MkI4t_3(V.z, V.z, (i4t)0); }
inline i4t_3 SwizzZWX(i4t_4 V) { return MkI4t_3(V.z, V.w, V.x); }
inline i4t_3 SwizzZWY(i4t_4 V) { return MkI4t_3(V.z, V.w, V.y); }
inline i4t_3 SwizzZWZ(i4t_4 V) { return MkI4t_3(V.z, V.w, V.z); }
inline i4t_3 SwizzZWW(i4t_4 V) { return MkI4t_3(V.z, V.w, V.w); }
inline i4t_3 SwizzZW0(i4t_4 V) { return MkI4t_3(V.z, V.w, (i4t)0); }
inline i4t_3 SwizzZ0X(i4t_4 V) { return MkI4t_3(V.z, (i4t)0, V.x); }
inline i4t_3 SwizzZ0Y(i4t_4 V) { return MkI4t_3(V.z, (i4t)0, V.y); }
inline i4t_3 SwizzZ0Z(i4t_4 V) { return MkI4t_3(V.z, (i4t)0, V.z); }
inline i4t_3 SwizzZ0W(i4t_4 V) { return MkI4t_3(V.z, (i4t)0, V.w); }
inline i4t_3 SwizzZ00(i4t_4 V) { return MkI4t_3(V.z, (i4t)0, (i4t)0); }
inline i4t_3 SwizzWXX(i4t_4 V) { return MkI4t_3(V.w, V.x, V.x); }
inline i4t_3 SwizzWXY(i4t_4 V) { return MkI4t_3(V.w, V.x, V.y); }
inline i4t_3 SwizzWXZ(i4t_4 V) { return MkI4t_3(V.w, V.x, V.z); }
inline i4t_3 SwizzWXW(i4t_4 V) { return MkI4t_3(V.w, V.x, V.w); }
inline i4t_3 SwizzWX0(i4t_4 V) { return MkI4t_3(V.w, V.x, (i4t)0); }
inline i4t_3 SwizzWYX(i4t_4 V) { return MkI4t_3(V.w, V.y, V.x); }
inline i4t_3 SwizzWYY(i4t_4 V) { return MkI4t_3(V.w, V.y, V.y); }
inline i4t_3 SwizzWYZ(i4t_4 V) { return MkI4t_3(V.w, V.y, V.z); }
inline i4t_3 SwizzWYW(i4t_4 V) { return MkI4t_3(V.w, V.y, V.w); }
inline i4t_3 SwizzWY0(i4t_4 V) { return MkI4t_3(V.w, V.y, (i4t)0); }
inline i4t_3 SwizzWZX(i4t_4 V) { return MkI4t_3(V.w, V.z, V.x); }
inline i4t_3 SwizzWZY(i4t_4 V) { return MkI4t_3(V.w, V.z, V.y); }
inline i4t_3 SwizzWZZ(i4t_4 V) { return MkI4t_3(V.w, V.z, V.z); }
inline i4t_3 SwizzWZW(i4t_4 V) { return MkI4t_3(V.w, V.z, V.w); }
inline i4t_3 SwizzWZ0(i4t_4 V) { return MkI4t_3(V.w, V.z, (i4t)0); }
inline i4t_3 SwizzWWX(i4t_4 V) { return MkI4t_3(V.w, V.w, V.x); }
inline i4t_3 SwizzWWY(i4t_4 V) { return MkI4t_3(V.w, V.w, V.y); }
inline i4t_3 SwizzWWZ(i4t_4 V) { return MkI4t_3(V.w, V.w, V.z); }
inline i4t_3 SwizzWWW(i4t_4 V) { return MkI4t_3(V.w, V.w, V.w); }
inline i4t_3 SwizzWW0(i4t_4 V) { return MkI4t_3(V.w, V.w, (i4t)0); }
inline i4t_3 SwizzW0X(i4t_4 V) { return MkI4t_3(V.w, (i4t)0, V.x); }
inline i4t_3 SwizzW0Y(i4t_4 V) { return MkI4t_3(V.w, (i4t)0, V.y); }
inline i4t_3 SwizzW0Z(i4t_4 V) { return MkI4t_3(V.w, (i4t)0, V.z); }
inline i4t_3 SwizzW0W(i4t_4 V) { return MkI4t_3(V.w, (i4t)0, V.w); }
inline i4t_3 SwizzW00(i4t_4 V) { return MkI4t_3(V.w, (i4t)0, (i4t)0); }
inline i4t_3 Swizz0XX(i4t_4 V) { return MkI4t_3((i4t)0, V.x, V.x); }
inline i4t_3 Swizz0XY(i4t_4 V) { return MkI4t_3((i4t)0, V.x, V.y); }
inline i4t_3 Swizz0XZ(i4t_4 V) { return MkI4t_3((i4t)0, V.x, V.z); }
inline i4t_3 Swizz0XW(i4t_4 V) { return MkI4t_3((i4t)0, V.x, V.w); }
inline i4t_3 Swizz0X0(i4t_4 V) { return MkI4t_3((i4t)0, V.x, (i4t)0); }
inline i4t_3 Swizz0YX(i4t_4 V) { return MkI4t_3((i4t)0, V.y, V.x); }
inline i4t_3 Swizz0YY(i4t_4 V) { return MkI4t_3((i4t)0, V.y, V.y); }
inline i4t_3 Swizz0YZ(i4t_4 V) { return MkI4t_3((i4t)0, V.y, V.z); }
inline i4t_3 Swizz0YW(i4t_4 V) { return MkI4t_3((i4t)0, V.y, V.w); }
inline i4t_3 Swizz0Y0(i4t_4 V) { return MkI4t_3((i4t)0, V.y, (i4t)0); }
inline i4t_3 Swizz0ZX(i4t_4 V) { return MkI4t_3((i4t)0, V.z, V.x); }
inline i4t_3 Swizz0ZY(i4t_4 V) { return MkI4t_3((i4t)0, V.z, V.y); }
inline i4t_3 Swizz0ZZ(i4t_4 V) { return MkI4t_3((i4t)0, V.z, V.z); }
inline i4t_3 Swizz0ZW(i4t_4 V) { return MkI4t_3((i4t)0, V.z, V.w); }
inline i4t_3 Swizz0Z0(i4t_4 V) { return MkI4t_3((i4t)0, V.z, (i4t)0); }
inline i4t_3 Swizz0WX(i4t_4 V) { return MkI4t_3((i4t)0, V.w, V.x); }
inline i4t_3 Swizz0WY(i4t_4 V) { return MkI4t_3((i4t)0, V.w, V.y); }
inline i4t_3 Swizz0WZ(i4t_4 V) { return MkI4t_3((i4t)0, V.w, V.z); }
inline i4t_3 Swizz0WW(i4t_4 V) { return MkI4t_3((i4t)0, V.w, V.w); }
inline i4t_3 Swizz0W0(i4t_4 V) { return MkI4t_3((i4t)0, V.w, (i4t)0); }
inline i4t_3 Swizz00X(i4t_4 V) { return MkI4t_3((i4t)0, (i4t)0, V.x); }
inline i4t_3 Swizz00Y(i4t_4 V) { return MkI4t_3((i4t)0, (i4t)0, V.y); }
inline i4t_3 Swizz00Z(i4t_4 V) { return MkI4t_3((i4t)0, (i4t)0, V.z); }
inline i4t_3 Swizz00W(i4t_4 V) { return MkI4t_3((i4t)0, (i4t)0, V.w); }
inline i4t_4 SwizzXXXX(i4t_4 V) { return MkI4t_4(V.x, V.x, V.x, V.x); }
inline i4t_4 SwizzXXXY(i4t_4 V) { return MkI4t_4(V.x, V.x, V.x, V.y); }
inline i4t_4 SwizzXXXZ(i4t_4 V) { return MkI4t_4(V.x, V.x, V.x, V.z); }
inline i4t_4 SwizzXXXW(i4t_4 V) { return MkI4t_4(V.x, V.x, V.x, V.w); }
inline i4t_4 SwizzXXX0(i4t_4 V) { return MkI4t_4(V.x, V.x, V.x, (i4t)0); }
inline i4t_4 SwizzXXYX(i4t_4 V) { return MkI4t_4(V.x, V.x, V.y, V.x); }
inline i4t_4 SwizzXXYY(i4t_4 V) { return MkI4t_4(V.x, V.x, V.y, V.y); }
inline i4t_4 SwizzXXYZ(i4t_4 V) { return MkI4t_4(V.x, V.x, V.y, V.z); }
inline i4t_4 SwizzXXYW(i4t_4 V) { return MkI4t_4(V.x, V.x, V.y, V.w); }
inline i4t_4 SwizzXXY0(i4t_4 V) { return MkI4t_4(V.x, V.x, V.y, (i4t)0); }
inline i4t_4 SwizzXXZX(i4t_4 V) { return MkI4t_4(V.x, V.x, V.z, V.x); }
inline i4t_4 SwizzXXZY(i4t_4 V) { return MkI4t_4(V.x, V.x, V.z, V.y); }
inline i4t_4 SwizzXXZZ(i4t_4 V) { return MkI4t_4(V.x, V.x, V.z, V.z); }
inline i4t_4 SwizzXXZW(i4t_4 V) { return MkI4t_4(V.x, V.x, V.z, V.w); }
inline i4t_4 SwizzXXZ0(i4t_4 V) { return MkI4t_4(V.x, V.x, V.z, (i4t)0); }
inline i4t_4 SwizzXXWX(i4t_4 V) { return MkI4t_4(V.x, V.x, V.w, V.x); }
inline i4t_4 SwizzXXWY(i4t_4 V) { return MkI4t_4(V.x, V.x, V.w, V.y); }
inline i4t_4 SwizzXXWZ(i4t_4 V) { return MkI4t_4(V.x, V.x, V.w, V.z); }
inline i4t_4 SwizzXXWW(i4t_4 V) { return MkI4t_4(V.x, V.x, V.w, V.w); }
inline i4t_4 SwizzXXW0(i4t_4 V) { return MkI4t_4(V.x, V.x, V.w, (i4t)0); }
inline i4t_4 SwizzXX0X(i4t_4 V) { return MkI4t_4(V.x, V.x, (i4t)0, V.x); }
inline i4t_4 SwizzXX0Y(i4t_4 V) { return MkI4t_4(V.x, V.x, (i4t)0, V.y); }
inline i4t_4 SwizzXX0Z(i4t_4 V) { return MkI4t_4(V.x, V.x, (i4t)0, V.z); }
inline i4t_4 SwizzXX0W(i4t_4 V) { return MkI4t_4(V.x, V.x, (i4t)0, V.w); }
inline i4t_4 SwizzXX00(i4t_4 V) { return MkI4t_4(V.x, V.x, (i4t)0, (i4t)0); }
inline i4t_4 SwizzXYXX(i4t_4 V) { return MkI4t_4(V.x, V.y, V.x, V.x); }
inline i4t_4 SwizzXYXY(i4t_4 V) { return MkI4t_4(V.x, V.y, V.x, V.y); }
inline i4t_4 SwizzXYXZ(i4t_4 V) { return MkI4t_4(V.x, V.y, V.x, V.z); }
inline i4t_4 SwizzXYXW(i4t_4 V) { return MkI4t_4(V.x, V.y, V.x, V.w); }
inline i4t_4 SwizzXYX0(i4t_4 V) { return MkI4t_4(V.x, V.y, V.x, (i4t)0); }
inline i4t_4 SwizzXYYX(i4t_4 V) { return MkI4t_4(V.x, V.y, V.y, V.x); }
inline i4t_4 SwizzXYYY(i4t_4 V) { return MkI4t_4(V.x, V.y, V.y, V.y); }
inline i4t_4 SwizzXYYZ(i4t_4 V) { return MkI4t_4(V.x, V.y, V.y, V.z); }
inline i4t_4 SwizzXYYW(i4t_4 V) { return MkI4t_4(V.x, V.y, V.y, V.w); }
inline i4t_4 SwizzXYY0(i4t_4 V) { return MkI4t_4(V.x, V.y, V.y, (i4t)0); }
inline i4t_4 SwizzXYZX(i4t_4 V) { return MkI4t_4(V.x, V.y, V.z, V.x); }
inline i4t_4 SwizzXYZY(i4t_4 V) { return MkI4t_4(V.x, V.y, V.z, V.y); }
inline i4t_4 SwizzXYZZ(i4t_4 V) { return MkI4t_4(V.x, V.y, V.z, V.z); }
inline i4t_4 SwizzXYZW(i4t_4 V) { return MkI4t_4(V.x, V.y, V.z, V.w); }
inline i4t_4 SwizzXYZ0(i4t_4 V) { return MkI4t_4(V.x, V.y, V.z, (i4t)0); }
inline i4t_4 SwizzXYWX(i4t_4 V) { return MkI4t_4(V.x, V.y, V.w, V.x); }
inline i4t_4 SwizzXYWY(i4t_4 V) { return MkI4t_4(V.x, V.y, V.w, V.y); }
inline i4t_4 SwizzXYWZ(i4t_4 V) { return MkI4t_4(V.x, V.y, V.w, V.z); }
inline i4t_4 SwizzXYWW(i4t_4 V) { return MkI4t_4(V.x, V.y, V.w, V.w); }
inline i4t_4 SwizzXYW0(i4t_4 V) { return MkI4t_4(V.x, V.y, V.w, (i4t)0); }
inline i4t_4 SwizzXY0X(i4t_4 V) { return MkI4t_4(V.x, V.y, (i4t)0, V.x); }
inline i4t_4 SwizzXY0Y(i4t_4 V) { return MkI4t_4(V.x, V.y, (i4t)0, V.y); }
inline i4t_4 SwizzXY0Z(i4t_4 V) { return MkI4t_4(V.x, V.y, (i4t)0, V.z); }
inline i4t_4 SwizzXY0W(i4t_4 V) { return MkI4t_4(V.x, V.y, (i4t)0, V.w); }
inline i4t_4 SwizzXY00(i4t_4 V) { return MkI4t_4(V.x, V.y, (i4t)0, (i4t)0); }
inline i4t_4 SwizzXZXX(i4t_4 V) { return MkI4t_4(V.x, V.z, V.x, V.x); }
inline i4t_4 SwizzXZXY(i4t_4 V) { return MkI4t_4(V.x, V.z, V.x, V.y); }
inline i4t_4 SwizzXZXZ(i4t_4 V) { return MkI4t_4(V.x, V.z, V.x, V.z); }
inline i4t_4 SwizzXZXW(i4t_4 V) { return MkI4t_4(V.x, V.z, V.x, V.w); }
inline i4t_4 SwizzXZX0(i4t_4 V) { return MkI4t_4(V.x, V.z, V.x, (i4t)0); }
inline i4t_4 SwizzXZYX(i4t_4 V) { return MkI4t_4(V.x, V.z, V.y, V.x); }
inline i4t_4 SwizzXZYY(i4t_4 V) { return MkI4t_4(V.x, V.z, V.y, V.y); }
inline i4t_4 SwizzXZYZ(i4t_4 V) { return MkI4t_4(V.x, V.z, V.y, V.z); }
inline i4t_4 SwizzXZYW(i4t_4 V) { return MkI4t_4(V.x, V.z, V.y, V.w); }
inline i4t_4 SwizzXZY0(i4t_4 V) { return MkI4t_4(V.x, V.z, V.y, (i4t)0); }
inline i4t_4 SwizzXZZX(i4t_4 V) { return MkI4t_4(V.x, V.z, V.z, V.x); }
inline i4t_4 SwizzXZZY(i4t_4 V) { return MkI4t_4(V.x, V.z, V.z, V.y); }
inline i4t_4 SwizzXZZZ(i4t_4 V) { return MkI4t_4(V.x, V.z, V.z, V.z); }
inline i4t_4 SwizzXZZW(i4t_4 V) { return MkI4t_4(V.x, V.z, V.z, V.w); }
inline i4t_4 SwizzXZZ0(i4t_4 V) { return MkI4t_4(V.x, V.z, V.z, (i4t)0); }
inline i4t_4 SwizzXZWX(i4t_4 V) { return MkI4t_4(V.x, V.z, V.w, V.x); }
inline i4t_4 SwizzXZWY(i4t_4 V) { return MkI4t_4(V.x, V.z, V.w, V.y); }
inline i4t_4 SwizzXZWZ(i4t_4 V) { return MkI4t_4(V.x, V.z, V.w, V.z); }
inline i4t_4 SwizzXZWW(i4t_4 V) { return MkI4t_4(V.x, V.z, V.w, V.w); }
inline i4t_4 SwizzXZW0(i4t_4 V) { return MkI4t_4(V.x, V.z, V.w, (i4t)0); }
inline i4t_4 SwizzXZ0X(i4t_4 V) { return MkI4t_4(V.x, V.z, (i4t)0, V.x); }
inline i4t_4 SwizzXZ0Y(i4t_4 V) { return MkI4t_4(V.x, V.z, (i4t)0, V.y); }
inline i4t_4 SwizzXZ0Z(i4t_4 V) { return MkI4t_4(V.x, V.z, (i4t)0, V.z); }
inline i4t_4 SwizzXZ0W(i4t_4 V) { return MkI4t_4(V.x, V.z, (i4t)0, V.w); }
inline i4t_4 SwizzXZ00(i4t_4 V) { return MkI4t_4(V.x, V.z, (i4t)0, (i4t)0); }
inline i4t_4 SwizzXWXX(i4t_4 V) { return MkI4t_4(V.x, V.w, V.x, V.x); }
inline i4t_4 SwizzXWXY(i4t_4 V) { return MkI4t_4(V.x, V.w, V.x, V.y); }
inline i4t_4 SwizzXWXZ(i4t_4 V) { return MkI4t_4(V.x, V.w, V.x, V.z); }
inline i4t_4 SwizzXWXW(i4t_4 V) { return MkI4t_4(V.x, V.w, V.x, V.w); }
inline i4t_4 SwizzXWX0(i4t_4 V) { return MkI4t_4(V.x, V.w, V.x, (i4t)0); }
inline i4t_4 SwizzXWYX(i4t_4 V) { return MkI4t_4(V.x, V.w, V.y, V.x); }
inline i4t_4 SwizzXWYY(i4t_4 V) { return MkI4t_4(V.x, V.w, V.y, V.y); }
inline i4t_4 SwizzXWYZ(i4t_4 V) { return MkI4t_4(V.x, V.w, V.y, V.z); }
inline i4t_4 SwizzXWYW(i4t_4 V) { return MkI4t_4(V.x, V.w, V.y, V.w); }
inline i4t_4 SwizzXWY0(i4t_4 V) { return MkI4t_4(V.x, V.w, V.y, (i4t)0); }
inline i4t_4 SwizzXWZX(i4t_4 V) { return MkI4t_4(V.x, V.w, V.z, V.x); }
inline i4t_4 SwizzXWZY(i4t_4 V) { return MkI4t_4(V.x, V.w, V.z, V.y); }
inline i4t_4 SwizzXWZZ(i4t_4 V) { return MkI4t_4(V.x, V.w, V.z, V.z); }
inline i4t_4 SwizzXWZW(i4t_4 V) { return MkI4t_4(V.x, V.w, V.z, V.w); }
inline i4t_4 SwizzXWZ0(i4t_4 V) { return MkI4t_4(V.x, V.w, V.z, (i4t)0); }
inline i4t_4 SwizzXWWX(i4t_4 V) { return MkI4t_4(V.x, V.w, V.w, V.x); }
inline i4t_4 SwizzXWWY(i4t_4 V) { return MkI4t_4(V.x, V.w, V.w, V.y); }
inline i4t_4 SwizzXWWZ(i4t_4 V) { return MkI4t_4(V.x, V.w, V.w, V.z); }
inline i4t_4 SwizzXWWW(i4t_4 V) { return MkI4t_4(V.x, V.w, V.w, V.w); }
inline i4t_4 SwizzXWW0(i4t_4 V) { return MkI4t_4(V.x, V.w, V.w, (i4t)0); }
inline i4t_4 SwizzXW0X(i4t_4 V) { return MkI4t_4(V.x, V.w, (i4t)0, V.x); }
inline i4t_4 SwizzXW0Y(i4t_4 V) { return MkI4t_4(V.x, V.w, (i4t)0, V.y); }
inline i4t_4 SwizzXW0Z(i4t_4 V) { return MkI4t_4(V.x, V.w, (i4t)0, V.z); }
inline i4t_4 SwizzXW0W(i4t_4 V) { return MkI4t_4(V.x, V.w, (i4t)0, V.w); }
inline i4t_4 SwizzXW00(i4t_4 V) { return MkI4t_4(V.x, V.w, (i4t)0, (i4t)0); }
inline i4t_4 SwizzX0XX(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.x, V.x); }
inline i4t_4 SwizzX0XY(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.x, V.y); }
inline i4t_4 SwizzX0XZ(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.x, V.z); }
inline i4t_4 SwizzX0XW(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.x, V.w); }
inline i4t_4 SwizzX0X0(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.x, (i4t)0); }
inline i4t_4 SwizzX0YX(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.y, V.x); }
inline i4t_4 SwizzX0YY(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.y, V.y); }
inline i4t_4 SwizzX0YZ(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.y, V.z); }
inline i4t_4 SwizzX0YW(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.y, V.w); }
inline i4t_4 SwizzX0Y0(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.y, (i4t)0); }
inline i4t_4 SwizzX0ZX(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.z, V.x); }
inline i4t_4 SwizzX0ZY(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.z, V.y); }
inline i4t_4 SwizzX0ZZ(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.z, V.z); }
inline i4t_4 SwizzX0ZW(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.z, V.w); }
inline i4t_4 SwizzX0Z0(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.z, (i4t)0); }
inline i4t_4 SwizzX0WX(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.w, V.x); }
inline i4t_4 SwizzX0WY(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.w, V.y); }
inline i4t_4 SwizzX0WZ(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.w, V.z); }
inline i4t_4 SwizzX0WW(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.w, V.w); }
inline i4t_4 SwizzX0W0(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, V.w, (i4t)0); }
inline i4t_4 SwizzX00X(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, (i4t)0, V.x); }
inline i4t_4 SwizzX00Y(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, (i4t)0, V.y); }
inline i4t_4 SwizzX00Z(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, (i4t)0, V.z); }
inline i4t_4 SwizzX00W(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, (i4t)0, V.w); }
inline i4t_4 SwizzX000(i4t_4 V) { return MkI4t_4(V.x, (i4t)0, (i4t)0, (i4t)0); }
inline i4t_4 SwizzYXXX(i4t_4 V) { return MkI4t_4(V.y, V.x, V.x, V.x); }
inline i4t_4 SwizzYXXY(i4t_4 V) { return MkI4t_4(V.y, V.x, V.x, V.y); }
inline i4t_4 SwizzYXXZ(i4t_4 V) { return MkI4t_4(V.y, V.x, V.x, V.z); }
inline i4t_4 SwizzYXXW(i4t_4 V) { return MkI4t_4(V.y, V.x, V.x, V.w); }
inline i4t_4 SwizzYXX0(i4t_4 V) { return MkI4t_4(V.y, V.x, V.x, (i4t)0); }
inline i4t_4 SwizzYXYX(i4t_4 V) { return MkI4t_4(V.y, V.x, V.y, V.x); }
inline i4t_4 SwizzYXYY(i4t_4 V) { return MkI4t_4(V.y, V.x, V.y, V.y); }
inline i4t_4 SwizzYXYZ(i4t_4 V) { return MkI4t_4(V.y, V.x, V.y, V.z); }
inline i4t_4 SwizzYXYW(i4t_4 V) { return MkI4t_4(V.y, V.x, V.y, V.w); }
inline i4t_4 SwizzYXY0(i4t_4 V) { return MkI4t_4(V.y, V.x, V.y, (i4t)0); }
inline i4t_4 SwizzYXZX(i4t_4 V) { return MkI4t_4(V.y, V.x, V.z, V.x); }
inline i4t_4 SwizzYXZY(i4t_4 V) { return MkI4t_4(V.y, V.x, V.z, V.y); }
inline i4t_4 SwizzYXZZ(i4t_4 V) { return MkI4t_4(V.y, V.x, V.z, V.z); }
inline i4t_4 SwizzYXZW(i4t_4 V) { return MkI4t_4(V.y, V.x, V.z, V.w); }
inline i4t_4 SwizzYXZ0(i4t_4 V) { return MkI4t_4(V.y, V.x, V.z, (i4t)0); }
inline i4t_4 SwizzYXWX(i4t_4 V) { return MkI4t_4(V.y, V.x, V.w, V.x); }
inline i4t_4 SwizzYXWY(i4t_4 V) { return MkI4t_4(V.y, V.x, V.w, V.y); }
inline i4t_4 SwizzYXWZ(i4t_4 V) { return MkI4t_4(V.y, V.x, V.w, V.z); }
inline i4t_4 SwizzYXWW(i4t_4 V) { return MkI4t_4(V.y, V.x, V.w, V.w); }
inline i4t_4 SwizzYXW0(i4t_4 V) { return MkI4t_4(V.y, V.x, V.w, (i4t)0); }
inline i4t_4 SwizzYX0X(i4t_4 V) { return MkI4t_4(V.y, V.x, (i4t)0, V.x); }
inline i4t_4 SwizzYX0Y(i4t_4 V) { return MkI4t_4(V.y, V.x, (i4t)0, V.y); }
inline i4t_4 SwizzYX0Z(i4t_4 V) { return MkI4t_4(V.y, V.x, (i4t)0, V.z); }
inline i4t_4 SwizzYX0W(i4t_4 V) { return MkI4t_4(V.y, V.x, (i4t)0, V.w); }
inline i4t_4 SwizzYX00(i4t_4 V) { return MkI4t_4(V.y, V.x, (i4t)0, (i4t)0); }
inline i4t_4 SwizzYYXX(i4t_4 V) { return MkI4t_4(V.y, V.y, V.x, V.x); }
inline i4t_4 SwizzYYXY(i4t_4 V) { return MkI4t_4(V.y, V.y, V.x, V.y); }
inline i4t_4 SwizzYYXZ(i4t_4 V) { return MkI4t_4(V.y, V.y, V.x, V.z); }
inline i4t_4 SwizzYYXW(i4t_4 V) { return MkI4t_4(V.y, V.y, V.x, V.w); }
inline i4t_4 SwizzYYX0(i4t_4 V) { return MkI4t_4(V.y, V.y, V.x, (i4t)0); }
inline i4t_4 SwizzYYYX(i4t_4 V) { return MkI4t_4(V.y, V.y, V.y, V.x); }
inline i4t_4 SwizzYYYY(i4t_4 V) { return MkI4t_4(V.y, V.y, V.y, V.y); }
inline i4t_4 SwizzYYYZ(i4t_4 V) { return MkI4t_4(V.y, V.y, V.y, V.z); }
inline i4t_4 SwizzYYYW(i4t_4 V) { return MkI4t_4(V.y, V.y, V.y, V.w); }
inline i4t_4 SwizzYYY0(i4t_4 V) { return MkI4t_4(V.y, V.y, V.y, (i4t)0); }
inline i4t_4 SwizzYYZX(i4t_4 V) { return MkI4t_4(V.y, V.y, V.z, V.x); }
inline i4t_4 SwizzYYZY(i4t_4 V) { return MkI4t_4(V.y, V.y, V.z, V.y); }
inline i4t_4 SwizzYYZZ(i4t_4 V) { return MkI4t_4(V.y, V.y, V.z, V.z); }
inline i4t_4 SwizzYYZW(i4t_4 V) { return MkI4t_4(V.y, V.y, V.z, V.w); }
inline i4t_4 SwizzYYZ0(i4t_4 V) { return MkI4t_4(V.y, V.y, V.z, (i4t)0); }
inline i4t_4 SwizzYYWX(i4t_4 V) { return MkI4t_4(V.y, V.y, V.w, V.x); }
inline i4t_4 SwizzYYWY(i4t_4 V) { return MkI4t_4(V.y, V.y, V.w, V.y); }
inline i4t_4 SwizzYYWZ(i4t_4 V) { return MkI4t_4(V.y, V.y, V.w, V.z); }
inline i4t_4 SwizzYYWW(i4t_4 V) { return MkI4t_4(V.y, V.y, V.w, V.w); }
inline i4t_4 SwizzYYW0(i4t_4 V) { return MkI4t_4(V.y, V.y, V.w, (i4t)0); }
inline i4t_4 SwizzYY0X(i4t_4 V) { return MkI4t_4(V.y, V.y, (i4t)0, V.x); }
inline i4t_4 SwizzYY0Y(i4t_4 V) { return MkI4t_4(V.y, V.y, (i4t)0, V.y); }
inline i4t_4 SwizzYY0Z(i4t_4 V) { return MkI4t_4(V.y, V.y, (i4t)0, V.z); }
inline i4t_4 SwizzYY0W(i4t_4 V) { return MkI4t_4(V.y, V.y, (i4t)0, V.w); }
inline i4t_4 SwizzYY00(i4t_4 V) { return MkI4t_4(V.y, V.y, (i4t)0, (i4t)0); }
inline i4t_4 SwizzYZXX(i4t_4 V) { return MkI4t_4(V.y, V.z, V.x, V.x); }
inline i4t_4 SwizzYZXY(i4t_4 V) { return MkI4t_4(V.y, V.z, V.x, V.y); }
inline i4t_4 SwizzYZXZ(i4t_4 V) { return MkI4t_4(V.y, V.z, V.x, V.z); }
inline i4t_4 SwizzYZXW(i4t_4 V) { return MkI4t_4(V.y, V.z, V.x, V.w); }
inline i4t_4 SwizzYZX0(i4t_4 V) { return MkI4t_4(V.y, V.z, V.x, (i4t)0); }
inline i4t_4 SwizzYZYX(i4t_4 V) { return MkI4t_4(V.y, V.z, V.y, V.x); }
inline i4t_4 SwizzYZYY(i4t_4 V) { return MkI4t_4(V.y, V.z, V.y, V.y); }
inline i4t_4 SwizzYZYZ(i4t_4 V) { return MkI4t_4(V.y, V.z, V.y, V.z); }
inline i4t_4 SwizzYZYW(i4t_4 V) { return MkI4t_4(V.y, V.z, V.y, V.w); }
inline i4t_4 SwizzYZY0(i4t_4 V) { return MkI4t_4(V.y, V.z, V.y, (i4t)0); }
inline i4t_4 SwizzYZZX(i4t_4 V) { return MkI4t_4(V.y, V.z, V.z, V.x); }
inline i4t_4 SwizzYZZY(i4t_4 V) { return MkI4t_4(V.y, V.z, V.z, V.y); }
inline i4t_4 SwizzYZZZ(i4t_4 V) { return MkI4t_4(V.y, V.z, V.z, V.z); }
inline i4t_4 SwizzYZZW(i4t_4 V) { return MkI4t_4(V.y, V.z, V.z, V.w); }
inline i4t_4 SwizzYZZ0(i4t_4 V) { return MkI4t_4(V.y, V.z, V.z, (i4t)0); }
inline i4t_4 SwizzYZWX(i4t_4 V) { return MkI4t_4(V.y, V.z, V.w, V.x); }
inline i4t_4 SwizzYZWY(i4t_4 V) { return MkI4t_4(V.y, V.z, V.w, V.y); }
inline i4t_4 SwizzYZWZ(i4t_4 V) { return MkI4t_4(V.y, V.z, V.w, V.z); }
inline i4t_4 SwizzYZWW(i4t_4 V) { return MkI4t_4(V.y, V.z, V.w, V.w); }
inline i4t_4 SwizzYZW0(i4t_4 V) { return MkI4t_4(V.y, V.z, V.w, (i4t)0); }
inline i4t_4 SwizzYZ0X(i4t_4 V) { return MkI4t_4(V.y, V.z, (i4t)0, V.x); }
inline i4t_4 SwizzYZ0Y(i4t_4 V) { return MkI4t_4(V.y, V.z, (i4t)0, V.y); }
inline i4t_4 SwizzYZ0Z(i4t_4 V) { return MkI4t_4(V.y, V.z, (i4t)0, V.z); }
inline i4t_4 SwizzYZ0W(i4t_4 V) { return MkI4t_4(V.y, V.z, (i4t)0, V.w); }
inline i4t_4 SwizzYZ00(i4t_4 V) { return MkI4t_4(V.y, V.z, (i4t)0, (i4t)0); }
inline i4t_4 SwizzYWXX(i4t_4 V) { return MkI4t_4(V.y, V.w, V.x, V.x); }
inline i4t_4 SwizzYWXY(i4t_4 V) { return MkI4t_4(V.y, V.w, V.x, V.y); }
inline i4t_4 SwizzYWXZ(i4t_4 V) { return MkI4t_4(V.y, V.w, V.x, V.z); }
inline i4t_4 SwizzYWXW(i4t_4 V) { return MkI4t_4(V.y, V.w, V.x, V.w); }
inline i4t_4 SwizzYWX0(i4t_4 V) { return MkI4t_4(V.y, V.w, V.x, (i4t)0); }
inline i4t_4 SwizzYWYX(i4t_4 V) { return MkI4t_4(V.y, V.w, V.y, V.x); }
inline i4t_4 SwizzYWYY(i4t_4 V) { return MkI4t_4(V.y, V.w, V.y, V.y); }
inline i4t_4 SwizzYWYZ(i4t_4 V) { return MkI4t_4(V.y, V.w, V.y, V.z); }
inline i4t_4 SwizzYWYW(i4t_4 V) { return MkI4t_4(V.y, V.w, V.y, V.w); }
inline i4t_4 SwizzYWY0(i4t_4 V) { return MkI4t_4(V.y, V.w, V.y, (i4t)0); }
inline i4t_4 SwizzYWZX(i4t_4 V) { return MkI4t_4(V.y, V.w, V.z, V.x); }
inline i4t_4 SwizzYWZY(i4t_4 V) { return MkI4t_4(V.y, V.w, V.z, V.y); }
inline i4t_4 SwizzYWZZ(i4t_4 V) { return MkI4t_4(V.y, V.w, V.z, V.z); }
inline i4t_4 SwizzYWZW(i4t_4 V) { return MkI4t_4(V.y, V.w, V.z, V.w); }
inline i4t_4 SwizzYWZ0(i4t_4 V) { return MkI4t_4(V.y, V.w, V.z, (i4t)0); }
inline i4t_4 SwizzYWWX(i4t_4 V) { return MkI4t_4(V.y, V.w, V.w, V.x); }
inline i4t_4 SwizzYWWY(i4t_4 V) { return MkI4t_4(V.y, V.w, V.w, V.y); }
inline i4t_4 SwizzYWWZ(i4t_4 V) { return MkI4t_4(V.y, V.w, V.w, V.z); }
inline i4t_4 SwizzYWWW(i4t_4 V) { return MkI4t_4(V.y, V.w, V.w, V.w); }
inline i4t_4 SwizzYWW0(i4t_4 V) { return MkI4t_4(V.y, V.w, V.w, (i4t)0); }
inline i4t_4 SwizzYW0X(i4t_4 V) { return MkI4t_4(V.y, V.w, (i4t)0, V.x); }
inline i4t_4 SwizzYW0Y(i4t_4 V) { return MkI4t_4(V.y, V.w, (i4t)0, V.y); }
inline i4t_4 SwizzYW0Z(i4t_4 V) { return MkI4t_4(V.y, V.w, (i4t)0, V.z); }
inline i4t_4 SwizzYW0W(i4t_4 V) { return MkI4t_4(V.y, V.w, (i4t)0, V.w); }
inline i4t_4 SwizzYW00(i4t_4 V) { return MkI4t_4(V.y, V.w, (i4t)0, (i4t)0); }
inline i4t_4 SwizzY0XX(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.x, V.x); }
inline i4t_4 SwizzY0XY(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.x, V.y); }
inline i4t_4 SwizzY0XZ(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.x, V.z); }
inline i4t_4 SwizzY0XW(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.x, V.w); }
inline i4t_4 SwizzY0X0(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.x, (i4t)0); }
inline i4t_4 SwizzY0YX(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.y, V.x); }
inline i4t_4 SwizzY0YY(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.y, V.y); }
inline i4t_4 SwizzY0YZ(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.y, V.z); }
inline i4t_4 SwizzY0YW(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.y, V.w); }
inline i4t_4 SwizzY0Y0(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.y, (i4t)0); }
inline i4t_4 SwizzY0ZX(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.z, V.x); }
inline i4t_4 SwizzY0ZY(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.z, V.y); }
inline i4t_4 SwizzY0ZZ(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.z, V.z); }
inline i4t_4 SwizzY0ZW(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.z, V.w); }
inline i4t_4 SwizzY0Z0(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.z, (i4t)0); }
inline i4t_4 SwizzY0WX(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.w, V.x); }
inline i4t_4 SwizzY0WY(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.w, V.y); }
inline i4t_4 SwizzY0WZ(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.w, V.z); }
inline i4t_4 SwizzY0WW(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.w, V.w); }
inline i4t_4 SwizzY0W0(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, V.w, (i4t)0); }
inline i4t_4 SwizzY00X(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, (i4t)0, V.x); }
inline i4t_4 SwizzY00Y(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, (i4t)0, V.y); }
inline i4t_4 SwizzY00Z(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, (i4t)0, V.z); }
inline i4t_4 SwizzY00W(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, (i4t)0, V.w); }
inline i4t_4 SwizzY000(i4t_4 V) { return MkI4t_4(V.y, (i4t)0, (i4t)0, (i4t)0); }
inline i4t_4 SwizzZXXX(i4t_4 V) { return MkI4t_4(V.z, V.x, V.x, V.x); }
inline i4t_4 SwizzZXXY(i4t_4 V) { return MkI4t_4(V.z, V.x, V.x, V.y); }
inline i4t_4 SwizzZXXZ(i4t_4 V) { return MkI4t_4(V.z, V.x, V.x, V.z); }
inline i4t_4 SwizzZXXW(i4t_4 V) { return MkI4t_4(V.z, V.x, V.x, V.w); }
inline i4t_4 SwizzZXX0(i4t_4 V) { return MkI4t_4(V.z, V.x, V.x, (i4t)0); }
inline i4t_4 SwizzZXYX(i4t_4 V) { return MkI4t_4(V.z, V.x, V.y, V.x); }
inline i4t_4 SwizzZXYY(i4t_4 V) { return MkI4t_4(V.z, V.x, V.y, V.y); }
inline i4t_4 SwizzZXYZ(i4t_4 V) { return MkI4t_4(V.z, V.x, V.y, V.z); }
inline i4t_4 SwizzZXYW(i4t_4 V) { return MkI4t_4(V.z, V.x, V.y, V.w); }
inline i4t_4 SwizzZXY0(i4t_4 V) { return MkI4t_4(V.z, V.x, V.y, (i4t)0); }
inline i4t_4 SwizzZXZX(i4t_4 V) { return MkI4t_4(V.z, V.x, V.z, V.x); }
inline i4t_4 SwizzZXZY(i4t_4 V) { return MkI4t_4(V.z, V.x, V.z, V.y); }
inline i4t_4 SwizzZXZZ(i4t_4 V) { return MkI4t_4(V.z, V.x, V.z, V.z); }
inline i4t_4 SwizzZXZW(i4t_4 V) { return MkI4t_4(V.z, V.x, V.z, V.w); }
inline i4t_4 SwizzZXZ0(i4t_4 V) { return MkI4t_4(V.z, V.x, V.z, (i4t)0); }
inline i4t_4 SwizzZXWX(i4t_4 V) { return MkI4t_4(V.z, V.x, V.w, V.x); }
inline i4t_4 SwizzZXWY(i4t_4 V) { return MkI4t_4(V.z, V.x, V.w, V.y); }
inline i4t_4 SwizzZXWZ(i4t_4 V) { return MkI4t_4(V.z, V.x, V.w, V.z); }
inline i4t_4 SwizzZXWW(i4t_4 V) { return MkI4t_4(V.z, V.x, V.w, V.w); }
inline i4t_4 SwizzZXW0(i4t_4 V) { return MkI4t_4(V.z, V.x, V.w, (i4t)0); }
inline i4t_4 SwizzZX0X(i4t_4 V) { return MkI4t_4(V.z, V.x, (i4t)0, V.x); }
inline i4t_4 SwizzZX0Y(i4t_4 V) { return MkI4t_4(V.z, V.x, (i4t)0, V.y); }
inline i4t_4 SwizzZX0Z(i4t_4 V) { return MkI4t_4(V.z, V.x, (i4t)0, V.z); }
inline i4t_4 SwizzZX0W(i4t_4 V) { return MkI4t_4(V.z, V.x, (i4t)0, V.w); }
inline i4t_4 SwizzZX00(i4t_4 V) { return MkI4t_4(V.z, V.x, (i4t)0, (i4t)0); }
inline i4t_4 SwizzZYXX(i4t_4 V) { return MkI4t_4(V.z, V.y, V.x, V.x); }
inline i4t_4 SwizzZYXY(i4t_4 V) { return MkI4t_4(V.z, V.y, V.x, V.y); }
inline i4t_4 SwizzZYXZ(i4t_4 V) { return MkI4t_4(V.z, V.y, V.x, V.z); }
inline i4t_4 SwizzZYXW(i4t_4 V) { return MkI4t_4(V.z, V.y, V.x, V.w); }
inline i4t_4 SwizzZYX0(i4t_4 V) { return MkI4t_4(V.z, V.y, V.x, (i4t)0); }
inline i4t_4 SwizzZYYX(i4t_4 V) { return MkI4t_4(V.z, V.y, V.y, V.x); }
inline i4t_4 SwizzZYYY(i4t_4 V) { return MkI4t_4(V.z, V.y, V.y, V.y); }
inline i4t_4 SwizzZYYZ(i4t_4 V) { return MkI4t_4(V.z, V.y, V.y, V.z); }
inline i4t_4 SwizzZYYW(i4t_4 V) { return MkI4t_4(V.z, V.y, V.y, V.w); }
inline i4t_4 SwizzZYY0(i4t_4 V) { return MkI4t_4(V.z, V.y, V.y, (i4t)0); }
inline i4t_4 SwizzZYZX(i4t_4 V) { return MkI4t_4(V.z, V.y, V.z, V.x); }
inline i4t_4 SwizzZYZY(i4t_4 V) { return MkI4t_4(V.z, V.y, V.z, V.y); }
inline i4t_4 SwizzZYZZ(i4t_4 V) { return MkI4t_4(V.z, V.y, V.z, V.z); }
inline i4t_4 SwizzZYZW(i4t_4 V) { return MkI4t_4(V.z, V.y, V.z, V.w); }
inline i4t_4 SwizzZYZ0(i4t_4 V) { return MkI4t_4(V.z, V.y, V.z, (i4t)0); }
inline i4t_4 SwizzZYWX(i4t_4 V) { return MkI4t_4(V.z, V.y, V.w, V.x); }
inline i4t_4 SwizzZYWY(i4t_4 V) { return MkI4t_4(V.z, V.y, V.w, V.y); }
inline i4t_4 SwizzZYWZ(i4t_4 V) { return MkI4t_4(V.z, V.y, V.w, V.z); }
inline i4t_4 SwizzZYWW(i4t_4 V) { return MkI4t_4(V.z, V.y, V.w, V.w); }
inline i4t_4 SwizzZYW0(i4t_4 V) { return MkI4t_4(V.z, V.y, V.w, (i4t)0); }
inline i4t_4 SwizzZY0X(i4t_4 V) { return MkI4t_4(V.z, V.y, (i4t)0, V.x); }
inline i4t_4 SwizzZY0Y(i4t_4 V) { return MkI4t_4(V.z, V.y, (i4t)0, V.y); }
inline i4t_4 SwizzZY0Z(i4t_4 V) { return MkI4t_4(V.z, V.y, (i4t)0, V.z); }
inline i4t_4 SwizzZY0W(i4t_4 V) { return MkI4t_4(V.z, V.y, (i4t)0, V.w); }
inline i4t_4 SwizzZY00(i4t_4 V) { return MkI4t_4(V.z, V.y, (i4t)0, (i4t)0); }
inline i4t_4 SwizzZZXX(i4t_4 V) { return MkI4t_4(V.z, V.z, V.x, V.x); }
inline i4t_4 SwizzZZXY(i4t_4 V) { return MkI4t_4(V.z, V.z, V.x, V.y); }
inline i4t_4 SwizzZZXZ(i4t_4 V) { return MkI4t_4(V.z, V.z, V.x, V.z); }
inline i4t_4 SwizzZZXW(i4t_4 V) { return MkI4t_4(V.z, V.z, V.x, V.w); }
inline i4t_4 SwizzZZX0(i4t_4 V) { return MkI4t_4(V.z, V.z, V.x, (i4t)0); }
inline i4t_4 SwizzZZYX(i4t_4 V) { return MkI4t_4(V.z, V.z, V.y, V.x); }
inline i4t_4 SwizzZZYY(i4t_4 V) { return MkI4t_4(V.z, V.z, V.y, V.y); }
inline i4t_4 SwizzZZYZ(i4t_4 V) { return MkI4t_4(V.z, V.z, V.y, V.z); }
inline i4t_4 SwizzZZYW(i4t_4 V) { return MkI4t_4(V.z, V.z, V.y, V.w); }
inline i4t_4 SwizzZZY0(i4t_4 V) { return MkI4t_4(V.z, V.z, V.y, (i4t)0); }
inline i4t_4 SwizzZZZX(i4t_4 V) { return MkI4t_4(V.z, V.z, V.z, V.x); }
inline i4t_4 SwizzZZZY(i4t_4 V) { return MkI4t_4(V.z, V.z, V.z, V.y); }
inline i4t_4 SwizzZZZZ(i4t_4 V) { return MkI4t_4(V.z, V.z, V.z, V.z); }
inline i4t_4 SwizzZZZW(i4t_4 V) { return MkI4t_4(V.z, V.z, V.z, V.w); }
inline i4t_4 SwizzZZZ0(i4t_4 V) { return MkI4t_4(V.z, V.z, V.z, (i4t)0); }
inline i4t_4 SwizzZZWX(i4t_4 V) { return MkI4t_4(V.z, V.z, V.w, V.x); }
inline i4t_4 SwizzZZWY(i4t_4 V) { return MkI4t_4(V.z, V.z, V.w, V.y); }
inline i4t_4 SwizzZZWZ(i4t_4 V) { return MkI4t_4(V.z, V.z, V.w, V.z); }
inline i4t_4 SwizzZZWW(i4t_4 V) { return MkI4t_4(V.z, V.z, V.w, V.w); }
inline i4t_4 SwizzZZW0(i4t_4 V) { return MkI4t_4(V.z, V.z, V.w, (i4t)0); }
inline i4t_4 SwizzZZ0X(i4t_4 V) { return MkI4t_4(V.z, V.z, (i4t)0, V.x); }
inline i4t_4 SwizzZZ0Y(i4t_4 V) { return MkI4t_4(V.z, V.z, (i4t)0, V.y); }
inline i4t_4 SwizzZZ0Z(i4t_4 V) { return MkI4t_4(V.z, V.z, (i4t)0, V.z); }
inline i4t_4 SwizzZZ0W(i4t_4 V) { return MkI4t_4(V.z, V.z, (i4t)0, V.w); }
inline i4t_4 SwizzZZ00(i4t_4 V) { return MkI4t_4(V.z, V.z, (i4t)0, (i4t)0); }
inline i4t_4 SwizzZWXX(i4t_4 V) { return MkI4t_4(V.z, V.w, V.x, V.x); }
inline i4t_4 SwizzZWXY(i4t_4 V) { return MkI4t_4(V.z, V.w, V.x, V.y); }
inline i4t_4 SwizzZWXZ(i4t_4 V) { return MkI4t_4(V.z, V.w, V.x, V.z); }
inline i4t_4 SwizzZWXW(i4t_4 V) { return MkI4t_4(V.z, V.w, V.x, V.w); }
inline i4t_4 SwizzZWX0(i4t_4 V) { return MkI4t_4(V.z, V.w, V.x, (i4t)0); }
inline i4t_4 SwizzZWYX(i4t_4 V) { return MkI4t_4(V.z, V.w, V.y, V.x); }
inline i4t_4 SwizzZWYY(i4t_4 V) { return MkI4t_4(V.z, V.w, V.y, V.y); }
inline i4t_4 SwizzZWYZ(i4t_4 V) { return MkI4t_4(V.z, V.w, V.y, V.z); }
inline i4t_4 SwizzZWYW(i4t_4 V) { return MkI4t_4(V.z, V.w, V.y, V.w); }
inline i4t_4 SwizzZWY0(i4t_4 V) { return MkI4t_4(V.z, V.w, V.y, (i4t)0); }
inline i4t_4 SwizzZWZX(i4t_4 V) { return MkI4t_4(V.z, V.w, V.z, V.x); }
inline i4t_4 SwizzZWZY(i4t_4 V) { return MkI4t_4(V.z, V.w, V.z, V.y); }
inline i4t_4 SwizzZWZZ(i4t_4 V) { return MkI4t_4(V.z, V.w, V.z, V.z); }
inline i4t_4 SwizzZWZW(i4t_4 V) { return MkI4t_4(V.z, V.w, V.z, V.w); }
inline i4t_4 SwizzZWZ0(i4t_4 V) { return MkI4t_4(V.z, V.w, V.z, (i4t)0); }
inline i4t_4 SwizzZWWX(i4t_4 V) { return MkI4t_4(V.z, V.w, V.w, V.x); }
inline i4t_4 SwizzZWWY(i4t_4 V) { return MkI4t_4(V.z, V.w, V.w, V.y); }
inline i4t_4 SwizzZWWZ(i4t_4 V) { return MkI4t_4(V.z, V.w, V.w, V.z); }
inline i4t_4 SwizzZWWW(i4t_4 V) { return MkI4t_4(V.z, V.w, V.w, V.w); }
inline i4t_4 SwizzZWW0(i4t_4 V) { return MkI4t_4(V.z, V.w, V.w, (i4t)0); }
inline i4t_4 SwizzZW0X(i4t_4 V) { return MkI4t_4(V.z, V.w, (i4t)0, V.x); }
inline i4t_4 SwizzZW0Y(i4t_4 V) { return MkI4t_4(V.z, V.w, (i4t)0, V.y); }
inline i4t_4 SwizzZW0Z(i4t_4 V) { return MkI4t_4(V.z, V.w, (i4t)0, V.z); }
inline i4t_4 SwizzZW0W(i4t_4 V) { return MkI4t_4(V.z, V.w, (i4t)0, V.w); }
inline i4t_4 SwizzZW00(i4t_4 V) { return MkI4t_4(V.z, V.w, (i4t)0, (i4t)0); }
inline i4t_4 SwizzZ0XX(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.x, V.x); }
inline i4t_4 SwizzZ0XY(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.x, V.y); }
inline i4t_4 SwizzZ0XZ(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.x, V.z); }
inline i4t_4 SwizzZ0XW(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.x, V.w); }
inline i4t_4 SwizzZ0X0(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.x, (i4t)0); }
inline i4t_4 SwizzZ0YX(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.y, V.x); }
inline i4t_4 SwizzZ0YY(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.y, V.y); }
inline i4t_4 SwizzZ0YZ(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.y, V.z); }
inline i4t_4 SwizzZ0YW(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.y, V.w); }
inline i4t_4 SwizzZ0Y0(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.y, (i4t)0); }
inline i4t_4 SwizzZ0ZX(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.z, V.x); }
inline i4t_4 SwizzZ0ZY(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.z, V.y); }
inline i4t_4 SwizzZ0ZZ(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.z, V.z); }
inline i4t_4 SwizzZ0ZW(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.z, V.w); }
inline i4t_4 SwizzZ0Z0(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.z, (i4t)0); }
inline i4t_4 SwizzZ0WX(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.w, V.x); }
inline i4t_4 SwizzZ0WY(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.w, V.y); }
inline i4t_4 SwizzZ0WZ(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.w, V.z); }
inline i4t_4 SwizzZ0WW(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.w, V.w); }
inline i4t_4 SwizzZ0W0(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, V.w, (i4t)0); }
inline i4t_4 SwizzZ00X(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, (i4t)0, V.x); }
inline i4t_4 SwizzZ00Y(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, (i4t)0, V.y); }
inline i4t_4 SwizzZ00Z(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, (i4t)0, V.z); }
inline i4t_4 SwizzZ00W(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, (i4t)0, V.w); }
inline i4t_4 SwizzZ000(i4t_4 V) { return MkI4t_4(V.z, (i4t)0, (i4t)0, (i4t)0); }
inline i4t_4 SwizzWXXX(i4t_4 V) { return MkI4t_4(V.w, V.x, V.x, V.x); }
inline i4t_4 SwizzWXXY(i4t_4 V) { return MkI4t_4(V.w, V.x, V.x, V.y); }
inline i4t_4 SwizzWXXZ(i4t_4 V) { return MkI4t_4(V.w, V.x, V.x, V.z); }
inline i4t_4 SwizzWXXW(i4t_4 V) { return MkI4t_4(V.w, V.x, V.x, V.w); }
inline i4t_4 SwizzWXX0(i4t_4 V) { return MkI4t_4(V.w, V.x, V.x, (i4t)0); }
inline i4t_4 SwizzWXYX(i4t_4 V) { return MkI4t_4(V.w, V.x, V.y, V.x); }
inline i4t_4 SwizzWXYY(i4t_4 V) { return MkI4t_4(V.w, V.x, V.y, V.y); }
inline i4t_4 SwizzWXYZ(i4t_4 V) { return MkI4t_4(V.w, V.x, V.y, V.z); }
inline i4t_4 SwizzWXYW(i4t_4 V) { return MkI4t_4(V.w, V.x, V.y, V.w); }
inline i4t_4 SwizzWXY0(i4t_4 V) { return MkI4t_4(V.w, V.x, V.y, (i4t)0); }
inline i4t_4 SwizzWXZX(i4t_4 V) { return MkI4t_4(V.w, V.x, V.z, V.x); }
inline i4t_4 SwizzWXZY(i4t_4 V) { return MkI4t_4(V.w, V.x, V.z, V.y); }
inline i4t_4 SwizzWXZZ(i4t_4 V) { return MkI4t_4(V.w, V.x, V.z, V.z); }
inline i4t_4 SwizzWXZW(i4t_4 V) { return MkI4t_4(V.w, V.x, V.z, V.w); }
inline i4t_4 SwizzWXZ0(i4t_4 V) { return MkI4t_4(V.w, V.x, V.z, (i4t)0); }
inline i4t_4 SwizzWXWX(i4t_4 V) { return MkI4t_4(V.w, V.x, V.w, V.x); }
inline i4t_4 SwizzWXWY(i4t_4 V) { return MkI4t_4(V.w, V.x, V.w, V.y); }
inline i4t_4 SwizzWXWZ(i4t_4 V) { return MkI4t_4(V.w, V.x, V.w, V.z); }
inline i4t_4 SwizzWXWW(i4t_4 V) { return MkI4t_4(V.w, V.x, V.w, V.w); }
inline i4t_4 SwizzWXW0(i4t_4 V) { return MkI4t_4(V.w, V.x, V.w, (i4t)0); }
inline i4t_4 SwizzWX0X(i4t_4 V) { return MkI4t_4(V.w, V.x, (i4t)0, V.x); }
inline i4t_4 SwizzWX0Y(i4t_4 V) { return MkI4t_4(V.w, V.x, (i4t)0, V.y); }
inline i4t_4 SwizzWX0Z(i4t_4 V) { return MkI4t_4(V.w, V.x, (i4t)0, V.z); }
inline i4t_4 SwizzWX0W(i4t_4 V) { return MkI4t_4(V.w, V.x, (i4t)0, V.w); }
inline i4t_4 SwizzWX00(i4t_4 V) { return MkI4t_4(V.w, V.x, (i4t)0, (i4t)0); }
inline i4t_4 SwizzWYXX(i4t_4 V) { return MkI4t_4(V.w, V.y, V.x, V.x); }
inline i4t_4 SwizzWYXY(i4t_4 V) { return MkI4t_4(V.w, V.y, V.x, V.y); }
inline i4t_4 SwizzWYXZ(i4t_4 V) { return MkI4t_4(V.w, V.y, V.x, V.z); }
inline i4t_4 SwizzWYXW(i4t_4 V) { return MkI4t_4(V.w, V.y, V.x, V.w); }
inline i4t_4 SwizzWYX0(i4t_4 V) { return MkI4t_4(V.w, V.y, V.x, (i4t)0); }
inline i4t_4 SwizzWYYX(i4t_4 V) { return MkI4t_4(V.w, V.y, V.y, V.x); }
inline i4t_4 SwizzWYYY(i4t_4 V) { return MkI4t_4(V.w, V.y, V.y, V.y); }
inline i4t_4 SwizzWYYZ(i4t_4 V) { return MkI4t_4(V.w, V.y, V.y, V.z); }
inline i4t_4 SwizzWYYW(i4t_4 V) { return MkI4t_4(V.w, V.y, V.y, V.w); }
inline i4t_4 SwizzWYY0(i4t_4 V) { return MkI4t_4(V.w, V.y, V.y, (i4t)0); }
inline i4t_4 SwizzWYZX(i4t_4 V) { return MkI4t_4(V.w, V.y, V.z, V.x); }
inline i4t_4 SwizzWYZY(i4t_4 V) { return MkI4t_4(V.w, V.y, V.z, V.y); }
inline i4t_4 SwizzWYZZ(i4t_4 V) { return MkI4t_4(V.w, V.y, V.z, V.z); }
inline i4t_4 SwizzWYZW(i4t_4 V) { return MkI4t_4(V.w, V.y, V.z, V.w); }
inline i4t_4 SwizzWYZ0(i4t_4 V) { return MkI4t_4(V.w, V.y, V.z, (i4t)0); }
inline i4t_4 SwizzWYWX(i4t_4 V) { return MkI4t_4(V.w, V.y, V.w, V.x); }
inline i4t_4 SwizzWYWY(i4t_4 V) { return MkI4t_4(V.w, V.y, V.w, V.y); }
inline i4t_4 SwizzWYWZ(i4t_4 V) { return MkI4t_4(V.w, V.y, V.w, V.z); }
inline i4t_4 SwizzWYWW(i4t_4 V) { return MkI4t_4(V.w, V.y, V.w, V.w); }
inline i4t_4 SwizzWYW0(i4t_4 V) { return MkI4t_4(V.w, V.y, V.w, (i4t)0); }
inline i4t_4 SwizzWY0X(i4t_4 V) { return MkI4t_4(V.w, V.y, (i4t)0, V.x); }
inline i4t_4 SwizzWY0Y(i4t_4 V) { return MkI4t_4(V.w, V.y, (i4t)0, V.y); }
inline i4t_4 SwizzWY0Z(i4t_4 V) { return MkI4t_4(V.w, V.y, (i4t)0, V.z); }
inline i4t_4 SwizzWY0W(i4t_4 V) { return MkI4t_4(V.w, V.y, (i4t)0, V.w); }
inline i4t_4 SwizzWY00(i4t_4 V) { return MkI4t_4(V.w, V.y, (i4t)0, (i4t)0); }
inline i4t_4 SwizzWZXX(i4t_4 V) { return MkI4t_4(V.w, V.z, V.x, V.x); }
inline i4t_4 SwizzWZXY(i4t_4 V) { return MkI4t_4(V.w, V.z, V.x, V.y); }
inline i4t_4 SwizzWZXZ(i4t_4 V) { return MkI4t_4(V.w, V.z, V.x, V.z); }
inline i4t_4 SwizzWZXW(i4t_4 V) { return MkI4t_4(V.w, V.z, V.x, V.w); }
inline i4t_4 SwizzWZX0(i4t_4 V) { return MkI4t_4(V.w, V.z, V.x, (i4t)0); }
inline i4t_4 SwizzWZYX(i4t_4 V) { return MkI4t_4(V.w, V.z, V.y, V.x); }
inline i4t_4 SwizzWZYY(i4t_4 V) { return MkI4t_4(V.w, V.z, V.y, V.y); }
inline i4t_4 SwizzWZYZ(i4t_4 V) { return MkI4t_4(V.w, V.z, V.y, V.z); }
inline i4t_4 SwizzWZYW(i4t_4 V) { return MkI4t_4(V.w, V.z, V.y, V.w); }
inline i4t_4 SwizzWZY0(i4t_4 V) { return MkI4t_4(V.w, V.z, V.y, (i4t)0); }
inline i4t_4 SwizzWZZX(i4t_4 V) { return MkI4t_4(V.w, V.z, V.z, V.x); }
inline i4t_4 SwizzWZZY(i4t_4 V) { return MkI4t_4(V.w, V.z, V.z, V.y); }
inline i4t_4 SwizzWZZZ(i4t_4 V) { return MkI4t_4(V.w, V.z, V.z, V.z); }
inline i4t_4 SwizzWZZW(i4t_4 V) { return MkI4t_4(V.w, V.z, V.z, V.w); }
inline i4t_4 SwizzWZZ0(i4t_4 V) { return MkI4t_4(V.w, V.z, V.z, (i4t)0); }
inline i4t_4 SwizzWZWX(i4t_4 V) { return MkI4t_4(V.w, V.z, V.w, V.x); }
inline i4t_4 SwizzWZWY(i4t_4 V) { return MkI4t_4(V.w, V.z, V.w, V.y); }
inline i4t_4 SwizzWZWZ(i4t_4 V) { return MkI4t_4(V.w, V.z, V.w, V.z); }
inline i4t_4 SwizzWZWW(i4t_4 V) { return MkI4t_4(V.w, V.z, V.w, V.w); }
inline i4t_4 SwizzWZW0(i4t_4 V) { return MkI4t_4(V.w, V.z, V.w, (i4t)0); }
inline i4t_4 SwizzWZ0X(i4t_4 V) { return MkI4t_4(V.w, V.z, (i4t)0, V.x); }
inline i4t_4 SwizzWZ0Y(i4t_4 V) { return MkI4t_4(V.w, V.z, (i4t)0, V.y); }
inline i4t_4 SwizzWZ0Z(i4t_4 V) { return MkI4t_4(V.w, V.z, (i4t)0, V.z); }
inline i4t_4 SwizzWZ0W(i4t_4 V) { return MkI4t_4(V.w, V.z, (i4t)0, V.w); }
inline i4t_4 SwizzWZ00(i4t_4 V) { return MkI4t_4(V.w, V.z, (i4t)0, (i4t)0); }
inline i4t_4 SwizzWWXX(i4t_4 V) { return MkI4t_4(V.w, V.w, V.x, V.x); }
inline i4t_4 SwizzWWXY(i4t_4 V) { return MkI4t_4(V.w, V.w, V.x, V.y); }
inline i4t_4 SwizzWWXZ(i4t_4 V) { return MkI4t_4(V.w, V.w, V.x, V.z); }
inline i4t_4 SwizzWWXW(i4t_4 V) { return MkI4t_4(V.w, V.w, V.x, V.w); }
inline i4t_4 SwizzWWX0(i4t_4 V) { return MkI4t_4(V.w, V.w, V.x, (i4t)0); }
inline i4t_4 SwizzWWYX(i4t_4 V) { return MkI4t_4(V.w, V.w, V.y, V.x); }
inline i4t_4 SwizzWWYY(i4t_4 V) { return MkI4t_4(V.w, V.w, V.y, V.y); }
inline i4t_4 SwizzWWYZ(i4t_4 V) { return MkI4t_4(V.w, V.w, V.y, V.z); }
inline i4t_4 SwizzWWYW(i4t_4 V) { return MkI4t_4(V.w, V.w, V.y, V.w); }
inline i4t_4 SwizzWWY0(i4t_4 V) { return MkI4t_4(V.w, V.w, V.y, (i4t)0); }
inline i4t_4 SwizzWWZX(i4t_4 V) { return MkI4t_4(V.w, V.w, V.z, V.x); }
inline i4t_4 SwizzWWZY(i4t_4 V) { return MkI4t_4(V.w, V.w, V.z, V.y); }
inline i4t_4 SwizzWWZZ(i4t_4 V) { return MkI4t_4(V.w, V.w, V.z, V.z); }
inline i4t_4 SwizzWWZW(i4t_4 V) { return MkI4t_4(V.w, V.w, V.z, V.w); }
inline i4t_4 SwizzWWZ0(i4t_4 V) { return MkI4t_4(V.w, V.w, V.z, (i4t)0); }
inline i4t_4 SwizzWWWX(i4t_4 V) { return MkI4t_4(V.w, V.w, V.w, V.x); }
inline i4t_4 SwizzWWWY(i4t_4 V) { return MkI4t_4(V.w, V.w, V.w, V.y); }
inline i4t_4 SwizzWWWZ(i4t_4 V) { return MkI4t_4(V.w, V.w, V.w, V.z); }
inline i4t_4 SwizzWWWW(i4t_4 V) { return MkI4t_4(V.w, V.w, V.w, V.w); }
inline i4t_4 SwizzWWW0(i4t_4 V) { return MkI4t_4(V.w, V.w, V.w, (i4t)0); }
inline i4t_4 SwizzWW0X(i4t_4 V) { return MkI4t_4(V.w, V.w, (i4t)0, V.x); }
inline i4t_4 SwizzWW0Y(i4t_4 V) { return MkI4t_4(V.w, V.w, (i4t)0, V.y); }
inline i4t_4 SwizzWW0Z(i4t_4 V) { return MkI4t_4(V.w, V.w, (i4t)0, V.z); }
inline i4t_4 SwizzWW0W(i4t_4 V) { return MkI4t_4(V.w, V.w, (i4t)0, V.w); }
inline i4t_4 SwizzWW00(i4t_4 V) { return MkI4t_4(V.w, V.w, (i4t)0, (i4t)0); }
inline i4t_4 SwizzW0XX(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.x, V.x); }
inline i4t_4 SwizzW0XY(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.x, V.y); }
inline i4t_4 SwizzW0XZ(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.x, V.z); }
inline i4t_4 SwizzW0XW(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.x, V.w); }
inline i4t_4 SwizzW0X0(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.x, (i4t)0); }
inline i4t_4 SwizzW0YX(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.y, V.x); }
inline i4t_4 SwizzW0YY(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.y, V.y); }
inline i4t_4 SwizzW0YZ(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.y, V.z); }
inline i4t_4 SwizzW0YW(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.y, V.w); }
inline i4t_4 SwizzW0Y0(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.y, (i4t)0); }
inline i4t_4 SwizzW0ZX(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.z, V.x); }
inline i4t_4 SwizzW0ZY(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.z, V.y); }
inline i4t_4 SwizzW0ZZ(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.z, V.z); }
inline i4t_4 SwizzW0ZW(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.z, V.w); }
inline i4t_4 SwizzW0Z0(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.z, (i4t)0); }
inline i4t_4 SwizzW0WX(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.w, V.x); }
inline i4t_4 SwizzW0WY(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.w, V.y); }
inline i4t_4 SwizzW0WZ(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.w, V.z); }
inline i4t_4 SwizzW0WW(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.w, V.w); }
inline i4t_4 SwizzW0W0(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, V.w, (i4t)0); }
inline i4t_4 SwizzW00X(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, (i4t)0, V.x); }
inline i4t_4 SwizzW00Y(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, (i4t)0, V.y); }
inline i4t_4 SwizzW00Z(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, (i4t)0, V.z); }
inline i4t_4 SwizzW00W(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, (i4t)0, V.w); }
inline i4t_4 SwizzW000(i4t_4 V) { return MkI4t_4(V.w, (i4t)0, (i4t)0, (i4t)0); }
inline i4t_4 Swizz0XXX(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.x, V.x); }
inline i4t_4 Swizz0XXY(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.x, V.y); }
inline i4t_4 Swizz0XXZ(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.x, V.z); }
inline i4t_4 Swizz0XXW(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.x, V.w); }
inline i4t_4 Swizz0XX0(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.x, (i4t)0); }
inline i4t_4 Swizz0XYX(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.y, V.x); }
inline i4t_4 Swizz0XYY(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.y, V.y); }
inline i4t_4 Swizz0XYZ(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.y, V.z); }
inline i4t_4 Swizz0XYW(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.y, V.w); }
inline i4t_4 Swizz0XY0(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.y, (i4t)0); }
inline i4t_4 Swizz0XZX(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.z, V.x); }
inline i4t_4 Swizz0XZY(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.z, V.y); }
inline i4t_4 Swizz0XZZ(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.z, V.z); }
inline i4t_4 Swizz0XZW(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.z, V.w); }
inline i4t_4 Swizz0XZ0(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.z, (i4t)0); }
inline i4t_4 Swizz0XWX(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.w, V.x); }
inline i4t_4 Swizz0XWY(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.w, V.y); }
inline i4t_4 Swizz0XWZ(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.w, V.z); }
inline i4t_4 Swizz0XWW(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.w, V.w); }
inline i4t_4 Swizz0XW0(i4t_4 V) { return MkI4t_4((i4t)0, V.x, V.w, (i4t)0); }
inline i4t_4 Swizz0X0X(i4t_4 V) { return MkI4t_4((i4t)0, V.x, (i4t)0, V.x); }
inline i4t_4 Swizz0X0Y(i4t_4 V) { return MkI4t_4((i4t)0, V.x, (i4t)0, V.y); }
inline i4t_4 Swizz0X0Z(i4t_4 V) { return MkI4t_4((i4t)0, V.x, (i4t)0, V.z); }
inline i4t_4 Swizz0X0W(i4t_4 V) { return MkI4t_4((i4t)0, V.x, (i4t)0, V.w); }
inline i4t_4 Swizz0X00(i4t_4 V) { return MkI4t_4((i4t)0, V.x, (i4t)0, (i4t)0); }
inline i4t_4 Swizz0YXX(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.x, V.x); }
inline i4t_4 Swizz0YXY(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.x, V.y); }
inline i4t_4 Swizz0YXZ(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.x, V.z); }
inline i4t_4 Swizz0YXW(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.x, V.w); }
inline i4t_4 Swizz0YX0(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.x, (i4t)0); }
inline i4t_4 Swizz0YYX(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.y, V.x); }
inline i4t_4 Swizz0YYY(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.y, V.y); }
inline i4t_4 Swizz0YYZ(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.y, V.z); }
inline i4t_4 Swizz0YYW(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.y, V.w); }
inline i4t_4 Swizz0YY0(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.y, (i4t)0); }
inline i4t_4 Swizz0YZX(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.z, V.x); }
inline i4t_4 Swizz0YZY(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.z, V.y); }
inline i4t_4 Swizz0YZZ(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.z, V.z); }
inline i4t_4 Swizz0YZW(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.z, V.w); }
inline i4t_4 Swizz0YZ0(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.z, (i4t)0); }
inline i4t_4 Swizz0YWX(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.w, V.x); }
inline i4t_4 Swizz0YWY(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.w, V.y); }
inline i4t_4 Swizz0YWZ(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.w, V.z); }
inline i4t_4 Swizz0YWW(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.w, V.w); }
inline i4t_4 Swizz0YW0(i4t_4 V) { return MkI4t_4((i4t)0, V.y, V.w, (i4t)0); }
inline i4t_4 Swizz0Y0X(i4t_4 V) { return MkI4t_4((i4t)0, V.y, (i4t)0, V.x); }
inline i4t_4 Swizz0Y0Y(i4t_4 V) { return MkI4t_4((i4t)0, V.y, (i4t)0, V.y); }
inline i4t_4 Swizz0Y0Z(i4t_4 V) { return MkI4t_4((i4t)0, V.y, (i4t)0, V.z); }
inline i4t_4 Swizz0Y0W(i4t_4 V) { return MkI4t_4((i4t)0, V.y, (i4t)0, V.w); }
inline i4t_4 Swizz0Y00(i4t_4 V) { return MkI4t_4((i4t)0, V.y, (i4t)0, (i4t)0); }
inline i4t_4 Swizz0ZXX(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.x, V.x); }
inline i4t_4 Swizz0ZXY(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.x, V.y); }
inline i4t_4 Swizz0ZXZ(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.x, V.z); }
inline i4t_4 Swizz0ZXW(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.x, V.w); }
inline i4t_4 Swizz0ZX0(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.x, (i4t)0); }
inline i4t_4 Swizz0ZYX(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.y, V.x); }
inline i4t_4 Swizz0ZYY(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.y, V.y); }
inline i4t_4 Swizz0ZYZ(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.y, V.z); }
inline i4t_4 Swizz0ZYW(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.y, V.w); }
inline i4t_4 Swizz0ZY0(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.y, (i4t)0); }
inline i4t_4 Swizz0ZZX(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.z, V.x); }
inline i4t_4 Swizz0ZZY(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.z, V.y); }
inline i4t_4 Swizz0ZZZ(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.z, V.z); }
inline i4t_4 Swizz0ZZW(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.z, V.w); }
inline i4t_4 Swizz0ZZ0(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.z, (i4t)0); }
inline i4t_4 Swizz0ZWX(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.w, V.x); }
inline i4t_4 Swizz0ZWY(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.w, V.y); }
inline i4t_4 Swizz0ZWZ(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.w, V.z); }
inline i4t_4 Swizz0ZWW(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.w, V.w); }
inline i4t_4 Swizz0ZW0(i4t_4 V) { return MkI4t_4((i4t)0, V.z, V.w, (i4t)0); }
inline i4t_4 Swizz0Z0X(i4t_4 V) { return MkI4t_4((i4t)0, V.z, (i4t)0, V.x); }
inline i4t_4 Swizz0Z0Y(i4t_4 V) { return MkI4t_4((i4t)0, V.z, (i4t)0, V.y); }
inline i4t_4 Swizz0Z0Z(i4t_4 V) { return MkI4t_4((i4t)0, V.z, (i4t)0, V.z); }
inline i4t_4 Swizz0Z0W(i4t_4 V) { return MkI4t_4((i4t)0, V.z, (i4t)0, V.w); }
inline i4t_4 Swizz0Z00(i4t_4 V) { return MkI4t_4((i4t)0, V.z, (i4t)0, (i4t)0); }
inline i4t_4 Swizz0WXX(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.x, V.x); }
inline i4t_4 Swizz0WXY(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.x, V.y); }
inline i4t_4 Swizz0WXZ(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.x, V.z); }
inline i4t_4 Swizz0WXW(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.x, V.w); }
inline i4t_4 Swizz0WX0(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.x, (i4t)0); }
inline i4t_4 Swizz0WYX(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.y, V.x); }
inline i4t_4 Swizz0WYY(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.y, V.y); }
inline i4t_4 Swizz0WYZ(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.y, V.z); }
inline i4t_4 Swizz0WYW(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.y, V.w); }
inline i4t_4 Swizz0WY0(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.y, (i4t)0); }
inline i4t_4 Swizz0WZX(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.z, V.x); }
inline i4t_4 Swizz0WZY(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.z, V.y); }
inline i4t_4 Swizz0WZZ(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.z, V.z); }
inline i4t_4 Swizz0WZW(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.z, V.w); }
inline i4t_4 Swizz0WZ0(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.z, (i4t)0); }
inline i4t_4 Swizz0WWX(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.w, V.x); }
inline i4t_4 Swizz0WWY(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.w, V.y); }
inline i4t_4 Swizz0WWZ(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.w, V.z); }
inline i4t_4 Swizz0WWW(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.w, V.w); }
inline i4t_4 Swizz0WW0(i4t_4 V) { return MkI4t_4((i4t)0, V.w, V.w, (i4t)0); }
inline i4t_4 Swizz0W0X(i4t_4 V) { return MkI4t_4((i4t)0, V.w, (i4t)0, V.x); }
inline i4t_4 Swizz0W0Y(i4t_4 V) { return MkI4t_4((i4t)0, V.w, (i4t)0, V.y); }
inline i4t_4 Swizz0W0Z(i4t_4 V) { return MkI4t_4((i4t)0, V.w, (i4t)0, V.z); }
inline i4t_4 Swizz0W0W(i4t_4 V) { return MkI4t_4((i4t)0, V.w, (i4t)0, V.w); }
inline i4t_4 Swizz0W00(i4t_4 V) { return MkI4t_4((i4t)0, V.w, (i4t)0, (i4t)0); }
inline i4t_4 Swizz00XX(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.x, V.x); }
inline i4t_4 Swizz00XY(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.x, V.y); }
inline i4t_4 Swizz00XZ(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.x, V.z); }
inline i4t_4 Swizz00XW(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.x, V.w); }
inline i4t_4 Swizz00X0(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.x, (i4t)0); }
inline i4t_4 Swizz00YX(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.y, V.x); }
inline i4t_4 Swizz00YY(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.y, V.y); }
inline i4t_4 Swizz00YZ(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.y, V.z); }
inline i4t_4 Swizz00YW(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.y, V.w); }
inline i4t_4 Swizz00Y0(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.y, (i4t)0); }
inline i4t_4 Swizz00ZX(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.z, V.x); }
inline i4t_4 Swizz00ZY(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.z, V.y); }
inline i4t_4 Swizz00ZZ(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.z, V.z); }
inline i4t_4 Swizz00ZW(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.z, V.w); }
inline i4t_4 Swizz00Z0(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.z, (i4t)0); }
inline i4t_4 Swizz00WX(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.w, V.x); }
inline i4t_4 Swizz00WY(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.w, V.y); }
inline i4t_4 Swizz00WZ(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.w, V.z); }
inline i4t_4 Swizz00WW(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.w, V.w); }
inline i4t_4 Swizz00W0(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, V.w, (i4t)0); }
inline i4t_4 Swizz000X(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, (i4t)0, V.x); }
inline i4t_4 Swizz000Y(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, (i4t)0, V.y); }
inline i4t_4 Swizz000Z(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, (i4t)0, V.z); }
inline i4t_4 Swizz000W(i4t_4 V) { return MkI4t_4((i4t)0, (i4t)0, (i4t)0, V.w); }
inline f4t_2 SwizzXX(f4t_2 V) { return MkF4t_2(V.x, V.x); }
inline f4t_2 SwizzXY(f4t_2 V) { return MkF4t_2(V.x, V.y); }
inline f4t_2 SwizzX0(f4t_2 V) { return MkF4t_2(V.x, (f4t)0); }
inline f4t_2 SwizzYX(f4t_2 V) { return MkF4t_2(V.y, V.x); }
inline f4t_2 SwizzYY(f4t_2 V) { return MkF4t_2(V.y, V.y); }
inline f4t_2 SwizzY0(f4t_2 V) { return MkF4t_2(V.y, (f4t)0); }
inline f4t_2 Swizz0X(f4t_2 V) { return MkF4t_2((f4t)0, V.x); }
inline f4t_2 Swizz0Y(f4t_2 V) { return MkF4t_2((f4t)0, V.y); }
inline f4t_3 SwizzXXX(f4t_2 V) { return MkF4t_3(V.x, V.x, V.x); }
inline f4t_3 SwizzXXY(f4t_2 V) { return MkF4t_3(V.x, V.x, V.y); }
inline f4t_3 SwizzXX0(f4t_2 V) { return MkF4t_3(V.x, V.x, (f4t)0); }
inline f4t_3 SwizzXYX(f4t_2 V) { return MkF4t_3(V.x, V.y, V.x); }
inline f4t_3 SwizzXYY(f4t_2 V) { return MkF4t_3(V.x, V.y, V.y); }
inline f4t_3 SwizzXY0(f4t_2 V) { return MkF4t_3(V.x, V.y, (f4t)0); }
inline f4t_3 SwizzX0X(f4t_2 V) { return MkF4t_3(V.x, (f4t)0, V.x); }
inline f4t_3 SwizzX0Y(f4t_2 V) { return MkF4t_3(V.x, (f4t)0, V.y); }
inline f4t_3 SwizzX00(f4t_2 V) { return MkF4t_3(V.x, (f4t)0, (f4t)0); }
inline f4t_3 SwizzYXX(f4t_2 V) { return MkF4t_3(V.y, V.x, V.x); }
inline f4t_3 SwizzYXY(f4t_2 V) { return MkF4t_3(V.y, V.x, V.y); }
inline f4t_3 SwizzYX0(f4t_2 V) { return MkF4t_3(V.y, V.x, (f4t)0); }
inline f4t_3 SwizzYYX(f4t_2 V) { return MkF4t_3(V.y, V.y, V.x); }
inline f4t_3 SwizzYYY(f4t_2 V) { return MkF4t_3(V.y, V.y, V.y); }
inline f4t_3 SwizzYY0(f4t_2 V) { return MkF4t_3(V.y, V.y, (f4t)0); }
inline f4t_3 SwizzY0X(f4t_2 V) { return MkF4t_3(V.y, (f4t)0, V.x); }
inline f4t_3 SwizzY0Y(f4t_2 V) { return MkF4t_3(V.y, (f4t)0, V.y); }
inline f4t_3 SwizzY00(f4t_2 V) { return MkF4t_3(V.y, (f4t)0, (f4t)0); }
inline f4t_3 Swizz0XX(f4t_2 V) { return MkF4t_3((f4t)0, V.x, V.x); }
inline f4t_3 Swizz0XY(f4t_2 V) { return MkF4t_3((f4t)0, V.x, V.y); }
inline f4t_3 Swizz0X0(f4t_2 V) { return MkF4t_3((f4t)0, V.x, (f4t)0); }
inline f4t_3 Swizz0YX(f4t_2 V) { return MkF4t_3((f4t)0, V.y, V.x); }
inline f4t_3 Swizz0YY(f4t_2 V) { return MkF4t_3((f4t)0, V.y, V.y); }
inline f4t_3 Swizz0Y0(f4t_2 V) { return MkF4t_3((f4t)0, V.y, (f4t)0); }
inline f4t_3 Swizz00X(f4t_2 V) { return MkF4t_3((f4t)0, (f4t)0, V.x); }
inline f4t_3 Swizz00Y(f4t_2 V) { return MkF4t_3((f4t)0, (f4t)0, V.y); }
inline f4t_4 SwizzXXXX(f4t_2 V) { return MkF4t_4(V.x, V.x, V.x, V.x); }
inline f4t_4 SwizzXXXY(f4t_2 V) { return MkF4t_4(V.x, V.x, V.x, V.y); }
inline f4t_4 SwizzXXX0(f4t_2 V) { return MkF4t_4(V.x, V.x, V.x, (f4t)0); }
inline f4t_4 SwizzXXYX(f4t_2 V) { return MkF4t_4(V.x, V.x, V.y, V.x); }
inline f4t_4 SwizzXXYY(f4t_2 V) { return MkF4t_4(V.x, V.x, V.y, V.y); }
inline f4t_4 SwizzXXY0(f4t_2 V) { return MkF4t_4(V.x, V.x, V.y, (f4t)0); }
inline f4t_4 SwizzXX0X(f4t_2 V) { return MkF4t_4(V.x, V.x, (f4t)0, V.x); }
inline f4t_4 SwizzXX0Y(f4t_2 V) { return MkF4t_4(V.x, V.x, (f4t)0, V.y); }
inline f4t_4 SwizzXX00(f4t_2 V) { return MkF4t_4(V.x, V.x, (f4t)0, (f4t)0); }
inline f4t_4 SwizzXYXX(f4t_2 V) { return MkF4t_4(V.x, V.y, V.x, V.x); }
inline f4t_4 SwizzXYXY(f4t_2 V) { return MkF4t_4(V.x, V.y, V.x, V.y); }
inline f4t_4 SwizzXYX0(f4t_2 V) { return MkF4t_4(V.x, V.y, V.x, (f4t)0); }
inline f4t_4 SwizzXYYX(f4t_2 V) { return MkF4t_4(V.x, V.y, V.y, V.x); }
inline f4t_4 SwizzXYYY(f4t_2 V) { return MkF4t_4(V.x, V.y, V.y, V.y); }
inline f4t_4 SwizzXYY0(f4t_2 V) { return MkF4t_4(V.x, V.y, V.y, (f4t)0); }
inline f4t_4 SwizzXY0X(f4t_2 V) { return MkF4t_4(V.x, V.y, (f4t)0, V.x); }
inline f4t_4 SwizzXY0Y(f4t_2 V) { return MkF4t_4(V.x, V.y, (f4t)0, V.y); }
inline f4t_4 SwizzXY00(f4t_2 V) { return MkF4t_4(V.x, V.y, (f4t)0, (f4t)0); }
inline f4t_4 SwizzX0XX(f4t_2 V) { return MkF4t_4(V.x, (f4t)0, V.x, V.x); }
inline f4t_4 SwizzX0XY(f4t_2 V) { return MkF4t_4(V.x, (f4t)0, V.x, V.y); }
inline f4t_4 SwizzX0X0(f4t_2 V) { return MkF4t_4(V.x, (f4t)0, V.x, (f4t)0); }
inline f4t_4 SwizzX0YX(f4t_2 V) { return MkF4t_4(V.x, (f4t)0, V.y, V.x); }
inline f4t_4 SwizzX0YY(f4t_2 V) { return MkF4t_4(V.x, (f4t)0, V.y, V.y); }
inline f4t_4 SwizzX0Y0(f4t_2 V) { return MkF4t_4(V.x, (f4t)0, V.y, (f4t)0); }
inline f4t_4 SwizzX00X(f4t_2 V) { return MkF4t_4(V.x, (f4t)0, (f4t)0, V.x); }
inline f4t_4 SwizzX00Y(f4t_2 V) { return MkF4t_4(V.x, (f4t)0, (f4t)0, V.y); }
inline f4t_4 SwizzX000(f4t_2 V) { return MkF4t_4(V.x, (f4t)0, (f4t)0, (f4t)0); }
inline f4t_4 SwizzYXXX(f4t_2 V) { return MkF4t_4(V.y, V.x, V.x, V.x); }
inline f4t_4 SwizzYXXY(f4t_2 V) { return MkF4t_4(V.y, V.x, V.x, V.y); }
inline f4t_4 SwizzYXX0(f4t_2 V) { return MkF4t_4(V.y, V.x, V.x, (f4t)0); }
inline f4t_4 SwizzYXYX(f4t_2 V) { return MkF4t_4(V.y, V.x, V.y, V.x); }
inline f4t_4 SwizzYXYY(f4t_2 V) { return MkF4t_4(V.y, V.x, V.y, V.y); }
inline f4t_4 SwizzYXY0(f4t_2 V) { return MkF4t_4(V.y, V.x, V.y, (f4t)0); }
inline f4t_4 SwizzYX0X(f4t_2 V) { return MkF4t_4(V.y, V.x, (f4t)0, V.x); }
inline f4t_4 SwizzYX0Y(f4t_2 V) { return MkF4t_4(V.y, V.x, (f4t)0, V.y); }
inline f4t_4 SwizzYX00(f4t_2 V) { return MkF4t_4(V.y, V.x, (f4t)0, (f4t)0); }
inline f4t_4 SwizzYYXX(f4t_2 V) { return MkF4t_4(V.y, V.y, V.x, V.x); }
inline f4t_4 SwizzYYXY(f4t_2 V) { return MkF4t_4(V.y, V.y, V.x, V.y); }
inline f4t_4 SwizzYYX0(f4t_2 V) { return MkF4t_4(V.y, V.y, V.x, (f4t)0); }
inline f4t_4 SwizzYYYX(f4t_2 V) { return MkF4t_4(V.y, V.y, V.y, V.x); }
inline f4t_4 SwizzYYYY(f4t_2 V) { return MkF4t_4(V.y, V.y, V.y, V.y); }
inline f4t_4 SwizzYYY0(f4t_2 V) { return MkF4t_4(V.y, V.y, V.y, (f4t)0); }
inline f4t_4 SwizzYY0X(f4t_2 V) { return MkF4t_4(V.y, V.y, (f4t)0, V.x); }
inline f4t_4 SwizzYY0Y(f4t_2 V) { return MkF4t_4(V.y, V.y, (f4t)0, V.y); }
inline f4t_4 SwizzYY00(f4t_2 V) { return MkF4t_4(V.y, V.y, (f4t)0, (f4t)0); }
inline f4t_4 SwizzY0XX(f4t_2 V) { return MkF4t_4(V.y, (f4t)0, V.x, V.x); }
inline f4t_4 SwizzY0XY(f4t_2 V) { return MkF4t_4(V.y, (f4t)0, V.x, V.y); }
inline f4t_4 SwizzY0X0(f4t_2 V) { return MkF4t_4(V.y, (f4t)0, V.x, (f4t)0); }
inline f4t_4 SwizzY0YX(f4t_2 V) { return MkF4t_4(V.y, (f4t)0, V.y, V.x); }
inline f4t_4 SwizzY0YY(f4t_2 V) { return MkF4t_4(V.y, (f4t)0, V.y, V.y); }
inline f4t_4 SwizzY0Y0(f4t_2 V) { return MkF4t_4(V.y, (f4t)0, V.y, (f4t)0); }
inline f4t_4 SwizzY00X(f4t_2 V) { return MkF4t_4(V.y, (f4t)0, (f4t)0, V.x); }
inline f4t_4 SwizzY00Y(f4t_2 V) { return MkF4t_4(V.y, (f4t)0, (f4t)0, V.y); }
inline f4t_4 SwizzY000(f4t_2 V) { return MkF4t_4(V.y, (f4t)0, (f4t)0, (f4t)0); }
inline f4t_4 Swizz0XXX(f4t_2 V) { return MkF4t_4((f4t)0, V.x, V.x, V.x); }
inline f4t_4 Swizz0XXY(f4t_2 V) { return MkF4t_4((f4t)0, V.x, V.x, V.y); }
inline f4t_4 Swizz0XX0(f4t_2 V) { return MkF4t_4((f4t)0, V.x, V.x, (f4t)0); }
inline f4t_4 Swizz0XYX(f4t_2 V) { return MkF4t_4((f4t)0, V.x, V.y, V.x); }
inline f4t_4 Swizz0XYY(f4t_2 V) { return MkF4t_4((f4t)0, V.x, V.y, V.y); }
inline f4t_4 Swizz0XY0(f4t_2 V) { return MkF4t_4((f4t)0, V.x, V.y, (f4t)0); }
inline f4t_4 Swizz0X0X(f4t_2 V) { return MkF4t_4((f4t)0, V.x, (f4t)0, V.x); }
inline f4t_4 Swizz0X0Y(f4t_2 V) { return MkF4t_4((f4t)0, V.x, (f4t)0, V.y); }
inline f4t_4 Swizz0X00(f4t_2 V) { return MkF4t_4((f4t)0, V.x, (f4t)0, (f4t)0); }
inline f4t_4 Swizz0YXX(f4t_2 V) { return MkF4t_4((f4t)0, V.y, V.x, V.x); }
inline f4t_4 Swizz0YXY(f4t_2 V) { return MkF4t_4((f4t)0, V.y, V.x, V.y); }
inline f4t_4 Swizz0YX0(f4t_2 V) { return MkF4t_4((f4t)0, V.y, V.x, (f4t)0); }
inline f4t_4 Swizz0YYX(f4t_2 V) { return MkF4t_4((f4t)0, V.y, V.y, V.x); }
inline f4t_4 Swizz0YYY(f4t_2 V) { return MkF4t_4((f4t)0, V.y, V.y, V.y); }
inline f4t_4 Swizz0YY0(f4t_2 V) { return MkF4t_4((f4t)0, V.y, V.y, (f4t)0); }
inline f4t_4 Swizz0Y0X(f4t_2 V) { return MkF4t_4((f4t)0, V.y, (f4t)0, V.x); }
inline f4t_4 Swizz0Y0Y(f4t_2 V) { return MkF4t_4((f4t)0, V.y, (f4t)0, V.y); }
inline f4t_4 Swizz0Y00(f4t_2 V) { return MkF4t_4((f4t)0, V.y, (f4t)0, (f4t)0); }
inline f4t_4 Swizz00XX(f4t_2 V) { return MkF4t_4((f4t)0, (f4t)0, V.x, V.x); }
inline f4t_4 Swizz00XY(f4t_2 V) { return MkF4t_4((f4t)0, (f4t)0, V.x, V.y); }
inline f4t_4 Swizz00X0(f4t_2 V) { return MkF4t_4((f4t)0, (f4t)0, V.x, (f4t)0); }
inline f4t_4 Swizz00YX(f4t_2 V) { return MkF4t_4((f4t)0, (f4t)0, V.y, V.x); }
inline f4t_4 Swizz00YY(f4t_2 V) { return MkF4t_4((f4t)0, (f4t)0, V.y, V.y); }
inline f4t_4 Swizz00Y0(f4t_2 V) { return MkF4t_4((f4t)0, (f4t)0, V.y, (f4t)0); }
inline f4t_4 Swizz000X(f4t_2 V) { return MkF4t_4((f4t)0, (f4t)0, (f4t)0, V.x); }
inline f4t_4 Swizz000Y(f4t_2 V) { return MkF4t_4((f4t)0, (f4t)0, (f4t)0, V.y); }
inline f4t_2 SwizzXX(f4t_3 V) { return MkF4t_2(V.x, V.x); }
inline f4t_2 SwizzXY(f4t_3 V) { return MkF4t_2(V.x, V.y); }
inline f4t_2 SwizzXZ(f4t_3 V) { return MkF4t_2(V.x, V.z); }
inline f4t_2 SwizzX0(f4t_3 V) { return MkF4t_2(V.x, (f4t)0); }
inline f4t_2 SwizzYX(f4t_3 V) { return MkF4t_2(V.y, V.x); }
inline f4t_2 SwizzYY(f4t_3 V) { return MkF4t_2(V.y, V.y); }
inline f4t_2 SwizzYZ(f4t_3 V) { return MkF4t_2(V.y, V.z); }
inline f4t_2 SwizzY0(f4t_3 V) { return MkF4t_2(V.y, (f4t)0); }
inline f4t_2 SwizzZX(f4t_3 V) { return MkF4t_2(V.z, V.x); }
inline f4t_2 SwizzZY(f4t_3 V) { return MkF4t_2(V.z, V.y); }
inline f4t_2 SwizzZZ(f4t_3 V) { return MkF4t_2(V.z, V.z); }
inline f4t_2 SwizzZ0(f4t_3 V) { return MkF4t_2(V.z, (f4t)0); }
inline f4t_2 Swizz0X(f4t_3 V) { return MkF4t_2((f4t)0, V.x); }
inline f4t_2 Swizz0Y(f4t_3 V) { return MkF4t_2((f4t)0, V.y); }
inline f4t_2 Swizz0Z(f4t_3 V) { return MkF4t_2((f4t)0, V.z); }
inline f4t_3 SwizzXXX(f4t_3 V) { return MkF4t_3(V.x, V.x, V.x); }
inline f4t_3 SwizzXXY(f4t_3 V) { return MkF4t_3(V.x, V.x, V.y); }
inline f4t_3 SwizzXXZ(f4t_3 V) { return MkF4t_3(V.x, V.x, V.z); }
inline f4t_3 SwizzXX0(f4t_3 V) { return MkF4t_3(V.x, V.x, (f4t)0); }
inline f4t_3 SwizzXYX(f4t_3 V) { return MkF4t_3(V.x, V.y, V.x); }
inline f4t_3 SwizzXYY(f4t_3 V) { return MkF4t_3(V.x, V.y, V.y); }
inline f4t_3 SwizzXYZ(f4t_3 V) { return MkF4t_3(V.x, V.y, V.z); }
inline f4t_3 SwizzXY0(f4t_3 V) { return MkF4t_3(V.x, V.y, (f4t)0); }
inline f4t_3 SwizzXZX(f4t_3 V) { return MkF4t_3(V.x, V.z, V.x); }
inline f4t_3 SwizzXZY(f4t_3 V) { return MkF4t_3(V.x, V.z, V.y); }
inline f4t_3 SwizzXZZ(f4t_3 V) { return MkF4t_3(V.x, V.z, V.z); }
inline f4t_3 SwizzXZ0(f4t_3 V) { return MkF4t_3(V.x, V.z, (f4t)0); }
inline f4t_3 SwizzX0X(f4t_3 V) { return MkF4t_3(V.x, (f4t)0, V.x); }
inline f4t_3 SwizzX0Y(f4t_3 V) { return MkF4t_3(V.x, (f4t)0, V.y); }
inline f4t_3 SwizzX0Z(f4t_3 V) { return MkF4t_3(V.x, (f4t)0, V.z); }
inline f4t_3 SwizzX00(f4t_3 V) { return MkF4t_3(V.x, (f4t)0, (f4t)0); }
inline f4t_3 SwizzYXX(f4t_3 V) { return MkF4t_3(V.y, V.x, V.x); }
inline f4t_3 SwizzYXY(f4t_3 V) { return MkF4t_3(V.y, V.x, V.y); }
inline f4t_3 SwizzYXZ(f4t_3 V) { return MkF4t_3(V.y, V.x, V.z); }
inline f4t_3 SwizzYX0(f4t_3 V) { return MkF4t_3(V.y, V.x, (f4t)0); }
inline f4t_3 SwizzYYX(f4t_3 V) { return MkF4t_3(V.y, V.y, V.x); }
inline f4t_3 SwizzYYY(f4t_3 V) { return MkF4t_3(V.y, V.y, V.y); }
inline f4t_3 SwizzYYZ(f4t_3 V) { return MkF4t_3(V.y, V.y, V.z); }
inline f4t_3 SwizzYY0(f4t_3 V) { return MkF4t_3(V.y, V.y, (f4t)0); }
inline f4t_3 SwizzYZX(f4t_3 V) { return MkF4t_3(V.y, V.z, V.x); }
inline f4t_3 SwizzYZY(f4t_3 V) { return MkF4t_3(V.y, V.z, V.y); }
inline f4t_3 SwizzYZZ(f4t_3 V) { return MkF4t_3(V.y, V.z, V.z); }
inline f4t_3 SwizzYZ0(f4t_3 V) { return MkF4t_3(V.y, V.z, (f4t)0); }
inline f4t_3 SwizzY0X(f4t_3 V) { return MkF4t_3(V.y, (f4t)0, V.x); }
inline f4t_3 SwizzY0Y(f4t_3 V) { return MkF4t_3(V.y, (f4t)0, V.y); }
inline f4t_3 SwizzY0Z(f4t_3 V) { return MkF4t_3(V.y, (f4t)0, V.z); }
inline f4t_3 SwizzY00(f4t_3 V) { return MkF4t_3(V.y, (f4t)0, (f4t)0); }
inline f4t_3 SwizzZXX(f4t_3 V) { return MkF4t_3(V.z, V.x, V.x); }
inline f4t_3 SwizzZXY(f4t_3 V) { return MkF4t_3(V.z, V.x, V.y); }
inline f4t_3 SwizzZXZ(f4t_3 V) { return MkF4t_3(V.z, V.x, V.z); }
inline f4t_3 SwizzZX0(f4t_3 V) { return MkF4t_3(V.z, V.x, (f4t)0); }
inline f4t_3 SwizzZYX(f4t_3 V) { return MkF4t_3(V.z, V.y, V.x); }
inline f4t_3 SwizzZYY(f4t_3 V) { return MkF4t_3(V.z, V.y, V.y); }
inline f4t_3 SwizzZYZ(f4t_3 V) { return MkF4t_3(V.z, V.y, V.z); }
inline f4t_3 SwizzZY0(f4t_3 V) { return MkF4t_3(V.z, V.y, (f4t)0); }
inline f4t_3 SwizzZZX(f4t_3 V) { return MkF4t_3(V.z, V.z, V.x); }
inline f4t_3 SwizzZZY(f4t_3 V) { return MkF4t_3(V.z, V.z, V.y); }
inline f4t_3 SwizzZZZ(f4t_3 V) { return MkF4t_3(V.z, V.z, V.z); }
inline f4t_3 SwizzZZ0(f4t_3 V) { return MkF4t_3(V.z, V.z, (f4t)0); }
inline f4t_3 SwizzZ0X(f4t_3 V) { return MkF4t_3(V.z, (f4t)0, V.x); }
inline f4t_3 SwizzZ0Y(f4t_3 V) { return MkF4t_3(V.z, (f4t)0, V.y); }
inline f4t_3 SwizzZ0Z(f4t_3 V) { return MkF4t_3(V.z, (f4t)0, V.z); }
inline f4t_3 SwizzZ00(f4t_3 V) { return MkF4t_3(V.z, (f4t)0, (f4t)0); }
inline f4t_3 Swizz0XX(f4t_3 V) { return MkF4t_3((f4t)0, V.x, V.x); }
inline f4t_3 Swizz0XY(f4t_3 V) { return MkF4t_3((f4t)0, V.x, V.y); }
inline f4t_3 Swizz0XZ(f4t_3 V) { return MkF4t_3((f4t)0, V.x, V.z); }
inline f4t_3 Swizz0X0(f4t_3 V) { return MkF4t_3((f4t)0, V.x, (f4t)0); }
inline f4t_3 Swizz0YX(f4t_3 V) { return MkF4t_3((f4t)0, V.y, V.x); }
inline f4t_3 Swizz0YY(f4t_3 V) { return MkF4t_3((f4t)0, V.y, V.y); }
inline f4t_3 Swizz0YZ(f4t_3 V) { return MkF4t_3((f4t)0, V.y, V.z); }
inline f4t_3 Swizz0Y0(f4t_3 V) { return MkF4t_3((f4t)0, V.y, (f4t)0); }
inline f4t_3 Swizz0ZX(f4t_3 V) { return MkF4t_3((f4t)0, V.z, V.x); }
inline f4t_3 Swizz0ZY(f4t_3 V) { return MkF4t_3((f4t)0, V.z, V.y); }
inline f4t_3 Swizz0ZZ(f4t_3 V) { return MkF4t_3((f4t)0, V.z, V.z); }
inline f4t_3 Swizz0Z0(f4t_3 V) { return MkF4t_3((f4t)0, V.z, (f4t)0); }
inline f4t_3 Swizz00X(f4t_3 V) { return MkF4t_3((f4t)0, (f4t)0, V.x); }
inline f4t_3 Swizz00Y(f4t_3 V) { return MkF4t_3((f4t)0, (f4t)0, V.y); }
inline f4t_3 Swizz00Z(f4t_3 V) { return MkF4t_3((f4t)0, (f4t)0, V.z); }
inline f4t_4 SwizzXXXX(f4t_3 V) { return MkF4t_4(V.x, V.x, V.x, V.x); }
inline f4t_4 SwizzXXXY(f4t_3 V) { return MkF4t_4(V.x, V.x, V.x, V.y); }
inline f4t_4 SwizzXXXZ(f4t_3 V) { return MkF4t_4(V.x, V.x, V.x, V.z); }
inline f4t_4 SwizzXXX0(f4t_3 V) { return MkF4t_4(V.x, V.x, V.x, (f4t)0); }
inline f4t_4 SwizzXXYX(f4t_3 V) { return MkF4t_4(V.x, V.x, V.y, V.x); }
inline f4t_4 SwizzXXYY(f4t_3 V) { return MkF4t_4(V.x, V.x, V.y, V.y); }
inline f4t_4 SwizzXXYZ(f4t_3 V) { return MkF4t_4(V.x, V.x, V.y, V.z); }
inline f4t_4 SwizzXXY0(f4t_3 V) { return MkF4t_4(V.x, V.x, V.y, (f4t)0); }
inline f4t_4 SwizzXXZX(f4t_3 V) { return MkF4t_4(V.x, V.x, V.z, V.x); }
inline f4t_4 SwizzXXZY(f4t_3 V) { return MkF4t_4(V.x, V.x, V.z, V.y); }
inline f4t_4 SwizzXXZZ(f4t_3 V) { return MkF4t_4(V.x, V.x, V.z, V.z); }
inline f4t_4 SwizzXXZ0(f4t_3 V) { return MkF4t_4(V.x, V.x, V.z, (f4t)0); }
inline f4t_4 SwizzXX0X(f4t_3 V) { return MkF4t_4(V.x, V.x, (f4t)0, V.x); }
inline f4t_4 SwizzXX0Y(f4t_3 V) { return MkF4t_4(V.x, V.x, (f4t)0, V.y); }
inline f4t_4 SwizzXX0Z(f4t_3 V) { return MkF4t_4(V.x, V.x, (f4t)0, V.z); }
inline f4t_4 SwizzXX00(f4t_3 V) { return MkF4t_4(V.x, V.x, (f4t)0, (f4t)0); }
inline f4t_4 SwizzXYXX(f4t_3 V) { return MkF4t_4(V.x, V.y, V.x, V.x); }
inline f4t_4 SwizzXYXY(f4t_3 V) { return MkF4t_4(V.x, V.y, V.x, V.y); }
inline f4t_4 SwizzXYXZ(f4t_3 V) { return MkF4t_4(V.x, V.y, V.x, V.z); }
inline f4t_4 SwizzXYX0(f4t_3 V) { return MkF4t_4(V.x, V.y, V.x, (f4t)0); }
inline f4t_4 SwizzXYYX(f4t_3 V) { return MkF4t_4(V.x, V.y, V.y, V.x); }
inline f4t_4 SwizzXYYY(f4t_3 V) { return MkF4t_4(V.x, V.y, V.y, V.y); }
inline f4t_4 SwizzXYYZ(f4t_3 V) { return MkF4t_4(V.x, V.y, V.y, V.z); }
inline f4t_4 SwizzXYY0(f4t_3 V) { return MkF4t_4(V.x, V.y, V.y, (f4t)0); }
inline f4t_4 SwizzXYZX(f4t_3 V) { return MkF4t_4(V.x, V.y, V.z, V.x); }
inline f4t_4 SwizzXYZY(f4t_3 V) { return MkF4t_4(V.x, V.y, V.z, V.y); }
inline f4t_4 SwizzXYZZ(f4t_3 V) { return MkF4t_4(V.x, V.y, V.z, V.z); }
inline f4t_4 SwizzXYZ0(f4t_3 V) { return MkF4t_4(V.x, V.y, V.z, (f4t)0); }
inline f4t_4 SwizzXY0X(f4t_3 V) { return MkF4t_4(V.x, V.y, (f4t)0, V.x); }
inline f4t_4 SwizzXY0Y(f4t_3 V) { return MkF4t_4(V.x, V.y, (f4t)0, V.y); }
inline f4t_4 SwizzXY0Z(f4t_3 V) { return MkF4t_4(V.x, V.y, (f4t)0, V.z); }
inline f4t_4 SwizzXY00(f4t_3 V) { return MkF4t_4(V.x, V.y, (f4t)0, (f4t)0); }
inline f4t_4 SwizzXZXX(f4t_3 V) { return MkF4t_4(V.x, V.z, V.x, V.x); }
inline f4t_4 SwizzXZXY(f4t_3 V) { return MkF4t_4(V.x, V.z, V.x, V.y); }
inline f4t_4 SwizzXZXZ(f4t_3 V) { return MkF4t_4(V.x, V.z, V.x, V.z); }
inline f4t_4 SwizzXZX0(f4t_3 V) { return MkF4t_4(V.x, V.z, V.x, (f4t)0); }
inline f4t_4 SwizzXZYX(f4t_3 V) { return MkF4t_4(V.x, V.z, V.y, V.x); }
inline f4t_4 SwizzXZYY(f4t_3 V) { return MkF4t_4(V.x, V.z, V.y, V.y); }
inline f4t_4 SwizzXZYZ(f4t_3 V) { return MkF4t_4(V.x, V.z, V.y, V.z); }
inline f4t_4 SwizzXZY0(f4t_3 V) { return MkF4t_4(V.x, V.z, V.y, (f4t)0); }
inline f4t_4 SwizzXZZX(f4t_3 V) { return MkF4t_4(V.x, V.z, V.z, V.x); }
inline f4t_4 SwizzXZZY(f4t_3 V) { return MkF4t_4(V.x, V.z, V.z, V.y); }
inline f4t_4 SwizzXZZZ(f4t_3 V) { return MkF4t_4(V.x, V.z, V.z, V.z); }
inline f4t_4 SwizzXZZ0(f4t_3 V) { return MkF4t_4(V.x, V.z, V.z, (f4t)0); }
inline f4t_4 SwizzXZ0X(f4t_3 V) { return MkF4t_4(V.x, V.z, (f4t)0, V.x); }
inline f4t_4 SwizzXZ0Y(f4t_3 V) { return MkF4t_4(V.x, V.z, (f4t)0, V.y); }
inline f4t_4 SwizzXZ0Z(f4t_3 V) { return MkF4t_4(V.x, V.z, (f4t)0, V.z); }
inline f4t_4 SwizzXZ00(f4t_3 V) { return MkF4t_4(V.x, V.z, (f4t)0, (f4t)0); }
inline f4t_4 SwizzX0XX(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, V.x, V.x); }
inline f4t_4 SwizzX0XY(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, V.x, V.y); }
inline f4t_4 SwizzX0XZ(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, V.x, V.z); }
inline f4t_4 SwizzX0X0(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, V.x, (f4t)0); }
inline f4t_4 SwizzX0YX(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, V.y, V.x); }
inline f4t_4 SwizzX0YY(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, V.y, V.y); }
inline f4t_4 SwizzX0YZ(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, V.y, V.z); }
inline f4t_4 SwizzX0Y0(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, V.y, (f4t)0); }
inline f4t_4 SwizzX0ZX(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, V.z, V.x); }
inline f4t_4 SwizzX0ZY(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, V.z, V.y); }
inline f4t_4 SwizzX0ZZ(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, V.z, V.z); }
inline f4t_4 SwizzX0Z0(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, V.z, (f4t)0); }
inline f4t_4 SwizzX00X(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, (f4t)0, V.x); }
inline f4t_4 SwizzX00Y(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, (f4t)0, V.y); }
inline f4t_4 SwizzX00Z(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, (f4t)0, V.z); }
inline f4t_4 SwizzX000(f4t_3 V) { return MkF4t_4(V.x, (f4t)0, (f4t)0, (f4t)0); }
inline f4t_4 SwizzYXXX(f4t_3 V) { return MkF4t_4(V.y, V.x, V.x, V.x); }
inline f4t_4 SwizzYXXY(f4t_3 V) { return MkF4t_4(V.y, V.x, V.x, V.y); }
inline f4t_4 SwizzYXXZ(f4t_3 V) { return MkF4t_4(V.y, V.x, V.x, V.z); }
inline f4t_4 SwizzYXX0(f4t_3 V) { return MkF4t_4(V.y, V.x, V.x, (f4t)0); }
inline f4t_4 SwizzYXYX(f4t_3 V) { return MkF4t_4(V.y, V.x, V.y, V.x); }
inline f4t_4 SwizzYXYY(f4t_3 V) { return MkF4t_4(V.y, V.x, V.y, V.y); }
inline f4t_4 SwizzYXYZ(f4t_3 V) { return MkF4t_4(V.y, V.x, V.y, V.z); }
inline f4t_4 SwizzYXY0(f4t_3 V) { return MkF4t_4(V.y, V.x, V.y, (f4t)0); }
inline f4t_4 SwizzYXZX(f4t_3 V) { return MkF4t_4(V.y, V.x, V.z, V.x); }
inline f4t_4 SwizzYXZY(f4t_3 V) { return MkF4t_4(V.y, V.x, V.z, V.y); }
inline f4t_4 SwizzYXZZ(f4t_3 V) { return MkF4t_4(V.y, V.x, V.z, V.z); }
inline f4t_4 SwizzYXZ0(f4t_3 V) { return MkF4t_4(V.y, V.x, V.z, (f4t)0); }
inline f4t_4 SwizzYX0X(f4t_3 V) { return MkF4t_4(V.y, V.x, (f4t)0, V.x); }
inline f4t_4 SwizzYX0Y(f4t_3 V) { return MkF4t_4(V.y, V.x, (f4t)0, V.y); }
inline f4t_4 SwizzYX0Z(f4t_3 V) { return MkF4t_4(V.y, V.x, (f4t)0, V.z); }
inline f4t_4 SwizzYX00(f4t_3 V) { return MkF4t_4(V.y, V.x, (f4t)0, (f4t)0); }
inline f4t_4 SwizzYYXX(f4t_3 V) { return MkF4t_4(V.y, V.y, V.x, V.x); }
inline f4t_4 SwizzYYXY(f4t_3 V) { return MkF4t_4(V.y, V.y, V.x, V.y); }
inline f4t_4 SwizzYYXZ(f4t_3 V) { return MkF4t_4(V.y, V.y, V.x, V.z); }
inline f4t_4 SwizzYYX0(f4t_3 V) { return MkF4t_4(V.y, V.y, V.x, (f4t)0); }
inline f4t_4 SwizzYYYX(f4t_3 V) { return MkF4t_4(V.y, V.y, V.y, V.x); }
inline f4t_4 SwizzYYYY(f4t_3 V) { return MkF4t_4(V.y, V.y, V.y, V.y); }
inline f4t_4 SwizzYYYZ(f4t_3 V) { return MkF4t_4(V.y, V.y, V.y, V.z); }
inline f4t_4 SwizzYYY0(f4t_3 V) { return MkF4t_4(V.y, V.y, V.y, (f4t)0); }
inline f4t_4 SwizzYYZX(f4t_3 V) { return MkF4t_4(V.y, V.y, V.z, V.x); }
inline f4t_4 SwizzYYZY(f4t_3 V) { return MkF4t_4(V.y, V.y, V.z, V.y); }
inline f4t_4 SwizzYYZZ(f4t_3 V) { return MkF4t_4(V.y, V.y, V.z, V.z); }
inline f4t_4 SwizzYYZ0(f4t_3 V) { return MkF4t_4(V.y, V.y, V.z, (f4t)0); }
inline f4t_4 SwizzYY0X(f4t_3 V) { return MkF4t_4(V.y, V.y, (f4t)0, V.x); }
inline f4t_4 SwizzYY0Y(f4t_3 V) { return MkF4t_4(V.y, V.y, (f4t)0, V.y); }
inline f4t_4 SwizzYY0Z(f4t_3 V) { return MkF4t_4(V.y, V.y, (f4t)0, V.z); }
inline f4t_4 SwizzYY00(f4t_3 V) { return MkF4t_4(V.y, V.y, (f4t)0, (f4t)0); }
inline f4t_4 SwizzYZXX(f4t_3 V) { return MkF4t_4(V.y, V.z, V.x, V.x); }
inline f4t_4 SwizzYZXY(f4t_3 V) { return MkF4t_4(V.y, V.z, V.x, V.y); }
inline f4t_4 SwizzYZXZ(f4t_3 V) { return MkF4t_4(V.y, V.z, V.x, V.z); }
inline f4t_4 SwizzYZX0(f4t_3 V) { return MkF4t_4(V.y, V.z, V.x, (f4t)0); }
inline f4t_4 SwizzYZYX(f4t_3 V) { return MkF4t_4(V.y, V.z, V.y, V.x); }
inline f4t_4 SwizzYZYY(f4t_3 V) { return MkF4t_4(V.y, V.z, V.y, V.y); }
inline f4t_4 SwizzYZYZ(f4t_3 V) { return MkF4t_4(V.y, V.z, V.y, V.z); }
inline f4t_4 SwizzYZY0(f4t_3 V) { return MkF4t_4(V.y, V.z, V.y, (f4t)0); }
inline f4t_4 SwizzYZZX(f4t_3 V) { return MkF4t_4(V.y, V.z, V.z, V.x); }
inline f4t_4 SwizzYZZY(f4t_3 V) { return MkF4t_4(V.y, V.z, V.z, V.y); }
inline f4t_4 SwizzYZZZ(f4t_3 V) { return MkF4t_4(V.y, V.z, V.z, V.z); }
inline f4t_4 SwizzYZZ0(f4t_3 V) { return MkF4t_4(V.y, V.z, V.z, (f4t)0); }
inline f4t_4 SwizzYZ0X(f4t_3 V) { return MkF4t_4(V.y, V.z, (f4t)0, V.x); }
inline f4t_4 SwizzYZ0Y(f4t_3 V) { return MkF4t_4(V.y, V.z, (f4t)0, V.y); }
inline f4t_4 SwizzYZ0Z(f4t_3 V) { return MkF4t_4(V.y, V.z, (f4t)0, V.z); }
inline f4t_4 SwizzYZ00(f4t_3 V) { return MkF4t_4(V.y, V.z, (f4t)0, (f4t)0); }
inline f4t_4 SwizzY0XX(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, V.x, V.x); }
inline f4t_4 SwizzY0XY(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, V.x, V.y); }
inline f4t_4 SwizzY0XZ(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, V.x, V.z); }
inline f4t_4 SwizzY0X0(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, V.x, (f4t)0); }
inline f4t_4 SwizzY0YX(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, V.y, V.x); }
inline f4t_4 SwizzY0YY(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, V.y, V.y); }
inline f4t_4 SwizzY0YZ(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, V.y, V.z); }
inline f4t_4 SwizzY0Y0(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, V.y, (f4t)0); }
inline f4t_4 SwizzY0ZX(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, V.z, V.x); }
inline f4t_4 SwizzY0ZY(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, V.z, V.y); }
inline f4t_4 SwizzY0ZZ(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, V.z, V.z); }
inline f4t_4 SwizzY0Z0(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, V.z, (f4t)0); }
inline f4t_4 SwizzY00X(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, (f4t)0, V.x); }
inline f4t_4 SwizzY00Y(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, (f4t)0, V.y); }
inline f4t_4 SwizzY00Z(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, (f4t)0, V.z); }
inline f4t_4 SwizzY000(f4t_3 V) { return MkF4t_4(V.y, (f4t)0, (f4t)0, (f4t)0); }
inline f4t_4 SwizzZXXX(f4t_3 V) { return MkF4t_4(V.z, V.x, V.x, V.x); }
inline f4t_4 SwizzZXXY(f4t_3 V) { return MkF4t_4(V.z, V.x, V.x, V.y); }
inline f4t_4 SwizzZXXZ(f4t_3 V) { return MkF4t_4(V.z, V.x, V.x, V.z); }
inline f4t_4 SwizzZXX0(f4t_3 V) { return MkF4t_4(V.z, V.x, V.x, (f4t)0); }
inline f4t_4 SwizzZXYX(f4t_3 V) { return MkF4t_4(V.z, V.x, V.y, V.x); }
inline f4t_4 SwizzZXYY(f4t_3 V) { return MkF4t_4(V.z, V.x, V.y, V.y); }
inline f4t_4 SwizzZXYZ(f4t_3 V) { return MkF4t_4(V.z, V.x, V.y, V.z); }
inline f4t_4 SwizzZXY0(f4t_3 V) { return MkF4t_4(V.z, V.x, V.y, (f4t)0); }
inline f4t_4 SwizzZXZX(f4t_3 V) { return MkF4t_4(V.z, V.x, V.z, V.x); }
inline f4t_4 SwizzZXZY(f4t_3 V) { return MkF4t_4(V.z, V.x, V.z, V.y); }
inline f4t_4 SwizzZXZZ(f4t_3 V) { return MkF4t_4(V.z, V.x, V.z, V.z); }
inline f4t_4 SwizzZXZ0(f4t_3 V) { return MkF4t_4(V.z, V.x, V.z, (f4t)0); }
inline f4t_4 SwizzZX0X(f4t_3 V) { return MkF4t_4(V.z, V.x, (f4t)0, V.x); }
inline f4t_4 SwizzZX0Y(f4t_3 V) { return MkF4t_4(V.z, V.x, (f4t)0, V.y); }
inline f4t_4 SwizzZX0Z(f4t_3 V) { return MkF4t_4(V.z, V.x, (f4t)0, V.z); }
inline f4t_4 SwizzZX00(f4t_3 V) { return MkF4t_4(V.z, V.x, (f4t)0, (f4t)0); }
inline f4t_4 SwizzZYXX(f4t_3 V) { return MkF4t_4(V.z, V.y, V.x, V.x); }
inline f4t_4 SwizzZYXY(f4t_3 V) { return MkF4t_4(V.z, V.y, V.x, V.y); }
inline f4t_4 SwizzZYXZ(f4t_3 V) { return MkF4t_4(V.z, V.y, V.x, V.z); }
inline f4t_4 SwizzZYX0(f4t_3 V) { return MkF4t_4(V.z, V.y, V.x, (f4t)0); }
inline f4t_4 SwizzZYYX(f4t_3 V) { return MkF4t_4(V.z, V.y, V.y, V.x); }
inline f4t_4 SwizzZYYY(f4t_3 V) { return MkF4t_4(V.z, V.y, V.y, V.y); }
inline f4t_4 SwizzZYYZ(f4t_3 V) { return MkF4t_4(V.z, V.y, V.y, V.z); }
inline f4t_4 SwizzZYY0(f4t_3 V) { return MkF4t_4(V.z, V.y, V.y, (f4t)0); }
inline f4t_4 SwizzZYZX(f4t_3 V) { return MkF4t_4(V.z, V.y, V.z, V.x); }
inline f4t_4 SwizzZYZY(f4t_3 V) { return MkF4t_4(V.z, V.y, V.z, V.y); }
inline f4t_4 SwizzZYZZ(f4t_3 V) { return MkF4t_4(V.z, V.y, V.z, V.z); }
inline f4t_4 SwizzZYZ0(f4t_3 V) { return MkF4t_4(V.z, V.y, V.z, (f4t)0); }
inline f4t_4 SwizzZY0X(f4t_3 V) { return MkF4t_4(V.z, V.y, (f4t)0, V.x); }
inline f4t_4 SwizzZY0Y(f4t_3 V) { return MkF4t_4(V.z, V.y, (f4t)0, V.y); }
inline f4t_4 SwizzZY0Z(f4t_3 V) { return MkF4t_4(V.z, V.y, (f4t)0, V.z); }
inline f4t_4 SwizzZY00(f4t_3 V) { return MkF4t_4(V.z, V.y, (f4t)0, (f4t)0); }
inline f4t_4 SwizzZZXX(f4t_3 V) { return MkF4t_4(V.z, V.z, V.x, V.x); }
inline f4t_4 SwizzZZXY(f4t_3 V) { return MkF4t_4(V.z, V.z, V.x, V.y); }
inline f4t_4 SwizzZZXZ(f4t_3 V) { return MkF4t_4(V.z, V.z, V.x, V.z); }
inline f4t_4 SwizzZZX0(f4t_3 V) { return MkF4t_4(V.z, V.z, V.x, (f4t)0); }
inline f4t_4 SwizzZZYX(f4t_3 V) { return MkF4t_4(V.z, V.z, V.y, V.x); }
inline f4t_4 SwizzZZYY(f4t_3 V) { return MkF4t_4(V.z, V.z, V.y, V.y); }
inline f4t_4 SwizzZZYZ(f4t_3 V) { return MkF4t_4(V.z, V.z, V.y, V.z); }
inline f4t_4 SwizzZZY0(f4t_3 V) { return MkF4t_4(V.z, V.z, V.y, (f4t)0); }
inline f4t_4 SwizzZZZX(f4t_3 V) { return MkF4t_4(V.z, V.z, V.z, V.x); }
inline f4t_4 SwizzZZZY(f4t_3 V) { return MkF4t_4(V.z, V.z, V.z, V.y); }
inline f4t_4 SwizzZZZZ(f4t_3 V) { return MkF4t_4(V.z, V.z, V.z, V.z); }
inline f4t_4 SwizzZZZ0(f4t_3 V) { return MkF4t_4(V.z, V.z, V.z, (f4t)0); }
inline f4t_4 SwizzZZ0X(f4t_3 V) { return MkF4t_4(V.z, V.z, (f4t)0, V.x); }
inline f4t_4 SwizzZZ0Y(f4t_3 V) { return MkF4t_4(V.z, V.z, (f4t)0, V.y); }
inline f4t_4 SwizzZZ0Z(f4t_3 V) { return MkF4t_4(V.z, V.z, (f4t)0, V.z); }
inline f4t_4 SwizzZZ00(f4t_3 V) { return MkF4t_4(V.z, V.z, (f4t)0, (f4t)0); }
inline f4t_4 SwizzZ0XX(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, V.x, V.x); }
inline f4t_4 SwizzZ0XY(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, V.x, V.y); }
inline f4t_4 SwizzZ0XZ(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, V.x, V.z); }
inline f4t_4 SwizzZ0X0(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, V.x, (f4t)0); }
inline f4t_4 SwizzZ0YX(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, V.y, V.x); }
inline f4t_4 SwizzZ0YY(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, V.y, V.y); }
inline f4t_4 SwizzZ0YZ(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, V.y, V.z); }
inline f4t_4 SwizzZ0Y0(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, V.y, (f4t)0); }
inline f4t_4 SwizzZ0ZX(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, V.z, V.x); }
inline f4t_4 SwizzZ0ZY(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, V.z, V.y); }
inline f4t_4 SwizzZ0ZZ(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, V.z, V.z); }
inline f4t_4 SwizzZ0Z0(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, V.z, (f4t)0); }
inline f4t_4 SwizzZ00X(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, (f4t)0, V.x); }
inline f4t_4 SwizzZ00Y(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, (f4t)0, V.y); }
inline f4t_4 SwizzZ00Z(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, (f4t)0, V.z); }
inline f4t_4 SwizzZ000(f4t_3 V) { return MkF4t_4(V.z, (f4t)0, (f4t)0, (f4t)0); }
inline f4t_4 Swizz0XXX(f4t_3 V) { return MkF4t_4((f4t)0, V.x, V.x, V.x); }
inline f4t_4 Swizz0XXY(f4t_3 V) { return MkF4t_4((f4t)0, V.x, V.x, V.y); }
inline f4t_4 Swizz0XXZ(f4t_3 V) { return MkF4t_4((f4t)0, V.x, V.x, V.z); }
inline f4t_4 Swizz0XX0(f4t_3 V) { return MkF4t_4((f4t)0, V.x, V.x, (f4t)0); }
inline f4t_4 Swizz0XYX(f4t_3 V) { return MkF4t_4((f4t)0, V.x, V.y, V.x); }
inline f4t_4 Swizz0XYY(f4t_3 V) { return MkF4t_4((f4t)0, V.x, V.y, V.y); }
inline f4t_4 Swizz0XYZ(f4t_3 V) { return MkF4t_4((f4t)0, V.x, V.y, V.z); }
inline f4t_4 Swizz0XY0(f4t_3 V) { return MkF4t_4((f4t)0, V.x, V.y, (f4t)0); }
inline f4t_4 Swizz0XZX(f4t_3 V) { return MkF4t_4((f4t)0, V.x, V.z, V.x); }
inline f4t_4 Swizz0XZY(f4t_3 V) { return MkF4t_4((f4t)0, V.x, V.z, V.y); }
inline f4t_4 Swizz0XZZ(f4t_3 V) { return MkF4t_4((f4t)0, V.x, V.z, V.z); }
inline f4t_4 Swizz0XZ0(f4t_3 V) { return MkF4t_4((f4t)0, V.x, V.z, (f4t)0); }
inline f4t_4 Swizz0X0X(f4t_3 V) { return MkF4t_4((f4t)0, V.x, (f4t)0, V.x); }
inline f4t_4 Swizz0X0Y(f4t_3 V) { return MkF4t_4((f4t)0, V.x, (f4t)0, V.y); }
inline f4t_4 Swizz0X0Z(f4t_3 V) { return MkF4t_4((f4t)0, V.x, (f4t)0, V.z); }
inline f4t_4 Swizz0X00(f4t_3 V) { return MkF4t_4((f4t)0, V.x, (f4t)0, (f4t)0); }
inline f4t_4 Swizz0YXX(f4t_3 V) { return MkF4t_4((f4t)0, V.y, V.x, V.x); }
inline f4t_4 Swizz0YXY(f4t_3 V) { return MkF4t_4((f4t)0, V.y, V.x, V.y); }
inline f4t_4 Swizz0YXZ(f4t_3 V) { return MkF4t_4((f4t)0, V.y, V.x, V.z); }
inline f4t_4 Swizz0YX0(f4t_3 V) { return MkF4t_4((f4t)0, V.y, V.x, (f4t)0); }
inline f4t_4 Swizz0YYX(f4t_3 V) { return MkF4t_4((f4t)0, V.y, V.y, V.x); }
inline f4t_4 Swizz0YYY(f4t_3 V) { return MkF4t_4((f4t)0, V.y, V.y, V.y); }
inline f4t_4 Swizz0YYZ(f4t_3 V) { return MkF4t_4((f4t)0, V.y, V.y, V.z); }
inline f4t_4 Swizz0YY0(f4t_3 V) { return MkF4t_4((f4t)0, V.y, V.y, (f4t)0); }
inline f4t_4 Swizz0YZX(f4t_3 V) { return MkF4t_4((f4t)0, V.y, V.z, V.x); }
inline f4t_4 Swizz0YZY(f4t_3 V) { return MkF4t_4((f4t)0, V.y, V.z, V.y); }
inline f4t_4 Swizz0YZZ(f4t_3 V) { return MkF4t_4((f4t)0, V.y, V.z, V.z); }
inline f4t_4 Swizz0YZ0(f4t_3 V) { return MkF4t_4((f4t)0, V.y, V.z, (f4t)0); }
inline f4t_4 Swizz0Y0X(f4t_3 V) { return MkF4t_4((f4t)0, V.y, (f4t)0, V.x); }
inline f4t_4 Swizz0Y0Y(f4t_3 V) { return MkF4t_4((f4t)0, V.y, (f4t)0, V.y); }
inline f4t_4 Swizz0Y0Z(f4t_3 V) { return MkF4t_4((f4t)0, V.y, (f4t)0, V.z); }
inline f4t_4 Swizz0Y00(f4t_3 V) { return MkF4t_4((f4t)0, V.y, (f4t)0, (f4t)0); }
inline f4t_4 Swizz0ZXX(f4t_3 V) { return MkF4t_4((f4t)0, V.z, V.x, V.x); }
inline f4t_4 Swizz0ZXY(f4t_3 V) { return MkF4t_4((f4t)0, V.z, V.x, V.y); }
inline f4t_4 Swizz0ZXZ(f4t_3 V) { return MkF4t_4((f4t)0, V.z, V.x, V.z); }
inline f4t_4 Swizz0ZX0(f4t_3 V) { return MkF4t_4((f4t)0, V.z, V.x, (f4t)0); }
inline f4t_4 Swizz0ZYX(f4t_3 V) { return MkF4t_4((f4t)0, V.z, V.y, V.x); }
inline f4t_4 Swizz0ZYY(f4t_3 V) { return MkF4t_4((f4t)0, V.z, V.y, V.y); }
inline f4t_4 Swizz0ZYZ(f4t_3 V) { return MkF4t_4((f4t)0, V.z, V.y, V.z); }
inline f4t_4 Swizz0ZY0(f4t_3 V) { return MkF4t_4((f4t)0, V.z, V.y, (f4t)0); }
inline f4t_4 Swizz0ZZX(f4t_3 V) { return MkF4t_4((f4t)0, V.z, V.z, V.x); }
inline f4t_4 Swizz0ZZY(f4t_3 V) { return MkF4t_4((f4t)0, V.z, V.z, V.y); }
inline f4t_4 Swizz0ZZZ(f4t_3 V) { return MkF4t_4((f4t)0, V.z, V.z, V.z); }
inline f4t_4 Swizz0ZZ0(f4t_3 V) { return MkF4t_4((f4t)0, V.z, V.z, (f4t)0); }
inline f4t_4 Swizz0Z0X(f4t_3 V) { return MkF4t_4((f4t)0, V.z, (f4t)0, V.x); }
inline f4t_4 Swizz0Z0Y(f4t_3 V) { return MkF4t_4((f4t)0, V.z, (f4t)0, V.y); }
inline f4t_4 Swizz0Z0Z(f4t_3 V) { return MkF4t_4((f4t)0, V.z, (f4t)0, V.z); }
inline f4t_4 Swizz0Z00(f4t_3 V) { return MkF4t_4((f4t)0, V.z, (f4t)0, (f4t)0); }
inline f4t_4 Swizz00XX(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, V.x, V.x); }
inline f4t_4 Swizz00XY(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, V.x, V.y); }
inline f4t_4 Swizz00XZ(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, V.x, V.z); }
inline f4t_4 Swizz00X0(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, V.x, (f4t)0); }
inline f4t_4 Swizz00YX(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, V.y, V.x); }
inline f4t_4 Swizz00YY(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, V.y, V.y); }
inline f4t_4 Swizz00YZ(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, V.y, V.z); }
inline f4t_4 Swizz00Y0(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, V.y, (f4t)0); }
inline f4t_4 Swizz00ZX(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, V.z, V.x); }
inline f4t_4 Swizz00ZY(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, V.z, V.y); }
inline f4t_4 Swizz00ZZ(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, V.z, V.z); }
inline f4t_4 Swizz00Z0(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, V.z, (f4t)0); }
inline f4t_4 Swizz000X(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, (f4t)0, V.x); }
inline f4t_4 Swizz000Y(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, (f4t)0, V.y); }
inline f4t_4 Swizz000Z(f4t_3 V) { return MkF4t_4((f4t)0, (f4t)0, (f4t)0, V.z); }
inline f4t_2 SwizzXX(f4t_4 V) { return MkF4t_2(V.x, V.x); }
inline f4t_2 SwizzXY(f4t_4 V) { return MkF4t_2(V.x, V.y); }
inline f4t_2 SwizzXZ(f4t_4 V) { return MkF4t_2(V.x, V.z); }
inline f4t_2 SwizzXW(f4t_4 V) { return MkF4t_2(V.x, V.w); }
inline f4t_2 SwizzX0(f4t_4 V) { return MkF4t_2(V.x, (f4t)0); }
inline f4t_2 SwizzYX(f4t_4 V) { return MkF4t_2(V.y, V.x); }
inline f4t_2 SwizzYY(f4t_4 V) { return MkF4t_2(V.y, V.y); }
inline f4t_2 SwizzYZ(f4t_4 V) { return MkF4t_2(V.y, V.z); }
inline f4t_2 SwizzYW(f4t_4 V) { return MkF4t_2(V.y, V.w); }
inline f4t_2 SwizzY0(f4t_4 V) { return MkF4t_2(V.y, (f4t)0); }
inline f4t_2 SwizzZX(f4t_4 V) { return MkF4t_2(V.z, V.x); }
inline f4t_2 SwizzZY(f4t_4 V) { return MkF4t_2(V.z, V.y); }
inline f4t_2 SwizzZZ(f4t_4 V) { return MkF4t_2(V.z, V.z); }
inline f4t_2 SwizzZW(f4t_4 V) { return MkF4t_2(V.z, V.w); }
inline f4t_2 SwizzZ0(f4t_4 V) { return MkF4t_2(V.z, (f4t)0); }
inline f4t_2 SwizzWX(f4t_4 V) { return MkF4t_2(V.w, V.x); }
inline f4t_2 SwizzWY(f4t_4 V) { return MkF4t_2(V.w, V.y); }
inline f4t_2 SwizzWZ(f4t_4 V) { return MkF4t_2(V.w, V.z); }
inline f4t_2 SwizzWW(f4t_4 V) { return MkF4t_2(V.w, V.w); }
inline f4t_2 SwizzW0(f4t_4 V) { return MkF4t_2(V.w, (f4t)0); }
inline f4t_2 Swizz0X(f4t_4 V) { return MkF4t_2((f4t)0, V.x); }
inline f4t_2 Swizz0Y(f4t_4 V) { return MkF4t_2((f4t)0, V.y); }
inline f4t_2 Swizz0Z(f4t_4 V) { return MkF4t_2((f4t)0, V.z); }
inline f4t_2 Swizz0W(f4t_4 V) { return MkF4t_2((f4t)0, V.w); }
inline f4t_3 SwizzXXX(f4t_4 V) { return MkF4t_3(V.x, V.x, V.x); }
inline f4t_3 SwizzXXY(f4t_4 V) { return MkF4t_3(V.x, V.x, V.y); }
inline f4t_3 SwizzXXZ(f4t_4 V) { return MkF4t_3(V.x, V.x, V.z); }
inline f4t_3 SwizzXXW(f4t_4 V) { return MkF4t_3(V.x, V.x, V.w); }
inline f4t_3 SwizzXX0(f4t_4 V) { return MkF4t_3(V.x, V.x, (f4t)0); }
inline f4t_3 SwizzXYX(f4t_4 V) { return MkF4t_3(V.x, V.y, V.x); }
inline f4t_3 SwizzXYY(f4t_4 V) { return MkF4t_3(V.x, V.y, V.y); }
inline f4t_3 SwizzXYZ(f4t_4 V) { return MkF4t_3(V.x, V.y, V.z); }
inline f4t_3 SwizzXYW(f4t_4 V) { return MkF4t_3(V.x, V.y, V.w); }
inline f4t_3 SwizzXY0(f4t_4 V) { return MkF4t_3(V.x, V.y, (f4t)0); }
inline f4t_3 SwizzXZX(f4t_4 V) { return MkF4t_3(V.x, V.z, V.x); }
inline f4t_3 SwizzXZY(f4t_4 V) { return MkF4t_3(V.x, V.z, V.y); }
inline f4t_3 SwizzXZZ(f4t_4 V) { return MkF4t_3(V.x, V.z, V.z); }
inline f4t_3 SwizzXZW(f4t_4 V) { return MkF4t_3(V.x, V.z, V.w); }
inline f4t_3 SwizzXZ0(f4t_4 V) { return MkF4t_3(V.x, V.z, (f4t)0); }
inline f4t_3 SwizzXWX(f4t_4 V) { return MkF4t_3(V.x, V.w, V.x); }
inline f4t_3 SwizzXWY(f4t_4 V) { return MkF4t_3(V.x, V.w, V.y); }
inline f4t_3 SwizzXWZ(f4t_4 V) { return MkF4t_3(V.x, V.w, V.z); }
inline f4t_3 SwizzXWW(f4t_4 V) { return MkF4t_3(V.x, V.w, V.w); }
inline f4t_3 SwizzXW0(f4t_4 V) { return MkF4t_3(V.x, V.w, (f4t)0); }
inline f4t_3 SwizzX0X(f4t_4 V) { return MkF4t_3(V.x, (f4t)0, V.x); }
inline f4t_3 SwizzX0Y(f4t_4 V) { return MkF4t_3(V.x, (f4t)0, V.y); }
inline f4t_3 SwizzX0Z(f4t_4 V) { return MkF4t_3(V.x, (f4t)0, V.z); }
inline f4t_3 SwizzX0W(f4t_4 V) { return MkF4t_3(V.x, (f4t)0, V.w); }
inline f4t_3 SwizzX00(f4t_4 V) { return MkF4t_3(V.x, (f4t)0, (f4t)0); }
inline f4t_3 SwizzYXX(f4t_4 V) { return MkF4t_3(V.y, V.x, V.x); }
inline f4t_3 SwizzYXY(f4t_4 V) { return MkF4t_3(V.y, V.x, V.y); }
inline f4t_3 SwizzYXZ(f4t_4 V) { return MkF4t_3(V.y, V.x, V.z); }
inline f4t_3 SwizzYXW(f4t_4 V) { return MkF4t_3(V.y, V.x, V.w); }
inline f4t_3 SwizzYX0(f4t_4 V) { return MkF4t_3(V.y, V.x, (f4t)0); }
inline f4t_3 SwizzYYX(f4t_4 V) { return MkF4t_3(V.y, V.y, V.x); }
inline f4t_3 SwizzYYY(f4t_4 V) { return MkF4t_3(V.y, V.y, V.y); }
inline f4t_3 SwizzYYZ(f4t_4 V) { return MkF4t_3(V.y, V.y, V.z); }
inline f4t_3 SwizzYYW(f4t_4 V) { return MkF4t_3(V.y, V.y, V.w); }
inline f4t_3 SwizzYY0(f4t_4 V) { return MkF4t_3(V.y, V.y, (f4t)0); }
inline f4t_3 SwizzYZX(f4t_4 V) { return MkF4t_3(V.y, V.z, V.x); }
inline f4t_3 SwizzYZY(f4t_4 V) { return MkF4t_3(V.y, V.z, V.y); }
inline f4t_3 SwizzYZZ(f4t_4 V) { return MkF4t_3(V.y, V.z, V.z); }
inline f4t_3 SwizzYZW(f4t_4 V) { return MkF4t_3(V.y, V.z, V.w); }
inline f4t_3 SwizzYZ0(f4t_4 V) { return MkF4t_3(V.y, V.z, (f4t)0); }
inline f4t_3 SwizzYWX(f4t_4 V) { return MkF4t_3(V.y, V.w, V.x); }
inline f4t_3 SwizzYWY(f4t_4 V) { return MkF4t_3(V.y, V.w, V.y); }
inline f4t_3 SwizzYWZ(f4t_4 V) { return MkF4t_3(V.y, V.w, V.z); }
inline f4t_3 SwizzYWW(f4t_4 V) { return MkF4t_3(V.y, V.w, V.w); }
inline f4t_3 SwizzYW0(f4t_4 V) { return MkF4t_3(V.y, V.w, (f4t)0); }
inline f4t_3 SwizzY0X(f4t_4 V) { return MkF4t_3(V.y, (f4t)0, V.x); }
inline f4t_3 SwizzY0Y(f4t_4 V) { return MkF4t_3(V.y, (f4t)0, V.y); }
inline f4t_3 SwizzY0Z(f4t_4 V) { return MkF4t_3(V.y, (f4t)0, V.z); }
inline f4t_3 SwizzY0W(f4t_4 V) { return MkF4t_3(V.y, (f4t)0, V.w); }
inline f4t_3 SwizzY00(f4t_4 V) { return MkF4t_3(V.y, (f4t)0, (f4t)0); }
inline f4t_3 SwizzZXX(f4t_4 V) { return MkF4t_3(V.z, V.x, V.x); }
inline f4t_3 SwizzZXY(f4t_4 V) { return MkF4t_3(V.z, V.x, V.y); }
inline f4t_3 SwizzZXZ(f4t_4 V) { return MkF4t_3(V.z, V.x, V.z); }
inline f4t_3 SwizzZXW(f4t_4 V) { return MkF4t_3(V.z, V.x, V.w); }
inline f4t_3 SwizzZX0(f4t_4 V) { return MkF4t_3(V.z, V.x, (f4t)0); }
inline f4t_3 SwizzZYX(f4t_4 V) { return MkF4t_3(V.z, V.y, V.x); }
inline f4t_3 SwizzZYY(f4t_4 V) { return MkF4t_3(V.z, V.y, V.y); }
inline f4t_3 SwizzZYZ(f4t_4 V) { return MkF4t_3(V.z, V.y, V.z); }
inline f4t_3 SwizzZYW(f4t_4 V) { return MkF4t_3(V.z, V.y, V.w); }
inline f4t_3 SwizzZY0(f4t_4 V) { return MkF4t_3(V.z, V.y, (f4t)0); }
inline f4t_3 SwizzZZX(f4t_4 V) { return MkF4t_3(V.z, V.z, V.x); }
inline f4t_3 SwizzZZY(f4t_4 V) { return MkF4t_3(V.z, V.z, V.y); }
inline f4t_3 SwizzZZZ(f4t_4 V) { return MkF4t_3(V.z, V.z, V.z); }
inline f4t_3 SwizzZZW(f4t_4 V) { return MkF4t_3(V.z, V.z, V.w); }
inline f4t_3 SwizzZZ0(f4t_4 V) { return MkF4t_3(V.z, V.z, (f4t)0); }
inline f4t_3 SwizzZWX(f4t_4 V) { return MkF4t_3(V.z, V.w, V.x); }
inline f4t_3 SwizzZWY(f4t_4 V) { return MkF4t_3(V.z, V.w, V.y); }
inline f4t_3 SwizzZWZ(f4t_4 V) { return MkF4t_3(V.z, V.w, V.z); }
inline f4t_3 SwizzZWW(f4t_4 V) { return MkF4t_3(V.z, V.w, V.w); }
inline f4t_3 SwizzZW0(f4t_4 V) { return MkF4t_3(V.z, V.w, (f4t)0); }
inline f4t_3 SwizzZ0X(f4t_4 V) { return MkF4t_3(V.z, (f4t)0, V.x); }
inline f4t_3 SwizzZ0Y(f4t_4 V) { return MkF4t_3(V.z, (f4t)0, V.y); }
inline f4t_3 SwizzZ0Z(f4t_4 V) { return MkF4t_3(V.z, (f4t)0, V.z); }
inline f4t_3 SwizzZ0W(f4t_4 V) { return MkF4t_3(V.z, (f4t)0, V.w); }
inline f4t_3 SwizzZ00(f4t_4 V) { return MkF4t_3(V.z, (f4t)0, (f4t)0); }
inline f4t_3 SwizzWXX(f4t_4 V) { return MkF4t_3(V.w, V.x, V.x); }
inline f4t_3 SwizzWXY(f4t_4 V) { return MkF4t_3(V.w, V.x, V.y); }
inline f4t_3 SwizzWXZ(f4t_4 V) { return MkF4t_3(V.w, V.x, V.z); }
inline f4t_3 SwizzWXW(f4t_4 V) { return MkF4t_3(V.w, V.x, V.w); }
inline f4t_3 SwizzWX0(f4t_4 V) { return MkF4t_3(V.w, V.x, (f4t)0); }
inline f4t_3 SwizzWYX(f4t_4 V) { return MkF4t_3(V.w, V.y, V.x); }
inline f4t_3 SwizzWYY(f4t_4 V) { return MkF4t_3(V.w, V.y, V.y); }
inline f4t_3 SwizzWYZ(f4t_4 V) { return MkF4t_3(V.w, V.y, V.z); }
inline f4t_3 SwizzWYW(f4t_4 V) { return MkF4t_3(V.w, V.y, V.w); }
inline f4t_3 SwizzWY0(f4t_4 V) { return MkF4t_3(V.w, V.y, (f4t)0); }
inline f4t_3 SwizzWZX(f4t_4 V) { return MkF4t_3(V.w, V.z, V.x); }
inline f4t_3 SwizzWZY(f4t_4 V) { return MkF4t_3(V.w, V.z, V.y); }
inline f4t_3 SwizzWZZ(f4t_4 V) { return MkF4t_3(V.w, V.z, V.z); }
inline f4t_3 SwizzWZW(f4t_4 V) { return MkF4t_3(V.w, V.z, V.w); }
inline f4t_3 SwizzWZ0(f4t_4 V) { return MkF4t_3(V.w, V.z, (f4t)0); }
inline f4t_3 SwizzWWX(f4t_4 V) { return MkF4t_3(V.w, V.w, V.x); }
inline f4t_3 SwizzWWY(f4t_4 V) { return MkF4t_3(V.w, V.w, V.y); }
inline f4t_3 SwizzWWZ(f4t_4 V) { return MkF4t_3(V.w, V.w, V.z); }
inline f4t_3 SwizzWWW(f4t_4 V) { return MkF4t_3(V.w, V.w, V.w); }
inline f4t_3 SwizzWW0(f4t_4 V) { return MkF4t_3(V.w, V.w, (f4t)0); }
inline f4t_3 SwizzW0X(f4t_4 V) { return MkF4t_3(V.w, (f4t)0, V.x); }
inline f4t_3 SwizzW0Y(f4t_4 V) { return MkF4t_3(V.w, (f4t)0, V.y); }
inline f4t_3 SwizzW0Z(f4t_4 V) { return MkF4t_3(V.w, (f4t)0, V.z); }
inline f4t_3 SwizzW0W(f4t_4 V) { return MkF4t_3(V.w, (f4t)0, V.w); }
inline f4t_3 SwizzW00(f4t_4 V) { return MkF4t_3(V.w, (f4t)0, (f4t)0); }
inline f4t_3 Swizz0XX(f4t_4 V) { return MkF4t_3((f4t)0, V.x, V.x); }
inline f4t_3 Swizz0XY(f4t_4 V) { return MkF4t_3((f4t)0, V.x, V.y); }
inline f4t_3 Swizz0XZ(f4t_4 V) { return MkF4t_3((f4t)0, V.x, V.z); }
inline f4t_3 Swizz0XW(f4t_4 V) { return MkF4t_3((f4t)0, V.x, V.w); }
inline f4t_3 Swizz0X0(f4t_4 V) { return MkF4t_3((f4t)0, V.x, (f4t)0); }
inline f4t_3 Swizz0YX(f4t_4 V) { return MkF4t_3((f4t)0, V.y, V.x); }
inline f4t_3 Swizz0YY(f4t_4 V) { return MkF4t_3((f4t)0, V.y, V.y); }
inline f4t_3 Swizz0YZ(f4t_4 V) { return MkF4t_3((f4t)0, V.y, V.z); }
inline f4t_3 Swizz0YW(f4t_4 V) { return MkF4t_3((f4t)0, V.y, V.w); }
inline f4t_3 Swizz0Y0(f4t_4 V) { return MkF4t_3((f4t)0, V.y, (f4t)0); }
inline f4t_3 Swizz0ZX(f4t_4 V) { return MkF4t_3((f4t)0, V.z, V.x); }
inline f4t_3 Swizz0ZY(f4t_4 V) { return MkF4t_3((f4t)0, V.z, V.y); }
inline f4t_3 Swizz0ZZ(f4t_4 V) { return MkF4t_3((f4t)0, V.z, V.z); }
inline f4t_3 Swizz0ZW(f4t_4 V) { return MkF4t_3((f4t)0, V.z, V.w); }
inline f4t_3 Swizz0Z0(f4t_4 V) { return MkF4t_3((f4t)0, V.z, (f4t)0); }
inline f4t_3 Swizz0WX(f4t_4 V) { return MkF4t_3((f4t)0, V.w, V.x); }
inline f4t_3 Swizz0WY(f4t_4 V) { return MkF4t_3((f4t)0, V.w, V.y); }
inline f4t_3 Swizz0WZ(f4t_4 V) { return MkF4t_3((f4t)0, V.w, V.z); }
inline f4t_3 Swizz0WW(f4t_4 V) { return MkF4t_3((f4t)0, V.w, V.w); }
inline f4t_3 Swizz0W0(f4t_4 V) { return MkF4t_3((f4t)0, V.w, (f4t)0); }
inline f4t_3 Swizz00X(f4t_4 V) { return MkF4t_3((f4t)0, (f4t)0, V.x); }
inline f4t_3 Swizz00Y(f4t_4 V) { return MkF4t_3((f4t)0, (f4t)0, V.y); }
inline f4t_3 Swizz00Z(f4t_4 V) { return MkF4t_3((f4t)0, (f4t)0, V.z); }
inline f4t_3 Swizz00W(f4t_4 V) { return MkF4t_3((f4t)0, (f4t)0, V.w); }
inline f4t_4 SwizzXXXX(f4t_4 V) { return MkF4t_4(V.x, V.x, V.x, V.x); }
inline f4t_4 SwizzXXXY(f4t_4 V) { return MkF4t_4(V.x, V.x, V.x, V.y); }
inline f4t_4 SwizzXXXZ(f4t_4 V) { return MkF4t_4(V.x, V.x, V.x, V.z); }
inline f4t_4 SwizzXXXW(f4t_4 V) { return MkF4t_4(V.x, V.x, V.x, V.w); }
inline f4t_4 SwizzXXX0(f4t_4 V) { return MkF4t_4(V.x, V.x, V.x, (f4t)0); }
inline f4t_4 SwizzXXYX(f4t_4 V) { return MkF4t_4(V.x, V.x, V.y, V.x); }
inline f4t_4 SwizzXXYY(f4t_4 V) { return MkF4t_4(V.x, V.x, V.y, V.y); }
inline f4t_4 SwizzXXYZ(f4t_4 V) { return MkF4t_4(V.x, V.x, V.y, V.z); }
inline f4t_4 SwizzXXYW(f4t_4 V) { return MkF4t_4(V.x, V.x, V.y, V.w); }
inline f4t_4 SwizzXXY0(f4t_4 V) { return MkF4t_4(V.x, V.x, V.y, (f4t)0); }
inline f4t_4 SwizzXXZX(f4t_4 V) { return MkF4t_4(V.x, V.x, V.z, V.x); }
inline f4t_4 SwizzXXZY(f4t_4 V) { return MkF4t_4(V.x, V.x, V.z, V.y); }
inline f4t_4 SwizzXXZZ(f4t_4 V) { return MkF4t_4(V.x, V.x, V.z, V.z); }
inline f4t_4 SwizzXXZW(f4t_4 V) { return MkF4t_4(V.x, V.x, V.z, V.w); }
inline f4t_4 SwizzXXZ0(f4t_4 V) { return MkF4t_4(V.x, V.x, V.z, (f4t)0); }
inline f4t_4 SwizzXXWX(f4t_4 V) { return MkF4t_4(V.x, V.x, V.w, V.x); }
inline f4t_4 SwizzXXWY(f4t_4 V) { return MkF4t_4(V.x, V.x, V.w, V.y); }
inline f4t_4 SwizzXXWZ(f4t_4 V) { return MkF4t_4(V.x, V.x, V.w, V.z); }
inline f4t_4 SwizzXXWW(f4t_4 V) { return MkF4t_4(V.x, V.x, V.w, V.w); }
inline f4t_4 SwizzXXW0(f4t_4 V) { return MkF4t_4(V.x, V.x, V.w, (f4t)0); }
inline f4t_4 SwizzXX0X(f4t_4 V) { return MkF4t_4(V.x, V.x, (f4t)0, V.x); }
inline f4t_4 SwizzXX0Y(f4t_4 V) { return MkF4t_4(V.x, V.x, (f4t)0, V.y); }
inline f4t_4 SwizzXX0Z(f4t_4 V) { return MkF4t_4(V.x, V.x, (f4t)0, V.z); }
inline f4t_4 SwizzXX0W(f4t_4 V) { return MkF4t_4(V.x, V.x, (f4t)0, V.w); }
inline f4t_4 SwizzXX00(f4t_4 V) { return MkF4t_4(V.x, V.x, (f4t)0, (f4t)0); }
inline f4t_4 SwizzXYXX(f4t_4 V) { return MkF4t_4(V.x, V.y, V.x, V.x); }
inline f4t_4 SwizzXYXY(f4t_4 V) { return MkF4t_4(V.x, V.y, V.x, V.y); }
inline f4t_4 SwizzXYXZ(f4t_4 V) { return MkF4t_4(V.x, V.y, V.x, V.z); }
inline f4t_4 SwizzXYXW(f4t_4 V) { return MkF4t_4(V.x, V.y, V.x, V.w); }
inline f4t_4 SwizzXYX0(f4t_4 V) { return MkF4t_4(V.x, V.y, V.x, (f4t)0); }
inline f4t_4 SwizzXYYX(f4t_4 V) { return MkF4t_4(V.x, V.y, V.y, V.x); }
inline f4t_4 SwizzXYYY(f4t_4 V) { return MkF4t_4(V.x, V.y, V.y, V.y); }
inline f4t_4 SwizzXYYZ(f4t_4 V) { return MkF4t_4(V.x, V.y, V.y, V.z); }
inline f4t_4 SwizzXYYW(f4t_4 V) { return MkF4t_4(V.x, V.y, V.y, V.w); }
inline f4t_4 SwizzXYY0(f4t_4 V) { return MkF4t_4(V.x, V.y, V.y, (f4t)0); }
inline f4t_4 SwizzXYZX(f4t_4 V) { return MkF4t_4(V.x, V.y, V.z, V.x); }
inline f4t_4 SwizzXYZY(f4t_4 V) { return MkF4t_4(V.x, V.y, V.z, V.y); }
inline f4t_4 SwizzXYZZ(f4t_4 V) { return MkF4t_4(V.x, V.y, V.z, V.z); }
inline f4t_4 SwizzXYZW(f4t_4 V) { return MkF4t_4(V.x, V.y, V.z, V.w); }
inline f4t_4 SwizzXYZ0(f4t_4 V) { return MkF4t_4(V.x, V.y, V.z, (f4t)0); }
inline f4t_4 SwizzXYWX(f4t_4 V) { return MkF4t_4(V.x, V.y, V.w, V.x); }
inline f4t_4 SwizzXYWY(f4t_4 V) { return MkF4t_4(V.x, V.y, V.w, V.y); }
inline f4t_4 SwizzXYWZ(f4t_4 V) { return MkF4t_4(V.x, V.y, V.w, V.z); }
inline f4t_4 SwizzXYWW(f4t_4 V) { return MkF4t_4(V.x, V.y, V.w, V.w); }
inline f4t_4 SwizzXYW0(f4t_4 V) { return MkF4t_4(V.x, V.y, V.w, (f4t)0); }
inline f4t_4 SwizzXY0X(f4t_4 V) { return MkF4t_4(V.x, V.y, (f4t)0, V.x); }
inline f4t_4 SwizzXY0Y(f4t_4 V) { return MkF4t_4(V.x, V.y, (f4t)0, V.y); }
inline f4t_4 SwizzXY0Z(f4t_4 V) { return MkF4t_4(V.x, V.y, (f4t)0, V.z); }
inline f4t_4 SwizzXY0W(f4t_4 V) { return MkF4t_4(V.x, V.y, (f4t)0, V.w); }
inline f4t_4 SwizzXY00(f4t_4 V) { return MkF4t_4(V.x, V.y, (f4t)0, (f4t)0); }
inline f4t_4 SwizzXZXX(f4t_4 V) { return MkF4t_4(V.x, V.z, V.x, V.x); }
inline f4t_4 SwizzXZXY(f4t_4 V) { return MkF4t_4(V.x, V.z, V.x, V.y); }
inline f4t_4 SwizzXZXZ(f4t_4 V) { return MkF4t_4(V.x, V.z, V.x, V.z); }
inline f4t_4 SwizzXZXW(f4t_4 V) { return MkF4t_4(V.x, V.z, V.x, V.w); }
inline f4t_4 SwizzXZX0(f4t_4 V) { return MkF4t_4(V.x, V.z, V.x, (f4t)0); }
inline f4t_4 SwizzXZYX(f4t_4 V) { return MkF4t_4(V.x, V.z, V.y, V.x); }
inline f4t_4 SwizzXZYY(f4t_4 V) { return MkF4t_4(V.x, V.z, V.y, V.y); }
inline f4t_4 SwizzXZYZ(f4t_4 V) { return MkF4t_4(V.x, V.z, V.y, V.z); }
inline f4t_4 SwizzXZYW(f4t_4 V) { return MkF4t_4(V.x, V.z, V.y, V.w); }
inline f4t_4 SwizzXZY0(f4t_4 V) { return MkF4t_4(V.x, V.z, V.y, (f4t)0); }
inline f4t_4 SwizzXZZX(f4t_4 V) { return MkF4t_4(V.x, V.z, V.z, V.x); }
inline f4t_4 SwizzXZZY(f4t_4 V) { return MkF4t_4(V.x, V.z, V.z, V.y); }
inline f4t_4 SwizzXZZZ(f4t_4 V) { return MkF4t_4(V.x, V.z, V.z, V.z); }
inline f4t_4 SwizzXZZW(f4t_4 V) { return MkF4t_4(V.x, V.z, V.z, V.w); }
inline f4t_4 SwizzXZZ0(f4t_4 V) { return MkF4t_4(V.x, V.z, V.z, (f4t)0); }
inline f4t_4 SwizzXZWX(f4t_4 V) { return MkF4t_4(V.x, V.z, V.w, V.x); }
inline f4t_4 SwizzXZWY(f4t_4 V) { return MkF4t_4(V.x, V.z, V.w, V.y); }
inline f4t_4 SwizzXZWZ(f4t_4 V) { return MkF4t_4(V.x, V.z, V.w, V.z); }
inline f4t_4 SwizzXZWW(f4t_4 V) { return MkF4t_4(V.x, V.z, V.w, V.w); }
inline f4t_4 SwizzXZW0(f4t_4 V) { return MkF4t_4(V.x, V.z, V.w, (f4t)0); }
inline f4t_4 SwizzXZ0X(f4t_4 V) { return MkF4t_4(V.x, V.z, (f4t)0, V.x); }
inline f4t_4 SwizzXZ0Y(f4t_4 V) { return MkF4t_4(V.x, V.z, (f4t)0, V.y); }
inline f4t_4 SwizzXZ0Z(f4t_4 V) { return MkF4t_4(V.x, V.z, (f4t)0, V.z); }
inline f4t_4 SwizzXZ0W(f4t_4 V) { return MkF4t_4(V.x, V.z, (f4t)0, V.w); }
inline f4t_4 SwizzXZ00(f4t_4 V) { return MkF4t_4(V.x, V.z, (f4t)0, (f4t)0); }
inline f4t_4 SwizzXWXX(f4t_4 V) { return MkF4t_4(V.x, V.w, V.x, V.x); }
inline f4t_4 SwizzXWXY(f4t_4 V) { return MkF4t_4(V.x, V.w, V.x, V.y); }
inline f4t_4 SwizzXWXZ(f4t_4 V) { return MkF4t_4(V.x, V.w, V.x, V.z); }
inline f4t_4 SwizzXWXW(f4t_4 V) { return MkF4t_4(V.x, V.w, V.x, V.w); }
inline f4t_4 SwizzXWX0(f4t_4 V) { return MkF4t_4(V.x, V.w, V.x, (f4t)0); }
inline f4t_4 SwizzXWYX(f4t_4 V) { return MkF4t_4(V.x, V.w, V.y, V.x); }
inline f4t_4 SwizzXWYY(f4t_4 V) { return MkF4t_4(V.x, V.w, V.y, V.y); }
inline f4t_4 SwizzXWYZ(f4t_4 V) { return MkF4t_4(V.x, V.w, V.y, V.z); }
inline f4t_4 SwizzXWYW(f4t_4 V) { return MkF4t_4(V.x, V.w, V.y, V.w); }
inline f4t_4 SwizzXWY0(f4t_4 V) { return MkF4t_4(V.x, V.w, V.y, (f4t)0); }
inline f4t_4 SwizzXWZX(f4t_4 V) { return MkF4t_4(V.x, V.w, V.z, V.x); }
inline f4t_4 SwizzXWZY(f4t_4 V) { return MkF4t_4(V.x, V.w, V.z, V.y); }
inline f4t_4 SwizzXWZZ(f4t_4 V) { return MkF4t_4(V.x, V.w, V.z, V.z); }
inline f4t_4 SwizzXWZW(f4t_4 V) { return MkF4t_4(V.x, V.w, V.z, V.w); }
inline f4t_4 SwizzXWZ0(f4t_4 V) { return MkF4t_4(V.x, V.w, V.z, (f4t)0); }
inline f4t_4 SwizzXWWX(f4t_4 V) { return MkF4t_4(V.x, V.w, V.w, V.x); }
inline f4t_4 SwizzXWWY(f4t_4 V) { return MkF4t_4(V.x, V.w, V.w, V.y); }
inline f4t_4 SwizzXWWZ(f4t_4 V) { return MkF4t_4(V.x, V.w, V.w, V.z); }
inline f4t_4 SwizzXWWW(f4t_4 V) { return MkF4t_4(V.x, V.w, V.w, V.w); }
inline f4t_4 SwizzXWW0(f4t_4 V) { return MkF4t_4(V.x, V.w, V.w, (f4t)0); }
inline f4t_4 SwizzXW0X(f4t_4 V) { return MkF4t_4(V.x, V.w, (f4t)0, V.x); }
inline f4t_4 SwizzXW0Y(f4t_4 V) { return MkF4t_4(V.x, V.w, (f4t)0, V.y); }
inline f4t_4 SwizzXW0Z(f4t_4 V) { return MkF4t_4(V.x, V.w, (f4t)0, V.z); }
inline f4t_4 SwizzXW0W(f4t_4 V) { return MkF4t_4(V.x, V.w, (f4t)0, V.w); }
inline f4t_4 SwizzXW00(f4t_4 V) { return MkF4t_4(V.x, V.w, (f4t)0, (f4t)0); }
inline f4t_4 SwizzX0XX(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.x, V.x); }
inline f4t_4 SwizzX0XY(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.x, V.y); }
inline f4t_4 SwizzX0XZ(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.x, V.z); }
inline f4t_4 SwizzX0XW(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.x, V.w); }
inline f4t_4 SwizzX0X0(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.x, (f4t)0); }
inline f4t_4 SwizzX0YX(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.y, V.x); }
inline f4t_4 SwizzX0YY(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.y, V.y); }
inline f4t_4 SwizzX0YZ(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.y, V.z); }
inline f4t_4 SwizzX0YW(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.y, V.w); }
inline f4t_4 SwizzX0Y0(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.y, (f4t)0); }
inline f4t_4 SwizzX0ZX(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.z, V.x); }
inline f4t_4 SwizzX0ZY(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.z, V.y); }
inline f4t_4 SwizzX0ZZ(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.z, V.z); }
inline f4t_4 SwizzX0ZW(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.z, V.w); }
inline f4t_4 SwizzX0Z0(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.z, (f4t)0); }
inline f4t_4 SwizzX0WX(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.w, V.x); }
inline f4t_4 SwizzX0WY(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.w, V.y); }
inline f4t_4 SwizzX0WZ(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.w, V.z); }
inline f4t_4 SwizzX0WW(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.w, V.w); }
inline f4t_4 SwizzX0W0(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, V.w, (f4t)0); }
inline f4t_4 SwizzX00X(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, (f4t)0, V.x); }
inline f4t_4 SwizzX00Y(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, (f4t)0, V.y); }
inline f4t_4 SwizzX00Z(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, (f4t)0, V.z); }
inline f4t_4 SwizzX00W(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, (f4t)0, V.w); }
inline f4t_4 SwizzX000(f4t_4 V) { return MkF4t_4(V.x, (f4t)0, (f4t)0, (f4t)0); }
inline f4t_4 SwizzYXXX(f4t_4 V) { return MkF4t_4(V.y, V.x, V.x, V.x); }
inline f4t_4 SwizzYXXY(f4t_4 V) { return MkF4t_4(V.y, V.x, V.x, V.y); }
inline f4t_4 SwizzYXXZ(f4t_4 V) { return MkF4t_4(V.y, V.x, V.x, V.z); }
inline f4t_4 SwizzYXXW(f4t_4 V) { return MkF4t_4(V.y, V.x, V.x, V.w); }
inline f4t_4 SwizzYXX0(f4t_4 V) { return MkF4t_4(V.y, V.x, V.x, (f4t)0); }
inline f4t_4 SwizzYXYX(f4t_4 V) { return MkF4t_4(V.y, V.x, V.y, V.x); }
inline f4t_4 SwizzYXYY(f4t_4 V) { return MkF4t_4(V.y, V.x, V.y, V.y); }
inline f4t_4 SwizzYXYZ(f4t_4 V) { return MkF4t_4(V.y, V.x, V.y, V.z); }
inline f4t_4 SwizzYXYW(f4t_4 V) { return MkF4t_4(V.y, V.x, V.y, V.w); }
inline f4t_4 SwizzYXY0(f4t_4 V) { return MkF4t_4(V.y, V.x, V.y, (f4t)0); }
inline f4t_4 SwizzYXZX(f4t_4 V) { return MkF4t_4(V.y, V.x, V.z, V.x); }
inline f4t_4 SwizzYXZY(f4t_4 V) { return MkF4t_4(V.y, V.x, V.z, V.y); }
inline f4t_4 SwizzYXZZ(f4t_4 V) { return MkF4t_4(V.y, V.x, V.z, V.z); }
inline f4t_4 SwizzYXZW(f4t_4 V) { return MkF4t_4(V.y, V.x, V.z, V.w); }
inline f4t_4 SwizzYXZ0(f4t_4 V) { return MkF4t_4(V.y, V.x, V.z, (f4t)0); }
inline f4t_4 SwizzYXWX(f4t_4 V) { return MkF4t_4(V.y, V.x, V.w, V.x); }
inline f4t_4 SwizzYXWY(f4t_4 V) { return MkF4t_4(V.y, V.x, V.w, V.y); }
inline f4t_4 SwizzYXWZ(f4t_4 V) { return MkF4t_4(V.y, V.x, V.w, V.z); }
inline f4t_4 SwizzYXWW(f4t_4 V) { return MkF4t_4(V.y, V.x, V.w, V.w); }
inline f4t_4 SwizzYXW0(f4t_4 V) { return MkF4t_4(V.y, V.x, V.w, (f4t)0); }
inline f4t_4 SwizzYX0X(f4t_4 V) { return MkF4t_4(V.y, V.x, (f4t)0, V.x); }
inline f4t_4 SwizzYX0Y(f4t_4 V) { return MkF4t_4(V.y, V.x, (f4t)0, V.y); }
inline f4t_4 SwizzYX0Z(f4t_4 V) { return MkF4t_4(V.y, V.x, (f4t)0, V.z); }
inline f4t_4 SwizzYX0W(f4t_4 V) { return MkF4t_4(V.y, V.x, (f4t)0, V.w); }
inline f4t_4 SwizzYX00(f4t_4 V) { return MkF4t_4(V.y, V.x, (f4t)0, (f4t)0); }
inline f4t_4 SwizzYYXX(f4t_4 V) { return MkF4t_4(V.y, V.y, V.x, V.x); }
inline f4t_4 SwizzYYXY(f4t_4 V) { return MkF4t_4(V.y, V.y, V.x, V.y); }
inline f4t_4 SwizzYYXZ(f4t_4 V) { return MkF4t_4(V.y, V.y, V.x, V.z); }
inline f4t_4 SwizzYYXW(f4t_4 V) { return MkF4t_4(V.y, V.y, V.x, V.w); }
inline f4t_4 SwizzYYX0(f4t_4 V) { return MkF4t_4(V.y, V.y, V.x, (f4t)0); }
inline f4t_4 SwizzYYYX(f4t_4 V) { return MkF4t_4(V.y, V.y, V.y, V.x); }
inline f4t_4 SwizzYYYY(f4t_4 V) { return MkF4t_4(V.y, V.y, V.y, V.y); }
inline f4t_4 SwizzYYYZ(f4t_4 V) { return MkF4t_4(V.y, V.y, V.y, V.z); }
inline f4t_4 SwizzYYYW(f4t_4 V) { return MkF4t_4(V.y, V.y, V.y, V.w); }
inline f4t_4 SwizzYYY0(f4t_4 V) { return MkF4t_4(V.y, V.y, V.y, (f4t)0); }
inline f4t_4 SwizzYYZX(f4t_4 V) { return MkF4t_4(V.y, V.y, V.z, V.x); }
inline f4t_4 SwizzYYZY(f4t_4 V) { return MkF4t_4(V.y, V.y, V.z, V.y); }
inline f4t_4 SwizzYYZZ(f4t_4 V) { return MkF4t_4(V.y, V.y, V.z, V.z); }
inline f4t_4 SwizzYYZW(f4t_4 V) { return MkF4t_4(V.y, V.y, V.z, V.w); }
inline f4t_4 SwizzYYZ0(f4t_4 V) { return MkF4t_4(V.y, V.y, V.z, (f4t)0); }
inline f4t_4 SwizzYYWX(f4t_4 V) { return MkF4t_4(V.y, V.y, V.w, V.x); }
inline f4t_4 SwizzYYWY(f4t_4 V) { return MkF4t_4(V.y, V.y, V.w, V.y); }
inline f4t_4 SwizzYYWZ(f4t_4 V) { return MkF4t_4(V.y, V.y, V.w, V.z); }
inline f4t_4 SwizzYYWW(f4t_4 V) { return MkF4t_4(V.y, V.y, V.w, V.w); }
inline f4t_4 SwizzYYW0(f4t_4 V) { return MkF4t_4(V.y, V.y, V.w, (f4t)0); }
inline f4t_4 SwizzYY0X(f4t_4 V) { return MkF4t_4(V.y, V.y, (f4t)0, V.x); }
inline f4t_4 SwizzYY0Y(f4t_4 V) { return MkF4t_4(V.y, V.y, (f4t)0, V.y); }
inline f4t_4 SwizzYY0Z(f4t_4 V) { return MkF4t_4(V.y, V.y, (f4t)0, V.z); }
inline f4t_4 SwizzYY0W(f4t_4 V) { return MkF4t_4(V.y, V.y, (f4t)0, V.w); }
inline f4t_4 SwizzYY00(f4t_4 V) { return MkF4t_4(V.y, V.y, (f4t)0, (f4t)0); }
inline f4t_4 SwizzYZXX(f4t_4 V) { return MkF4t_4(V.y, V.z, V.x, V.x); }
inline f4t_4 SwizzYZXY(f4t_4 V) { return MkF4t_4(V.y, V.z, V.x, V.y); }
inline f4t_4 SwizzYZXZ(f4t_4 V) { return MkF4t_4(V.y, V.z, V.x, V.z); }
inline f4t_4 SwizzYZXW(f4t_4 V) { return MkF4t_4(V.y, V.z, V.x, V.w); }
inline f4t_4 SwizzYZX0(f4t_4 V) { return MkF4t_4(V.y, V.z, V.x, (f4t)0); }
inline f4t_4 SwizzYZYX(f4t_4 V) { return MkF4t_4(V.y, V.z, V.y, V.x); }
inline f4t_4 SwizzYZYY(f4t_4 V) { return MkF4t_4(V.y, V.z, V.y, V.y); }
inline f4t_4 SwizzYZYZ(f4t_4 V) { return MkF4t_4(V.y, V.z, V.y, V.z); }
inline f4t_4 SwizzYZYW(f4t_4 V) { return MkF4t_4(V.y, V.z, V.y, V.w); }
inline f4t_4 SwizzYZY0(f4t_4 V) { return MkF4t_4(V.y, V.z, V.y, (f4t)0); }
inline f4t_4 SwizzYZZX(f4t_4 V) { return MkF4t_4(V.y, V.z, V.z, V.x); }
inline f4t_4 SwizzYZZY(f4t_4 V) { return MkF4t_4(V.y, V.z, V.z, V.y); }
inline f4t_4 SwizzYZZZ(f4t_4 V) { return MkF4t_4(V.y, V.z, V.z, V.z); }
inline f4t_4 SwizzYZZW(f4t_4 V) { return MkF4t_4(V.y, V.z, V.z, V.w); }
inline f4t_4 SwizzYZZ0(f4t_4 V) { return MkF4t_4(V.y, V.z, V.z, (f4t)0); }
inline f4t_4 SwizzYZWX(f4t_4 V) { return MkF4t_4(V.y, V.z, V.w, V.x); }
inline f4t_4 SwizzYZWY(f4t_4 V) { return MkF4t_4(V.y, V.z, V.w, V.y); }
inline f4t_4 SwizzYZWZ(f4t_4 V) { return MkF4t_4(V.y, V.z, V.w, V.z); }
inline f4t_4 SwizzYZWW(f4t_4 V) { return MkF4t_4(V.y, V.z, V.w, V.w); }
inline f4t_4 SwizzYZW0(f4t_4 V) { return MkF4t_4(V.y, V.z, V.w, (f4t)0); }
inline f4t_4 SwizzYZ0X(f4t_4 V) { return MkF4t_4(V.y, V.z, (f4t)0, V.x); }
inline f4t_4 SwizzYZ0Y(f4t_4 V) { return MkF4t_4(V.y, V.z, (f4t)0, V.y); }
inline f4t_4 SwizzYZ0Z(f4t_4 V) { return MkF4t_4(V.y, V.z, (f4t)0, V.z); }
inline f4t_4 SwizzYZ0W(f4t_4 V) { return MkF4t_4(V.y, V.z, (f4t)0, V.w); }
inline f4t_4 SwizzYZ00(f4t_4 V) { return MkF4t_4(V.y, V.z, (f4t)0, (f4t)0); }
inline f4t_4 SwizzYWXX(f4t_4 V) { return MkF4t_4(V.y, V.w, V.x, V.x); }
inline f4t_4 SwizzYWXY(f4t_4 V) { return MkF4t_4(V.y, V.w, V.x, V.y); }
inline f4t_4 SwizzYWXZ(f4t_4 V) { return MkF4t_4(V.y, V.w, V.x, V.z); }
inline f4t_4 SwizzYWXW(f4t_4 V) { return MkF4t_4(V.y, V.w, V.x, V.w); }
inline f4t_4 SwizzYWX0(f4t_4 V) { return MkF4t_4(V.y, V.w, V.x, (f4t)0); }
inline f4t_4 SwizzYWYX(f4t_4 V) { return MkF4t_4(V.y, V.w, V.y, V.x); }
inline f4t_4 SwizzYWYY(f4t_4 V) { return MkF4t_4(V.y, V.w, V.y, V.y); }
inline f4t_4 SwizzYWYZ(f4t_4 V) { return MkF4t_4(V.y, V.w, V.y, V.z); }
inline f4t_4 SwizzYWYW(f4t_4 V) { return MkF4t_4(V.y, V.w, V.y, V.w); }
inline f4t_4 SwizzYWY0(f4t_4 V) { return MkF4t_4(V.y, V.w, V.y, (f4t)0); }
inline f4t_4 SwizzYWZX(f4t_4 V) { return MkF4t_4(V.y, V.w, V.z, V.x); }
inline f4t_4 SwizzYWZY(f4t_4 V) { return MkF4t_4(V.y, V.w, V.z, V.y); }
inline f4t_4 SwizzYWZZ(f4t_4 V) { return MkF4t_4(V.y, V.w, V.z, V.z); }
inline f4t_4 SwizzYWZW(f4t_4 V) { return MkF4t_4(V.y, V.w, V.z, V.w); }
inline f4t_4 SwizzYWZ0(f4t_4 V) { return MkF4t_4(V.y, V.w, V.z, (f4t)0); }
inline f4t_4 SwizzYWWX(f4t_4 V) { return MkF4t_4(V.y, V.w, V.w, V.x); }
inline f4t_4 SwizzYWWY(f4t_4 V) { return MkF4t_4(V.y, V.w, V.w, V.y); }
inline f4t_4 SwizzYWWZ(f4t_4 V) { return MkF4t_4(V.y, V.w, V.w, V.z); }
inline f4t_4 SwizzYWWW(f4t_4 V) { return MkF4t_4(V.y, V.w, V.w, V.w); }
inline f4t_4 SwizzYWW0(f4t_4 V) { return MkF4t_4(V.y, V.w, V.w, (f4t)0); }
inline f4t_4 SwizzYW0X(f4t_4 V) { return MkF4t_4(V.y, V.w, (f4t)0, V.x); }
inline f4t_4 SwizzYW0Y(f4t_4 V) { return MkF4t_4(V.y, V.w, (f4t)0, V.y); }
inline f4t_4 SwizzYW0Z(f4t_4 V) { return MkF4t_4(V.y, V.w, (f4t)0, V.z); }
inline f4t_4 SwizzYW0W(f4t_4 V) { return MkF4t_4(V.y, V.w, (f4t)0, V.w); }
inline f4t_4 SwizzYW00(f4t_4 V) { return MkF4t_4(V.y, V.w, (f4t)0, (f4t)0); }
inline f4t_4 SwizzY0XX(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.x, V.x); }
inline f4t_4 SwizzY0XY(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.x, V.y); }
inline f4t_4 SwizzY0XZ(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.x, V.z); }
inline f4t_4 SwizzY0XW(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.x, V.w); }
inline f4t_4 SwizzY0X0(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.x, (f4t)0); }
inline f4t_4 SwizzY0YX(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.y, V.x); }
inline f4t_4 SwizzY0YY(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.y, V.y); }
inline f4t_4 SwizzY0YZ(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.y, V.z); }
inline f4t_4 SwizzY0YW(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.y, V.w); }
inline f4t_4 SwizzY0Y0(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.y, (f4t)0); }
inline f4t_4 SwizzY0ZX(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.z, V.x); }
inline f4t_4 SwizzY0ZY(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.z, V.y); }
inline f4t_4 SwizzY0ZZ(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.z, V.z); }
inline f4t_4 SwizzY0ZW(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.z, V.w); }
inline f4t_4 SwizzY0Z0(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.z, (f4t)0); }
inline f4t_4 SwizzY0WX(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.w, V.x); }
inline f4t_4 SwizzY0WY(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.w, V.y); }
inline f4t_4 SwizzY0WZ(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.w, V.z); }
inline f4t_4 SwizzY0WW(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.w, V.w); }
inline f4t_4 SwizzY0W0(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, V.w, (f4t)0); }
inline f4t_4 SwizzY00X(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, (f4t)0, V.x); }
inline f4t_4 SwizzY00Y(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, (f4t)0, V.y); }
inline f4t_4 SwizzY00Z(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, (f4t)0, V.z); }
inline f4t_4 SwizzY00W(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, (f4t)0, V.w); }
inline f4t_4 SwizzY000(f4t_4 V) { return MkF4t_4(V.y, (f4t)0, (f4t)0, (f4t)0); }
inline f4t_4 SwizzZXXX(f4t_4 V) { return MkF4t_4(V.z, V.x, V.x, V.x); }
inline f4t_4 SwizzZXXY(f4t_4 V) { return MkF4t_4(V.z, V.x, V.x, V.y); }
inline f4t_4 SwizzZXXZ(f4t_4 V) { return MkF4t_4(V.z, V.x, V.x, V.z); }
inline f4t_4 SwizzZXXW(f4t_4 V) { return MkF4t_4(V.z, V.x, V.x, V.w); }
inline f4t_4 SwizzZXX0(f4t_4 V) { return MkF4t_4(V.z, V.x, V.x, (f4t)0); }
inline f4t_4 SwizzZXYX(f4t_4 V) { return MkF4t_4(V.z, V.x, V.y, V.x); }
inline f4t_4 SwizzZXYY(f4t_4 V) { return MkF4t_4(V.z, V.x, V.y, V.y); }
inline f4t_4 SwizzZXYZ(f4t_4 V) { return MkF4t_4(V.z, V.x, V.y, V.z); }
inline f4t_4 SwizzZXYW(f4t_4 V) { return MkF4t_4(V.z, V.x, V.y, V.w); }
inline f4t_4 SwizzZXY0(f4t_4 V) { return MkF4t_4(V.z, V.x, V.y, (f4t)0); }
inline f4t_4 SwizzZXZX(f4t_4 V) { return MkF4t_4(V.z, V.x, V.z, V.x); }
inline f4t_4 SwizzZXZY(f4t_4 V) { return MkF4t_4(V.z, V.x, V.z, V.y); }
inline f4t_4 SwizzZXZZ(f4t_4 V) { return MkF4t_4(V.z, V.x, V.z, V.z); }
inline f4t_4 SwizzZXZW(f4t_4 V) { return MkF4t_4(V.z, V.x, V.z, V.w); }
inline f4t_4 SwizzZXZ0(f4t_4 V) { return MkF4t_4(V.z, V.x, V.z, (f4t)0); }
inline f4t_4 SwizzZXWX(f4t_4 V) { return MkF4t_4(V.z, V.x, V.w, V.x); }
inline f4t_4 SwizzZXWY(f4t_4 V) { return MkF4t_4(V.z, V.x, V.w, V.y); }
inline f4t_4 SwizzZXWZ(f4t_4 V) { return MkF4t_4(V.z, V.x, V.w, V.z); }
inline f4t_4 SwizzZXWW(f4t_4 V) { return MkF4t_4(V.z, V.x, V.w, V.w); }
inline f4t_4 SwizzZXW0(f4t_4 V) { return MkF4t_4(V.z, V.x, V.w, (f4t)0); }
inline f4t_4 SwizzZX0X(f4t_4 V) { return MkF4t_4(V.z, V.x, (f4t)0, V.x); }
inline f4t_4 SwizzZX0Y(f4t_4 V) { return MkF4t_4(V.z, V.x, (f4t)0, V.y); }
inline f4t_4 SwizzZX0Z(f4t_4 V) { return MkF4t_4(V.z, V.x, (f4t)0, V.z); }
inline f4t_4 SwizzZX0W(f4t_4 V) { return MkF4t_4(V.z, V.x, (f4t)0, V.w); }
inline f4t_4 SwizzZX00(f4t_4 V) { return MkF4t_4(V.z, V.x, (f4t)0, (f4t)0); }
inline f4t_4 SwizzZYXX(f4t_4 V) { return MkF4t_4(V.z, V.y, V.x, V.x); }
inline f4t_4 SwizzZYXY(f4t_4 V) { return MkF4t_4(V.z, V.y, V.x, V.y); }
inline f4t_4 SwizzZYXZ(f4t_4 V) { return MkF4t_4(V.z, V.y, V.x, V.z); }
inline f4t_4 SwizzZYXW(f4t_4 V) { return MkF4t_4(V.z, V.y, V.x, V.w); }
inline f4t_4 SwizzZYX0(f4t_4 V) { return MkF4t_4(V.z, V.y, V.x, (f4t)0); }
inline f4t_4 SwizzZYYX(f4t_4 V) { return MkF4t_4(V.z, V.y, V.y, V.x); }
inline f4t_4 SwizzZYYY(f4t_4 V) { return MkF4t_4(V.z, V.y, V.y, V.y); }
inline f4t_4 SwizzZYYZ(f4t_4 V) { return MkF4t_4(V.z, V.y, V.y, V.z); }
inline f4t_4 SwizzZYYW(f4t_4 V) { return MkF4t_4(V.z, V.y, V.y, V.w); }
inline f4t_4 SwizzZYY0(f4t_4 V) { return MkF4t_4(V.z, V.y, V.y, (f4t)0); }
inline f4t_4 SwizzZYZX(f4t_4 V) { return MkF4t_4(V.z, V.y, V.z, V.x); }
inline f4t_4 SwizzZYZY(f4t_4 V) { return MkF4t_4(V.z, V.y, V.z, V.y); }
inline f4t_4 SwizzZYZZ(f4t_4 V) { return MkF4t_4(V.z, V.y, V.z, V.z); }
inline f4t_4 SwizzZYZW(f4t_4 V) { return MkF4t_4(V.z, V.y, V.z, V.w); }
inline f4t_4 SwizzZYZ0(f4t_4 V) { return MkF4t_4(V.z, V.y, V.z, (f4t)0); }
inline f4t_4 SwizzZYWX(f4t_4 V) { return MkF4t_4(V.z, V.y, V.w, V.x); }
inline f4t_4 SwizzZYWY(f4t_4 V) { return MkF4t_4(V.z, V.y, V.w, V.y); }
inline f4t_4 SwizzZYWZ(f4t_4 V) { return MkF4t_4(V.z, V.y, V.w, V.z); }
inline f4t_4 SwizzZYWW(f4t_4 V) { return MkF4t_4(V.z, V.y, V.w, V.w); }
inline f4t_4 SwizzZYW0(f4t_4 V) { return MkF4t_4(V.z, V.y, V.w, (f4t)0); }
inline f4t_4 SwizzZY0X(f4t_4 V) { return MkF4t_4(V.z, V.y, (f4t)0, V.x); }
inline f4t_4 SwizzZY0Y(f4t_4 V) { return MkF4t_4(V.z, V.y, (f4t)0, V.y); }
inline f4t_4 SwizzZY0Z(f4t_4 V) { return MkF4t_4(V.z, V.y, (f4t)0, V.z); }
inline f4t_4 SwizzZY0W(f4t_4 V) { return MkF4t_4(V.z, V.y, (f4t)0, V.w); }
inline f4t_4 SwizzZY00(f4t_4 V) { return MkF4t_4(V.z, V.y, (f4t)0, (f4t)0); }
inline f4t_4 SwizzZZXX(f4t_4 V) { return MkF4t_4(V.z, V.z, V.x, V.x); }
inline f4t_4 SwizzZZXY(f4t_4 V) { return MkF4t_4(V.z, V.z, V.x, V.y); }
inline f4t_4 SwizzZZXZ(f4t_4 V) { return MkF4t_4(V.z, V.z, V.x, V.z); }
inline f4t_4 SwizzZZXW(f4t_4 V) { return MkF4t_4(V.z, V.z, V.x, V.w); }
inline f4t_4 SwizzZZX0(f4t_4 V) { return MkF4t_4(V.z, V.z, V.x, (f4t)0); }
inline f4t_4 SwizzZZYX(f4t_4 V) { return MkF4t_4(V.z, V.z, V.y, V.x); }
inline f4t_4 SwizzZZYY(f4t_4 V) { return MkF4t_4(V.z, V.z, V.y, V.y); }
inline f4t_4 SwizzZZYZ(f4t_4 V) { return MkF4t_4(V.z, V.z, V.y, V.z); }
inline f4t_4 SwizzZZYW(f4t_4 V) { return MkF4t_4(V.z, V.z, V.y, V.w); }
inline f4t_4 SwizzZZY0(f4t_4 V) { return MkF4t_4(V.z, V.z, V.y, (f4t)0); }
inline f4t_4 SwizzZZZX(f4t_4 V) { return MkF4t_4(V.z, V.z, V.z, V.x); }
inline f4t_4 SwizzZZZY(f4t_4 V) { return MkF4t_4(V.z, V.z, V.z, V.y); }
inline f4t_4 SwizzZZZZ(f4t_4 V) { return MkF4t_4(V.z, V.z, V.z, V.z); }
inline f4t_4 SwizzZZZW(f4t_4 V) { return MkF4t_4(V.z, V.z, V.z, V.w); }
inline f4t_4 SwizzZZZ0(f4t_4 V) { return MkF4t_4(V.z, V.z, V.z, (f4t)0); }
inline f4t_4 SwizzZZWX(f4t_4 V) { return MkF4t_4(V.z, V.z, V.w, V.x); }
inline f4t_4 SwizzZZWY(f4t_4 V) { return MkF4t_4(V.z, V.z, V.w, V.y); }
inline f4t_4 SwizzZZWZ(f4t_4 V) { return MkF4t_4(V.z, V.z, V.w, V.z); }
inline f4t_4 SwizzZZWW(f4t_4 V) { return MkF4t_4(V.z, V.z, V.w, V.w); }
inline f4t_4 SwizzZZW0(f4t_4 V) { return MkF4t_4(V.z, V.z, V.w, (f4t)0); }
inline f4t_4 SwizzZZ0X(f4t_4 V) { return MkF4t_4(V.z, V.z, (f4t)0, V.x); }
inline f4t_4 SwizzZZ0Y(f4t_4 V) { return MkF4t_4(V.z, V.z, (f4t)0, V.y); }
inline f4t_4 SwizzZZ0Z(f4t_4 V) { return MkF4t_4(V.z, V.z, (f4t)0, V.z); }
inline f4t_4 SwizzZZ0W(f4t_4 V) { return MkF4t_4(V.z, V.z, (f4t)0, V.w); }
inline f4t_4 SwizzZZ00(f4t_4 V) { return MkF4t_4(V.z, V.z, (f4t)0, (f4t)0); }
inline f4t_4 SwizzZWXX(f4t_4 V) { return MkF4t_4(V.z, V.w, V.x, V.x); }
inline f4t_4 SwizzZWXY(f4t_4 V) { return MkF4t_4(V.z, V.w, V.x, V.y); }
inline f4t_4 SwizzZWXZ(f4t_4 V) { return MkF4t_4(V.z, V.w, V.x, V.z); }
inline f4t_4 SwizzZWXW(f4t_4 V) { return MkF4t_4(V.z, V.w, V.x, V.w); }
inline f4t_4 SwizzZWX0(f4t_4 V) { return MkF4t_4(V.z, V.w, V.x, (f4t)0); }
inline f4t_4 SwizzZWYX(f4t_4 V) { return MkF4t_4(V.z, V.w, V.y, V.x); }
inline f4t_4 SwizzZWYY(f4t_4 V) { return MkF4t_4(V.z, V.w, V.y, V.y); }
inline f4t_4 SwizzZWYZ(f4t_4 V) { return MkF4t_4(V.z, V.w, V.y, V.z); }
inline f4t_4 SwizzZWYW(f4t_4 V) { return MkF4t_4(V.z, V.w, V.y, V.w); }
inline f4t_4 SwizzZWY0(f4t_4 V) { return MkF4t_4(V.z, V.w, V.y, (f4t)0); }
inline f4t_4 SwizzZWZX(f4t_4 V) { return MkF4t_4(V.z, V.w, V.z, V.x); }
inline f4t_4 SwizzZWZY(f4t_4 V) { return MkF4t_4(V.z, V.w, V.z, V.y); }
inline f4t_4 SwizzZWZZ(f4t_4 V) { return MkF4t_4(V.z, V.w, V.z, V.z); }
inline f4t_4 SwizzZWZW(f4t_4 V) { return MkF4t_4(V.z, V.w, V.z, V.w); }
inline f4t_4 SwizzZWZ0(f4t_4 V) { return MkF4t_4(V.z, V.w, V.z, (f4t)0); }
inline f4t_4 SwizzZWWX(f4t_4 V) { return MkF4t_4(V.z, V.w, V.w, V.x); }
inline f4t_4 SwizzZWWY(f4t_4 V) { return MkF4t_4(V.z, V.w, V.w, V.y); }
inline f4t_4 SwizzZWWZ(f4t_4 V) { return MkF4t_4(V.z, V.w, V.w, V.z); }
inline f4t_4 SwizzZWWW(f4t_4 V) { return MkF4t_4(V.z, V.w, V.w, V.w); }
inline f4t_4 SwizzZWW0(f4t_4 V) { return MkF4t_4(V.z, V.w, V.w, (f4t)0); }
inline f4t_4 SwizzZW0X(f4t_4 V) { return MkF4t_4(V.z, V.w, (f4t)0, V.x); }
inline f4t_4 SwizzZW0Y(f4t_4 V) { return MkF4t_4(V.z, V.w, (f4t)0, V.y); }
inline f4t_4 SwizzZW0Z(f4t_4 V) { return MkF4t_4(V.z, V.w, (f4t)0, V.z); }
inline f4t_4 SwizzZW0W(f4t_4 V) { return MkF4t_4(V.z, V.w, (f4t)0, V.w); }
inline f4t_4 SwizzZW00(f4t_4 V) { return MkF4t_4(V.z, V.w, (f4t)0, (f4t)0); }
inline f4t_4 SwizzZ0XX(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.x, V.x); }
inline f4t_4 SwizzZ0XY(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.x, V.y); }
inline f4t_4 SwizzZ0XZ(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.x, V.z); }
inline f4t_4 SwizzZ0XW(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.x, V.w); }
inline f4t_4 SwizzZ0X0(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.x, (f4t)0); }
inline f4t_4 SwizzZ0YX(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.y, V.x); }
inline f4t_4 SwizzZ0YY(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.y, V.y); }
inline f4t_4 SwizzZ0YZ(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.y, V.z); }
inline f4t_4 SwizzZ0YW(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.y, V.w); }
inline f4t_4 SwizzZ0Y0(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.y, (f4t)0); }
inline f4t_4 SwizzZ0ZX(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.z, V.x); }
inline f4t_4 SwizzZ0ZY(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.z, V.y); }
inline f4t_4 SwizzZ0ZZ(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.z, V.z); }
inline f4t_4 SwizzZ0ZW(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.z, V.w); }
inline f4t_4 SwizzZ0Z0(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.z, (f4t)0); }
inline f4t_4 SwizzZ0WX(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.w, V.x); }
inline f4t_4 SwizzZ0WY(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.w, V.y); }
inline f4t_4 SwizzZ0WZ(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.w, V.z); }
inline f4t_4 SwizzZ0WW(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.w, V.w); }
inline f4t_4 SwizzZ0W0(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, V.w, (f4t)0); }
inline f4t_4 SwizzZ00X(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, (f4t)0, V.x); }
inline f4t_4 SwizzZ00Y(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, (f4t)0, V.y); }
inline f4t_4 SwizzZ00Z(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, (f4t)0, V.z); }
inline f4t_4 SwizzZ00W(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, (f4t)0, V.w); }
inline f4t_4 SwizzZ000(f4t_4 V) { return MkF4t_4(V.z, (f4t)0, (f4t)0, (f4t)0); }
inline f4t_4 SwizzWXXX(f4t_4 V) { return MkF4t_4(V.w, V.x, V.x, V.x); }
inline f4t_4 SwizzWXXY(f4t_4 V) { return MkF4t_4(V.w, V.x, V.x, V.y); }
inline f4t_4 SwizzWXXZ(f4t_4 V) { return MkF4t_4(V.w, V.x, V.x, V.z); }
inline f4t_4 SwizzWXXW(f4t_4 V) { return MkF4t_4(V.w, V.x, V.x, V.w); }
inline f4t_4 SwizzWXX0(f4t_4 V) { return MkF4t_4(V.w, V.x, V.x, (f4t)0); }
inline f4t_4 SwizzWXYX(f4t_4 V) { return MkF4t_4(V.w, V.x, V.y, V.x); }
inline f4t_4 SwizzWXYY(f4t_4 V) { return MkF4t_4(V.w, V.x, V.y, V.y); }
inline f4t_4 SwizzWXYZ(f4t_4 V) { return MkF4t_4(V.w, V.x, V.y, V.z); }
inline f4t_4 SwizzWXYW(f4t_4 V) { return MkF4t_4(V.w, V.x, V.y, V.w); }
inline f4t_4 SwizzWXY0(f4t_4 V) { return MkF4t_4(V.w, V.x, V.y, (f4t)0); }
inline f4t_4 SwizzWXZX(f4t_4 V) { return MkF4t_4(V.w, V.x, V.z, V.x); }
inline f4t_4 SwizzWXZY(f4t_4 V) { return MkF4t_4(V.w, V.x, V.z, V.y); }
inline f4t_4 SwizzWXZZ(f4t_4 V) { return MkF4t_4(V.w, V.x, V.z, V.z); }
inline f4t_4 SwizzWXZW(f4t_4 V) { return MkF4t_4(V.w, V.x, V.z, V.w); }
inline f4t_4 SwizzWXZ0(f4t_4 V) { return MkF4t_4(V.w, V.x, V.z, (f4t)0); }
inline f4t_4 SwizzWXWX(f4t_4 V) { return MkF4t_4(V.w, V.x, V.w, V.x); }
inline f4t_4 SwizzWXWY(f4t_4 V) { return MkF4t_4(V.w, V.x, V.w, V.y); }
inline f4t_4 SwizzWXWZ(f4t_4 V) { return MkF4t_4(V.w, V.x, V.w, V.z); }
inline f4t_4 SwizzWXWW(f4t_4 V) { return MkF4t_4(V.w, V.x, V.w, V.w); }
inline f4t_4 SwizzWXW0(f4t_4 V) { return MkF4t_4(V.w, V.x, V.w, (f4t)0); }
inline f4t_4 SwizzWX0X(f4t_4 V) { return MkF4t_4(V.w, V.x, (f4t)0, V.x); }
inline f4t_4 SwizzWX0Y(f4t_4 V) { return MkF4t_4(V.w, V.x, (f4t)0, V.y); }
inline f4t_4 SwizzWX0Z(f4t_4 V) { return MkF4t_4(V.w, V.x, (f4t)0, V.z); }
inline f4t_4 SwizzWX0W(f4t_4 V) { return MkF4t_4(V.w, V.x, (f4t)0, V.w); }
inline f4t_4 SwizzWX00(f4t_4 V) { return MkF4t_4(V.w, V.x, (f4t)0, (f4t)0); }
inline f4t_4 SwizzWYXX(f4t_4 V) { return MkF4t_4(V.w, V.y, V.x, V.x); }
inline f4t_4 SwizzWYXY(f4t_4 V) { return MkF4t_4(V.w, V.y, V.x, V.y); }
inline f4t_4 SwizzWYXZ(f4t_4 V) { return MkF4t_4(V.w, V.y, V.x, V.z); }
inline f4t_4 SwizzWYXW(f4t_4 V) { return MkF4t_4(V.w, V.y, V.x, V.w); }
inline f4t_4 SwizzWYX0(f4t_4 V) { return MkF4t_4(V.w, V.y, V.x, (f4t)0); }
inline f4t_4 SwizzWYYX(f4t_4 V) { return MkF4t_4(V.w, V.y, V.y, V.x); }
inline f4t_4 SwizzWYYY(f4t_4 V) { return MkF4t_4(V.w, V.y, V.y, V.y); }
inline f4t_4 SwizzWYYZ(f4t_4 V) { return MkF4t_4(V.w, V.y, V.y, V.z); }
inline f4t_4 SwizzWYYW(f4t_4 V) { return MkF4t_4(V.w, V.y, V.y, V.w); }
inline f4t_4 SwizzWYY0(f4t_4 V) { return MkF4t_4(V.w, V.y, V.y, (f4t)0); }
inline f4t_4 SwizzWYZX(f4t_4 V) { return MkF4t_4(V.w, V.y, V.z, V.x); }
inline f4t_4 SwizzWYZY(f4t_4 V) { return MkF4t_4(V.w, V.y, V.z, V.y); }
inline f4t_4 SwizzWYZZ(f4t_4 V) { return MkF4t_4(V.w, V.y, V.z, V.z); }
inline f4t_4 SwizzWYZW(f4t_4 V) { return MkF4t_4(V.w, V.y, V.z, V.w); }
inline f4t_4 SwizzWYZ0(f4t_4 V) { return MkF4t_4(V.w, V.y, V.z, (f4t)0); }
inline f4t_4 SwizzWYWX(f4t_4 V) { return MkF4t_4(V.w, V.y, V.w, V.x); }
inline f4t_4 SwizzWYWY(f4t_4 V) { return MkF4t_4(V.w, V.y, V.w, V.y); }
inline f4t_4 SwizzWYWZ(f4t_4 V) { return MkF4t_4(V.w, V.y, V.w, V.z); }
inline f4t_4 SwizzWYWW(f4t_4 V) { return MkF4t_4(V.w, V.y, V.w, V.w); }
inline f4t_4 SwizzWYW0(f4t_4 V) { return MkF4t_4(V.w, V.y, V.w, (f4t)0); }
inline f4t_4 SwizzWY0X(f4t_4 V) { return MkF4t_4(V.w, V.y, (f4t)0, V.x); }
inline f4t_4 SwizzWY0Y(f4t_4 V) { return MkF4t_4(V.w, V.y, (f4t)0, V.y); }
inline f4t_4 SwizzWY0Z(f4t_4 V) { return MkF4t_4(V.w, V.y, (f4t)0, V.z); }
inline f4t_4 SwizzWY0W(f4t_4 V) { return MkF4t_4(V.w, V.y, (f4t)0, V.w); }
inline f4t_4 SwizzWY00(f4t_4 V) { return MkF4t_4(V.w, V.y, (f4t)0, (f4t)0); }
inline f4t_4 SwizzWZXX(f4t_4 V) { return MkF4t_4(V.w, V.z, V.x, V.x); }
inline f4t_4 SwizzWZXY(f4t_4 V) { return MkF4t_4(V.w, V.z, V.x, V.y); }
inline f4t_4 SwizzWZXZ(f4t_4 V) { return MkF4t_4(V.w, V.z, V.x, V.z); }
inline f4t_4 SwizzWZXW(f4t_4 V) { return MkF4t_4(V.w, V.z, V.x, V.w); }
inline f4t_4 SwizzWZX0(f4t_4 V) { return MkF4t_4(V.w, V.z, V.x, (f4t)0); }
inline f4t_4 SwizzWZYX(f4t_4 V) { return MkF4t_4(V.w, V.z, V.y, V.x); }
inline f4t_4 SwizzWZYY(f4t_4 V) { return MkF4t_4(V.w, V.z, V.y, V.y); }
inline f4t_4 SwizzWZYZ(f4t_4 V) { return MkF4t_4(V.w, V.z, V.y, V.z); }
inline f4t_4 SwizzWZYW(f4t_4 V) { return MkF4t_4(V.w, V.z, V.y, V.w); }
inline f4t_4 SwizzWZY0(f4t_4 V) { return MkF4t_4(V.w, V.z, V.y, (f4t)0); }
inline f4t_4 SwizzWZZX(f4t_4 V) { return MkF4t_4(V.w, V.z, V.z, V.x); }
inline f4t_4 SwizzWZZY(f4t_4 V) { return MkF4t_4(V.w, V.z, V.z, V.y); }
inline f4t_4 SwizzWZZZ(f4t_4 V) { return MkF4t_4(V.w, V.z, V.z, V.z); }
inline f4t_4 SwizzWZZW(f4t_4 V) { return MkF4t_4(V.w, V.z, V.z, V.w); }
inline f4t_4 SwizzWZZ0(f4t_4 V) { return MkF4t_4(V.w, V.z, V.z, (f4t)0); }
inline f4t_4 SwizzWZWX(f4t_4 V) { return MkF4t_4(V.w, V.z, V.w, V.x); }
inline f4t_4 SwizzWZWY(f4t_4 V) { return MkF4t_4(V.w, V.z, V.w, V.y); }
inline f4t_4 SwizzWZWZ(f4t_4 V) { return MkF4t_4(V.w, V.z, V.w, V.z); }
inline f4t_4 SwizzWZWW(f4t_4 V) { return MkF4t_4(V.w, V.z, V.w, V.w); }
inline f4t_4 SwizzWZW0(f4t_4 V) { return MkF4t_4(V.w, V.z, V.w, (f4t)0); }
inline f4t_4 SwizzWZ0X(f4t_4 V) { return MkF4t_4(V.w, V.z, (f4t)0, V.x); }
inline f4t_4 SwizzWZ0Y(f4t_4 V) { return MkF4t_4(V.w, V.z, (f4t)0, V.y); }
inline f4t_4 SwizzWZ0Z(f4t_4 V) { return MkF4t_4(V.w, V.z, (f4t)0, V.z); }
inline f4t_4 SwizzWZ0W(f4t_4 V) { return MkF4t_4(V.w, V.z, (f4t)0, V.w); }
inline f4t_4 SwizzWZ00(f4t_4 V) { return MkF4t_4(V.w, V.z, (f4t)0, (f4t)0); }
inline f4t_4 SwizzWWXX(f4t_4 V) { return MkF4t_4(V.w, V.w, V.x, V.x); }
inline f4t_4 SwizzWWXY(f4t_4 V) { return MkF4t_4(V.w, V.w, V.x, V.y); }
inline f4t_4 SwizzWWXZ(f4t_4 V) { return MkF4t_4(V.w, V.w, V.x, V.z); }
inline f4t_4 SwizzWWXW(f4t_4 V) { return MkF4t_4(V.w, V.w, V.x, V.w); }
inline f4t_4 SwizzWWX0(f4t_4 V) { return MkF4t_4(V.w, V.w, V.x, (f4t)0); }
inline f4t_4 SwizzWWYX(f4t_4 V) { return MkF4t_4(V.w, V.w, V.y, V.x); }
inline f4t_4 SwizzWWYY(f4t_4 V) { return MkF4t_4(V.w, V.w, V.y, V.y); }
inline f4t_4 SwizzWWYZ(f4t_4 V) { return MkF4t_4(V.w, V.w, V.y, V.z); }
inline f4t_4 SwizzWWYW(f4t_4 V) { return MkF4t_4(V.w, V.w, V.y, V.w); }
inline f4t_4 SwizzWWY0(f4t_4 V) { return MkF4t_4(V.w, V.w, V.y, (f4t)0); }
inline f4t_4 SwizzWWZX(f4t_4 V) { return MkF4t_4(V.w, V.w, V.z, V.x); }
inline f4t_4 SwizzWWZY(f4t_4 V) { return MkF4t_4(V.w, V.w, V.z, V.y); }
inline f4t_4 SwizzWWZZ(f4t_4 V) { return MkF4t_4(V.w, V.w, V.z, V.z); }
inline f4t_4 SwizzWWZW(f4t_4 V) { return MkF4t_4(V.w, V.w, V.z, V.w); }
inline f4t_4 SwizzWWZ0(f4t_4 V) { return MkF4t_4(V.w, V.w, V.z, (f4t)0); }
inline f4t_4 SwizzWWWX(f4t_4 V) { return MkF4t_4(V.w, V.w, V.w, V.x); }
inline f4t_4 SwizzWWWY(f4t_4 V) { return MkF4t_4(V.w, V.w, V.w, V.y); }
inline f4t_4 SwizzWWWZ(f4t_4 V) { return MkF4t_4(V.w, V.w, V.w, V.z); }
inline f4t_4 SwizzWWWW(f4t_4 V) { return MkF4t_4(V.w, V.w, V.w, V.w); }
inline f4t_4 SwizzWWW0(f4t_4 V) { return MkF4t_4(V.w, V.w, V.w, (f4t)0); }
inline f4t_4 SwizzWW0X(f4t_4 V) { return MkF4t_4(V.w, V.w, (f4t)0, V.x); }
inline f4t_4 SwizzWW0Y(f4t_4 V) { return MkF4t_4(V.w, V.w, (f4t)0, V.y); }
inline f4t_4 SwizzWW0Z(f4t_4 V) { return MkF4t_4(V.w, V.w, (f4t)0, V.z); }
inline f4t_4 SwizzWW0W(f4t_4 V) { return MkF4t_4(V.w, V.w, (f4t)0, V.w); }
inline f4t_4 SwizzWW00(f4t_4 V) { return MkF4t_4(V.w, V.w, (f4t)0, (f4t)0); }
inline f4t_4 SwizzW0XX(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.x, V.x); }
inline f4t_4 SwizzW0XY(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.x, V.y); }
inline f4t_4 SwizzW0XZ(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.x, V.z); }
inline f4t_4 SwizzW0XW(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.x, V.w); }
inline f4t_4 SwizzW0X0(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.x, (f4t)0); }
inline f4t_4 SwizzW0YX(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.y, V.x); }
inline f4t_4 SwizzW0YY(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.y, V.y); }
inline f4t_4 SwizzW0YZ(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.y, V.z); }
inline f4t_4 SwizzW0YW(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.y, V.w); }
inline f4t_4 SwizzW0Y0(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.y, (f4t)0); }
inline f4t_4 SwizzW0ZX(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.z, V.x); }
inline f4t_4 SwizzW0ZY(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.z, V.y); }
inline f4t_4 SwizzW0ZZ(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.z, V.z); }
inline f4t_4 SwizzW0ZW(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.z, V.w); }
inline f4t_4 SwizzW0Z0(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.z, (f4t)0); }
inline f4t_4 SwizzW0WX(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.w, V.x); }
inline f4t_4 SwizzW0WY(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.w, V.y); }
inline f4t_4 SwizzW0WZ(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.w, V.z); }
inline f4t_4 SwizzW0WW(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.w, V.w); }
inline f4t_4 SwizzW0W0(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, V.w, (f4t)0); }
inline f4t_4 SwizzW00X(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, (f4t)0, V.x); }
inline f4t_4 SwizzW00Y(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, (f4t)0, V.y); }
inline f4t_4 SwizzW00Z(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, (f4t)0, V.z); }
inline f4t_4 SwizzW00W(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, (f4t)0, V.w); }
inline f4t_4 SwizzW000(f4t_4 V) { return MkF4t_4(V.w, (f4t)0, (f4t)0, (f4t)0); }
inline f4t_4 Swizz0XXX(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.x, V.x); }
inline f4t_4 Swizz0XXY(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.x, V.y); }
inline f4t_4 Swizz0XXZ(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.x, V.z); }
inline f4t_4 Swizz0XXW(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.x, V.w); }
inline f4t_4 Swizz0XX0(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.x, (f4t)0); }
inline f4t_4 Swizz0XYX(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.y, V.x); }
inline f4t_4 Swizz0XYY(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.y, V.y); }
inline f4t_4 Swizz0XYZ(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.y, V.z); }
inline f4t_4 Swizz0XYW(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.y, V.w); }
inline f4t_4 Swizz0XY0(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.y, (f4t)0); }
inline f4t_4 Swizz0XZX(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.z, V.x); }
inline f4t_4 Swizz0XZY(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.z, V.y); }
inline f4t_4 Swizz0XZZ(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.z, V.z); }
inline f4t_4 Swizz0XZW(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.z, V.w); }
inline f4t_4 Swizz0XZ0(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.z, (f4t)0); }
inline f4t_4 Swizz0XWX(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.w, V.x); }
inline f4t_4 Swizz0XWY(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.w, V.y); }
inline f4t_4 Swizz0XWZ(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.w, V.z); }
inline f4t_4 Swizz0XWW(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.w, V.w); }
inline f4t_4 Swizz0XW0(f4t_4 V) { return MkF4t_4((f4t)0, V.x, V.w, (f4t)0); }
inline f4t_4 Swizz0X0X(f4t_4 V) { return MkF4t_4((f4t)0, V.x, (f4t)0, V.x); }
inline f4t_4 Swizz0X0Y(f4t_4 V) { return MkF4t_4((f4t)0, V.x, (f4t)0, V.y); }
inline f4t_4 Swizz0X0Z(f4t_4 V) { return MkF4t_4((f4t)0, V.x, (f4t)0, V.z); }
inline f4t_4 Swizz0X0W(f4t_4 V) { return MkF4t_4((f4t)0, V.x, (f4t)0, V.w); }
inline f4t_4 Swizz0X00(f4t_4 V) { return MkF4t_4((f4t)0, V.x, (f4t)0, (f4t)0); }
inline f4t_4 Swizz0YXX(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.x, V.x); }
inline f4t_4 Swizz0YXY(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.x, V.y); }
inline f4t_4 Swizz0YXZ(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.x, V.z); }
inline f4t_4 Swizz0YXW(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.x, V.w); }
inline f4t_4 Swizz0YX0(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.x, (f4t)0); }
inline f4t_4 Swizz0YYX(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.y, V.x); }
inline f4t_4 Swizz0YYY(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.y, V.y); }
inline f4t_4 Swizz0YYZ(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.y, V.z); }
inline f4t_4 Swizz0YYW(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.y, V.w); }
inline f4t_4 Swizz0YY0(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.y, (f4t)0); }
inline f4t_4 Swizz0YZX(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.z, V.x); }
inline f4t_4 Swizz0YZY(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.z, V.y); }
inline f4t_4 Swizz0YZZ(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.z, V.z); }
inline f4t_4 Swizz0YZW(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.z, V.w); }
inline f4t_4 Swizz0YZ0(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.z, (f4t)0); }
inline f4t_4 Swizz0YWX(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.w, V.x); }
inline f4t_4 Swizz0YWY(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.w, V.y); }
inline f4t_4 Swizz0YWZ(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.w, V.z); }
inline f4t_4 Swizz0YWW(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.w, V.w); }
inline f4t_4 Swizz0YW0(f4t_4 V) { return MkF4t_4((f4t)0, V.y, V.w, (f4t)0); }
inline f4t_4 Swizz0Y0X(f4t_4 V) { return MkF4t_4((f4t)0, V.y, (f4t)0, V.x); }
inline f4t_4 Swizz0Y0Y(f4t_4 V) { return MkF4t_4((f4t)0, V.y, (f4t)0, V.y); }
inline f4t_4 Swizz0Y0Z(f4t_4 V) { return MkF4t_4((f4t)0, V.y, (f4t)0, V.z); }
inline f4t_4 Swizz0Y0W(f4t_4 V) { return MkF4t_4((f4t)0, V.y, (f4t)0, V.w); }
inline f4t_4 Swizz0Y00(f4t_4 V) { return MkF4t_4((f4t)0, V.y, (f4t)0, (f4t)0); }
inline f4t_4 Swizz0ZXX(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.x, V.x); }
inline f4t_4 Swizz0ZXY(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.x, V.y); }
inline f4t_4 Swizz0ZXZ(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.x, V.z); }
inline f4t_4 Swizz0ZXW(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.x, V.w); }
inline f4t_4 Swizz0ZX0(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.x, (f4t)0); }
inline f4t_4 Swizz0ZYX(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.y, V.x); }
inline f4t_4 Swizz0ZYY(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.y, V.y); }
inline f4t_4 Swizz0ZYZ(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.y, V.z); }
inline f4t_4 Swizz0ZYW(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.y, V.w); }
inline f4t_4 Swizz0ZY0(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.y, (f4t)0); }
inline f4t_4 Swizz0ZZX(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.z, V.x); }
inline f4t_4 Swizz0ZZY(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.z, V.y); }
inline f4t_4 Swizz0ZZZ(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.z, V.z); }
inline f4t_4 Swizz0ZZW(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.z, V.w); }
inline f4t_4 Swizz0ZZ0(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.z, (f4t)0); }
inline f4t_4 Swizz0ZWX(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.w, V.x); }
inline f4t_4 Swizz0ZWY(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.w, V.y); }
inline f4t_4 Swizz0ZWZ(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.w, V.z); }
inline f4t_4 Swizz0ZWW(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.w, V.w); }
inline f4t_4 Swizz0ZW0(f4t_4 V) { return MkF4t_4((f4t)0, V.z, V.w, (f4t)0); }
inline f4t_4 Swizz0Z0X(f4t_4 V) { return MkF4t_4((f4t)0, V.z, (f4t)0, V.x); }
inline f4t_4 Swizz0Z0Y(f4t_4 V) { return MkF4t_4((f4t)0, V.z, (f4t)0, V.y); }
inline f4t_4 Swizz0Z0Z(f4t_4 V) { return MkF4t_4((f4t)0, V.z, (f4t)0, V.z); }
inline f4t_4 Swizz0Z0W(f4t_4 V) { return MkF4t_4((f4t)0, V.z, (f4t)0, V.w); }
inline f4t_4 Swizz0Z00(f4t_4 V) { return MkF4t_4((f4t)0, V.z, (f4t)0, (f4t)0); }
inline f4t_4 Swizz0WXX(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.x, V.x); }
inline f4t_4 Swizz0WXY(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.x, V.y); }
inline f4t_4 Swizz0WXZ(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.x, V.z); }
inline f4t_4 Swizz0WXW(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.x, V.w); }
inline f4t_4 Swizz0WX0(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.x, (f4t)0); }
inline f4t_4 Swizz0WYX(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.y, V.x); }
inline f4t_4 Swizz0WYY(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.y, V.y); }
inline f4t_4 Swizz0WYZ(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.y, V.z); }
inline f4t_4 Swizz0WYW(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.y, V.w); }
inline f4t_4 Swizz0WY0(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.y, (f4t)0); }
inline f4t_4 Swizz0WZX(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.z, V.x); }
inline f4t_4 Swizz0WZY(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.z, V.y); }
inline f4t_4 Swizz0WZZ(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.z, V.z); }
inline f4t_4 Swizz0WZW(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.z, V.w); }
inline f4t_4 Swizz0WZ0(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.z, (f4t)0); }
inline f4t_4 Swizz0WWX(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.w, V.x); }
inline f4t_4 Swizz0WWY(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.w, V.y); }
inline f4t_4 Swizz0WWZ(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.w, V.z); }
inline f4t_4 Swizz0WWW(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.w, V.w); }
inline f4t_4 Swizz0WW0(f4t_4 V) { return MkF4t_4((f4t)0, V.w, V.w, (f4t)0); }
inline f4t_4 Swizz0W0X(f4t_4 V) { return MkF4t_4((f4t)0, V.w, (f4t)0, V.x); }
inline f4t_4 Swizz0W0Y(f4t_4 V) { return MkF4t_4((f4t)0, V.w, (f4t)0, V.y); }
inline f4t_4 Swizz0W0Z(f4t_4 V) { return MkF4t_4((f4t)0, V.w, (f4t)0, V.z); }
inline f4t_4 Swizz0W0W(f4t_4 V) { return MkF4t_4((f4t)0, V.w, (f4t)0, V.w); }
inline f4t_4 Swizz0W00(f4t_4 V) { return MkF4t_4((f4t)0, V.w, (f4t)0, (f4t)0); }
inline f4t_4 Swizz00XX(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.x, V.x); }
inline f4t_4 Swizz00XY(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.x, V.y); }
inline f4t_4 Swizz00XZ(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.x, V.z); }
inline f4t_4 Swizz00XW(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.x, V.w); }
inline f4t_4 Swizz00X0(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.x, (f4t)0); }
inline f4t_4 Swizz00YX(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.y, V.x); }
inline f4t_4 Swizz00YY(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.y, V.y); }
inline f4t_4 Swizz00YZ(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.y, V.z); }
inline f4t_4 Swizz00YW(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.y, V.w); }
inline f4t_4 Swizz00Y0(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.y, (f4t)0); }
inline f4t_4 Swizz00ZX(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.z, V.x); }
inline f4t_4 Swizz00ZY(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.z, V.y); }
inline f4t_4 Swizz00ZZ(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.z, V.z); }
inline f4t_4 Swizz00ZW(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.z, V.w); }
inline f4t_4 Swizz00Z0(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.z, (f4t)0); }
inline f4t_4 Swizz00WX(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.w, V.x); }
inline f4t_4 Swizz00WY(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.w, V.y); }
inline f4t_4 Swizz00WZ(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.w, V.z); }
inline f4t_4 Swizz00WW(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.w, V.w); }
inline f4t_4 Swizz00W0(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, V.w, (f4t)0); }
inline f4t_4 Swizz000X(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, (f4t)0, V.x); }
inline f4t_4 Swizz000Y(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, (f4t)0, V.y); }
inline f4t_4 Swizz000Z(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, (f4t)0, V.z); }
inline f4t_4 Swizz000W(f4t_4 V) { return MkF4t_4((f4t)0, (f4t)0, (f4t)0, V.w); }
inline f8t_2 SwizzXX(f8t_2 V) { return MkF8t_2(V.x, V.x); }
inline f8t_2 SwizzXY(f8t_2 V) { return MkF8t_2(V.x, V.y); }
inline f8t_2 SwizzX0(f8t_2 V) { return MkF8t_2(V.x, (f8t)0); }
inline f8t_2 SwizzYX(f8t_2 V) { return MkF8t_2(V.y, V.x); }
inline f8t_2 SwizzYY(f8t_2 V) { return MkF8t_2(V.y, V.y); }
inline f8t_2 SwizzY0(f8t_2 V) { return MkF8t_2(V.y, (f8t)0); }
inline f8t_2 Swizz0X(f8t_2 V) { return MkF8t_2((f8t)0, V.x); }
inline f8t_2 Swizz0Y(f8t_2 V) { return MkF8t_2((f8t)0, V.y); }
inline f8t_3 SwizzXXX(f8t_2 V) { return MkF8t_3(V.x, V.x, V.x); }
inline f8t_3 SwizzXXY(f8t_2 V) { return MkF8t_3(V.x, V.x, V.y); }
inline f8t_3 SwizzXX0(f8t_2 V) { return MkF8t_3(V.x, V.x, (f8t)0); }
inline f8t_3 SwizzXYX(f8t_2 V) { return MkF8t_3(V.x, V.y, V.x); }
inline f8t_3 SwizzXYY(f8t_2 V) { return MkF8t_3(V.x, V.y, V.y); }
inline f8t_3 SwizzXY0(f8t_2 V) { return MkF8t_3(V.x, V.y, (f8t)0); }
inline f8t_3 SwizzX0X(f8t_2 V) { return MkF8t_3(V.x, (f8t)0, V.x); }
inline f8t_3 SwizzX0Y(f8t_2 V) { return MkF8t_3(V.x, (f8t)0, V.y); }
inline f8t_3 SwizzX00(f8t_2 V) { return MkF8t_3(V.x, (f8t)0, (f8t)0); }
inline f8t_3 SwizzYXX(f8t_2 V) { return MkF8t_3(V.y, V.x, V.x); }
inline f8t_3 SwizzYXY(f8t_2 V) { return MkF8t_3(V.y, V.x, V.y); }
inline f8t_3 SwizzYX0(f8t_2 V) { return MkF8t_3(V.y, V.x, (f8t)0); }
inline f8t_3 SwizzYYX(f8t_2 V) { return MkF8t_3(V.y, V.y, V.x); }
inline f8t_3 SwizzYYY(f8t_2 V) { return MkF8t_3(V.y, V.y, V.y); }
inline f8t_3 SwizzYY0(f8t_2 V) { return MkF8t_3(V.y, V.y, (f8t)0); }
inline f8t_3 SwizzY0X(f8t_2 V) { return MkF8t_3(V.y, (f8t)0, V.x); }
inline f8t_3 SwizzY0Y(f8t_2 V) { return MkF8t_3(V.y, (f8t)0, V.y); }
inline f8t_3 SwizzY00(f8t_2 V) { return MkF8t_3(V.y, (f8t)0, (f8t)0); }
inline f8t_3 Swizz0XX(f8t_2 V) { return MkF8t_3((f8t)0, V.x, V.x); }
inline f8t_3 Swizz0XY(f8t_2 V) { return MkF8t_3((f8t)0, V.x, V.y); }
inline f8t_3 Swizz0X0(f8t_2 V) { return MkF8t_3((f8t)0, V.x, (f8t)0); }
inline f8t_3 Swizz0YX(f8t_2 V) { return MkF8t_3((f8t)0, V.y, V.x); }
inline f8t_3 Swizz0YY(f8t_2 V) { return MkF8t_3((f8t)0, V.y, V.y); }
inline f8t_3 Swizz0Y0(f8t_2 V) { return MkF8t_3((f8t)0, V.y, (f8t)0); }
inline f8t_3 Swizz00X(f8t_2 V) { return MkF8t_3((f8t)0, (f8t)0, V.x); }
inline f8t_3 Swizz00Y(f8t_2 V) { return MkF8t_3((f8t)0, (f8t)0, V.y); }
inline f8t_4 SwizzXXXX(f8t_2 V) { return MkF8t_4(V.x, V.x, V.x, V.x); }
inline f8t_4 SwizzXXXY(f8t_2 V) { return MkF8t_4(V.x, V.x, V.x, V.y); }
inline f8t_4 SwizzXXX0(f8t_2 V) { return MkF8t_4(V.x, V.x, V.x, (f8t)0); }
inline f8t_4 SwizzXXYX(f8t_2 V) { return MkF8t_4(V.x, V.x, V.y, V.x); }
inline f8t_4 SwizzXXYY(f8t_2 V) { return MkF8t_4(V.x, V.x, V.y, V.y); }
inline f8t_4 SwizzXXY0(f8t_2 V) { return MkF8t_4(V.x, V.x, V.y, (f8t)0); }
inline f8t_4 SwizzXX0X(f8t_2 V) { return MkF8t_4(V.x, V.x, (f8t)0, V.x); }
inline f8t_4 SwizzXX0Y(f8t_2 V) { return MkF8t_4(V.x, V.x, (f8t)0, V.y); }
inline f8t_4 SwizzXX00(f8t_2 V) { return MkF8t_4(V.x, V.x, (f8t)0, (f8t)0); }
inline f8t_4 SwizzXYXX(f8t_2 V) { return MkF8t_4(V.x, V.y, V.x, V.x); }
inline f8t_4 SwizzXYXY(f8t_2 V) { return MkF8t_4(V.x, V.y, V.x, V.y); }
inline f8t_4 SwizzXYX0(f8t_2 V) { return MkF8t_4(V.x, V.y, V.x, (f8t)0); }
inline f8t_4 SwizzXYYX(f8t_2 V) { return MkF8t_4(V.x, V.y, V.y, V.x); }
inline f8t_4 SwizzXYYY(f8t_2 V) { return MkF8t_4(V.x, V.y, V.y, V.y); }
inline f8t_4 SwizzXYY0(f8t_2 V) { return MkF8t_4(V.x, V.y, V.y, (f8t)0); }
inline f8t_4 SwizzXY0X(f8t_2 V) { return MkF8t_4(V.x, V.y, (f8t)0, V.x); }
inline f8t_4 SwizzXY0Y(f8t_2 V) { return MkF8t_4(V.x, V.y, (f8t)0, V.y); }
inline f8t_4 SwizzXY00(f8t_2 V) { return MkF8t_4(V.x, V.y, (f8t)0, (f8t)0); }
inline f8t_4 SwizzX0XX(f8t_2 V) { return MkF8t_4(V.x, (f8t)0, V.x, V.x); }
inline f8t_4 SwizzX0XY(f8t_2 V) { return MkF8t_4(V.x, (f8t)0, V.x, V.y); }
inline f8t_4 SwizzX0X0(f8t_2 V) { return MkF8t_4(V.x, (f8t)0, V.x, (f8t)0); }
inline f8t_4 SwizzX0YX(f8t_2 V) { return MkF8t_4(V.x, (f8t)0, V.y, V.x); }
inline f8t_4 SwizzX0YY(f8t_2 V) { return MkF8t_4(V.x, (f8t)0, V.y, V.y); }
inline f8t_4 SwizzX0Y0(f8t_2 V) { return MkF8t_4(V.x, (f8t)0, V.y, (f8t)0); }
inline f8t_4 SwizzX00X(f8t_2 V) { return MkF8t_4(V.x, (f8t)0, (f8t)0, V.x); }
inline f8t_4 SwizzX00Y(f8t_2 V) { return MkF8t_4(V.x, (f8t)0, (f8t)0, V.y); }
inline f8t_4 SwizzX000(f8t_2 V) { return MkF8t_4(V.x, (f8t)0, (f8t)0, (f8t)0); }
inline f8t_4 SwizzYXXX(f8t_2 V) { return MkF8t_4(V.y, V.x, V.x, V.x); }
inline f8t_4 SwizzYXXY(f8t_2 V) { return MkF8t_4(V.y, V.x, V.x, V.y); }
inline f8t_4 SwizzYXX0(f8t_2 V) { return MkF8t_4(V.y, V.x, V.x, (f8t)0); }
inline f8t_4 SwizzYXYX(f8t_2 V) { return MkF8t_4(V.y, V.x, V.y, V.x); }
inline f8t_4 SwizzYXYY(f8t_2 V) { return MkF8t_4(V.y, V.x, V.y, V.y); }
inline f8t_4 SwizzYXY0(f8t_2 V) { return MkF8t_4(V.y, V.x, V.y, (f8t)0); }
inline f8t_4 SwizzYX0X(f8t_2 V) { return MkF8t_4(V.y, V.x, (f8t)0, V.x); }
inline f8t_4 SwizzYX0Y(f8t_2 V) { return MkF8t_4(V.y, V.x, (f8t)0, V.y); }
inline f8t_4 SwizzYX00(f8t_2 V) { return MkF8t_4(V.y, V.x, (f8t)0, (f8t)0); }
inline f8t_4 SwizzYYXX(f8t_2 V) { return MkF8t_4(V.y, V.y, V.x, V.x); }
inline f8t_4 SwizzYYXY(f8t_2 V) { return MkF8t_4(V.y, V.y, V.x, V.y); }
inline f8t_4 SwizzYYX0(f8t_2 V) { return MkF8t_4(V.y, V.y, V.x, (f8t)0); }
inline f8t_4 SwizzYYYX(f8t_2 V) { return MkF8t_4(V.y, V.y, V.y, V.x); }
inline f8t_4 SwizzYYYY(f8t_2 V) { return MkF8t_4(V.y, V.y, V.y, V.y); }
inline f8t_4 SwizzYYY0(f8t_2 V) { return MkF8t_4(V.y, V.y, V.y, (f8t)0); }
inline f8t_4 SwizzYY0X(f8t_2 V) { return MkF8t_4(V.y, V.y, (f8t)0, V.x); }
inline f8t_4 SwizzYY0Y(f8t_2 V) { return MkF8t_4(V.y, V.y, (f8t)0, V.y); }
inline f8t_4 SwizzYY00(f8t_2 V) { return MkF8t_4(V.y, V.y, (f8t)0, (f8t)0); }
inline f8t_4 SwizzY0XX(f8t_2 V) { return MkF8t_4(V.y, (f8t)0, V.x, V.x); }
inline f8t_4 SwizzY0XY(f8t_2 V) { return MkF8t_4(V.y, (f8t)0, V.x, V.y); }
inline f8t_4 SwizzY0X0(f8t_2 V) { return MkF8t_4(V.y, (f8t)0, V.x, (f8t)0); }
inline f8t_4 SwizzY0YX(f8t_2 V) { return MkF8t_4(V.y, (f8t)0, V.y, V.x); }
inline f8t_4 SwizzY0YY(f8t_2 V) { return MkF8t_4(V.y, (f8t)0, V.y, V.y); }
inline f8t_4 SwizzY0Y0(f8t_2 V) { return MkF8t_4(V.y, (f8t)0, V.y, (f8t)0); }
inline f8t_4 SwizzY00X(f8t_2 V) { return MkF8t_4(V.y, (f8t)0, (f8t)0, V.x); }
inline f8t_4 SwizzY00Y(f8t_2 V) { return MkF8t_4(V.y, (f8t)0, (f8t)0, V.y); }
inline f8t_4 SwizzY000(f8t_2 V) { return MkF8t_4(V.y, (f8t)0, (f8t)0, (f8t)0); }
inline f8t_4 Swizz0XXX(f8t_2 V) { return MkF8t_4((f8t)0, V.x, V.x, V.x); }
inline f8t_4 Swizz0XXY(f8t_2 V) { return MkF8t_4((f8t)0, V.x, V.x, V.y); }
inline f8t_4 Swizz0XX0(f8t_2 V) { return MkF8t_4((f8t)0, V.x, V.x, (f8t)0); }
inline f8t_4 Swizz0XYX(f8t_2 V) { return MkF8t_4((f8t)0, V.x, V.y, V.x); }
inline f8t_4 Swizz0XYY(f8t_2 V) { return MkF8t_4((f8t)0, V.x, V.y, V.y); }
inline f8t_4 Swizz0XY0(f8t_2 V) { return MkF8t_4((f8t)0, V.x, V.y, (f8t)0); }
inline f8t_4 Swizz0X0X(f8t_2 V) { return MkF8t_4((f8t)0, V.x, (f8t)0, V.x); }
inline f8t_4 Swizz0X0Y(f8t_2 V) { return MkF8t_4((f8t)0, V.x, (f8t)0, V.y); }
inline f8t_4 Swizz0X00(f8t_2 V) { return MkF8t_4((f8t)0, V.x, (f8t)0, (f8t)0); }
inline f8t_4 Swizz0YXX(f8t_2 V) { return MkF8t_4((f8t)0, V.y, V.x, V.x); }
inline f8t_4 Swizz0YXY(f8t_2 V) { return MkF8t_4((f8t)0, V.y, V.x, V.y); }
inline f8t_4 Swizz0YX0(f8t_2 V) { return MkF8t_4((f8t)0, V.y, V.x, (f8t)0); }
inline f8t_4 Swizz0YYX(f8t_2 V) { return MkF8t_4((f8t)0, V.y, V.y, V.x); }
inline f8t_4 Swizz0YYY(f8t_2 V) { return MkF8t_4((f8t)0, V.y, V.y, V.y); }
inline f8t_4 Swizz0YY0(f8t_2 V) { return MkF8t_4((f8t)0, V.y, V.y, (f8t)0); }
inline f8t_4 Swizz0Y0X(f8t_2 V) { return MkF8t_4((f8t)0, V.y, (f8t)0, V.x); }
inline f8t_4 Swizz0Y0Y(f8t_2 V) { return MkF8t_4((f8t)0, V.y, (f8t)0, V.y); }
inline f8t_4 Swizz0Y00(f8t_2 V) { return MkF8t_4((f8t)0, V.y, (f8t)0, (f8t)0); }
inline f8t_4 Swizz00XX(f8t_2 V) { return MkF8t_4((f8t)0, (f8t)0, V.x, V.x); }
inline f8t_4 Swizz00XY(f8t_2 V) { return MkF8t_4((f8t)0, (f8t)0, V.x, V.y); }
inline f8t_4 Swizz00X0(f8t_2 V) { return MkF8t_4((f8t)0, (f8t)0, V.x, (f8t)0); }
inline f8t_4 Swizz00YX(f8t_2 V) { return MkF8t_4((f8t)0, (f8t)0, V.y, V.x); }
inline f8t_4 Swizz00YY(f8t_2 V) { return MkF8t_4((f8t)0, (f8t)0, V.y, V.y); }
inline f8t_4 Swizz00Y0(f8t_2 V) { return MkF8t_4((f8t)0, (f8t)0, V.y, (f8t)0); }
inline f8t_4 Swizz000X(f8t_2 V) { return MkF8t_4((f8t)0, (f8t)0, (f8t)0, V.x); }
inline f8t_4 Swizz000Y(f8t_2 V) { return MkF8t_4((f8t)0, (f8t)0, (f8t)0, V.y); }
inline f8t_2 SwizzXX(f8t_3 V) { return MkF8t_2(V.x, V.x); }
inline f8t_2 SwizzXY(f8t_3 V) { return MkF8t_2(V.x, V.y); }
inline f8t_2 SwizzXZ(f8t_3 V) { return MkF8t_2(V.x, V.z); }
inline f8t_2 SwizzX0(f8t_3 V) { return MkF8t_2(V.x, (f8t)0); }
inline f8t_2 SwizzYX(f8t_3 V) { return MkF8t_2(V.y, V.x); }
inline f8t_2 SwizzYY(f8t_3 V) { return MkF8t_2(V.y, V.y); }
inline f8t_2 SwizzYZ(f8t_3 V) { return MkF8t_2(V.y, V.z); }
inline f8t_2 SwizzY0(f8t_3 V) { return MkF8t_2(V.y, (f8t)0); }
inline f8t_2 SwizzZX(f8t_3 V) { return MkF8t_2(V.z, V.x); }
inline f8t_2 SwizzZY(f8t_3 V) { return MkF8t_2(V.z, V.y); }
inline f8t_2 SwizzZZ(f8t_3 V) { return MkF8t_2(V.z, V.z); }
inline f8t_2 SwizzZ0(f8t_3 V) { return MkF8t_2(V.z, (f8t)0); }
inline f8t_2 Swizz0X(f8t_3 V) { return MkF8t_2((f8t)0, V.x); }
inline f8t_2 Swizz0Y(f8t_3 V) { return MkF8t_2((f8t)0, V.y); }
inline f8t_2 Swizz0Z(f8t_3 V) { return MkF8t_2((f8t)0, V.z); }
inline f8t_3 SwizzXXX(f8t_3 V) { return MkF8t_3(V.x, V.x, V.x); }
inline f8t_3 SwizzXXY(f8t_3 V) { return MkF8t_3(V.x, V.x, V.y); }
inline f8t_3 SwizzXXZ(f8t_3 V) { return MkF8t_3(V.x, V.x, V.z); }
inline f8t_3 SwizzXX0(f8t_3 V) { return MkF8t_3(V.x, V.x, (f8t)0); }
inline f8t_3 SwizzXYX(f8t_3 V) { return MkF8t_3(V.x, V.y, V.x); }
inline f8t_3 SwizzXYY(f8t_3 V) { return MkF8t_3(V.x, V.y, V.y); }
inline f8t_3 SwizzXYZ(f8t_3 V) { return MkF8t_3(V.x, V.y, V.z); }
inline f8t_3 SwizzXY0(f8t_3 V) { return MkF8t_3(V.x, V.y, (f8t)0); }
inline f8t_3 SwizzXZX(f8t_3 V) { return MkF8t_3(V.x, V.z, V.x); }
inline f8t_3 SwizzXZY(f8t_3 V) { return MkF8t_3(V.x, V.z, V.y); }
inline f8t_3 SwizzXZZ(f8t_3 V) { return MkF8t_3(V.x, V.z, V.z); }
inline f8t_3 SwizzXZ0(f8t_3 V) { return MkF8t_3(V.x, V.z, (f8t)0); }
inline f8t_3 SwizzX0X(f8t_3 V) { return MkF8t_3(V.x, (f8t)0, V.x); }
inline f8t_3 SwizzX0Y(f8t_3 V) { return MkF8t_3(V.x, (f8t)0, V.y); }
inline f8t_3 SwizzX0Z(f8t_3 V) { return MkF8t_3(V.x, (f8t)0, V.z); }
inline f8t_3 SwizzX00(f8t_3 V) { return MkF8t_3(V.x, (f8t)0, (f8t)0); }
inline f8t_3 SwizzYXX(f8t_3 V) { return MkF8t_3(V.y, V.x, V.x); }
inline f8t_3 SwizzYXY(f8t_3 V) { return MkF8t_3(V.y, V.x, V.y); }
inline f8t_3 SwizzYXZ(f8t_3 V) { return MkF8t_3(V.y, V.x, V.z); }
inline f8t_3 SwizzYX0(f8t_3 V) { return MkF8t_3(V.y, V.x, (f8t)0); }
inline f8t_3 SwizzYYX(f8t_3 V) { return MkF8t_3(V.y, V.y, V.x); }
inline f8t_3 SwizzYYY(f8t_3 V) { return MkF8t_3(V.y, V.y, V.y); }
inline f8t_3 SwizzYYZ(f8t_3 V) { return MkF8t_3(V.y, V.y, V.z); }
inline f8t_3 SwizzYY0(f8t_3 V) { return MkF8t_3(V.y, V.y, (f8t)0); }
inline f8t_3 SwizzYZX(f8t_3 V) { return MkF8t_3(V.y, V.z, V.x); }
inline f8t_3 SwizzYZY(f8t_3 V) { return MkF8t_3(V.y, V.z, V.y); }
inline f8t_3 SwizzYZZ(f8t_3 V) { return MkF8t_3(V.y, V.z, V.z); }
inline f8t_3 SwizzYZ0(f8t_3 V) { return MkF8t_3(V.y, V.z, (f8t)0); }
inline f8t_3 SwizzY0X(f8t_3 V) { return MkF8t_3(V.y, (f8t)0, V.x); }
inline f8t_3 SwizzY0Y(f8t_3 V) { return MkF8t_3(V.y, (f8t)0, V.y); }
inline f8t_3 SwizzY0Z(f8t_3 V) { return MkF8t_3(V.y, (f8t)0, V.z); }
inline f8t_3 SwizzY00(f8t_3 V) { return MkF8t_3(V.y, (f8t)0, (f8t)0); }
inline f8t_3 SwizzZXX(f8t_3 V) { return MkF8t_3(V.z, V.x, V.x); }
inline f8t_3 SwizzZXY(f8t_3 V) { return MkF8t_3(V.z, V.x, V.y); }
inline f8t_3 SwizzZXZ(f8t_3 V) { return MkF8t_3(V.z, V.x, V.z); }
inline f8t_3 SwizzZX0(f8t_3 V) { return MkF8t_3(V.z, V.x, (f8t)0); }
inline f8t_3 SwizzZYX(f8t_3 V) { return MkF8t_3(V.z, V.y, V.x); }
inline f8t_3 SwizzZYY(f8t_3 V) { return MkF8t_3(V.z, V.y, V.y); }
inline f8t_3 SwizzZYZ(f8t_3 V) { return MkF8t_3(V.z, V.y, V.z); }
inline f8t_3 SwizzZY0(f8t_3 V) { return MkF8t_3(V.z, V.y, (f8t)0); }
inline f8t_3 SwizzZZX(f8t_3 V) { return MkF8t_3(V.z, V.z, V.x); }
inline f8t_3 SwizzZZY(f8t_3 V) { return MkF8t_3(V.z, V.z, V.y); }
inline f8t_3 SwizzZZZ(f8t_3 V) { return MkF8t_3(V.z, V.z, V.z); }
inline f8t_3 SwizzZZ0(f8t_3 V) { return MkF8t_3(V.z, V.z, (f8t)0); }
inline f8t_3 SwizzZ0X(f8t_3 V) { return MkF8t_3(V.z, (f8t)0, V.x); }
inline f8t_3 SwizzZ0Y(f8t_3 V) { return MkF8t_3(V.z, (f8t)0, V.y); }
inline f8t_3 SwizzZ0Z(f8t_3 V) { return MkF8t_3(V.z, (f8t)0, V.z); }
inline f8t_3 SwizzZ00(f8t_3 V) { return MkF8t_3(V.z, (f8t)0, (f8t)0); }
inline f8t_3 Swizz0XX(f8t_3 V) { return MkF8t_3((f8t)0, V.x, V.x); }
inline f8t_3 Swizz0XY(f8t_3 V) { return MkF8t_3((f8t)0, V.x, V.y); }
inline f8t_3 Swizz0XZ(f8t_3 V) { return MkF8t_3((f8t)0, V.x, V.z); }
inline f8t_3 Swizz0X0(f8t_3 V) { return MkF8t_3((f8t)0, V.x, (f8t)0); }
inline f8t_3 Swizz0YX(f8t_3 V) { return MkF8t_3((f8t)0, V.y, V.x); }
inline f8t_3 Swizz0YY(f8t_3 V) { return MkF8t_3((f8t)0, V.y, V.y); }
inline f8t_3 Swizz0YZ(f8t_3 V) { return MkF8t_3((f8t)0, V.y, V.z); }
inline f8t_3 Swizz0Y0(f8t_3 V) { return MkF8t_3((f8t)0, V.y, (f8t)0); }
inline f8t_3 Swizz0ZX(f8t_3 V) { return MkF8t_3((f8t)0, V.z, V.x); }
inline f8t_3 Swizz0ZY(f8t_3 V) { return MkF8t_3((f8t)0, V.z, V.y); }
inline f8t_3 Swizz0ZZ(f8t_3 V) { return MkF8t_3((f8t)0, V.z, V.z); }
inline f8t_3 Swizz0Z0(f8t_3 V) { return MkF8t_3((f8t)0, V.z, (f8t)0); }
inline f8t_3 Swizz00X(f8t_3 V) { return MkF8t_3((f8t)0, (f8t)0, V.x); }
inline f8t_3 Swizz00Y(f8t_3 V) { return MkF8t_3((f8t)0, (f8t)0, V.y); }
inline f8t_3 Swizz00Z(f8t_3 V) { return MkF8t_3((f8t)0, (f8t)0, V.z); }
inline f8t_4 SwizzXXXX(f8t_3 V) { return MkF8t_4(V.x, V.x, V.x, V.x); }
inline f8t_4 SwizzXXXY(f8t_3 V) { return MkF8t_4(V.x, V.x, V.x, V.y); }
inline f8t_4 SwizzXXXZ(f8t_3 V) { return MkF8t_4(V.x, V.x, V.x, V.z); }
inline f8t_4 SwizzXXX0(f8t_3 V) { return MkF8t_4(V.x, V.x, V.x, (f8t)0); }
inline f8t_4 SwizzXXYX(f8t_3 V) { return MkF8t_4(V.x, V.x, V.y, V.x); }
inline f8t_4 SwizzXXYY(f8t_3 V) { return MkF8t_4(V.x, V.x, V.y, V.y); }
inline f8t_4 SwizzXXYZ(f8t_3 V) { return MkF8t_4(V.x, V.x, V.y, V.z); }
inline f8t_4 SwizzXXY0(f8t_3 V) { return MkF8t_4(V.x, V.x, V.y, (f8t)0); }
inline f8t_4 SwizzXXZX(f8t_3 V) { return MkF8t_4(V.x, V.x, V.z, V.x); }
inline f8t_4 SwizzXXZY(f8t_3 V) { return MkF8t_4(V.x, V.x, V.z, V.y); }
inline f8t_4 SwizzXXZZ(f8t_3 V) { return MkF8t_4(V.x, V.x, V.z, V.z); }
inline f8t_4 SwizzXXZ0(f8t_3 V) { return MkF8t_4(V.x, V.x, V.z, (f8t)0); }
inline f8t_4 SwizzXX0X(f8t_3 V) { return MkF8t_4(V.x, V.x, (f8t)0, V.x); }
inline f8t_4 SwizzXX0Y(f8t_3 V) { return MkF8t_4(V.x, V.x, (f8t)0, V.y); }
inline f8t_4 SwizzXX0Z(f8t_3 V) { return MkF8t_4(V.x, V.x, (f8t)0, V.z); }
inline f8t_4 SwizzXX00(f8t_3 V) { return MkF8t_4(V.x, V.x, (f8t)0, (f8t)0); }
inline f8t_4 SwizzXYXX(f8t_3 V) { return MkF8t_4(V.x, V.y, V.x, V.x); }
inline f8t_4 SwizzXYXY(f8t_3 V) { return MkF8t_4(V.x, V.y, V.x, V.y); }
inline f8t_4 SwizzXYXZ(f8t_3 V) { return MkF8t_4(V.x, V.y, V.x, V.z); }
inline f8t_4 SwizzXYX0(f8t_3 V) { return MkF8t_4(V.x, V.y, V.x, (f8t)0); }
inline f8t_4 SwizzXYYX(f8t_3 V) { return MkF8t_4(V.x, V.y, V.y, V.x); }
inline f8t_4 SwizzXYYY(f8t_3 V) { return MkF8t_4(V.x, V.y, V.y, V.y); }
inline f8t_4 SwizzXYYZ(f8t_3 V) { return MkF8t_4(V.x, V.y, V.y, V.z); }
inline f8t_4 SwizzXYY0(f8t_3 V) { return MkF8t_4(V.x, V.y, V.y, (f8t)0); }
inline f8t_4 SwizzXYZX(f8t_3 V) { return MkF8t_4(V.x, V.y, V.z, V.x); }
inline f8t_4 SwizzXYZY(f8t_3 V) { return MkF8t_4(V.x, V.y, V.z, V.y); }
inline f8t_4 SwizzXYZZ(f8t_3 V) { return MkF8t_4(V.x, V.y, V.z, V.z); }
inline f8t_4 SwizzXYZ0(f8t_3 V) { return MkF8t_4(V.x, V.y, V.z, (f8t)0); }
inline f8t_4 SwizzXY0X(f8t_3 V) { return MkF8t_4(V.x, V.y, (f8t)0, V.x); }
inline f8t_4 SwizzXY0Y(f8t_3 V) { return MkF8t_4(V.x, V.y, (f8t)0, V.y); }
inline f8t_4 SwizzXY0Z(f8t_3 V) { return MkF8t_4(V.x, V.y, (f8t)0, V.z); }
inline f8t_4 SwizzXY00(f8t_3 V) { return MkF8t_4(V.x, V.y, (f8t)0, (f8t)0); }
inline f8t_4 SwizzXZXX(f8t_3 V) { return MkF8t_4(V.x, V.z, V.x, V.x); }
inline f8t_4 SwizzXZXY(f8t_3 V) { return MkF8t_4(V.x, V.z, V.x, V.y); }
inline f8t_4 SwizzXZXZ(f8t_3 V) { return MkF8t_4(V.x, V.z, V.x, V.z); }
inline f8t_4 SwizzXZX0(f8t_3 V) { return MkF8t_4(V.x, V.z, V.x, (f8t)0); }
inline f8t_4 SwizzXZYX(f8t_3 V) { return MkF8t_4(V.x, V.z, V.y, V.x); }
inline f8t_4 SwizzXZYY(f8t_3 V) { return MkF8t_4(V.x, V.z, V.y, V.y); }
inline f8t_4 SwizzXZYZ(f8t_3 V) { return MkF8t_4(V.x, V.z, V.y, V.z); }
inline f8t_4 SwizzXZY0(f8t_3 V) { return MkF8t_4(V.x, V.z, V.y, (f8t)0); }
inline f8t_4 SwizzXZZX(f8t_3 V) { return MkF8t_4(V.x, V.z, V.z, V.x); }
inline f8t_4 SwizzXZZY(f8t_3 V) { return MkF8t_4(V.x, V.z, V.z, V.y); }
inline f8t_4 SwizzXZZZ(f8t_3 V) { return MkF8t_4(V.x, V.z, V.z, V.z); }
inline f8t_4 SwizzXZZ0(f8t_3 V) { return MkF8t_4(V.x, V.z, V.z, (f8t)0); }
inline f8t_4 SwizzXZ0X(f8t_3 V) { return MkF8t_4(V.x, V.z, (f8t)0, V.x); }
inline f8t_4 SwizzXZ0Y(f8t_3 V) { return MkF8t_4(V.x, V.z, (f8t)0, V.y); }
inline f8t_4 SwizzXZ0Z(f8t_3 V) { return MkF8t_4(V.x, V.z, (f8t)0, V.z); }
inline f8t_4 SwizzXZ00(f8t_3 V) { return MkF8t_4(V.x, V.z, (f8t)0, (f8t)0); }
inline f8t_4 SwizzX0XX(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, V.x, V.x); }
inline f8t_4 SwizzX0XY(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, V.x, V.y); }
inline f8t_4 SwizzX0XZ(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, V.x, V.z); }
inline f8t_4 SwizzX0X0(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, V.x, (f8t)0); }
inline f8t_4 SwizzX0YX(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, V.y, V.x); }
inline f8t_4 SwizzX0YY(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, V.y, V.y); }
inline f8t_4 SwizzX0YZ(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, V.y, V.z); }
inline f8t_4 SwizzX0Y0(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, V.y, (f8t)0); }
inline f8t_4 SwizzX0ZX(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, V.z, V.x); }
inline f8t_4 SwizzX0ZY(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, V.z, V.y); }
inline f8t_4 SwizzX0ZZ(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, V.z, V.z); }
inline f8t_4 SwizzX0Z0(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, V.z, (f8t)0); }
inline f8t_4 SwizzX00X(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, (f8t)0, V.x); }
inline f8t_4 SwizzX00Y(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, (f8t)0, V.y); }
inline f8t_4 SwizzX00Z(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, (f8t)0, V.z); }
inline f8t_4 SwizzX000(f8t_3 V) { return MkF8t_4(V.x, (f8t)0, (f8t)0, (f8t)0); }
inline f8t_4 SwizzYXXX(f8t_3 V) { return MkF8t_4(V.y, V.x, V.x, V.x); }
inline f8t_4 SwizzYXXY(f8t_3 V) { return MkF8t_4(V.y, V.x, V.x, V.y); }
inline f8t_4 SwizzYXXZ(f8t_3 V) { return MkF8t_4(V.y, V.x, V.x, V.z); }
inline f8t_4 SwizzYXX0(f8t_3 V) { return MkF8t_4(V.y, V.x, V.x, (f8t)0); }
inline f8t_4 SwizzYXYX(f8t_3 V) { return MkF8t_4(V.y, V.x, V.y, V.x); }
inline f8t_4 SwizzYXYY(f8t_3 V) { return MkF8t_4(V.y, V.x, V.y, V.y); }
inline f8t_4 SwizzYXYZ(f8t_3 V) { return MkF8t_4(V.y, V.x, V.y, V.z); }
inline f8t_4 SwizzYXY0(f8t_3 V) { return MkF8t_4(V.y, V.x, V.y, (f8t)0); }
inline f8t_4 SwizzYXZX(f8t_3 V) { return MkF8t_4(V.y, V.x, V.z, V.x); }
inline f8t_4 SwizzYXZY(f8t_3 V) { return MkF8t_4(V.y, V.x, V.z, V.y); }
inline f8t_4 SwizzYXZZ(f8t_3 V) { return MkF8t_4(V.y, V.x, V.z, V.z); }
inline f8t_4 SwizzYXZ0(f8t_3 V) { return MkF8t_4(V.y, V.x, V.z, (f8t)0); }
inline f8t_4 SwizzYX0X(f8t_3 V) { return MkF8t_4(V.y, V.x, (f8t)0, V.x); }
inline f8t_4 SwizzYX0Y(f8t_3 V) { return MkF8t_4(V.y, V.x, (f8t)0, V.y); }
inline f8t_4 SwizzYX0Z(f8t_3 V) { return MkF8t_4(V.y, V.x, (f8t)0, V.z); }
inline f8t_4 SwizzYX00(f8t_3 V) { return MkF8t_4(V.y, V.x, (f8t)0, (f8t)0); }
inline f8t_4 SwizzYYXX(f8t_3 V) { return MkF8t_4(V.y, V.y, V.x, V.x); }
inline f8t_4 SwizzYYXY(f8t_3 V) { return MkF8t_4(V.y, V.y, V.x, V.y); }
inline f8t_4 SwizzYYXZ(f8t_3 V) { return MkF8t_4(V.y, V.y, V.x, V.z); }
inline f8t_4 SwizzYYX0(f8t_3 V) { return MkF8t_4(V.y, V.y, V.x, (f8t)0); }
inline f8t_4 SwizzYYYX(f8t_3 V) { return MkF8t_4(V.y, V.y, V.y, V.x); }
inline f8t_4 SwizzYYYY(f8t_3 V) { return MkF8t_4(V.y, V.y, V.y, V.y); }
inline f8t_4 SwizzYYYZ(f8t_3 V) { return MkF8t_4(V.y, V.y, V.y, V.z); }
inline f8t_4 SwizzYYY0(f8t_3 V) { return MkF8t_4(V.y, V.y, V.y, (f8t)0); }
inline f8t_4 SwizzYYZX(f8t_3 V) { return MkF8t_4(V.y, V.y, V.z, V.x); }
inline f8t_4 SwizzYYZY(f8t_3 V) { return MkF8t_4(V.y, V.y, V.z, V.y); }
inline f8t_4 SwizzYYZZ(f8t_3 V) { return MkF8t_4(V.y, V.y, V.z, V.z); }
inline f8t_4 SwizzYYZ0(f8t_3 V) { return MkF8t_4(V.y, V.y, V.z, (f8t)0); }
inline f8t_4 SwizzYY0X(f8t_3 V) { return MkF8t_4(V.y, V.y, (f8t)0, V.x); }
inline f8t_4 SwizzYY0Y(f8t_3 V) { return MkF8t_4(V.y, V.y, (f8t)0, V.y); }
inline f8t_4 SwizzYY0Z(f8t_3 V) { return MkF8t_4(V.y, V.y, (f8t)0, V.z); }
inline f8t_4 SwizzYY00(f8t_3 V) { return MkF8t_4(V.y, V.y, (f8t)0, (f8t)0); }
inline f8t_4 SwizzYZXX(f8t_3 V) { return MkF8t_4(V.y, V.z, V.x, V.x); }
inline f8t_4 SwizzYZXY(f8t_3 V) { return MkF8t_4(V.y, V.z, V.x, V.y); }
inline f8t_4 SwizzYZXZ(f8t_3 V) { return MkF8t_4(V.y, V.z, V.x, V.z); }
inline f8t_4 SwizzYZX0(f8t_3 V) { return MkF8t_4(V.y, V.z, V.x, (f8t)0); }
inline f8t_4 SwizzYZYX(f8t_3 V) { return MkF8t_4(V.y, V.z, V.y, V.x); }
inline f8t_4 SwizzYZYY(f8t_3 V) { return MkF8t_4(V.y, V.z, V.y, V.y); }
inline f8t_4 SwizzYZYZ(f8t_3 V) { return MkF8t_4(V.y, V.z, V.y, V.z); }
inline f8t_4 SwizzYZY0(f8t_3 V) { return MkF8t_4(V.y, V.z, V.y, (f8t)0); }
inline f8t_4 SwizzYZZX(f8t_3 V) { return MkF8t_4(V.y, V.z, V.z, V.x); }
inline f8t_4 SwizzYZZY(f8t_3 V) { return MkF8t_4(V.y, V.z, V.z, V.y); }
inline f8t_4 SwizzYZZZ(f8t_3 V) { return MkF8t_4(V.y, V.z, V.z, V.z); }
inline f8t_4 SwizzYZZ0(f8t_3 V) { return MkF8t_4(V.y, V.z, V.z, (f8t)0); }
inline f8t_4 SwizzYZ0X(f8t_3 V) { return MkF8t_4(V.y, V.z, (f8t)0, V.x); }
inline f8t_4 SwizzYZ0Y(f8t_3 V) { return MkF8t_4(V.y, V.z, (f8t)0, V.y); }
inline f8t_4 SwizzYZ0Z(f8t_3 V) { return MkF8t_4(V.y, V.z, (f8t)0, V.z); }
inline f8t_4 SwizzYZ00(f8t_3 V) { return MkF8t_4(V.y, V.z, (f8t)0, (f8t)0); }
inline f8t_4 SwizzY0XX(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, V.x, V.x); }
inline f8t_4 SwizzY0XY(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, V.x, V.y); }
inline f8t_4 SwizzY0XZ(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, V.x, V.z); }
inline f8t_4 SwizzY0X0(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, V.x, (f8t)0); }
inline f8t_4 SwizzY0YX(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, V.y, V.x); }
inline f8t_4 SwizzY0YY(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, V.y, V.y); }
inline f8t_4 SwizzY0YZ(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, V.y, V.z); }
inline f8t_4 SwizzY0Y0(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, V.y, (f8t)0); }
inline f8t_4 SwizzY0ZX(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, V.z, V.x); }
inline f8t_4 SwizzY0ZY(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, V.z, V.y); }
inline f8t_4 SwizzY0ZZ(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, V.z, V.z); }
inline f8t_4 SwizzY0Z0(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, V.z, (f8t)0); }
inline f8t_4 SwizzY00X(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, (f8t)0, V.x); }
inline f8t_4 SwizzY00Y(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, (f8t)0, V.y); }
inline f8t_4 SwizzY00Z(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, (f8t)0, V.z); }
inline f8t_4 SwizzY000(f8t_3 V) { return MkF8t_4(V.y, (f8t)0, (f8t)0, (f8t)0); }
inline f8t_4 SwizzZXXX(f8t_3 V) { return MkF8t_4(V.z, V.x, V.x, V.x); }
inline f8t_4 SwizzZXXY(f8t_3 V) { return MkF8t_4(V.z, V.x, V.x, V.y); }
inline f8t_4 SwizzZXXZ(f8t_3 V) { return MkF8t_4(V.z, V.x, V.x, V.z); }
inline f8t_4 SwizzZXX0(f8t_3 V) { return MkF8t_4(V.z, V.x, V.x, (f8t)0); }
inline f8t_4 SwizzZXYX(f8t_3 V) { return MkF8t_4(V.z, V.x, V.y, V.x); }
inline f8t_4 SwizzZXYY(f8t_3 V) { return MkF8t_4(V.z, V.x, V.y, V.y); }
inline f8t_4 SwizzZXYZ(f8t_3 V) { return MkF8t_4(V.z, V.x, V.y, V.z); }
inline f8t_4 SwizzZXY0(f8t_3 V) { return MkF8t_4(V.z, V.x, V.y, (f8t)0); }
inline f8t_4 SwizzZXZX(f8t_3 V) { return MkF8t_4(V.z, V.x, V.z, V.x); }
inline f8t_4 SwizzZXZY(f8t_3 V) { return MkF8t_4(V.z, V.x, V.z, V.y); }
inline f8t_4 SwizzZXZZ(f8t_3 V) { return MkF8t_4(V.z, V.x, V.z, V.z); }
inline f8t_4 SwizzZXZ0(f8t_3 V) { return MkF8t_4(V.z, V.x, V.z, (f8t)0); }
inline f8t_4 SwizzZX0X(f8t_3 V) { return MkF8t_4(V.z, V.x, (f8t)0, V.x); }
inline f8t_4 SwizzZX0Y(f8t_3 V) { return MkF8t_4(V.z, V.x, (f8t)0, V.y); }
inline f8t_4 SwizzZX0Z(f8t_3 V) { return MkF8t_4(V.z, V.x, (f8t)0, V.z); }
inline f8t_4 SwizzZX00(f8t_3 V) { return MkF8t_4(V.z, V.x, (f8t)0, (f8t)0); }
inline f8t_4 SwizzZYXX(f8t_3 V) { return MkF8t_4(V.z, V.y, V.x, V.x); }
inline f8t_4 SwizzZYXY(f8t_3 V) { return MkF8t_4(V.z, V.y, V.x, V.y); }
inline f8t_4 SwizzZYXZ(f8t_3 V) { return MkF8t_4(V.z, V.y, V.x, V.z); }
inline f8t_4 SwizzZYX0(f8t_3 V) { return MkF8t_4(V.z, V.y, V.x, (f8t)0); }
inline f8t_4 SwizzZYYX(f8t_3 V) { return MkF8t_4(V.z, V.y, V.y, V.x); }
inline f8t_4 SwizzZYYY(f8t_3 V) { return MkF8t_4(V.z, V.y, V.y, V.y); }
inline f8t_4 SwizzZYYZ(f8t_3 V) { return MkF8t_4(V.z, V.y, V.y, V.z); }
inline f8t_4 SwizzZYY0(f8t_3 V) { return MkF8t_4(V.z, V.y, V.y, (f8t)0); }
inline f8t_4 SwizzZYZX(f8t_3 V) { return MkF8t_4(V.z, V.y, V.z, V.x); }
inline f8t_4 SwizzZYZY(f8t_3 V) { return MkF8t_4(V.z, V.y, V.z, V.y); }
inline f8t_4 SwizzZYZZ(f8t_3 V) { return MkF8t_4(V.z, V.y, V.z, V.z); }
inline f8t_4 SwizzZYZ0(f8t_3 V) { return MkF8t_4(V.z, V.y, V.z, (f8t)0); }
inline f8t_4 SwizzZY0X(f8t_3 V) { return MkF8t_4(V.z, V.y, (f8t)0, V.x); }
inline f8t_4 SwizzZY0Y(f8t_3 V) { return MkF8t_4(V.z, V.y, (f8t)0, V.y); }
inline f8t_4 SwizzZY0Z(f8t_3 V) { return MkF8t_4(V.z, V.y, (f8t)0, V.z); }
inline f8t_4 SwizzZY00(f8t_3 V) { return MkF8t_4(V.z, V.y, (f8t)0, (f8t)0); }
inline f8t_4 SwizzZZXX(f8t_3 V) { return MkF8t_4(V.z, V.z, V.x, V.x); }
inline f8t_4 SwizzZZXY(f8t_3 V) { return MkF8t_4(V.z, V.z, V.x, V.y); }
inline f8t_4 SwizzZZXZ(f8t_3 V) { return MkF8t_4(V.z, V.z, V.x, V.z); }
inline f8t_4 SwizzZZX0(f8t_3 V) { return MkF8t_4(V.z, V.z, V.x, (f8t)0); }
inline f8t_4 SwizzZZYX(f8t_3 V) { return MkF8t_4(V.z, V.z, V.y, V.x); }
inline f8t_4 SwizzZZYY(f8t_3 V) { return MkF8t_4(V.z, V.z, V.y, V.y); }
inline f8t_4 SwizzZZYZ(f8t_3 V) { return MkF8t_4(V.z, V.z, V.y, V.z); }
inline f8t_4 SwizzZZY0(f8t_3 V) { return MkF8t_4(V.z, V.z, V.y, (f8t)0); }
inline f8t_4 SwizzZZZX(f8t_3 V) { return MkF8t_4(V.z, V.z, V.z, V.x); }
inline f8t_4 SwizzZZZY(f8t_3 V) { return MkF8t_4(V.z, V.z, V.z, V.y); }
inline f8t_4 SwizzZZZZ(f8t_3 V) { return MkF8t_4(V.z, V.z, V.z, V.z); }
inline f8t_4 SwizzZZZ0(f8t_3 V) { return MkF8t_4(V.z, V.z, V.z, (f8t)0); }
inline f8t_4 SwizzZZ0X(f8t_3 V) { return MkF8t_4(V.z, V.z, (f8t)0, V.x); }
inline f8t_4 SwizzZZ0Y(f8t_3 V) { return MkF8t_4(V.z, V.z, (f8t)0, V.y); }
inline f8t_4 SwizzZZ0Z(f8t_3 V) { return MkF8t_4(V.z, V.z, (f8t)0, V.z); }
inline f8t_4 SwizzZZ00(f8t_3 V) { return MkF8t_4(V.z, V.z, (f8t)0, (f8t)0); }
inline f8t_4 SwizzZ0XX(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, V.x, V.x); }
inline f8t_4 SwizzZ0XY(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, V.x, V.y); }
inline f8t_4 SwizzZ0XZ(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, V.x, V.z); }
inline f8t_4 SwizzZ0X0(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, V.x, (f8t)0); }
inline f8t_4 SwizzZ0YX(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, V.y, V.x); }
inline f8t_4 SwizzZ0YY(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, V.y, V.y); }
inline f8t_4 SwizzZ0YZ(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, V.y, V.z); }
inline f8t_4 SwizzZ0Y0(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, V.y, (f8t)0); }
inline f8t_4 SwizzZ0ZX(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, V.z, V.x); }
inline f8t_4 SwizzZ0ZY(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, V.z, V.y); }
inline f8t_4 SwizzZ0ZZ(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, V.z, V.z); }
inline f8t_4 SwizzZ0Z0(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, V.z, (f8t)0); }
inline f8t_4 SwizzZ00X(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, (f8t)0, V.x); }
inline f8t_4 SwizzZ00Y(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, (f8t)0, V.y); }
inline f8t_4 SwizzZ00Z(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, (f8t)0, V.z); }
inline f8t_4 SwizzZ000(f8t_3 V) { return MkF8t_4(V.z, (f8t)0, (f8t)0, (f8t)0); }
inline f8t_4 Swizz0XXX(f8t_3 V) { return MkF8t_4((f8t)0, V.x, V.x, V.x); }
inline f8t_4 Swizz0XXY(f8t_3 V) { return MkF8t_4((f8t)0, V.x, V.x, V.y); }
inline f8t_4 Swizz0XXZ(f8t_3 V) { return MkF8t_4((f8t)0, V.x, V.x, V.z); }
inline f8t_4 Swizz0XX0(f8t_3 V) { return MkF8t_4((f8t)0, V.x, V.x, (f8t)0); }
inline f8t_4 Swizz0XYX(f8t_3 V) { return MkF8t_4((f8t)0, V.x, V.y, V.x); }
inline f8t_4 Swizz0XYY(f8t_3 V) { return MkF8t_4((f8t)0, V.x, V.y, V.y); }
inline f8t_4 Swizz0XYZ(f8t_3 V) { return MkF8t_4((f8t)0, V.x, V.y, V.z); }
inline f8t_4 Swizz0XY0(f8t_3 V) { return MkF8t_4((f8t)0, V.x, V.y, (f8t)0); }
inline f8t_4 Swizz0XZX(f8t_3 V) { return MkF8t_4((f8t)0, V.x, V.z, V.x); }
inline f8t_4 Swizz0XZY(f8t_3 V) { return MkF8t_4((f8t)0, V.x, V.z, V.y); }
inline f8t_4 Swizz0XZZ(f8t_3 V) { return MkF8t_4((f8t)0, V.x, V.z, V.z); }
inline f8t_4 Swizz0XZ0(f8t_3 V) { return MkF8t_4((f8t)0, V.x, V.z, (f8t)0); }
inline f8t_4 Swizz0X0X(f8t_3 V) { return MkF8t_4((f8t)0, V.x, (f8t)0, V.x); }
inline f8t_4 Swizz0X0Y(f8t_3 V) { return MkF8t_4((f8t)0, V.x, (f8t)0, V.y); }
inline f8t_4 Swizz0X0Z(f8t_3 V) { return MkF8t_4((f8t)0, V.x, (f8t)0, V.z); }
inline f8t_4 Swizz0X00(f8t_3 V) { return MkF8t_4((f8t)0, V.x, (f8t)0, (f8t)0); }
inline f8t_4 Swizz0YXX(f8t_3 V) { return MkF8t_4((f8t)0, V.y, V.x, V.x); }
inline f8t_4 Swizz0YXY(f8t_3 V) { return MkF8t_4((f8t)0, V.y, V.x, V.y); }
inline f8t_4 Swizz0YXZ(f8t_3 V) { return MkF8t_4((f8t)0, V.y, V.x, V.z); }
inline f8t_4 Swizz0YX0(f8t_3 V) { return MkF8t_4((f8t)0, V.y, V.x, (f8t)0); }
inline f8t_4 Swizz0YYX(f8t_3 V) { return MkF8t_4((f8t)0, V.y, V.y, V.x); }
inline f8t_4 Swizz0YYY(f8t_3 V) { return MkF8t_4((f8t)0, V.y, V.y, V.y); }
inline f8t_4 Swizz0YYZ(f8t_3 V) { return MkF8t_4((f8t)0, V.y, V.y, V.z); }
inline f8t_4 Swizz0YY0(f8t_3 V) { return MkF8t_4((f8t)0, V.y, V.y, (f8t)0); }
inline f8t_4 Swizz0YZX(f8t_3 V) { return MkF8t_4((f8t)0, V.y, V.z, V.x); }
inline f8t_4 Swizz0YZY(f8t_3 V) { return MkF8t_4((f8t)0, V.y, V.z, V.y); }
inline f8t_4 Swizz0YZZ(f8t_3 V) { return MkF8t_4((f8t)0, V.y, V.z, V.z); }
inline f8t_4 Swizz0YZ0(f8t_3 V) { return MkF8t_4((f8t)0, V.y, V.z, (f8t)0); }
inline f8t_4 Swizz0Y0X(f8t_3 V) { return MkF8t_4((f8t)0, V.y, (f8t)0, V.x); }
inline f8t_4 Swizz0Y0Y(f8t_3 V) { return MkF8t_4((f8t)0, V.y, (f8t)0, V.y); }
inline f8t_4 Swizz0Y0Z(f8t_3 V) { return MkF8t_4((f8t)0, V.y, (f8t)0, V.z); }
inline f8t_4 Swizz0Y00(f8t_3 V) { return MkF8t_4((f8t)0, V.y, (f8t)0, (f8t)0); }
inline f8t_4 Swizz0ZXX(f8t_3 V) { return MkF8t_4((f8t)0, V.z, V.x, V.x); }
inline f8t_4 Swizz0ZXY(f8t_3 V) { return MkF8t_4((f8t)0, V.z, V.x, V.y); }
inline f8t_4 Swizz0ZXZ(f8t_3 V) { return MkF8t_4((f8t)0, V.z, V.x, V.z); }
inline f8t_4 Swizz0ZX0(f8t_3 V) { return MkF8t_4((f8t)0, V.z, V.x, (f8t)0); }
inline f8t_4 Swizz0ZYX(f8t_3 V) { return MkF8t_4((f8t)0, V.z, V.y, V.x); }
inline f8t_4 Swizz0ZYY(f8t_3 V) { return MkF8t_4((f8t)0, V.z, V.y, V.y); }
inline f8t_4 Swizz0ZYZ(f8t_3 V) { return MkF8t_4((f8t)0, V.z, V.y, V.z); }
inline f8t_4 Swizz0ZY0(f8t_3 V) { return MkF8t_4((f8t)0, V.z, V.y, (f8t)0); }
inline f8t_4 Swizz0ZZX(f8t_3 V) { return MkF8t_4((f8t)0, V.z, V.z, V.x); }
inline f8t_4 Swizz0ZZY(f8t_3 V) { return MkF8t_4((f8t)0, V.z, V.z, V.y); }
inline f8t_4 Swizz0ZZZ(f8t_3 V) { return MkF8t_4((f8t)0, V.z, V.z, V.z); }
inline f8t_4 Swizz0ZZ0(f8t_3 V) { return MkF8t_4((f8t)0, V.z, V.z, (f8t)0); }
inline f8t_4 Swizz0Z0X(f8t_3 V) { return MkF8t_4((f8t)0, V.z, (f8t)0, V.x); }
inline f8t_4 Swizz0Z0Y(f8t_3 V) { return MkF8t_4((f8t)0, V.z, (f8t)0, V.y); }
inline f8t_4 Swizz0Z0Z(f8t_3 V) { return MkF8t_4((f8t)0, V.z, (f8t)0, V.z); }
inline f8t_4 Swizz0Z00(f8t_3 V) { return MkF8t_4((f8t)0, V.z, (f8t)0, (f8t)0); }
inline f8t_4 Swizz00XX(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, V.x, V.x); }
inline f8t_4 Swizz00XY(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, V.x, V.y); }
inline f8t_4 Swizz00XZ(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, V.x, V.z); }
inline f8t_4 Swizz00X0(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, V.x, (f8t)0); }
inline f8t_4 Swizz00YX(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, V.y, V.x); }
inline f8t_4 Swizz00YY(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, V.y, V.y); }
inline f8t_4 Swizz00YZ(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, V.y, V.z); }
inline f8t_4 Swizz00Y0(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, V.y, (f8t)0); }
inline f8t_4 Swizz00ZX(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, V.z, V.x); }
inline f8t_4 Swizz00ZY(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, V.z, V.y); }
inline f8t_4 Swizz00ZZ(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, V.z, V.z); }
inline f8t_4 Swizz00Z0(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, V.z, (f8t)0); }
inline f8t_4 Swizz000X(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, (f8t)0, V.x); }
inline f8t_4 Swizz000Y(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, (f8t)0, V.y); }
inline f8t_4 Swizz000Z(f8t_3 V) { return MkF8t_4((f8t)0, (f8t)0, (f8t)0, V.z); }
inline f8t_2 SwizzXX(f8t_4 V) { return MkF8t_2(V.x, V.x); }
inline f8t_2 SwizzXY(f8t_4 V) { return MkF8t_2(V.x, V.y); }
inline f8t_2 SwizzXZ(f8t_4 V) { return MkF8t_2(V.x, V.z); }
inline f8t_2 SwizzXW(f8t_4 V) { return MkF8t_2(V.x, V.w); }
inline f8t_2 SwizzX0(f8t_4 V) { return MkF8t_2(V.x, (f8t)0); }
inline f8t_2 SwizzYX(f8t_4 V) { return MkF8t_2(V.y, V.x); }
inline f8t_2 SwizzYY(f8t_4 V) { return MkF8t_2(V.y, V.y); }
inline f8t_2 SwizzYZ(f8t_4 V) { return MkF8t_2(V.y, V.z); }
inline f8t_2 SwizzYW(f8t_4 V) { return MkF8t_2(V.y, V.w); }
inline f8t_2 SwizzY0(f8t_4 V) { return MkF8t_2(V.y, (f8t)0); }
inline f8t_2 SwizzZX(f8t_4 V) { return MkF8t_2(V.z, V.x); }
inline f8t_2 SwizzZY(f8t_4 V) { return MkF8t_2(V.z, V.y); }
inline f8t_2 SwizzZZ(f8t_4 V) { return MkF8t_2(V.z, V.z); }
inline f8t_2 SwizzZW(f8t_4 V) { return MkF8t_2(V.z, V.w); }
inline f8t_2 SwizzZ0(f8t_4 V) { return MkF8t_2(V.z, (f8t)0); }
inline f8t_2 SwizzWX(f8t_4 V) { return MkF8t_2(V.w, V.x); }
inline f8t_2 SwizzWY(f8t_4 V) { return MkF8t_2(V.w, V.y); }
inline f8t_2 SwizzWZ(f8t_4 V) { return MkF8t_2(V.w, V.z); }
inline f8t_2 SwizzWW(f8t_4 V) { return MkF8t_2(V.w, V.w); }
inline f8t_2 SwizzW0(f8t_4 V) { return MkF8t_2(V.w, (f8t)0); }
inline f8t_2 Swizz0X(f8t_4 V) { return MkF8t_2((f8t)0, V.x); }
inline f8t_2 Swizz0Y(f8t_4 V) { return MkF8t_2((f8t)0, V.y); }
inline f8t_2 Swizz0Z(f8t_4 V) { return MkF8t_2((f8t)0, V.z); }
inline f8t_2 Swizz0W(f8t_4 V) { return MkF8t_2((f8t)0, V.w); }
inline f8t_3 SwizzXXX(f8t_4 V) { return MkF8t_3(V.x, V.x, V.x); }
inline f8t_3 SwizzXXY(f8t_4 V) { return MkF8t_3(V.x, V.x, V.y); }
inline f8t_3 SwizzXXZ(f8t_4 V) { return MkF8t_3(V.x, V.x, V.z); }
inline f8t_3 SwizzXXW(f8t_4 V) { return MkF8t_3(V.x, V.x, V.w); }
inline f8t_3 SwizzXX0(f8t_4 V) { return MkF8t_3(V.x, V.x, (f8t)0); }
inline f8t_3 SwizzXYX(f8t_4 V) { return MkF8t_3(V.x, V.y, V.x); }
inline f8t_3 SwizzXYY(f8t_4 V) { return MkF8t_3(V.x, V.y, V.y); }
inline f8t_3 SwizzXYZ(f8t_4 V) { return MkF8t_3(V.x, V.y, V.z); }
inline f8t_3 SwizzXYW(f8t_4 V) { return MkF8t_3(V.x, V.y, V.w); }
inline f8t_3 SwizzXY0(f8t_4 V) { return MkF8t_3(V.x, V.y, (f8t)0); }
inline f8t_3 SwizzXZX(f8t_4 V) { return MkF8t_3(V.x, V.z, V.x); }
inline f8t_3 SwizzXZY(f8t_4 V) { return MkF8t_3(V.x, V.z, V.y); }
inline f8t_3 SwizzXZZ(f8t_4 V) { return MkF8t_3(V.x, V.z, V.z); }
inline f8t_3 SwizzXZW(f8t_4 V) { return MkF8t_3(V.x, V.z, V.w); }
inline f8t_3 SwizzXZ0(f8t_4 V) { return MkF8t_3(V.x, V.z, (f8t)0); }
inline f8t_3 SwizzXWX(f8t_4 V) { return MkF8t_3(V.x, V.w, V.x); }
inline f8t_3 SwizzXWY(f8t_4 V) { return MkF8t_3(V.x, V.w, V.y); }
inline f8t_3 SwizzXWZ(f8t_4 V) { return MkF8t_3(V.x, V.w, V.z); }
inline f8t_3 SwizzXWW(f8t_4 V) { return MkF8t_3(V.x, V.w, V.w); }
inline f8t_3 SwizzXW0(f8t_4 V) { return MkF8t_3(V.x, V.w, (f8t)0); }
inline f8t_3 SwizzX0X(f8t_4 V) { return MkF8t_3(V.x, (f8t)0, V.x); }
inline f8t_3 SwizzX0Y(f8t_4 V) { return MkF8t_3(V.x, (f8t)0, V.y); }
inline f8t_3 SwizzX0Z(f8t_4 V) { return MkF8t_3(V.x, (f8t)0, V.z); }
inline f8t_3 SwizzX0W(f8t_4 V) { return MkF8t_3(V.x, (f8t)0, V.w); }
inline f8t_3 SwizzX00(f8t_4 V) { return MkF8t_3(V.x, (f8t)0, (f8t)0); }
inline f8t_3 SwizzYXX(f8t_4 V) { return MkF8t_3(V.y, V.x, V.x); }
inline f8t_3 SwizzYXY(f8t_4 V) { return MkF8t_3(V.y, V.x, V.y); }
inline f8t_3 SwizzYXZ(f8t_4 V) { return MkF8t_3(V.y, V.x, V.z); }
inline f8t_3 SwizzYXW(f8t_4 V) { return MkF8t_3(V.y, V.x, V.w); }
inline f8t_3 SwizzYX0(f8t_4 V) { return MkF8t_3(V.y, V.x, (f8t)0); }
inline f8t_3 SwizzYYX(f8t_4 V) { return MkF8t_3(V.y, V.y, V.x); }
inline f8t_3 SwizzYYY(f8t_4 V) { return MkF8t_3(V.y, V.y, V.y); }
inline f8t_3 SwizzYYZ(f8t_4 V) { return MkF8t_3(V.y, V.y, V.z); }
inline f8t_3 SwizzYYW(f8t_4 V) { return MkF8t_3(V.y, V.y, V.w); }
inline f8t_3 SwizzYY0(f8t_4 V) { return MkF8t_3(V.y, V.y, (f8t)0); }
inline f8t_3 SwizzYZX(f8t_4 V) { return MkF8t_3(V.y, V.z, V.x); }
inline f8t_3 SwizzYZY(f8t_4 V) { return MkF8t_3(V.y, V.z, V.y); }
inline f8t_3 SwizzYZZ(f8t_4 V) { return MkF8t_3(V.y, V.z, V.z); }
inline f8t_3 SwizzYZW(f8t_4 V) { return MkF8t_3(V.y, V.z, V.w); }
inline f8t_3 SwizzYZ0(f8t_4 V) { return MkF8t_3(V.y, V.z, (f8t)0); }
inline f8t_3 SwizzYWX(f8t_4 V) { return MkF8t_3(V.y, V.w, V.x); }
inline f8t_3 SwizzYWY(f8t_4 V) { return MkF8t_3(V.y, V.w, V.y); }
inline f8t_3 SwizzYWZ(f8t_4 V) { return MkF8t_3(V.y, V.w, V.z); }
inline f8t_3 SwizzYWW(f8t_4 V) { return MkF8t_3(V.y, V.w, V.w); }
inline f8t_3 SwizzYW0(f8t_4 V) { return MkF8t_3(V.y, V.w, (f8t)0); }
inline f8t_3 SwizzY0X(f8t_4 V) { return MkF8t_3(V.y, (f8t)0, V.x); }
inline f8t_3 SwizzY0Y(f8t_4 V) { return MkF8t_3(V.y, (f8t)0, V.y); }
inline f8t_3 SwizzY0Z(f8t_4 V) { return MkF8t_3(V.y, (f8t)0, V.z); }
inline f8t_3 SwizzY0W(f8t_4 V) { return MkF8t_3(V.y, (f8t)0, V.w); }
inline f8t_3 SwizzY00(f8t_4 V) { return MkF8t_3(V.y, (f8t)0, (f8t)0); }
inline f8t_3 SwizzZXX(f8t_4 V) { return MkF8t_3(V.z, V.x, V.x); }
inline f8t_3 SwizzZXY(f8t_4 V) { return MkF8t_3(V.z, V.x, V.y); }
inline f8t_3 SwizzZXZ(f8t_4 V) { return MkF8t_3(V.z, V.x, V.z); }
inline f8t_3 SwizzZXW(f8t_4 V) { return MkF8t_3(V.z, V.x, V.w); }
inline f8t_3 SwizzZX0(f8t_4 V) { return MkF8t_3(V.z, V.x, (f8t)0); }
inline f8t_3 SwizzZYX(f8t_4 V) { return MkF8t_3(V.z, V.y, V.x); }
inline f8t_3 SwizzZYY(f8t_4 V) { return MkF8t_3(V.z, V.y, V.y); }
inline f8t_3 SwizzZYZ(f8t_4 V) { return MkF8t_3(V.z, V.y, V.z); }
inline f8t_3 SwizzZYW(f8t_4 V) { return MkF8t_3(V.z, V.y, V.w); }
inline f8t_3 SwizzZY0(f8t_4 V) { return MkF8t_3(V.z, V.y, (f8t)0); }
inline f8t_3 SwizzZZX(f8t_4 V) { return MkF8t_3(V.z, V.z, V.x); }
inline f8t_3 SwizzZZY(f8t_4 V) { return MkF8t_3(V.z, V.z, V.y); }
inline f8t_3 SwizzZZZ(f8t_4 V) { return MkF8t_3(V.z, V.z, V.z); }
inline f8t_3 SwizzZZW(f8t_4 V) { return MkF8t_3(V.z, V.z, V.w); }
inline f8t_3 SwizzZZ0(f8t_4 V) { return MkF8t_3(V.z, V.z, (f8t)0); }
inline f8t_3 SwizzZWX(f8t_4 V) { return MkF8t_3(V.z, V.w, V.x); }
inline f8t_3 SwizzZWY(f8t_4 V) { return MkF8t_3(V.z, V.w, V.y); }
inline f8t_3 SwizzZWZ(f8t_4 V) { return MkF8t_3(V.z, V.w, V.z); }
inline f8t_3 SwizzZWW(f8t_4 V) { return MkF8t_3(V.z, V.w, V.w); }
inline f8t_3 SwizzZW0(f8t_4 V) { return MkF8t_3(V.z, V.w, (f8t)0); }
inline f8t_3 SwizzZ0X(f8t_4 V) { return MkF8t_3(V.z, (f8t)0, V.x); }
inline f8t_3 SwizzZ0Y(f8t_4 V) { return MkF8t_3(V.z, (f8t)0, V.y); }
inline f8t_3 SwizzZ0Z(f8t_4 V) { return MkF8t_3(V.z, (f8t)0, V.z); }
inline f8t_3 SwizzZ0W(f8t_4 V) { return MkF8t_3(V.z, (f8t)0, V.w); }
inline f8t_3 SwizzZ00(f8t_4 V) { return MkF8t_3(V.z, (f8t)0, (f8t)0); }
inline f8t_3 SwizzWXX(f8t_4 V) { return MkF8t_3(V.w, V.x, V.x); }
inline f8t_3 SwizzWXY(f8t_4 V) { return MkF8t_3(V.w, V.x, V.y); }
inline f8t_3 SwizzWXZ(f8t_4 V) { return MkF8t_3(V.w, V.x, V.z); }
inline f8t_3 SwizzWXW(f8t_4 V) { return MkF8t_3(V.w, V.x, V.w); }
inline f8t_3 SwizzWX0(f8t_4 V) { return MkF8t_3(V.w, V.x, (f8t)0); }
inline f8t_3 SwizzWYX(f8t_4 V) { return MkF8t_3(V.w, V.y, V.x); }
inline f8t_3 SwizzWYY(f8t_4 V) { return MkF8t_3(V.w, V.y, V.y); }
inline f8t_3 SwizzWYZ(f8t_4 V) { return MkF8t_3(V.w, V.y, V.z); }
inline f8t_3 SwizzWYW(f8t_4 V) { return MkF8t_3(V.w, V.y, V.w); }
inline f8t_3 SwizzWY0(f8t_4 V) { return MkF8t_3(V.w, V.y, (f8t)0); }
inline f8t_3 SwizzWZX(f8t_4 V) { return MkF8t_3(V.w, V.z, V.x); }
inline f8t_3 SwizzWZY(f8t_4 V) { return MkF8t_3(V.w, V.z, V.y); }
inline f8t_3 SwizzWZZ(f8t_4 V) { return MkF8t_3(V.w, V.z, V.z); }
inline f8t_3 SwizzWZW(f8t_4 V) { return MkF8t_3(V.w, V.z, V.w); }
inline f8t_3 SwizzWZ0(f8t_4 V) { return MkF8t_3(V.w, V.z, (f8t)0); }
inline f8t_3 SwizzWWX(f8t_4 V) { return MkF8t_3(V.w, V.w, V.x); }
inline f8t_3 SwizzWWY(f8t_4 V) { return MkF8t_3(V.w, V.w, V.y); }
inline f8t_3 SwizzWWZ(f8t_4 V) { return MkF8t_3(V.w, V.w, V.z); }
inline f8t_3 SwizzWWW(f8t_4 V) { return MkF8t_3(V.w, V.w, V.w); }
inline f8t_3 SwizzWW0(f8t_4 V) { return MkF8t_3(V.w, V.w, (f8t)0); }
inline f8t_3 SwizzW0X(f8t_4 V) { return MkF8t_3(V.w, (f8t)0, V.x); }
inline f8t_3 SwizzW0Y(f8t_4 V) { return MkF8t_3(V.w, (f8t)0, V.y); }
inline f8t_3 SwizzW0Z(f8t_4 V) { return MkF8t_3(V.w, (f8t)0, V.z); }
inline f8t_3 SwizzW0W(f8t_4 V) { return MkF8t_3(V.w, (f8t)0, V.w); }
inline f8t_3 SwizzW00(f8t_4 V) { return MkF8t_3(V.w, (f8t)0, (f8t)0); }
inline f8t_3 Swizz0XX(f8t_4 V) { return MkF8t_3((f8t)0, V.x, V.x); }
inline f8t_3 Swizz0XY(f8t_4 V) { return MkF8t_3((f8t)0, V.x, V.y); }
inline f8t_3 Swizz0XZ(f8t_4 V) { return MkF8t_3((f8t)0, V.x, V.z); }
inline f8t_3 Swizz0XW(f8t_4 V) { return MkF8t_3((f8t)0, V.x, V.w); }
inline f8t_3 Swizz0X0(f8t_4 V) { return MkF8t_3((f8t)0, V.x, (f8t)0); }
inline f8t_3 Swizz0YX(f8t_4 V) { return MkF8t_3((f8t)0, V.y, V.x); }
inline f8t_3 Swizz0YY(f8t_4 V) { return MkF8t_3((f8t)0, V.y, V.y); }
inline f8t_3 Swizz0YZ(f8t_4 V) { return MkF8t_3((f8t)0, V.y, V.z); }
inline f8t_3 Swizz0YW(f8t_4 V) { return MkF8t_3((f8t)0, V.y, V.w); }
inline f8t_3 Swizz0Y0(f8t_4 V) { return MkF8t_3((f8t)0, V.y, (f8t)0); }
inline f8t_3 Swizz0ZX(f8t_4 V) { return MkF8t_3((f8t)0, V.z, V.x); }
inline f8t_3 Swizz0ZY(f8t_4 V) { return MkF8t_3((f8t)0, V.z, V.y); }
inline f8t_3 Swizz0ZZ(f8t_4 V) { return MkF8t_3((f8t)0, V.z, V.z); }
inline f8t_3 Swizz0ZW(f8t_4 V) { return MkF8t_3((f8t)0, V.z, V.w); }
inline f8t_3 Swizz0Z0(f8t_4 V) { return MkF8t_3((f8t)0, V.z, (f8t)0); }
inline f8t_3 Swizz0WX(f8t_4 V) { return MkF8t_3((f8t)0, V.w, V.x); }
inline f8t_3 Swizz0WY(f8t_4 V) { return MkF8t_3((f8t)0, V.w, V.y); }
inline f8t_3 Swizz0WZ(f8t_4 V) { return MkF8t_3((f8t)0, V.w, V.z); }
inline f8t_3 Swizz0WW(f8t_4 V) { return MkF8t_3((f8t)0, V.w, V.w); }
inline f8t_3 Swizz0W0(f8t_4 V) { return MkF8t_3((f8t)0, V.w, (f8t)0); }
inline f8t_3 Swizz00X(f8t_4 V) { return MkF8t_3((f8t)0, (f8t)0, V.x); }
inline f8t_3 Swizz00Y(f8t_4 V) { return MkF8t_3((f8t)0, (f8t)0, V.y); }
inline f8t_3 Swizz00Z(f8t_4 V) { return MkF8t_3((f8t)0, (f8t)0, V.z); }
inline f8t_3 Swizz00W(f8t_4 V) { return MkF8t_3((f8t)0, (f8t)0, V.w); }
inline f8t_4 SwizzXXXX(f8t_4 V) { return MkF8t_4(V.x, V.x, V.x, V.x); }
inline f8t_4 SwizzXXXY(f8t_4 V) { return MkF8t_4(V.x, V.x, V.x, V.y); }
inline f8t_4 SwizzXXXZ(f8t_4 V) { return MkF8t_4(V.x, V.x, V.x, V.z); }
inline f8t_4 SwizzXXXW(f8t_4 V) { return MkF8t_4(V.x, V.x, V.x, V.w); }
inline f8t_4 SwizzXXX0(f8t_4 V) { return MkF8t_4(V.x, V.x, V.x, (f8t)0); }
inline f8t_4 SwizzXXYX(f8t_4 V) { return MkF8t_4(V.x, V.x, V.y, V.x); }
inline f8t_4 SwizzXXYY(f8t_4 V) { return MkF8t_4(V.x, V.x, V.y, V.y); }
inline f8t_4 SwizzXXYZ(f8t_4 V) { return MkF8t_4(V.x, V.x, V.y, V.z); }
inline f8t_4 SwizzXXYW(f8t_4 V) { return MkF8t_4(V.x, V.x, V.y, V.w); }
inline f8t_4 SwizzXXY0(f8t_4 V) { return MkF8t_4(V.x, V.x, V.y, (f8t)0); }
inline f8t_4 SwizzXXZX(f8t_4 V) { return MkF8t_4(V.x, V.x, V.z, V.x); }
inline f8t_4 SwizzXXZY(f8t_4 V) { return MkF8t_4(V.x, V.x, V.z, V.y); }
inline f8t_4 SwizzXXZZ(f8t_4 V) { return MkF8t_4(V.x, V.x, V.z, V.z); }
inline f8t_4 SwizzXXZW(f8t_4 V) { return MkF8t_4(V.x, V.x, V.z, V.w); }
inline f8t_4 SwizzXXZ0(f8t_4 V) { return MkF8t_4(V.x, V.x, V.z, (f8t)0); }
inline f8t_4 SwizzXXWX(f8t_4 V) { return MkF8t_4(V.x, V.x, V.w, V.x); }
inline f8t_4 SwizzXXWY(f8t_4 V) { return MkF8t_4(V.x, V.x, V.w, V.y); }
inline f8t_4 SwizzXXWZ(f8t_4 V) { return MkF8t_4(V.x, V.x, V.w, V.z); }
inline f8t_4 SwizzXXWW(f8t_4 V) { return MkF8t_4(V.x, V.x, V.w, V.w); }
inline f8t_4 SwizzXXW0(f8t_4 V) { return MkF8t_4(V.x, V.x, V.w, (f8t)0); }
inline f8t_4 SwizzXX0X(f8t_4 V) { return MkF8t_4(V.x, V.x, (f8t)0, V.x); }
inline f8t_4 SwizzXX0Y(f8t_4 V) { return MkF8t_4(V.x, V.x, (f8t)0, V.y); }
inline f8t_4 SwizzXX0Z(f8t_4 V) { return MkF8t_4(V.x, V.x, (f8t)0, V.z); }
inline f8t_4 SwizzXX0W(f8t_4 V) { return MkF8t_4(V.x, V.x, (f8t)0, V.w); }
inline f8t_4 SwizzXX00(f8t_4 V) { return MkF8t_4(V.x, V.x, (f8t)0, (f8t)0); }
inline f8t_4 SwizzXYXX(f8t_4 V) { return MkF8t_4(V.x, V.y, V.x, V.x); }
inline f8t_4 SwizzXYXY(f8t_4 V) { return MkF8t_4(V.x, V.y, V.x, V.y); }
inline f8t_4 SwizzXYXZ(f8t_4 V) { return MkF8t_4(V.x, V.y, V.x, V.z); }
inline f8t_4 SwizzXYXW(f8t_4 V) { return MkF8t_4(V.x, V.y, V.x, V.w); }
inline f8t_4 SwizzXYX0(f8t_4 V) { return MkF8t_4(V.x, V.y, V.x, (f8t)0); }
inline f8t_4 SwizzXYYX(f8t_4 V) { return MkF8t_4(V.x, V.y, V.y, V.x); }
inline f8t_4 SwizzXYYY(f8t_4 V) { return MkF8t_4(V.x, V.y, V.y, V.y); }
inline f8t_4 SwizzXYYZ(f8t_4 V) { return MkF8t_4(V.x, V.y, V.y, V.z); }
inline f8t_4 SwizzXYYW(f8t_4 V) { return MkF8t_4(V.x, V.y, V.y, V.w); }
inline f8t_4 SwizzXYY0(f8t_4 V) { return MkF8t_4(V.x, V.y, V.y, (f8t)0); }
inline f8t_4 SwizzXYZX(f8t_4 V) { return MkF8t_4(V.x, V.y, V.z, V.x); }
inline f8t_4 SwizzXYZY(f8t_4 V) { return MkF8t_4(V.x, V.y, V.z, V.y); }
inline f8t_4 SwizzXYZZ(f8t_4 V) { return MkF8t_4(V.x, V.y, V.z, V.z); }
inline f8t_4 SwizzXYZW(f8t_4 V) { return MkF8t_4(V.x, V.y, V.z, V.w); }
inline f8t_4 SwizzXYZ0(f8t_4 V) { return MkF8t_4(V.x, V.y, V.z, (f8t)0); }
inline f8t_4 SwizzXYWX(f8t_4 V) { return MkF8t_4(V.x, V.y, V.w, V.x); }
inline f8t_4 SwizzXYWY(f8t_4 V) { return MkF8t_4(V.x, V.y, V.w, V.y); }
inline f8t_4 SwizzXYWZ(f8t_4 V) { return MkF8t_4(V.x, V.y, V.w, V.z); }
inline f8t_4 SwizzXYWW(f8t_4 V) { return MkF8t_4(V.x, V.y, V.w, V.w); }
inline f8t_4 SwizzXYW0(f8t_4 V) { return MkF8t_4(V.x, V.y, V.w, (f8t)0); }
inline f8t_4 SwizzXY0X(f8t_4 V) { return MkF8t_4(V.x, V.y, (f8t)0, V.x); }
inline f8t_4 SwizzXY0Y(f8t_4 V) { return MkF8t_4(V.x, V.y, (f8t)0, V.y); }
inline f8t_4 SwizzXY0Z(f8t_4 V) { return MkF8t_4(V.x, V.y, (f8t)0, V.z); }
inline f8t_4 SwizzXY0W(f8t_4 V) { return MkF8t_4(V.x, V.y, (f8t)0, V.w); }
inline f8t_4 SwizzXY00(f8t_4 V) { return MkF8t_4(V.x, V.y, (f8t)0, (f8t)0); }
inline f8t_4 SwizzXZXX(f8t_4 V) { return MkF8t_4(V.x, V.z, V.x, V.x); }
inline f8t_4 SwizzXZXY(f8t_4 V) { return MkF8t_4(V.x, V.z, V.x, V.y); }
inline f8t_4 SwizzXZXZ(f8t_4 V) { return MkF8t_4(V.x, V.z, V.x, V.z); }
inline f8t_4 SwizzXZXW(f8t_4 V) { return MkF8t_4(V.x, V.z, V.x, V.w); }
inline f8t_4 SwizzXZX0(f8t_4 V) { return MkF8t_4(V.x, V.z, V.x, (f8t)0); }
inline f8t_4 SwizzXZYX(f8t_4 V) { return MkF8t_4(V.x, V.z, V.y, V.x); }
inline f8t_4 SwizzXZYY(f8t_4 V) { return MkF8t_4(V.x, V.z, V.y, V.y); }
inline f8t_4 SwizzXZYZ(f8t_4 V) { return MkF8t_4(V.x, V.z, V.y, V.z); }
inline f8t_4 SwizzXZYW(f8t_4 V) { return MkF8t_4(V.x, V.z, V.y, V.w); }
inline f8t_4 SwizzXZY0(f8t_4 V) { return MkF8t_4(V.x, V.z, V.y, (f8t)0); }
inline f8t_4 SwizzXZZX(f8t_4 V) { return MkF8t_4(V.x, V.z, V.z, V.x); }
inline f8t_4 SwizzXZZY(f8t_4 V) { return MkF8t_4(V.x, V.z, V.z, V.y); }
inline f8t_4 SwizzXZZZ(f8t_4 V) { return MkF8t_4(V.x, V.z, V.z, V.z); }
inline f8t_4 SwizzXZZW(f8t_4 V) { return MkF8t_4(V.x, V.z, V.z, V.w); }
inline f8t_4 SwizzXZZ0(f8t_4 V) { return MkF8t_4(V.x, V.z, V.z, (f8t)0); }
inline f8t_4 SwizzXZWX(f8t_4 V) { return MkF8t_4(V.x, V.z, V.w, V.x); }
inline f8t_4 SwizzXZWY(f8t_4 V) { return MkF8t_4(V.x, V.z, V.w, V.y); }
inline f8t_4 SwizzXZWZ(f8t_4 V) { return MkF8t_4(V.x, V.z, V.w, V.z); }
inline f8t_4 SwizzXZWW(f8t_4 V) { return MkF8t_4(V.x, V.z, V.w, V.w); }
inline f8t_4 SwizzXZW0(f8t_4 V) { return MkF8t_4(V.x, V.z, V.w, (f8t)0); }
inline f8t_4 SwizzXZ0X(f8t_4 V) { return MkF8t_4(V.x, V.z, (f8t)0, V.x); }
inline f8t_4 SwizzXZ0Y(f8t_4 V) { return MkF8t_4(V.x, V.z, (f8t)0, V.y); }
inline f8t_4 SwizzXZ0Z(f8t_4 V) { return MkF8t_4(V.x, V.z, (f8t)0, V.z); }
inline f8t_4 SwizzXZ0W(f8t_4 V) { return MkF8t_4(V.x, V.z, (f8t)0, V.w); }
inline f8t_4 SwizzXZ00(f8t_4 V) { return MkF8t_4(V.x, V.z, (f8t)0, (f8t)0); }
inline f8t_4 SwizzXWXX(f8t_4 V) { return MkF8t_4(V.x, V.w, V.x, V.x); }
inline f8t_4 SwizzXWXY(f8t_4 V) { return MkF8t_4(V.x, V.w, V.x, V.y); }
inline f8t_4 SwizzXWXZ(f8t_4 V) { return MkF8t_4(V.x, V.w, V.x, V.z); }
inline f8t_4 SwizzXWXW(f8t_4 V) { return MkF8t_4(V.x, V.w, V.x, V.w); }
inline f8t_4 SwizzXWX0(f8t_4 V) { return MkF8t_4(V.x, V.w, V.x, (f8t)0); }
inline f8t_4 SwizzXWYX(f8t_4 V) { return MkF8t_4(V.x, V.w, V.y, V.x); }
inline f8t_4 SwizzXWYY(f8t_4 V) { return MkF8t_4(V.x, V.w, V.y, V.y); }
inline f8t_4 SwizzXWYZ(f8t_4 V) { return MkF8t_4(V.x, V.w, V.y, V.z); }
inline f8t_4 SwizzXWYW(f8t_4 V) { return MkF8t_4(V.x, V.w, V.y, V.w); }
inline f8t_4 SwizzXWY0(f8t_4 V) { return MkF8t_4(V.x, V.w, V.y, (f8t)0); }
inline f8t_4 SwizzXWZX(f8t_4 V) { return MkF8t_4(V.x, V.w, V.z, V.x); }
inline f8t_4 SwizzXWZY(f8t_4 V) { return MkF8t_4(V.x, V.w, V.z, V.y); }
inline f8t_4 SwizzXWZZ(f8t_4 V) { return MkF8t_4(V.x, V.w, V.z, V.z); }
inline f8t_4 SwizzXWZW(f8t_4 V) { return MkF8t_4(V.x, V.w, V.z, V.w); }
inline f8t_4 SwizzXWZ0(f8t_4 V) { return MkF8t_4(V.x, V.w, V.z, (f8t)0); }
inline f8t_4 SwizzXWWX(f8t_4 V) { return MkF8t_4(V.x, V.w, V.w, V.x); }
inline f8t_4 SwizzXWWY(f8t_4 V) { return MkF8t_4(V.x, V.w, V.w, V.y); }
inline f8t_4 SwizzXWWZ(f8t_4 V) { return MkF8t_4(V.x, V.w, V.w, V.z); }
inline f8t_4 SwizzXWWW(f8t_4 V) { return MkF8t_4(V.x, V.w, V.w, V.w); }
inline f8t_4 SwizzXWW0(f8t_4 V) { return MkF8t_4(V.x, V.w, V.w, (f8t)0); }
inline f8t_4 SwizzXW0X(f8t_4 V) { return MkF8t_4(V.x, V.w, (f8t)0, V.x); }
inline f8t_4 SwizzXW0Y(f8t_4 V) { return MkF8t_4(V.x, V.w, (f8t)0, V.y); }
inline f8t_4 SwizzXW0Z(f8t_4 V) { return MkF8t_4(V.x, V.w, (f8t)0, V.z); }
inline f8t_4 SwizzXW0W(f8t_4 V) { return MkF8t_4(V.x, V.w, (f8t)0, V.w); }
inline f8t_4 SwizzXW00(f8t_4 V) { return MkF8t_4(V.x, V.w, (f8t)0, (f8t)0); }
inline f8t_4 SwizzX0XX(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.x, V.x); }
inline f8t_4 SwizzX0XY(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.x, V.y); }
inline f8t_4 SwizzX0XZ(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.x, V.z); }
inline f8t_4 SwizzX0XW(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.x, V.w); }
inline f8t_4 SwizzX0X0(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.x, (f8t)0); }
inline f8t_4 SwizzX0YX(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.y, V.x); }
inline f8t_4 SwizzX0YY(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.y, V.y); }
inline f8t_4 SwizzX0YZ(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.y, V.z); }
inline f8t_4 SwizzX0YW(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.y, V.w); }
inline f8t_4 SwizzX0Y0(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.y, (f8t)0); }
inline f8t_4 SwizzX0ZX(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.z, V.x); }
inline f8t_4 SwizzX0ZY(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.z, V.y); }
inline f8t_4 SwizzX0ZZ(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.z, V.z); }
inline f8t_4 SwizzX0ZW(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.z, V.w); }
inline f8t_4 SwizzX0Z0(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.z, (f8t)0); }
inline f8t_4 SwizzX0WX(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.w, V.x); }
inline f8t_4 SwizzX0WY(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.w, V.y); }
inline f8t_4 SwizzX0WZ(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.w, V.z); }
inline f8t_4 SwizzX0WW(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.w, V.w); }
inline f8t_4 SwizzX0W0(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, V.w, (f8t)0); }
inline f8t_4 SwizzX00X(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, (f8t)0, V.x); }
inline f8t_4 SwizzX00Y(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, (f8t)0, V.y); }
inline f8t_4 SwizzX00Z(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, (f8t)0, V.z); }
inline f8t_4 SwizzX00W(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, (f8t)0, V.w); }
inline f8t_4 SwizzX000(f8t_4 V) { return MkF8t_4(V.x, (f8t)0, (f8t)0, (f8t)0); }
inline f8t_4 SwizzYXXX(f8t_4 V) { return MkF8t_4(V.y, V.x, V.x, V.x); }
inline f8t_4 SwizzYXXY(f8t_4 V) { return MkF8t_4(V.y, V.x, V.x, V.y); }
inline f8t_4 SwizzYXXZ(f8t_4 V) { return MkF8t_4(V.y, V.x, V.x, V.z); }
inline f8t_4 SwizzYXXW(f8t_4 V) { return MkF8t_4(V.y, V.x, V.x, V.w); }
inline f8t_4 SwizzYXX0(f8t_4 V) { return MkF8t_4(V.y, V.x, V.x, (f8t)0); }
inline f8t_4 SwizzYXYX(f8t_4 V) { return MkF8t_4(V.y, V.x, V.y, V.x); }
inline f8t_4 SwizzYXYY(f8t_4 V) { return MkF8t_4(V.y, V.x, V.y, V.y); }
inline f8t_4 SwizzYXYZ(f8t_4 V) { return MkF8t_4(V.y, V.x, V.y, V.z); }
inline f8t_4 SwizzYXYW(f8t_4 V) { return MkF8t_4(V.y, V.x, V.y, V.w); }
inline f8t_4 SwizzYXY0(f8t_4 V) { return MkF8t_4(V.y, V.x, V.y, (f8t)0); }
inline f8t_4 SwizzYXZX(f8t_4 V) { return MkF8t_4(V.y, V.x, V.z, V.x); }
inline f8t_4 SwizzYXZY(f8t_4 V) { return MkF8t_4(V.y, V.x, V.z, V.y); }
inline f8t_4 SwizzYXZZ(f8t_4 V) { return MkF8t_4(V.y, V.x, V.z, V.z); }
inline f8t_4 SwizzYXZW(f8t_4 V) { return MkF8t_4(V.y, V.x, V.z, V.w); }
inline f8t_4 SwizzYXZ0(f8t_4 V) { return MkF8t_4(V.y, V.x, V.z, (f8t)0); }
inline f8t_4 SwizzYXWX(f8t_4 V) { return MkF8t_4(V.y, V.x, V.w, V.x); }
inline f8t_4 SwizzYXWY(f8t_4 V) { return MkF8t_4(V.y, V.x, V.w, V.y); }
inline f8t_4 SwizzYXWZ(f8t_4 V) { return MkF8t_4(V.y, V.x, V.w, V.z); }
inline f8t_4 SwizzYXWW(f8t_4 V) { return MkF8t_4(V.y, V.x, V.w, V.w); }
inline f8t_4 SwizzYXW0(f8t_4 V) { return MkF8t_4(V.y, V.x, V.w, (f8t)0); }
inline f8t_4 SwizzYX0X(f8t_4 V) { return MkF8t_4(V.y, V.x, (f8t)0, V.x); }
inline f8t_4 SwizzYX0Y(f8t_4 V) { return MkF8t_4(V.y, V.x, (f8t)0, V.y); }
inline f8t_4 SwizzYX0Z(f8t_4 V) { return MkF8t_4(V.y, V.x, (f8t)0, V.z); }
inline f8t_4 SwizzYX0W(f8t_4 V) { return MkF8t_4(V.y, V.x, (f8t)0, V.w); }
inline f8t_4 SwizzYX00(f8t_4 V) { return MkF8t_4(V.y, V.x, (f8t)0, (f8t)0); }
inline f8t_4 SwizzYYXX(f8t_4 V) { return MkF8t_4(V.y, V.y, V.x, V.x); }
inline f8t_4 SwizzYYXY(f8t_4 V) { return MkF8t_4(V.y, V.y, V.x, V.y); }
inline f8t_4 SwizzYYXZ(f8t_4 V) { return MkF8t_4(V.y, V.y, V.x, V.z); }
inline f8t_4 SwizzYYXW(f8t_4 V) { return MkF8t_4(V.y, V.y, V.x, V.w); }
inline f8t_4 SwizzYYX0(f8t_4 V) { return MkF8t_4(V.y, V.y, V.x, (f8t)0); }
inline f8t_4 SwizzYYYX(f8t_4 V) { return MkF8t_4(V.y, V.y, V.y, V.x); }
inline f8t_4 SwizzYYYY(f8t_4 V) { return MkF8t_4(V.y, V.y, V.y, V.y); }
inline f8t_4 SwizzYYYZ(f8t_4 V) { return MkF8t_4(V.y, V.y, V.y, V.z); }
inline f8t_4 SwizzYYYW(f8t_4 V) { return MkF8t_4(V.y, V.y, V.y, V.w); }
inline f8t_4 SwizzYYY0(f8t_4 V) { return MkF8t_4(V.y, V.y, V.y, (f8t)0); }
inline f8t_4 SwizzYYZX(f8t_4 V) { return MkF8t_4(V.y, V.y, V.z, V.x); }
inline f8t_4 SwizzYYZY(f8t_4 V) { return MkF8t_4(V.y, V.y, V.z, V.y); }
inline f8t_4 SwizzYYZZ(f8t_4 V) { return MkF8t_4(V.y, V.y, V.z, V.z); }
inline f8t_4 SwizzYYZW(f8t_4 V) { return MkF8t_4(V.y, V.y, V.z, V.w); }
inline f8t_4 SwizzYYZ0(f8t_4 V) { return MkF8t_4(V.y, V.y, V.z, (f8t)0); }
inline f8t_4 SwizzYYWX(f8t_4 V) { return MkF8t_4(V.y, V.y, V.w, V.x); }
inline f8t_4 SwizzYYWY(f8t_4 V) { return MkF8t_4(V.y, V.y, V.w, V.y); }
inline f8t_4 SwizzYYWZ(f8t_4 V) { return MkF8t_4(V.y, V.y, V.w, V.z); }
inline f8t_4 SwizzYYWW(f8t_4 V) { return MkF8t_4(V.y, V.y, V.w, V.w); }
inline f8t_4 SwizzYYW0(f8t_4 V) { return MkF8t_4(V.y, V.y, V.w, (f8t)0); }
inline f8t_4 SwizzYY0X(f8t_4 V) { return MkF8t_4(V.y, V.y, (f8t)0, V.x); }
inline f8t_4 SwizzYY0Y(f8t_4 V) { return MkF8t_4(V.y, V.y, (f8t)0, V.y); }
inline f8t_4 SwizzYY0Z(f8t_4 V) { return MkF8t_4(V.y, V.y, (f8t)0, V.z); }
inline f8t_4 SwizzYY0W(f8t_4 V) { return MkF8t_4(V.y, V.y, (f8t)0, V.w); }
inline f8t_4 SwizzYY00(f8t_4 V) { return MkF8t_4(V.y, V.y, (f8t)0, (f8t)0); }
inline f8t_4 SwizzYZXX(f8t_4 V) { return MkF8t_4(V.y, V.z, V.x, V.x); }
inline f8t_4 SwizzYZXY(f8t_4 V) { return MkF8t_4(V.y, V.z, V.x, V.y); }
inline f8t_4 SwizzYZXZ(f8t_4 V) { return MkF8t_4(V.y, V.z, V.x, V.z); }
inline f8t_4 SwizzYZXW(f8t_4 V) { return MkF8t_4(V.y, V.z, V.x, V.w); }
inline f8t_4 SwizzYZX0(f8t_4 V) { return MkF8t_4(V.y, V.z, V.x, (f8t)0); }
inline f8t_4 SwizzYZYX(f8t_4 V) { return MkF8t_4(V.y, V.z, V.y, V.x); }
inline f8t_4 SwizzYZYY(f8t_4 V) { return MkF8t_4(V.y, V.z, V.y, V.y); }
inline f8t_4 SwizzYZYZ(f8t_4 V) { return MkF8t_4(V.y, V.z, V.y, V.z); }
inline f8t_4 SwizzYZYW(f8t_4 V) { return MkF8t_4(V.y, V.z, V.y, V.w); }
inline f8t_4 SwizzYZY0(f8t_4 V) { return MkF8t_4(V.y, V.z, V.y, (f8t)0); }
inline f8t_4 SwizzYZZX(f8t_4 V) { return MkF8t_4(V.y, V.z, V.z, V.x); }
inline f8t_4 SwizzYZZY(f8t_4 V) { return MkF8t_4(V.y, V.z, V.z, V.y); }
inline f8t_4 SwizzYZZZ(f8t_4 V) { return MkF8t_4(V.y, V.z, V.z, V.z); }
inline f8t_4 SwizzYZZW(f8t_4 V) { return MkF8t_4(V.y, V.z, V.z, V.w); }
inline f8t_4 SwizzYZZ0(f8t_4 V) { return MkF8t_4(V.y, V.z, V.z, (f8t)0); }
inline f8t_4 SwizzYZWX(f8t_4 V) { return MkF8t_4(V.y, V.z, V.w, V.x); }
inline f8t_4 SwizzYZWY(f8t_4 V) { return MkF8t_4(V.y, V.z, V.w, V.y); }
inline f8t_4 SwizzYZWZ(f8t_4 V) { return MkF8t_4(V.y, V.z, V.w, V.z); }
inline f8t_4 SwizzYZWW(f8t_4 V) { return MkF8t_4(V.y, V.z, V.w, V.w); }
inline f8t_4 SwizzYZW0(f8t_4 V) { return MkF8t_4(V.y, V.z, V.w, (f8t)0); }
inline f8t_4 SwizzYZ0X(f8t_4 V) { return MkF8t_4(V.y, V.z, (f8t)0, V.x); }
inline f8t_4 SwizzYZ0Y(f8t_4 V) { return MkF8t_4(V.y, V.z, (f8t)0, V.y); }
inline f8t_4 SwizzYZ0Z(f8t_4 V) { return MkF8t_4(V.y, V.z, (f8t)0, V.z); }
inline f8t_4 SwizzYZ0W(f8t_4 V) { return MkF8t_4(V.y, V.z, (f8t)0, V.w); }
inline f8t_4 SwizzYZ00(f8t_4 V) { return MkF8t_4(V.y, V.z, (f8t)0, (f8t)0); }
inline f8t_4 SwizzYWXX(f8t_4 V) { return MkF8t_4(V.y, V.w, V.x, V.x); }
inline f8t_4 SwizzYWXY(f8t_4 V) { return MkF8t_4(V.y, V.w, V.x, V.y); }
inline f8t_4 SwizzYWXZ(f8t_4 V) { return MkF8t_4(V.y, V.w, V.x, V.z); }
inline f8t_4 SwizzYWXW(f8t_4 V) { return MkF8t_4(V.y, V.w, V.x, V.w); }
inline f8t_4 SwizzYWX0(f8t_4 V) { return MkF8t_4(V.y, V.w, V.x, (f8t)0); }
inline f8t_4 SwizzYWYX(f8t_4 V) { return MkF8t_4(V.y, V.w, V.y, V.x); }
inline f8t_4 SwizzYWYY(f8t_4 V) { return MkF8t_4(V.y, V.w, V.y, V.y); }
inline f8t_4 SwizzYWYZ(f8t_4 V) { return MkF8t_4(V.y, V.w, V.y, V.z); }
inline f8t_4 SwizzYWYW(f8t_4 V) { return MkF8t_4(V.y, V.w, V.y, V.w); }
inline f8t_4 SwizzYWY0(f8t_4 V) { return MkF8t_4(V.y, V.w, V.y, (f8t)0); }
inline f8t_4 SwizzYWZX(f8t_4 V) { return MkF8t_4(V.y, V.w, V.z, V.x); }
inline f8t_4 SwizzYWZY(f8t_4 V) { return MkF8t_4(V.y, V.w, V.z, V.y); }
inline f8t_4 SwizzYWZZ(f8t_4 V) { return MkF8t_4(V.y, V.w, V.z, V.z); }
inline f8t_4 SwizzYWZW(f8t_4 V) { return MkF8t_4(V.y, V.w, V.z, V.w); }
inline f8t_4 SwizzYWZ0(f8t_4 V) { return MkF8t_4(V.y, V.w, V.z, (f8t)0); }
inline f8t_4 SwizzYWWX(f8t_4 V) { return MkF8t_4(V.y, V.w, V.w, V.x); }
inline f8t_4 SwizzYWWY(f8t_4 V) { return MkF8t_4(V.y, V.w, V.w, V.y); }
inline f8t_4 SwizzYWWZ(f8t_4 V) { return MkF8t_4(V.y, V.w, V.w, V.z); }
inline f8t_4 SwizzYWWW(f8t_4 V) { return MkF8t_4(V.y, V.w, V.w, V.w); }
inline f8t_4 SwizzYWW0(f8t_4 V) { return MkF8t_4(V.y, V.w, V.w, (f8t)0); }
inline f8t_4 SwizzYW0X(f8t_4 V) { return MkF8t_4(V.y, V.w, (f8t)0, V.x); }
inline f8t_4 SwizzYW0Y(f8t_4 V) { return MkF8t_4(V.y, V.w, (f8t)0, V.y); }
inline f8t_4 SwizzYW0Z(f8t_4 V) { return MkF8t_4(V.y, V.w, (f8t)0, V.z); }
inline f8t_4 SwizzYW0W(f8t_4 V) { return MkF8t_4(V.y, V.w, (f8t)0, V.w); }
inline f8t_4 SwizzYW00(f8t_4 V) { return MkF8t_4(V.y, V.w, (f8t)0, (f8t)0); }
inline f8t_4 SwizzY0XX(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.x, V.x); }
inline f8t_4 SwizzY0XY(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.x, V.y); }
inline f8t_4 SwizzY0XZ(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.x, V.z); }
inline f8t_4 SwizzY0XW(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.x, V.w); }
inline f8t_4 SwizzY0X0(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.x, (f8t)0); }
inline f8t_4 SwizzY0YX(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.y, V.x); }
inline f8t_4 SwizzY0YY(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.y, V.y); }
inline f8t_4 SwizzY0YZ(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.y, V.z); }
inline f8t_4 SwizzY0YW(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.y, V.w); }
inline f8t_4 SwizzY0Y0(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.y, (f8t)0); }
inline f8t_4 SwizzY0ZX(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.z, V.x); }
inline f8t_4 SwizzY0ZY(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.z, V.y); }
inline f8t_4 SwizzY0ZZ(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.z, V.z); }
inline f8t_4 SwizzY0ZW(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.z, V.w); }
inline f8t_4 SwizzY0Z0(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.z, (f8t)0); }
inline f8t_4 SwizzY0WX(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.w, V.x); }
inline f8t_4 SwizzY0WY(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.w, V.y); }
inline f8t_4 SwizzY0WZ(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.w, V.z); }
inline f8t_4 SwizzY0WW(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.w, V.w); }
inline f8t_4 SwizzY0W0(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, V.w, (f8t)0); }
inline f8t_4 SwizzY00X(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, (f8t)0, V.x); }
inline f8t_4 SwizzY00Y(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, (f8t)0, V.y); }
inline f8t_4 SwizzY00Z(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, (f8t)0, V.z); }
inline f8t_4 SwizzY00W(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, (f8t)0, V.w); }
inline f8t_4 SwizzY000(f8t_4 V) { return MkF8t_4(V.y, (f8t)0, (f8t)0, (f8t)0); }
inline f8t_4 SwizzZXXX(f8t_4 V) { return MkF8t_4(V.z, V.x, V.x, V.x); }
inline f8t_4 SwizzZXXY(f8t_4 V) { return MkF8t_4(V.z, V.x, V.x, V.y); }
inline f8t_4 SwizzZXXZ(f8t_4 V) { return MkF8t_4(V.z, V.x, V.x, V.z); }
inline f8t_4 SwizzZXXW(f8t_4 V) { return MkF8t_4(V.z, V.x, V.x, V.w); }
inline f8t_4 SwizzZXX0(f8t_4 V) { return MkF8t_4(V.z, V.x, V.x, (f8t)0); }
inline f8t_4 SwizzZXYX(f8t_4 V) { return MkF8t_4(V.z, V.x, V.y, V.x); }
inline f8t_4 SwizzZXYY(f8t_4 V) { return MkF8t_4(V.z, V.x, V.y, V.y); }
inline f8t_4 SwizzZXYZ(f8t_4 V) { return MkF8t_4(V.z, V.x, V.y, V.z); }
inline f8t_4 SwizzZXYW(f8t_4 V) { return MkF8t_4(V.z, V.x, V.y, V.w); }
inline f8t_4 SwizzZXY0(f8t_4 V) { return MkF8t_4(V.z, V.x, V.y, (f8t)0); }
inline f8t_4 SwizzZXZX(f8t_4 V) { return MkF8t_4(V.z, V.x, V.z, V.x); }
inline f8t_4 SwizzZXZY(f8t_4 V) { return MkF8t_4(V.z, V.x, V.z, V.y); }
inline f8t_4 SwizzZXZZ(f8t_4 V) { return MkF8t_4(V.z, V.x, V.z, V.z); }
inline f8t_4 SwizzZXZW(f8t_4 V) { return MkF8t_4(V.z, V.x, V.z, V.w); }
inline f8t_4 SwizzZXZ0(f8t_4 V) { return MkF8t_4(V.z, V.x, V.z, (f8t)0); }
inline f8t_4 SwizzZXWX(f8t_4 V) { return MkF8t_4(V.z, V.x, V.w, V.x); }
inline f8t_4 SwizzZXWY(f8t_4 V) { return MkF8t_4(V.z, V.x, V.w, V.y); }
inline f8t_4 SwizzZXWZ(f8t_4 V) { return MkF8t_4(V.z, V.x, V.w, V.z); }
inline f8t_4 SwizzZXWW(f8t_4 V) { return MkF8t_4(V.z, V.x, V.w, V.w); }
inline f8t_4 SwizzZXW0(f8t_4 V) { return MkF8t_4(V.z, V.x, V.w, (f8t)0); }
inline f8t_4 SwizzZX0X(f8t_4 V) { return MkF8t_4(V.z, V.x, (f8t)0, V.x); }
inline f8t_4 SwizzZX0Y(f8t_4 V) { return MkF8t_4(V.z, V.x, (f8t)0, V.y); }
inline f8t_4 SwizzZX0Z(f8t_4 V) { return MkF8t_4(V.z, V.x, (f8t)0, V.z); }
inline f8t_4 SwizzZX0W(f8t_4 V) { return MkF8t_4(V.z, V.x, (f8t)0, V.w); }
inline f8t_4 SwizzZX00(f8t_4 V) { return MkF8t_4(V.z, V.x, (f8t)0, (f8t)0); }
inline f8t_4 SwizzZYXX(f8t_4 V) { return MkF8t_4(V.z, V.y, V.x, V.x); }
inline f8t_4 SwizzZYXY(f8t_4 V) { return MkF8t_4(V.z, V.y, V.x, V.y); }
inline f8t_4 SwizzZYXZ(f8t_4 V) { return MkF8t_4(V.z, V.y, V.x, V.z); }
inline f8t_4 SwizzZYXW(f8t_4 V) { return MkF8t_4(V.z, V.y, V.x, V.w); }
inline f8t_4 SwizzZYX0(f8t_4 V) { return MkF8t_4(V.z, V.y, V.x, (f8t)0); }
inline f8t_4 SwizzZYYX(f8t_4 V) { return MkF8t_4(V.z, V.y, V.y, V.x); }
inline f8t_4 SwizzZYYY(f8t_4 V) { return MkF8t_4(V.z, V.y, V.y, V.y); }
inline f8t_4 SwizzZYYZ(f8t_4 V) { return MkF8t_4(V.z, V.y, V.y, V.z); }
inline f8t_4 SwizzZYYW(f8t_4 V) { return MkF8t_4(V.z, V.y, V.y, V.w); }
inline f8t_4 SwizzZYY0(f8t_4 V) { return MkF8t_4(V.z, V.y, V.y, (f8t)0); }
inline f8t_4 SwizzZYZX(f8t_4 V) { return MkF8t_4(V.z, V.y, V.z, V.x); }
inline f8t_4 SwizzZYZY(f8t_4 V) { return MkF8t_4(V.z, V.y, V.z, V.y); }
inline f8t_4 SwizzZYZZ(f8t_4 V) { return MkF8t_4(V.z, V.y, V.z, V.z); }
inline f8t_4 SwizzZYZW(f8t_4 V) { return MkF8t_4(V.z, V.y, V.z, V.w); }
inline f8t_4 SwizzZYZ0(f8t_4 V) { return MkF8t_4(V.z, V.y, V.z, (f8t)0); }
inline f8t_4 SwizzZYWX(f8t_4 V) { return MkF8t_4(V.z, V.y, V.w, V.x); }
inline f8t_4 SwizzZYWY(f8t_4 V) { return MkF8t_4(V.z, V.y, V.w, V.y); }
inline f8t_4 SwizzZYWZ(f8t_4 V) { return MkF8t_4(V.z, V.y, V.w, V.z); }
inline f8t_4 SwizzZYWW(f8t_4 V) { return MkF8t_4(V.z, V.y, V.w, V.w); }
inline f8t_4 SwizzZYW0(f8t_4 V) { return MkF8t_4(V.z, V.y, V.w, (f8t)0); }
inline f8t_4 SwizzZY0X(f8t_4 V) { return MkF8t_4(V.z, V.y, (f8t)0, V.x); }
inline f8t_4 SwizzZY0Y(f8t_4 V) { return MkF8t_4(V.z, V.y, (f8t)0, V.y); }
inline f8t_4 SwizzZY0Z(f8t_4 V) { return MkF8t_4(V.z, V.y, (f8t)0, V.z); }
inline f8t_4 SwizzZY0W(f8t_4 V) { return MkF8t_4(V.z, V.y, (f8t)0, V.w); }
inline f8t_4 SwizzZY00(f8t_4 V) { return MkF8t_4(V.z, V.y, (f8t)0, (f8t)0); }
inline f8t_4 SwizzZZXX(f8t_4 V) { return MkF8t_4(V.z, V.z, V.x, V.x); }
inline f8t_4 SwizzZZXY(f8t_4 V) { return MkF8t_4(V.z, V.z, V.x, V.y); }
inline f8t_4 SwizzZZXZ(f8t_4 V) { return MkF8t_4(V.z, V.z, V.x, V.z); }
inline f8t_4 SwizzZZXW(f8t_4 V) { return MkF8t_4(V.z, V.z, V.x, V.w); }
inline f8t_4 SwizzZZX0(f8t_4 V) { return MkF8t_4(V.z, V.z, V.x, (f8t)0); }
inline f8t_4 SwizzZZYX(f8t_4 V) { return MkF8t_4(V.z, V.z, V.y, V.x); }
inline f8t_4 SwizzZZYY(f8t_4 V) { return MkF8t_4(V.z, V.z, V.y, V.y); }
inline f8t_4 SwizzZZYZ(f8t_4 V) { return MkF8t_4(V.z, V.z, V.y, V.z); }
inline f8t_4 SwizzZZYW(f8t_4 V) { return MkF8t_4(V.z, V.z, V.y, V.w); }
inline f8t_4 SwizzZZY0(f8t_4 V) { return MkF8t_4(V.z, V.z, V.y, (f8t)0); }
inline f8t_4 SwizzZZZX(f8t_4 V) { return MkF8t_4(V.z, V.z, V.z, V.x); }
inline f8t_4 SwizzZZZY(f8t_4 V) { return MkF8t_4(V.z, V.z, V.z, V.y); }
inline f8t_4 SwizzZZZZ(f8t_4 V) { return MkF8t_4(V.z, V.z, V.z, V.z); }
inline f8t_4 SwizzZZZW(f8t_4 V) { return MkF8t_4(V.z, V.z, V.z, V.w); }
inline f8t_4 SwizzZZZ0(f8t_4 V) { return MkF8t_4(V.z, V.z, V.z, (f8t)0); }
inline f8t_4 SwizzZZWX(f8t_4 V) { return MkF8t_4(V.z, V.z, V.w, V.x); }
inline f8t_4 SwizzZZWY(f8t_4 V) { return MkF8t_4(V.z, V.z, V.w, V.y); }
inline f8t_4 SwizzZZWZ(f8t_4 V) { return MkF8t_4(V.z, V.z, V.w, V.z); }
inline f8t_4 SwizzZZWW(f8t_4 V) { return MkF8t_4(V.z, V.z, V.w, V.w); }
inline f8t_4 SwizzZZW0(f8t_4 V) { return MkF8t_4(V.z, V.z, V.w, (f8t)0); }
inline f8t_4 SwizzZZ0X(f8t_4 V) { return MkF8t_4(V.z, V.z, (f8t)0, V.x); }
inline f8t_4 SwizzZZ0Y(f8t_4 V) { return MkF8t_4(V.z, V.z, (f8t)0, V.y); }
inline f8t_4 SwizzZZ0Z(f8t_4 V) { return MkF8t_4(V.z, V.z, (f8t)0, V.z); }
inline f8t_4 SwizzZZ0W(f8t_4 V) { return MkF8t_4(V.z, V.z, (f8t)0, V.w); }
inline f8t_4 SwizzZZ00(f8t_4 V) { return MkF8t_4(V.z, V.z, (f8t)0, (f8t)0); }
inline f8t_4 SwizzZWXX(f8t_4 V) { return MkF8t_4(V.z, V.w, V.x, V.x); }
inline f8t_4 SwizzZWXY(f8t_4 V) { return MkF8t_4(V.z, V.w, V.x, V.y); }
inline f8t_4 SwizzZWXZ(f8t_4 V) { return MkF8t_4(V.z, V.w, V.x, V.z); }
inline f8t_4 SwizzZWXW(f8t_4 V) { return MkF8t_4(V.z, V.w, V.x, V.w); }
inline f8t_4 SwizzZWX0(f8t_4 V) { return MkF8t_4(V.z, V.w, V.x, (f8t)0); }
inline f8t_4 SwizzZWYX(f8t_4 V) { return MkF8t_4(V.z, V.w, V.y, V.x); }
inline f8t_4 SwizzZWYY(f8t_4 V) { return MkF8t_4(V.z, V.w, V.y, V.y); }
inline f8t_4 SwizzZWYZ(f8t_4 V) { return MkF8t_4(V.z, V.w, V.y, V.z); }
inline f8t_4 SwizzZWYW(f8t_4 V) { return MkF8t_4(V.z, V.w, V.y, V.w); }
inline f8t_4 SwizzZWY0(f8t_4 V) { return MkF8t_4(V.z, V.w, V.y, (f8t)0); }
inline f8t_4 SwizzZWZX(f8t_4 V) { return MkF8t_4(V.z, V.w, V.z, V.x); }
inline f8t_4 SwizzZWZY(f8t_4 V) { return MkF8t_4(V.z, V.w, V.z, V.y); }
inline f8t_4 SwizzZWZZ(f8t_4 V) { return MkF8t_4(V.z, V.w, V.z, V.z); }
inline f8t_4 SwizzZWZW(f8t_4 V) { return MkF8t_4(V.z, V.w, V.z, V.w); }
inline f8t_4 SwizzZWZ0(f8t_4 V) { return MkF8t_4(V.z, V.w, V.z, (f8t)0); }
inline f8t_4 SwizzZWWX(f8t_4 V) { return MkF8t_4(V.z, V.w, V.w, V.x); }
inline f8t_4 SwizzZWWY(f8t_4 V) { return MkF8t_4(V.z, V.w, V.w, V.y); }
inline f8t_4 SwizzZWWZ(f8t_4 V) { return MkF8t_4(V.z, V.w, V.w, V.z); }
inline f8t_4 SwizzZWWW(f8t_4 V) { return MkF8t_4(V.z, V.w, V.w, V.w); }
inline f8t_4 SwizzZWW0(f8t_4 V) { return MkF8t_4(V.z, V.w, V.w, (f8t)0); }
inline f8t_4 SwizzZW0X(f8t_4 V) { return MkF8t_4(V.z, V.w, (f8t)0, V.x); }
inline f8t_4 SwizzZW0Y(f8t_4 V) { return MkF8t_4(V.z, V.w, (f8t)0, V.y); }
inline f8t_4 SwizzZW0Z(f8t_4 V) { return MkF8t_4(V.z, V.w, (f8t)0, V.z); }
inline f8t_4 SwizzZW0W(f8t_4 V) { return MkF8t_4(V.z, V.w, (f8t)0, V.w); }
inline f8t_4 SwizzZW00(f8t_4 V) { return MkF8t_4(V.z, V.w, (f8t)0, (f8t)0); }
inline f8t_4 SwizzZ0XX(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.x, V.x); }
inline f8t_4 SwizzZ0XY(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.x, V.y); }
inline f8t_4 SwizzZ0XZ(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.x, V.z); }
inline f8t_4 SwizzZ0XW(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.x, V.w); }
inline f8t_4 SwizzZ0X0(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.x, (f8t)0); }
inline f8t_4 SwizzZ0YX(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.y, V.x); }
inline f8t_4 SwizzZ0YY(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.y, V.y); }
inline f8t_4 SwizzZ0YZ(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.y, V.z); }
inline f8t_4 SwizzZ0YW(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.y, V.w); }
inline f8t_4 SwizzZ0Y0(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.y, (f8t)0); }
inline f8t_4 SwizzZ0ZX(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.z, V.x); }
inline f8t_4 SwizzZ0ZY(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.z, V.y); }
inline f8t_4 SwizzZ0ZZ(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.z, V.z); }
inline f8t_4 SwizzZ0ZW(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.z, V.w); }
inline f8t_4 SwizzZ0Z0(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.z, (f8t)0); }
inline f8t_4 SwizzZ0WX(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.w, V.x); }
inline f8t_4 SwizzZ0WY(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.w, V.y); }
inline f8t_4 SwizzZ0WZ(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.w, V.z); }
inline f8t_4 SwizzZ0WW(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.w, V.w); }
inline f8t_4 SwizzZ0W0(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, V.w, (f8t)0); }
inline f8t_4 SwizzZ00X(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, (f8t)0, V.x); }
inline f8t_4 SwizzZ00Y(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, (f8t)0, V.y); }
inline f8t_4 SwizzZ00Z(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, (f8t)0, V.z); }
inline f8t_4 SwizzZ00W(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, (f8t)0, V.w); }
inline f8t_4 SwizzZ000(f8t_4 V) { return MkF8t_4(V.z, (f8t)0, (f8t)0, (f8t)0); }
inline f8t_4 SwizzWXXX(f8t_4 V) { return MkF8t_4(V.w, V.x, V.x, V.x); }
inline f8t_4 SwizzWXXY(f8t_4 V) { return MkF8t_4(V.w, V.x, V.x, V.y); }
inline f8t_4 SwizzWXXZ(f8t_4 V) { return MkF8t_4(V.w, V.x, V.x, V.z); }
inline f8t_4 SwizzWXXW(f8t_4 V) { return MkF8t_4(V.w, V.x, V.x, V.w); }
inline f8t_4 SwizzWXX0(f8t_4 V) { return MkF8t_4(V.w, V.x, V.x, (f8t)0); }
inline f8t_4 SwizzWXYX(f8t_4 V) { return MkF8t_4(V.w, V.x, V.y, V.x); }
inline f8t_4 SwizzWXYY(f8t_4 V) { return MkF8t_4(V.w, V.x, V.y, V.y); }
inline f8t_4 SwizzWXYZ(f8t_4 V) { return MkF8t_4(V.w, V.x, V.y, V.z); }
inline f8t_4 SwizzWXYW(f8t_4 V) { return MkF8t_4(V.w, V.x, V.y, V.w); }
inline f8t_4 SwizzWXY0(f8t_4 V) { return MkF8t_4(V.w, V.x, V.y, (f8t)0); }
inline f8t_4 SwizzWXZX(f8t_4 V) { return MkF8t_4(V.w, V.x, V.z, V.x); }
inline f8t_4 SwizzWXZY(f8t_4 V) { return MkF8t_4(V.w, V.x, V.z, V.y); }
inline f8t_4 SwizzWXZZ(f8t_4 V) { return MkF8t_4(V.w, V.x, V.z, V.z); }
inline f8t_4 SwizzWXZW(f8t_4 V) { return MkF8t_4(V.w, V.x, V.z, V.w); }
inline f8t_4 SwizzWXZ0(f8t_4 V) { return MkF8t_4(V.w, V.x, V.z, (f8t)0); }
inline f8t_4 SwizzWXWX(f8t_4 V) { return MkF8t_4(V.w, V.x, V.w, V.x); }
inline f8t_4 SwizzWXWY(f8t_4 V) { return MkF8t_4(V.w, V.x, V.w, V.y); }
inline f8t_4 SwizzWXWZ(f8t_4 V) { return MkF8t_4(V.w, V.x, V.w, V.z); }
inline f8t_4 SwizzWXWW(f8t_4 V) { return MkF8t_4(V.w, V.x, V.w, V.w); }
inline f8t_4 SwizzWXW0(f8t_4 V) { return MkF8t_4(V.w, V.x, V.w, (f8t)0); }
inline f8t_4 SwizzWX0X(f8t_4 V) { return MkF8t_4(V.w, V.x, (f8t)0, V.x); }
inline f8t_4 SwizzWX0Y(f8t_4 V) { return MkF8t_4(V.w, V.x, (f8t)0, V.y); }
inline f8t_4 SwizzWX0Z(f8t_4 V) { return MkF8t_4(V.w, V.x, (f8t)0, V.z); }
inline f8t_4 SwizzWX0W(f8t_4 V) { return MkF8t_4(V.w, V.x, (f8t)0, V.w); }
inline f8t_4 SwizzWX00(f8t_4 V) { return MkF8t_4(V.w, V.x, (f8t)0, (f8t)0); }
inline f8t_4 SwizzWYXX(f8t_4 V) { return MkF8t_4(V.w, V.y, V.x, V.x); }
inline f8t_4 SwizzWYXY(f8t_4 V) { return MkF8t_4(V.w, V.y, V.x, V.y); }
inline f8t_4 SwizzWYXZ(f8t_4 V) { return MkF8t_4(V.w, V.y, V.x, V.z); }
inline f8t_4 SwizzWYXW(f8t_4 V) { return MkF8t_4(V.w, V.y, V.x, V.w); }
inline f8t_4 SwizzWYX0(f8t_4 V) { return MkF8t_4(V.w, V.y, V.x, (f8t)0); }
inline f8t_4 SwizzWYYX(f8t_4 V) { return MkF8t_4(V.w, V.y, V.y, V.x); }
inline f8t_4 SwizzWYYY(f8t_4 V) { return MkF8t_4(V.w, V.y, V.y, V.y); }
inline f8t_4 SwizzWYYZ(f8t_4 V) { return MkF8t_4(V.w, V.y, V.y, V.z); }
inline f8t_4 SwizzWYYW(f8t_4 V) { return MkF8t_4(V.w, V.y, V.y, V.w); }
inline f8t_4 SwizzWYY0(f8t_4 V) { return MkF8t_4(V.w, V.y, V.y, (f8t)0); }
inline f8t_4 SwizzWYZX(f8t_4 V) { return MkF8t_4(V.w, V.y, V.z, V.x); }
inline f8t_4 SwizzWYZY(f8t_4 V) { return MkF8t_4(V.w, V.y, V.z, V.y); }
inline f8t_4 SwizzWYZZ(f8t_4 V) { return MkF8t_4(V.w, V.y, V.z, V.z); }
inline f8t_4 SwizzWYZW(f8t_4 V) { return MkF8t_4(V.w, V.y, V.z, V.w); }
inline f8t_4 SwizzWYZ0(f8t_4 V) { return MkF8t_4(V.w, V.y, V.z, (f8t)0); }
inline f8t_4 SwizzWYWX(f8t_4 V) { return MkF8t_4(V.w, V.y, V.w, V.x); }
inline f8t_4 SwizzWYWY(f8t_4 V) { return MkF8t_4(V.w, V.y, V.w, V.y); }
inline f8t_4 SwizzWYWZ(f8t_4 V) { return MkF8t_4(V.w, V.y, V.w, V.z); }
inline f8t_4 SwizzWYWW(f8t_4 V) { return MkF8t_4(V.w, V.y, V.w, V.w); }
inline f8t_4 SwizzWYW0(f8t_4 V) { return MkF8t_4(V.w, V.y, V.w, (f8t)0); }
inline f8t_4 SwizzWY0X(f8t_4 V) { return MkF8t_4(V.w, V.y, (f8t)0, V.x); }
inline f8t_4 SwizzWY0Y(f8t_4 V) { return MkF8t_4(V.w, V.y, (f8t)0, V.y); }
inline f8t_4 SwizzWY0Z(f8t_4 V) { return MkF8t_4(V.w, V.y, (f8t)0, V.z); }
inline f8t_4 SwizzWY0W(f8t_4 V) { return MkF8t_4(V.w, V.y, (f8t)0, V.w); }
inline f8t_4 SwizzWY00(f8t_4 V) { return MkF8t_4(V.w, V.y, (f8t)0, (f8t)0); }
inline f8t_4 SwizzWZXX(f8t_4 V) { return MkF8t_4(V.w, V.z, V.x, V.x); }
inline f8t_4 SwizzWZXY(f8t_4 V) { return MkF8t_4(V.w, V.z, V.x, V.y); }
inline f8t_4 SwizzWZXZ(f8t_4 V) { return MkF8t_4(V.w, V.z, V.x, V.z); }
inline f8t_4 SwizzWZXW(f8t_4 V) { return MkF8t_4(V.w, V.z, V.x, V.w); }
inline f8t_4 SwizzWZX0(f8t_4 V) { return MkF8t_4(V.w, V.z, V.x, (f8t)0); }
inline f8t_4 SwizzWZYX(f8t_4 V) { return MkF8t_4(V.w, V.z, V.y, V.x); }
inline f8t_4 SwizzWZYY(f8t_4 V) { return MkF8t_4(V.w, V.z, V.y, V.y); }
inline f8t_4 SwizzWZYZ(f8t_4 V) { return MkF8t_4(V.w, V.z, V.y, V.z); }
inline f8t_4 SwizzWZYW(f8t_4 V) { return MkF8t_4(V.w, V.z, V.y, V.w); }
inline f8t_4 SwizzWZY0(f8t_4 V) { return MkF8t_4(V.w, V.z, V.y, (f8t)0); }
inline f8t_4 SwizzWZZX(f8t_4 V) { return MkF8t_4(V.w, V.z, V.z, V.x); }
inline f8t_4 SwizzWZZY(f8t_4 V) { return MkF8t_4(V.w, V.z, V.z, V.y); }
inline f8t_4 SwizzWZZZ(f8t_4 V) { return MkF8t_4(V.w, V.z, V.z, V.z); }
inline f8t_4 SwizzWZZW(f8t_4 V) { return MkF8t_4(V.w, V.z, V.z, V.w); }
inline f8t_4 SwizzWZZ0(f8t_4 V) { return MkF8t_4(V.w, V.z, V.z, (f8t)0); }
inline f8t_4 SwizzWZWX(f8t_4 V) { return MkF8t_4(V.w, V.z, V.w, V.x); }
inline f8t_4 SwizzWZWY(f8t_4 V) { return MkF8t_4(V.w, V.z, V.w, V.y); }
inline f8t_4 SwizzWZWZ(f8t_4 V) { return MkF8t_4(V.w, V.z, V.w, V.z); }
inline f8t_4 SwizzWZWW(f8t_4 V) { return MkF8t_4(V.w, V.z, V.w, V.w); }
inline f8t_4 SwizzWZW0(f8t_4 V) { return MkF8t_4(V.w, V.z, V.w, (f8t)0); }
inline f8t_4 SwizzWZ0X(f8t_4 V) { return MkF8t_4(V.w, V.z, (f8t)0, V.x); }
inline f8t_4 SwizzWZ0Y(f8t_4 V) { return MkF8t_4(V.w, V.z, (f8t)0, V.y); }
inline f8t_4 SwizzWZ0Z(f8t_4 V) { return MkF8t_4(V.w, V.z, (f8t)0, V.z); }
inline f8t_4 SwizzWZ0W(f8t_4 V) { return MkF8t_4(V.w, V.z, (f8t)0, V.w); }
inline f8t_4 SwizzWZ00(f8t_4 V) { return MkF8t_4(V.w, V.z, (f8t)0, (f8t)0); }
inline f8t_4 SwizzWWXX(f8t_4 V) { return MkF8t_4(V.w, V.w, V.x, V.x); }
inline f8t_4 SwizzWWXY(f8t_4 V) { return MkF8t_4(V.w, V.w, V.x, V.y); }
inline f8t_4 SwizzWWXZ(f8t_4 V) { return MkF8t_4(V.w, V.w, V.x, V.z); }
inline f8t_4 SwizzWWXW(f8t_4 V) { return MkF8t_4(V.w, V.w, V.x, V.w); }
inline f8t_4 SwizzWWX0(f8t_4 V) { return MkF8t_4(V.w, V.w, V.x, (f8t)0); }
inline f8t_4 SwizzWWYX(f8t_4 V) { return MkF8t_4(V.w, V.w, V.y, V.x); }
inline f8t_4 SwizzWWYY(f8t_4 V) { return MkF8t_4(V.w, V.w, V.y, V.y); }
inline f8t_4 SwizzWWYZ(f8t_4 V) { return MkF8t_4(V.w, V.w, V.y, V.z); }
inline f8t_4 SwizzWWYW(f8t_4 V) { return MkF8t_4(V.w, V.w, V.y, V.w); }
inline f8t_4 SwizzWWY0(f8t_4 V) { return MkF8t_4(V.w, V.w, V.y, (f8t)0); }
inline f8t_4 SwizzWWZX(f8t_4 V) { return MkF8t_4(V.w, V.w, V.z, V.x); }
inline f8t_4 SwizzWWZY(f8t_4 V) { return MkF8t_4(V.w, V.w, V.z, V.y); }
inline f8t_4 SwizzWWZZ(f8t_4 V) { return MkF8t_4(V.w, V.w, V.z, V.z); }
inline f8t_4 SwizzWWZW(f8t_4 V) { return MkF8t_4(V.w, V.w, V.z, V.w); }
inline f8t_4 SwizzWWZ0(f8t_4 V) { return MkF8t_4(V.w, V.w, V.z, (f8t)0); }
inline f8t_4 SwizzWWWX(f8t_4 V) { return MkF8t_4(V.w, V.w, V.w, V.x); }
inline f8t_4 SwizzWWWY(f8t_4 V) { return MkF8t_4(V.w, V.w, V.w, V.y); }
inline f8t_4 SwizzWWWZ(f8t_4 V) { return MkF8t_4(V.w, V.w, V.w, V.z); }
inline f8t_4 SwizzWWWW(f8t_4 V) { return MkF8t_4(V.w, V.w, V.w, V.w); }
inline f8t_4 SwizzWWW0(f8t_4 V) { return MkF8t_4(V.w, V.w, V.w, (f8t)0); }
inline f8t_4 SwizzWW0X(f8t_4 V) { return MkF8t_4(V.w, V.w, (f8t)0, V.x); }
inline f8t_4 SwizzWW0Y(f8t_4 V) { return MkF8t_4(V.w, V.w, (f8t)0, V.y); }
inline f8t_4 SwizzWW0Z(f8t_4 V) { return MkF8t_4(V.w, V.w, (f8t)0, V.z); }
inline f8t_4 SwizzWW0W(f8t_4 V) { return MkF8t_4(V.w, V.w, (f8t)0, V.w); }
inline f8t_4 SwizzWW00(f8t_4 V) { return MkF8t_4(V.w, V.w, (f8t)0, (f8t)0); }
inline f8t_4 SwizzW0XX(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.x, V.x); }
inline f8t_4 SwizzW0XY(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.x, V.y); }
inline f8t_4 SwizzW0XZ(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.x, V.z); }
inline f8t_4 SwizzW0XW(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.x, V.w); }
inline f8t_4 SwizzW0X0(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.x, (f8t)0); }
inline f8t_4 SwizzW0YX(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.y, V.x); }
inline f8t_4 SwizzW0YY(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.y, V.y); }
inline f8t_4 SwizzW0YZ(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.y, V.z); }
inline f8t_4 SwizzW0YW(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.y, V.w); }
inline f8t_4 SwizzW0Y0(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.y, (f8t)0); }
inline f8t_4 SwizzW0ZX(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.z, V.x); }
inline f8t_4 SwizzW0ZY(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.z, V.y); }
inline f8t_4 SwizzW0ZZ(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.z, V.z); }
inline f8t_4 SwizzW0ZW(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.z, V.w); }
inline f8t_4 SwizzW0Z0(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.z, (f8t)0); }
inline f8t_4 SwizzW0WX(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.w, V.x); }
inline f8t_4 SwizzW0WY(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.w, V.y); }
inline f8t_4 SwizzW0WZ(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.w, V.z); }
inline f8t_4 SwizzW0WW(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.w, V.w); }
inline f8t_4 SwizzW0W0(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, V.w, (f8t)0); }
inline f8t_4 SwizzW00X(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, (f8t)0, V.x); }
inline f8t_4 SwizzW00Y(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, (f8t)0, V.y); }
inline f8t_4 SwizzW00Z(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, (f8t)0, V.z); }
inline f8t_4 SwizzW00W(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, (f8t)0, V.w); }
inline f8t_4 SwizzW000(f8t_4 V) { return MkF8t_4(V.w, (f8t)0, (f8t)0, (f8t)0); }
inline f8t_4 Swizz0XXX(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.x, V.x); }
inline f8t_4 Swizz0XXY(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.x, V.y); }
inline f8t_4 Swizz0XXZ(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.x, V.z); }
inline f8t_4 Swizz0XXW(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.x, V.w); }
inline f8t_4 Swizz0XX0(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.x, (f8t)0); }
inline f8t_4 Swizz0XYX(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.y, V.x); }
inline f8t_4 Swizz0XYY(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.y, V.y); }
inline f8t_4 Swizz0XYZ(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.y, V.z); }
inline f8t_4 Swizz0XYW(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.y, V.w); }
inline f8t_4 Swizz0XY0(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.y, (f8t)0); }
inline f8t_4 Swizz0XZX(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.z, V.x); }
inline f8t_4 Swizz0XZY(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.z, V.y); }
inline f8t_4 Swizz0XZZ(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.z, V.z); }
inline f8t_4 Swizz0XZW(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.z, V.w); }
inline f8t_4 Swizz0XZ0(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.z, (f8t)0); }
inline f8t_4 Swizz0XWX(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.w, V.x); }
inline f8t_4 Swizz0XWY(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.w, V.y); }
inline f8t_4 Swizz0XWZ(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.w, V.z); }
inline f8t_4 Swizz0XWW(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.w, V.w); }
inline f8t_4 Swizz0XW0(f8t_4 V) { return MkF8t_4((f8t)0, V.x, V.w, (f8t)0); }
inline f8t_4 Swizz0X0X(f8t_4 V) { return MkF8t_4((f8t)0, V.x, (f8t)0, V.x); }
inline f8t_4 Swizz0X0Y(f8t_4 V) { return MkF8t_4((f8t)0, V.x, (f8t)0, V.y); }
inline f8t_4 Swizz0X0Z(f8t_4 V) { return MkF8t_4((f8t)0, V.x, (f8t)0, V.z); }
inline f8t_4 Swizz0X0W(f8t_4 V) { return MkF8t_4((f8t)0, V.x, (f8t)0, V.w); }
inline f8t_4 Swizz0X00(f8t_4 V) { return MkF8t_4((f8t)0, V.x, (f8t)0, (f8t)0); }
inline f8t_4 Swizz0YXX(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.x, V.x); }
inline f8t_4 Swizz0YXY(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.x, V.y); }
inline f8t_4 Swizz0YXZ(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.x, V.z); }
inline f8t_4 Swizz0YXW(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.x, V.w); }
inline f8t_4 Swizz0YX0(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.x, (f8t)0); }
inline f8t_4 Swizz0YYX(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.y, V.x); }
inline f8t_4 Swizz0YYY(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.y, V.y); }
inline f8t_4 Swizz0YYZ(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.y, V.z); }
inline f8t_4 Swizz0YYW(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.y, V.w); }
inline f8t_4 Swizz0YY0(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.y, (f8t)0); }
inline f8t_4 Swizz0YZX(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.z, V.x); }
inline f8t_4 Swizz0YZY(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.z, V.y); }
inline f8t_4 Swizz0YZZ(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.z, V.z); }
inline f8t_4 Swizz0YZW(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.z, V.w); }
inline f8t_4 Swizz0YZ0(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.z, (f8t)0); }
inline f8t_4 Swizz0YWX(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.w, V.x); }
inline f8t_4 Swizz0YWY(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.w, V.y); }
inline f8t_4 Swizz0YWZ(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.w, V.z); }
inline f8t_4 Swizz0YWW(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.w, V.w); }
inline f8t_4 Swizz0YW0(f8t_4 V) { return MkF8t_4((f8t)0, V.y, V.w, (f8t)0); }
inline f8t_4 Swizz0Y0X(f8t_4 V) { return MkF8t_4((f8t)0, V.y, (f8t)0, V.x); }
inline f8t_4 Swizz0Y0Y(f8t_4 V) { return MkF8t_4((f8t)0, V.y, (f8t)0, V.y); }
inline f8t_4 Swizz0Y0Z(f8t_4 V) { return MkF8t_4((f8t)0, V.y, (f8t)0, V.z); }
inline f8t_4 Swizz0Y0W(f8t_4 V) { return MkF8t_4((f8t)0, V.y, (f8t)0, V.w); }
inline f8t_4 Swizz0Y00(f8t_4 V) { return MkF8t_4((f8t)0, V.y, (f8t)0, (f8t)0); }
inline f8t_4 Swizz0ZXX(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.x, V.x); }
inline f8t_4 Swizz0ZXY(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.x, V.y); }
inline f8t_4 Swizz0ZXZ(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.x, V.z); }
inline f8t_4 Swizz0ZXW(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.x, V.w); }
inline f8t_4 Swizz0ZX0(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.x, (f8t)0); }
inline f8t_4 Swizz0ZYX(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.y, V.x); }
inline f8t_4 Swizz0ZYY(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.y, V.y); }
inline f8t_4 Swizz0ZYZ(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.y, V.z); }
inline f8t_4 Swizz0ZYW(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.y, V.w); }
inline f8t_4 Swizz0ZY0(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.y, (f8t)0); }
inline f8t_4 Swizz0ZZX(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.z, V.x); }
inline f8t_4 Swizz0ZZY(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.z, V.y); }
inline f8t_4 Swizz0ZZZ(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.z, V.z); }
inline f8t_4 Swizz0ZZW(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.z, V.w); }
inline f8t_4 Swizz0ZZ0(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.z, (f8t)0); }
inline f8t_4 Swizz0ZWX(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.w, V.x); }
inline f8t_4 Swizz0ZWY(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.w, V.y); }
inline f8t_4 Swizz0ZWZ(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.w, V.z); }
inline f8t_4 Swizz0ZWW(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.w, V.w); }
inline f8t_4 Swizz0ZW0(f8t_4 V) { return MkF8t_4((f8t)0, V.z, V.w, (f8t)0); }
inline f8t_4 Swizz0Z0X(f8t_4 V) { return MkF8t_4((f8t)0, V.z, (f8t)0, V.x); }
inline f8t_4 Swizz0Z0Y(f8t_4 V) { return MkF8t_4((f8t)0, V.z, (f8t)0, V.y); }
inline f8t_4 Swizz0Z0Z(f8t_4 V) { return MkF8t_4((f8t)0, V.z, (f8t)0, V.z); }
inline f8t_4 Swizz0Z0W(f8t_4 V) { return MkF8t_4((f8t)0, V.z, (f8t)0, V.w); }
inline f8t_4 Swizz0Z00(f8t_4 V) { return MkF8t_4((f8t)0, V.z, (f8t)0, (f8t)0); }
inline f8t_4 Swizz0WXX(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.x, V.x); }
inline f8t_4 Swizz0WXY(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.x, V.y); }
inline f8t_4 Swizz0WXZ(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.x, V.z); }
inline f8t_4 Swizz0WXW(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.x, V.w); }
inline f8t_4 Swizz0WX0(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.x, (f8t)0); }
inline f8t_4 Swizz0WYX(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.y, V.x); }
inline f8t_4 Swizz0WYY(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.y, V.y); }
inline f8t_4 Swizz0WYZ(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.y, V.z); }
inline f8t_4 Swizz0WYW(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.y, V.w); }
inline f8t_4 Swizz0WY0(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.y, (f8t)0); }
inline f8t_4 Swizz0WZX(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.z, V.x); }
inline f8t_4 Swizz0WZY(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.z, V.y); }
inline f8t_4 Swizz0WZZ(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.z, V.z); }
inline f8t_4 Swizz0WZW(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.z, V.w); }
inline f8t_4 Swizz0WZ0(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.z, (f8t)0); }
inline f8t_4 Swizz0WWX(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.w, V.x); }
inline f8t_4 Swizz0WWY(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.w, V.y); }
inline f8t_4 Swizz0WWZ(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.w, V.z); }
inline f8t_4 Swizz0WWW(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.w, V.w); }
inline f8t_4 Swizz0WW0(f8t_4 V) { return MkF8t_4((f8t)0, V.w, V.w, (f8t)0); }
inline f8t_4 Swizz0W0X(f8t_4 V) { return MkF8t_4((f8t)0, V.w, (f8t)0, V.x); }
inline f8t_4 Swizz0W0Y(f8t_4 V) { return MkF8t_4((f8t)0, V.w, (f8t)0, V.y); }
inline f8t_4 Swizz0W0Z(f8t_4 V) { return MkF8t_4((f8t)0, V.w, (f8t)0, V.z); }
inline f8t_4 Swizz0W0W(f8t_4 V) { return MkF8t_4((f8t)0, V.w, (f8t)0, V.w); }
inline f8t_4 Swizz0W00(f8t_4 V) { return MkF8t_4((f8t)0, V.w, (f8t)0, (f8t)0); }
inline f8t_4 Swizz00XX(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.x, V.x); }
inline f8t_4 Swizz00XY(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.x, V.y); }
inline f8t_4 Swizz00XZ(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.x, V.z); }
inline f8t_4 Swizz00XW(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.x, V.w); }
inline f8t_4 Swizz00X0(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.x, (f8t)0); }
inline f8t_4 Swizz00YX(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.y, V.x); }
inline f8t_4 Swizz00YY(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.y, V.y); }
inline f8t_4 Swizz00YZ(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.y, V.z); }
inline f8t_4 Swizz00YW(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.y, V.w); }
inline f8t_4 Swizz00Y0(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.y, (f8t)0); }
inline f8t_4 Swizz00ZX(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.z, V.x); }
inline f8t_4 Swizz00ZY(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.z, V.y); }
inline f8t_4 Swizz00ZZ(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.z, V.z); }
inline f8t_4 Swizz00ZW(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.z, V.w); }
inline f8t_4 Swizz00Z0(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.z, (f8t)0); }
inline f8t_4 Swizz00WX(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.w, V.x); }
inline f8t_4 Swizz00WY(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.w, V.y); }
inline f8t_4 Swizz00WZ(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.w, V.z); }
inline f8t_4 Swizz00WW(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.w, V.w); }
inline f8t_4 Swizz00W0(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, V.w, (f8t)0); }
inline f8t_4 Swizz000X(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, (f8t)0, V.x); }
inline f8t_4 Swizz000Y(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, (f8t)0, V.y); }
inline f8t_4 Swizz000Z(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, (f8t)0, V.z); }
inline f8t_4 Swizz000W(f8t_4 V) { return MkF8t_4((f8t)0, (f8t)0, (f8t)0, V.w); }
inline blt_2 SwizzXX(blt_2 V) { return MkBlt_2(V.x, V.x); }
inline blt_2 SwizzXY(blt_2 V) { return MkBlt_2(V.x, V.y); }
inline blt_2 SwizzX0(blt_2 V) { return MkBlt_2(V.x, (blt)0); }
inline blt_2 SwizzYX(blt_2 V) { return MkBlt_2(V.y, V.x); }
inline blt_2 SwizzYY(blt_2 V) { return MkBlt_2(V.y, V.y); }
inline blt_2 SwizzY0(blt_2 V) { return MkBlt_2(V.y, (blt)0); }
inline blt_2 Swizz0X(blt_2 V) { return MkBlt_2((blt)0, V.x); }
inline blt_2 Swizz0Y(blt_2 V) { return MkBlt_2((blt)0, V.y); }
inline blt_3 SwizzXXX(blt_2 V) { return MkBlt_3(V.x, V.x, V.x); }
inline blt_3 SwizzXXY(blt_2 V) { return MkBlt_3(V.x, V.x, V.y); }
inline blt_3 SwizzXX0(blt_2 V) { return MkBlt_3(V.x, V.x, (blt)0); }
inline blt_3 SwizzXYX(blt_2 V) { return MkBlt_3(V.x, V.y, V.x); }
inline blt_3 SwizzXYY(blt_2 V) { return MkBlt_3(V.x, V.y, V.y); }
inline blt_3 SwizzXY0(blt_2 V) { return MkBlt_3(V.x, V.y, (blt)0); }
inline blt_3 SwizzX0X(blt_2 V) { return MkBlt_3(V.x, (blt)0, V.x); }
inline blt_3 SwizzX0Y(blt_2 V) { return MkBlt_3(V.x, (blt)0, V.y); }
inline blt_3 SwizzX00(blt_2 V) { return MkBlt_3(V.x, (blt)0, (blt)0); }
inline blt_3 SwizzYXX(blt_2 V) { return MkBlt_3(V.y, V.x, V.x); }
inline blt_3 SwizzYXY(blt_2 V) { return MkBlt_3(V.y, V.x, V.y); }
inline blt_3 SwizzYX0(blt_2 V) { return MkBlt_3(V.y, V.x, (blt)0); }
inline blt_3 SwizzYYX(blt_2 V) { return MkBlt_3(V.y, V.y, V.x); }
inline blt_3 SwizzYYY(blt_2 V) { return MkBlt_3(V.y, V.y, V.y); }
inline blt_3 SwizzYY0(blt_2 V) { return MkBlt_3(V.y, V.y, (blt)0); }
inline blt_3 SwizzY0X(blt_2 V) { return MkBlt_3(V.y, (blt)0, V.x); }
inline blt_3 SwizzY0Y(blt_2 V) { return MkBlt_3(V.y, (blt)0, V.y); }
inline blt_3 SwizzY00(blt_2 V) { return MkBlt_3(V.y, (blt)0, (blt)0); }
inline blt_3 Swizz0XX(blt_2 V) { return MkBlt_3((blt)0, V.x, V.x); }
inline blt_3 Swizz0XY(blt_2 V) { return MkBlt_3((blt)0, V.x, V.y); }
inline blt_3 Swizz0X0(blt_2 V) { return MkBlt_3((blt)0, V.x, (blt)0); }
inline blt_3 Swizz0YX(blt_2 V) { return MkBlt_3((blt)0, V.y, V.x); }
inline blt_3 Swizz0YY(blt_2 V) { return MkBlt_3((blt)0, V.y, V.y); }
inline blt_3 Swizz0Y0(blt_2 V) { return MkBlt_3((blt)0, V.y, (blt)0); }
inline blt_3 Swizz00X(blt_2 V) { return MkBlt_3((blt)0, (blt)0, V.x); }
inline blt_3 Swizz00Y(blt_2 V) { return MkBlt_3((blt)0, (blt)0, V.y); }
inline blt_4 SwizzXXXX(blt_2 V) { return MkBlt_4(V.x, V.x, V.x, V.x); }
inline blt_4 SwizzXXXY(blt_2 V) { return MkBlt_4(V.x, V.x, V.x, V.y); }
inline blt_4 SwizzXXX0(blt_2 V) { return MkBlt_4(V.x, V.x, V.x, (blt)0); }
inline blt_4 SwizzXXYX(blt_2 V) { return MkBlt_4(V.x, V.x, V.y, V.x); }
inline blt_4 SwizzXXYY(blt_2 V) { return MkBlt_4(V.x, V.x, V.y, V.y); }
inline blt_4 SwizzXXY0(blt_2 V) { return MkBlt_4(V.x, V.x, V.y, (blt)0); }
inline blt_4 SwizzXX0X(blt_2 V) { return MkBlt_4(V.x, V.x, (blt)0, V.x); }
inline blt_4 SwizzXX0Y(blt_2 V) { return MkBlt_4(V.x, V.x, (blt)0, V.y); }
inline blt_4 SwizzXX00(blt_2 V) { return MkBlt_4(V.x, V.x, (blt)0, (blt)0); }
inline blt_4 SwizzXYXX(blt_2 V) { return MkBlt_4(V.x, V.y, V.x, V.x); }
inline blt_4 SwizzXYXY(blt_2 V) { return MkBlt_4(V.x, V.y, V.x, V.y); }
inline blt_4 SwizzXYX0(blt_2 V) { return MkBlt_4(V.x, V.y, V.x, (blt)0); }
inline blt_4 SwizzXYYX(blt_2 V) { return MkBlt_4(V.x, V.y, V.y, V.x); }
inline blt_4 SwizzXYYY(blt_2 V) { return MkBlt_4(V.x, V.y, V.y, V.y); }
inline blt_4 SwizzXYY0(blt_2 V) { return MkBlt_4(V.x, V.y, V.y, (blt)0); }
inline blt_4 SwizzXY0X(blt_2 V) { return MkBlt_4(V.x, V.y, (blt)0, V.x); }
inline blt_4 SwizzXY0Y(blt_2 V) { return MkBlt_4(V.x, V.y, (blt)0, V.y); }
inline blt_4 SwizzXY00(blt_2 V) { return MkBlt_4(V.x, V.y, (blt)0, (blt)0); }
inline blt_4 SwizzX0XX(blt_2 V) { return MkBlt_4(V.x, (blt)0, V.x, V.x); }
inline blt_4 SwizzX0XY(blt_2 V) { return MkBlt_4(V.x, (blt)0, V.x, V.y); }
inline blt_4 SwizzX0X0(blt_2 V) { return MkBlt_4(V.x, (blt)0, V.x, (blt)0); }
inline blt_4 SwizzX0YX(blt_2 V) { return MkBlt_4(V.x, (blt)0, V.y, V.x); }
inline blt_4 SwizzX0YY(blt_2 V) { return MkBlt_4(V.x, (blt)0, V.y, V.y); }
inline blt_4 SwizzX0Y0(blt_2 V) { return MkBlt_4(V.x, (blt)0, V.y, (blt)0); }
inline blt_4 SwizzX00X(blt_2 V) { return MkBlt_4(V.x, (blt)0, (blt)0, V.x); }
inline blt_4 SwizzX00Y(blt_2 V) { return MkBlt_4(V.x, (blt)0, (blt)0, V.y); }
inline blt_4 SwizzX000(blt_2 V) { return MkBlt_4(V.x, (blt)0, (blt)0, (blt)0); }
inline blt_4 SwizzYXXX(blt_2 V) { return MkBlt_4(V.y, V.x, V.x, V.x); }
inline blt_4 SwizzYXXY(blt_2 V) { return MkBlt_4(V.y, V.x, V.x, V.y); }
inline blt_4 SwizzYXX0(blt_2 V) { return MkBlt_4(V.y, V.x, V.x, (blt)0); }
inline blt_4 SwizzYXYX(blt_2 V) { return MkBlt_4(V.y, V.x, V.y, V.x); }
inline blt_4 SwizzYXYY(blt_2 V) { return MkBlt_4(V.y, V.x, V.y, V.y); }
inline blt_4 SwizzYXY0(blt_2 V) { return MkBlt_4(V.y, V.x, V.y, (blt)0); }
inline blt_4 SwizzYX0X(blt_2 V) { return MkBlt_4(V.y, V.x, (blt)0, V.x); }
inline blt_4 SwizzYX0Y(blt_2 V) { return MkBlt_4(V.y, V.x, (blt)0, V.y); }
inline blt_4 SwizzYX00(blt_2 V) { return MkBlt_4(V.y, V.x, (blt)0, (blt)0); }
inline blt_4 SwizzYYXX(blt_2 V) { return MkBlt_4(V.y, V.y, V.x, V.x); }
inline blt_4 SwizzYYXY(blt_2 V) { return MkBlt_4(V.y, V.y, V.x, V.y); }
inline blt_4 SwizzYYX0(blt_2 V) { return MkBlt_4(V.y, V.y, V.x, (blt)0); }
inline blt_4 SwizzYYYX(blt_2 V) { return MkBlt_4(V.y, V.y, V.y, V.x); }
inline blt_4 SwizzYYYY(blt_2 V) { return MkBlt_4(V.y, V.y, V.y, V.y); }
inline blt_4 SwizzYYY0(blt_2 V) { return MkBlt_4(V.y, V.y, V.y, (blt)0); }
inline blt_4 SwizzYY0X(blt_2 V) { return MkBlt_4(V.y, V.y, (blt)0, V.x); }
inline blt_4 SwizzYY0Y(blt_2 V) { return MkBlt_4(V.y, V.y, (blt)0, V.y); }
inline blt_4 SwizzYY00(blt_2 V) { return MkBlt_4(V.y, V.y, (blt)0, (blt)0); }
inline blt_4 SwizzY0XX(blt_2 V) { return MkBlt_4(V.y, (blt)0, V.x, V.x); }
inline blt_4 SwizzY0XY(blt_2 V) { return MkBlt_4(V.y, (blt)0, V.x, V.y); }
inline blt_4 SwizzY0X0(blt_2 V) { return MkBlt_4(V.y, (blt)0, V.x, (blt)0); }
inline blt_4 SwizzY0YX(blt_2 V) { return MkBlt_4(V.y, (blt)0, V.y, V.x); }
inline blt_4 SwizzY0YY(blt_2 V) { return MkBlt_4(V.y, (blt)0, V.y, V.y); }
inline blt_4 SwizzY0Y0(blt_2 V) { return MkBlt_4(V.y, (blt)0, V.y, (blt)0); }
inline blt_4 SwizzY00X(blt_2 V) { return MkBlt_4(V.y, (blt)0, (blt)0, V.x); }
inline blt_4 SwizzY00Y(blt_2 V) { return MkBlt_4(V.y, (blt)0, (blt)0, V.y); }
inline blt_4 SwizzY000(blt_2 V) { return MkBlt_4(V.y, (blt)0, (blt)0, (blt)0); }
inline blt_4 Swizz0XXX(blt_2 V) { return MkBlt_4((blt)0, V.x, V.x, V.x); }
inline blt_4 Swizz0XXY(blt_2 V) { return MkBlt_4((blt)0, V.x, V.x, V.y); }
inline blt_4 Swizz0XX0(blt_2 V) { return MkBlt_4((blt)0, V.x, V.x, (blt)0); }
inline blt_4 Swizz0XYX(blt_2 V) { return MkBlt_4((blt)0, V.x, V.y, V.x); }
inline blt_4 Swizz0XYY(blt_2 V) { return MkBlt_4((blt)0, V.x, V.y, V.y); }
inline blt_4 Swizz0XY0(blt_2 V) { return MkBlt_4((blt)0, V.x, V.y, (blt)0); }
inline blt_4 Swizz0X0X(blt_2 V) { return MkBlt_4((blt)0, V.x, (blt)0, V.x); }
inline blt_4 Swizz0X0Y(blt_2 V) { return MkBlt_4((blt)0, V.x, (blt)0, V.y); }
inline blt_4 Swizz0X00(blt_2 V) { return MkBlt_4((blt)0, V.x, (blt)0, (blt)0); }
inline blt_4 Swizz0YXX(blt_2 V) { return MkBlt_4((blt)0, V.y, V.x, V.x); }
inline blt_4 Swizz0YXY(blt_2 V) { return MkBlt_4((blt)0, V.y, V.x, V.y); }
inline blt_4 Swizz0YX0(blt_2 V) { return MkBlt_4((blt)0, V.y, V.x, (blt)0); }
inline blt_4 Swizz0YYX(blt_2 V) { return MkBlt_4((blt)0, V.y, V.y, V.x); }
inline blt_4 Swizz0YYY(blt_2 V) { return MkBlt_4((blt)0, V.y, V.y, V.y); }
inline blt_4 Swizz0YY0(blt_2 V) { return MkBlt_4((blt)0, V.y, V.y, (blt)0); }
inline blt_4 Swizz0Y0X(blt_2 V) { return MkBlt_4((blt)0, V.y, (blt)0, V.x); }
inline blt_4 Swizz0Y0Y(blt_2 V) { return MkBlt_4((blt)0, V.y, (blt)0, V.y); }
inline blt_4 Swizz0Y00(blt_2 V) { return MkBlt_4((blt)0, V.y, (blt)0, (blt)0); }
inline blt_4 Swizz00XX(blt_2 V) { return MkBlt_4((blt)0, (blt)0, V.x, V.x); }
inline blt_4 Swizz00XY(blt_2 V) { return MkBlt_4((blt)0, (blt)0, V.x, V.y); }
inline blt_4 Swizz00X0(blt_2 V) { return MkBlt_4((blt)0, (blt)0, V.x, (blt)0); }
inline blt_4 Swizz00YX(blt_2 V) { return MkBlt_4((blt)0, (blt)0, V.y, V.x); }
inline blt_4 Swizz00YY(blt_2 V) { return MkBlt_4((blt)0, (blt)0, V.y, V.y); }
inline blt_4 Swizz00Y0(blt_2 V) { return MkBlt_4((blt)0, (blt)0, V.y, (blt)0); }
inline blt_4 Swizz000X(blt_2 V) { return MkBlt_4((blt)0, (blt)0, (blt)0, V.x); }
inline blt_4 Swizz000Y(blt_2 V) { return MkBlt_4((blt)0, (blt)0, (blt)0, V.y); }
inline blt_2 SwizzXX(blt_3 V) { return MkBlt_2(V.x, V.x); }
inline blt_2 SwizzXY(blt_3 V) { return MkBlt_2(V.x, V.y); }
inline blt_2 SwizzXZ(blt_3 V) { return MkBlt_2(V.x, V.z); }
inline blt_2 SwizzX0(blt_3 V) { return MkBlt_2(V.x, (blt)0); }
inline blt_2 SwizzYX(blt_3 V) { return MkBlt_2(V.y, V.x); }
inline blt_2 SwizzYY(blt_3 V) { return MkBlt_2(V.y, V.y); }
inline blt_2 SwizzYZ(blt_3 V) { return MkBlt_2(V.y, V.z); }
inline blt_2 SwizzY0(blt_3 V) { return MkBlt_2(V.y, (blt)0); }
inline blt_2 SwizzZX(blt_3 V) { return MkBlt_2(V.z, V.x); }
inline blt_2 SwizzZY(blt_3 V) { return MkBlt_2(V.z, V.y); }
inline blt_2 SwizzZZ(blt_3 V) { return MkBlt_2(V.z, V.z); }
inline blt_2 SwizzZ0(blt_3 V) { return MkBlt_2(V.z, (blt)0); }
inline blt_2 Swizz0X(blt_3 V) { return MkBlt_2((blt)0, V.x); }
inline blt_2 Swizz0Y(blt_3 V) { return MkBlt_2((blt)0, V.y); }
inline blt_2 Swizz0Z(blt_3 V) { return MkBlt_2((blt)0, V.z); }
inline blt_3 SwizzXXX(blt_3 V) { return MkBlt_3(V.x, V.x, V.x); }
inline blt_3 SwizzXXY(blt_3 V) { return MkBlt_3(V.x, V.x, V.y); }
inline blt_3 SwizzXXZ(blt_3 V) { return MkBlt_3(V.x, V.x, V.z); }
inline blt_3 SwizzXX0(blt_3 V) { return MkBlt_3(V.x, V.x, (blt)0); }
inline blt_3 SwizzXYX(blt_3 V) { return MkBlt_3(V.x, V.y, V.x); }
inline blt_3 SwizzXYY(blt_3 V) { return MkBlt_3(V.x, V.y, V.y); }
inline blt_3 SwizzXYZ(blt_3 V) { return MkBlt_3(V.x, V.y, V.z); }
inline blt_3 SwizzXY0(blt_3 V) { return MkBlt_3(V.x, V.y, (blt)0); }
inline blt_3 SwizzXZX(blt_3 V) { return MkBlt_3(V.x, V.z, V.x); }
inline blt_3 SwizzXZY(blt_3 V) { return MkBlt_3(V.x, V.z, V.y); }
inline blt_3 SwizzXZZ(blt_3 V) { return MkBlt_3(V.x, V.z, V.z); }
inline blt_3 SwizzXZ0(blt_3 V) { return MkBlt_3(V.x, V.z, (blt)0); }
inline blt_3 SwizzX0X(blt_3 V) { return MkBlt_3(V.x, (blt)0, V.x); }
inline blt_3 SwizzX0Y(blt_3 V) { return MkBlt_3(V.x, (blt)0, V.y); }
inline blt_3 SwizzX0Z(blt_3 V) { return MkBlt_3(V.x, (blt)0, V.z); }
inline blt_3 SwizzX00(blt_3 V) { return MkBlt_3(V.x, (blt)0, (blt)0); }
inline blt_3 SwizzYXX(blt_3 V) { return MkBlt_3(V.y, V.x, V.x); }
inline blt_3 SwizzYXY(blt_3 V) { return MkBlt_3(V.y, V.x, V.y); }
inline blt_3 SwizzYXZ(blt_3 V) { return MkBlt_3(V.y, V.x, V.z); }
inline blt_3 SwizzYX0(blt_3 V) { return MkBlt_3(V.y, V.x, (blt)0); }
inline blt_3 SwizzYYX(blt_3 V) { return MkBlt_3(V.y, V.y, V.x); }
inline blt_3 SwizzYYY(blt_3 V) { return MkBlt_3(V.y, V.y, V.y); }
inline blt_3 SwizzYYZ(blt_3 V) { return MkBlt_3(V.y, V.y, V.z); }
inline blt_3 SwizzYY0(blt_3 V) { return MkBlt_3(V.y, V.y, (blt)0); }
inline blt_3 SwizzYZX(blt_3 V) { return MkBlt_3(V.y, V.z, V.x); }
inline blt_3 SwizzYZY(blt_3 V) { return MkBlt_3(V.y, V.z, V.y); }
inline blt_3 SwizzYZZ(blt_3 V) { return MkBlt_3(V.y, V.z, V.z); }
inline blt_3 SwizzYZ0(blt_3 V) { return MkBlt_3(V.y, V.z, (blt)0); }
inline blt_3 SwizzY0X(blt_3 V) { return MkBlt_3(V.y, (blt)0, V.x); }
inline blt_3 SwizzY0Y(blt_3 V) { return MkBlt_3(V.y, (blt)0, V.y); }
inline blt_3 SwizzY0Z(blt_3 V) { return MkBlt_3(V.y, (blt)0, V.z); }
inline blt_3 SwizzY00(blt_3 V) { return MkBlt_3(V.y, (blt)0, (blt)0); }
inline blt_3 SwizzZXX(blt_3 V) { return MkBlt_3(V.z, V.x, V.x); }
inline blt_3 SwizzZXY(blt_3 V) { return MkBlt_3(V.z, V.x, V.y); }
inline blt_3 SwizzZXZ(blt_3 V) { return MkBlt_3(V.z, V.x, V.z); }
inline blt_3 SwizzZX0(blt_3 V) { return MkBlt_3(V.z, V.x, (blt)0); }
inline blt_3 SwizzZYX(blt_3 V) { return MkBlt_3(V.z, V.y, V.x); }
inline blt_3 SwizzZYY(blt_3 V) { return MkBlt_3(V.z, V.y, V.y); }
inline blt_3 SwizzZYZ(blt_3 V) { return MkBlt_3(V.z, V.y, V.z); }
inline blt_3 SwizzZY0(blt_3 V) { return MkBlt_3(V.z, V.y, (blt)0); }
inline blt_3 SwizzZZX(blt_3 V) { return MkBlt_3(V.z, V.z, V.x); }
inline blt_3 SwizzZZY(blt_3 V) { return MkBlt_3(V.z, V.z, V.y); }
inline blt_3 SwizzZZZ(blt_3 V) { return MkBlt_3(V.z, V.z, V.z); }
inline blt_3 SwizzZZ0(blt_3 V) { return MkBlt_3(V.z, V.z, (blt)0); }
inline blt_3 SwizzZ0X(blt_3 V) { return MkBlt_3(V.z, (blt)0, V.x); }
inline blt_3 SwizzZ0Y(blt_3 V) { return MkBlt_3(V.z, (blt)0, V.y); }
inline blt_3 SwizzZ0Z(blt_3 V) { return MkBlt_3(V.z, (blt)0, V.z); }
inline blt_3 SwizzZ00(blt_3 V) { return MkBlt_3(V.z, (blt)0, (blt)0); }
inline blt_3 Swizz0XX(blt_3 V) { return MkBlt_3((blt)0, V.x, V.x); }
inline blt_3 Swizz0XY(blt_3 V) { return MkBlt_3((blt)0, V.x, V.y); }
inline blt_3 Swizz0XZ(blt_3 V) { return MkBlt_3((blt)0, V.x, V.z); }
inline blt_3 Swizz0X0(blt_3 V) { return MkBlt_3((blt)0, V.x, (blt)0); }
inline blt_3 Swizz0YX(blt_3 V) { return MkBlt_3((blt)0, V.y, V.x); }
inline blt_3 Swizz0YY(blt_3 V) { return MkBlt_3((blt)0, V.y, V.y); }
inline blt_3 Swizz0YZ(blt_3 V) { return MkBlt_3((blt)0, V.y, V.z); }
inline blt_3 Swizz0Y0(blt_3 V) { return MkBlt_3((blt)0, V.y, (blt)0); }
inline blt_3 Swizz0ZX(blt_3 V) { return MkBlt_3((blt)0, V.z, V.x); }
inline blt_3 Swizz0ZY(blt_3 V) { return MkBlt_3((blt)0, V.z, V.y); }
inline blt_3 Swizz0ZZ(blt_3 V) { return MkBlt_3((blt)0, V.z, V.z); }
inline blt_3 Swizz0Z0(blt_3 V) { return MkBlt_3((blt)0, V.z, (blt)0); }
inline blt_3 Swizz00X(blt_3 V) { return MkBlt_3((blt)0, (blt)0, V.x); }
inline blt_3 Swizz00Y(blt_3 V) { return MkBlt_3((blt)0, (blt)0, V.y); }
inline blt_3 Swizz00Z(blt_3 V) { return MkBlt_3((blt)0, (blt)0, V.z); }
inline blt_4 SwizzXXXX(blt_3 V) { return MkBlt_4(V.x, V.x, V.x, V.x); }
inline blt_4 SwizzXXXY(blt_3 V) { return MkBlt_4(V.x, V.x, V.x, V.y); }
inline blt_4 SwizzXXXZ(blt_3 V) { return MkBlt_4(V.x, V.x, V.x, V.z); }
inline blt_4 SwizzXXX0(blt_3 V) { return MkBlt_4(V.x, V.x, V.x, (blt)0); }
inline blt_4 SwizzXXYX(blt_3 V) { return MkBlt_4(V.x, V.x, V.y, V.x); }
inline blt_4 SwizzXXYY(blt_3 V) { return MkBlt_4(V.x, V.x, V.y, V.y); }
inline blt_4 SwizzXXYZ(blt_3 V) { return MkBlt_4(V.x, V.x, V.y, V.z); }
inline blt_4 SwizzXXY0(blt_3 V) { return MkBlt_4(V.x, V.x, V.y, (blt)0); }
inline blt_4 SwizzXXZX(blt_3 V) { return MkBlt_4(V.x, V.x, V.z, V.x); }
inline blt_4 SwizzXXZY(blt_3 V) { return MkBlt_4(V.x, V.x, V.z, V.y); }
inline blt_4 SwizzXXZZ(blt_3 V) { return MkBlt_4(V.x, V.x, V.z, V.z); }
inline blt_4 SwizzXXZ0(blt_3 V) { return MkBlt_4(V.x, V.x, V.z, (blt)0); }
inline blt_4 SwizzXX0X(blt_3 V) { return MkBlt_4(V.x, V.x, (blt)0, V.x); }
inline blt_4 SwizzXX0Y(blt_3 V) { return MkBlt_4(V.x, V.x, (blt)0, V.y); }
inline blt_4 SwizzXX0Z(blt_3 V) { return MkBlt_4(V.x, V.x, (blt)0, V.z); }
inline blt_4 SwizzXX00(blt_3 V) { return MkBlt_4(V.x, V.x, (blt)0, (blt)0); }
inline blt_4 SwizzXYXX(blt_3 V) { return MkBlt_4(V.x, V.y, V.x, V.x); }
inline blt_4 SwizzXYXY(blt_3 V) { return MkBlt_4(V.x, V.y, V.x, V.y); }
inline blt_4 SwizzXYXZ(blt_3 V) { return MkBlt_4(V.x, V.y, V.x, V.z); }
inline blt_4 SwizzXYX0(blt_3 V) { return MkBlt_4(V.x, V.y, V.x, (blt)0); }
inline blt_4 SwizzXYYX(blt_3 V) { return MkBlt_4(V.x, V.y, V.y, V.x); }
inline blt_4 SwizzXYYY(blt_3 V) { return MkBlt_4(V.x, V.y, V.y, V.y); }
inline blt_4 SwizzXYYZ(blt_3 V) { return MkBlt_4(V.x, V.y, V.y, V.z); }
inline blt_4 SwizzXYY0(blt_3 V) { return MkBlt_4(V.x, V.y, V.y, (blt)0); }
inline blt_4 SwizzXYZX(blt_3 V) { return MkBlt_4(V.x, V.y, V.z, V.x); }
inline blt_4 SwizzXYZY(blt_3 V) { return MkBlt_4(V.x, V.y, V.z, V.y); }
inline blt_4 SwizzXYZZ(blt_3 V) { return MkBlt_4(V.x, V.y, V.z, V.z); }
inline blt_4 SwizzXYZ0(blt_3 V) { return MkBlt_4(V.x, V.y, V.z, (blt)0); }
inline blt_4 SwizzXY0X(blt_3 V) { return MkBlt_4(V.x, V.y, (blt)0, V.x); }
inline blt_4 SwizzXY0Y(blt_3 V) { return MkBlt_4(V.x, V.y, (blt)0, V.y); }
inline blt_4 SwizzXY0Z(blt_3 V) { return MkBlt_4(V.x, V.y, (blt)0, V.z); }
inline blt_4 SwizzXY00(blt_3 V) { return MkBlt_4(V.x, V.y, (blt)0, (blt)0); }
inline blt_4 SwizzXZXX(blt_3 V) { return MkBlt_4(V.x, V.z, V.x, V.x); }
inline blt_4 SwizzXZXY(blt_3 V) { return MkBlt_4(V.x, V.z, V.x, V.y); }
inline blt_4 SwizzXZXZ(blt_3 V) { return MkBlt_4(V.x, V.z, V.x, V.z); }
inline blt_4 SwizzXZX0(blt_3 V) { return MkBlt_4(V.x, V.z, V.x, (blt)0); }
inline blt_4 SwizzXZYX(blt_3 V) { return MkBlt_4(V.x, V.z, V.y, V.x); }
inline blt_4 SwizzXZYY(blt_3 V) { return MkBlt_4(V.x, V.z, V.y, V.y); }
inline blt_4 SwizzXZYZ(blt_3 V) { return MkBlt_4(V.x, V.z, V.y, V.z); }
inline blt_4 SwizzXZY0(blt_3 V) { return MkBlt_4(V.x, V.z, V.y, (blt)0); }
inline blt_4 SwizzXZZX(blt_3 V) { return MkBlt_4(V.x, V.z, V.z, V.x); }
inline blt_4 SwizzXZZY(blt_3 V) { return MkBlt_4(V.x, V.z, V.z, V.y); }
inline blt_4 SwizzXZZZ(blt_3 V) { return MkBlt_4(V.x, V.z, V.z, V.z); }
inline blt_4 SwizzXZZ0(blt_3 V) { return MkBlt_4(V.x, V.z, V.z, (blt)0); }
inline blt_4 SwizzXZ0X(blt_3 V) { return MkBlt_4(V.x, V.z, (blt)0, V.x); }
inline blt_4 SwizzXZ0Y(blt_3 V) { return MkBlt_4(V.x, V.z, (blt)0, V.y); }
inline blt_4 SwizzXZ0Z(blt_3 V) { return MkBlt_4(V.x, V.z, (blt)0, V.z); }
inline blt_4 SwizzXZ00(blt_3 V) { return MkBlt_4(V.x, V.z, (blt)0, (blt)0); }
inline blt_4 SwizzX0XX(blt_3 V) { return MkBlt_4(V.x, (blt)0, V.x, V.x); }
inline blt_4 SwizzX0XY(blt_3 V) { return MkBlt_4(V.x, (blt)0, V.x, V.y); }
inline blt_4 SwizzX0XZ(blt_3 V) { return MkBlt_4(V.x, (blt)0, V.x, V.z); }
inline blt_4 SwizzX0X0(blt_3 V) { return MkBlt_4(V.x, (blt)0, V.x, (blt)0); }
inline blt_4 SwizzX0YX(blt_3 V) { return MkBlt_4(V.x, (blt)0, V.y, V.x); }
inline blt_4 SwizzX0YY(blt_3 V) { return MkBlt_4(V.x, (blt)0, V.y, V.y); }
inline blt_4 SwizzX0YZ(blt_3 V) { return MkBlt_4(V.x, (blt)0, V.y, V.z); }
inline blt_4 SwizzX0Y0(blt_3 V) { return MkBlt_4(V.x, (blt)0, V.y, (blt)0); }
inline blt_4 SwizzX0ZX(blt_3 V) { return MkBlt_4(V.x, (blt)0, V.z, V.x); }
inline blt_4 SwizzX0ZY(blt_3 V) { return MkBlt_4(V.x, (blt)0, V.z, V.y); }
inline blt_4 SwizzX0ZZ(blt_3 V) { return MkBlt_4(V.x, (blt)0, V.z, V.z); }
inline blt_4 SwizzX0Z0(blt_3 V) { return MkBlt_4(V.x, (blt)0, V.z, (blt)0); }
inline blt_4 SwizzX00X(blt_3 V) { return MkBlt_4(V.x, (blt)0, (blt)0, V.x); }
inline blt_4 SwizzX00Y(blt_3 V) { return MkBlt_4(V.x, (blt)0, (blt)0, V.y); }
inline blt_4 SwizzX00Z(blt_3 V) { return MkBlt_4(V.x, (blt)0, (blt)0, V.z); }
inline blt_4 SwizzX000(blt_3 V) { return MkBlt_4(V.x, (blt)0, (blt)0, (blt)0); }
inline blt_4 SwizzYXXX(blt_3 V) { return MkBlt_4(V.y, V.x, V.x, V.x); }
inline blt_4 SwizzYXXY(blt_3 V) { return MkBlt_4(V.y, V.x, V.x, V.y); }
inline blt_4 SwizzYXXZ(blt_3 V) { return MkBlt_4(V.y, V.x, V.x, V.z); }
inline blt_4 SwizzYXX0(blt_3 V) { return MkBlt_4(V.y, V.x, V.x, (blt)0); }
inline blt_4 SwizzYXYX(blt_3 V) { return MkBlt_4(V.y, V.x, V.y, V.x); }
inline blt_4 SwizzYXYY(blt_3 V) { return MkBlt_4(V.y, V.x, V.y, V.y); }
inline blt_4 SwizzYXYZ(blt_3 V) { return MkBlt_4(V.y, V.x, V.y, V.z); }
inline blt_4 SwizzYXY0(blt_3 V) { return MkBlt_4(V.y, V.x, V.y, (blt)0); }
inline blt_4 SwizzYXZX(blt_3 V) { return MkBlt_4(V.y, V.x, V.z, V.x); }
inline blt_4 SwizzYXZY(blt_3 V) { return MkBlt_4(V.y, V.x, V.z, V.y); }
inline blt_4 SwizzYXZZ(blt_3 V) { return MkBlt_4(V.y, V.x, V.z, V.z); }
inline blt_4 SwizzYXZ0(blt_3 V) { return MkBlt_4(V.y, V.x, V.z, (blt)0); }
inline blt_4 SwizzYX0X(blt_3 V) { return MkBlt_4(V.y, V.x, (blt)0, V.x); }
inline blt_4 SwizzYX0Y(blt_3 V) { return MkBlt_4(V.y, V.x, (blt)0, V.y); }
inline blt_4 SwizzYX0Z(blt_3 V) { return MkBlt_4(V.y, V.x, (blt)0, V.z); }
inline blt_4 SwizzYX00(blt_3 V) { return MkBlt_4(V.y, V.x, (blt)0, (blt)0); }
inline blt_4 SwizzYYXX(blt_3 V) { return MkBlt_4(V.y, V.y, V.x, V.x); }
inline blt_4 SwizzYYXY(blt_3 V) { return MkBlt_4(V.y, V.y, V.x, V.y); }
inline blt_4 SwizzYYXZ(blt_3 V) { return MkBlt_4(V.y, V.y, V.x, V.z); }
inline blt_4 SwizzYYX0(blt_3 V) { return MkBlt_4(V.y, V.y, V.x, (blt)0); }
inline blt_4 SwizzYYYX(blt_3 V) { return MkBlt_4(V.y, V.y, V.y, V.x); }
inline blt_4 SwizzYYYY(blt_3 V) { return MkBlt_4(V.y, V.y, V.y, V.y); }
inline blt_4 SwizzYYYZ(blt_3 V) { return MkBlt_4(V.y, V.y, V.y, V.z); }
inline blt_4 SwizzYYY0(blt_3 V) { return MkBlt_4(V.y, V.y, V.y, (blt)0); }
inline blt_4 SwizzYYZX(blt_3 V) { return MkBlt_4(V.y, V.y, V.z, V.x); }
inline blt_4 SwizzYYZY(blt_3 V) { return MkBlt_4(V.y, V.y, V.z, V.y); }
inline blt_4 SwizzYYZZ(blt_3 V) { return MkBlt_4(V.y, V.y, V.z, V.z); }
inline blt_4 SwizzYYZ0(blt_3 V) { return MkBlt_4(V.y, V.y, V.z, (blt)0); }
inline blt_4 SwizzYY0X(blt_3 V) { return MkBlt_4(V.y, V.y, (blt)0, V.x); }
inline blt_4 SwizzYY0Y(blt_3 V) { return MkBlt_4(V.y, V.y, (blt)0, V.y); }
inline blt_4 SwizzYY0Z(blt_3 V) { return MkBlt_4(V.y, V.y, (blt)0, V.z); }
inline blt_4 SwizzYY00(blt_3 V) { return MkBlt_4(V.y, V.y, (blt)0, (blt)0); }
inline blt_4 SwizzYZXX(blt_3 V) { return MkBlt_4(V.y, V.z, V.x, V.x); }
inline blt_4 SwizzYZXY(blt_3 V) { return MkBlt_4(V.y, V.z, V.x, V.y); }
inline blt_4 SwizzYZXZ(blt_3 V) { return MkBlt_4(V.y, V.z, V.x, V.z); }
inline blt_4 SwizzYZX0(blt_3 V) { return MkBlt_4(V.y, V.z, V.x, (blt)0); }
inline blt_4 SwizzYZYX(blt_3 V) { return MkBlt_4(V.y, V.z, V.y, V.x); }
inline blt_4 SwizzYZYY(blt_3 V) { return MkBlt_4(V.y, V.z, V.y, V.y); }
inline blt_4 SwizzYZYZ(blt_3 V) { return MkBlt_4(V.y, V.z, V.y, V.z); }
inline blt_4 SwizzYZY0(blt_3 V) { return MkBlt_4(V.y, V.z, V.y, (blt)0); }
inline blt_4 SwizzYZZX(blt_3 V) { return MkBlt_4(V.y, V.z, V.z, V.x); }
inline blt_4 SwizzYZZY(blt_3 V) { return MkBlt_4(V.y, V.z, V.z, V.y); }
inline blt_4 SwizzYZZZ(blt_3 V) { return MkBlt_4(V.y, V.z, V.z, V.z); }
inline blt_4 SwizzYZZ0(blt_3 V) { return MkBlt_4(V.y, V.z, V.z, (blt)0); }
inline blt_4 SwizzYZ0X(blt_3 V) { return MkBlt_4(V.y, V.z, (blt)0, V.x); }
inline blt_4 SwizzYZ0Y(blt_3 V) { return MkBlt_4(V.y, V.z, (blt)0, V.y); }
inline blt_4 SwizzYZ0Z(blt_3 V) { return MkBlt_4(V.y, V.z, (blt)0, V.z); }
inline blt_4 SwizzYZ00(blt_3 V) { return MkBlt_4(V.y, V.z, (blt)0, (blt)0); }
inline blt_4 SwizzY0XX(blt_3 V) { return MkBlt_4(V.y, (blt)0, V.x, V.x); }
inline blt_4 SwizzY0XY(blt_3 V) { return MkBlt_4(V.y, (blt)0, V.x, V.y); }
inline blt_4 SwizzY0XZ(blt_3 V) { return MkBlt_4(V.y, (blt)0, V.x, V.z); }
inline blt_4 SwizzY0X0(blt_3 V) { return MkBlt_4(V.y, (blt)0, V.x, (blt)0); }
inline blt_4 SwizzY0YX(blt_3 V) { return MkBlt_4(V.y, (blt)0, V.y, V.x); }
inline blt_4 SwizzY0YY(blt_3 V) { return MkBlt_4(V.y, (blt)0, V.y, V.y); }
inline blt_4 SwizzY0YZ(blt_3 V) { return MkBlt_4(V.y, (blt)0, V.y, V.z); }
inline blt_4 SwizzY0Y0(blt_3 V) { return MkBlt_4(V.y, (blt)0, V.y, (blt)0); }
inline blt_4 SwizzY0ZX(blt_3 V) { return MkBlt_4(V.y, (blt)0, V.z, V.x); }
inline blt_4 SwizzY0ZY(blt_3 V) { return MkBlt_4(V.y, (blt)0, V.z, V.y); }
inline blt_4 SwizzY0ZZ(blt_3 V) { return MkBlt_4(V.y, (blt)0, V.z, V.z); }
inline blt_4 SwizzY0Z0(blt_3 V) { return MkBlt_4(V.y, (blt)0, V.z, (blt)0); }
inline blt_4 SwizzY00X(blt_3 V) { return MkBlt_4(V.y, (blt)0, (blt)0, V.x); }
inline blt_4 SwizzY00Y(blt_3 V) { return MkBlt_4(V.y, (blt)0, (blt)0, V.y); }
inline blt_4 SwizzY00Z(blt_3 V) { return MkBlt_4(V.y, (blt)0, (blt)0, V.z); }
inline blt_4 SwizzY000(blt_3 V) { return MkBlt_4(V.y, (blt)0, (blt)0, (blt)0); }
inline blt_4 SwizzZXXX(blt_3 V) { return MkBlt_4(V.z, V.x, V.x, V.x); }
inline blt_4 SwizzZXXY(blt_3 V) { return MkBlt_4(V.z, V.x, V.x, V.y); }
inline blt_4 SwizzZXXZ(blt_3 V) { return MkBlt_4(V.z, V.x, V.x, V.z); }
inline blt_4 SwizzZXX0(blt_3 V) { return MkBlt_4(V.z, V.x, V.x, (blt)0); }
inline blt_4 SwizzZXYX(blt_3 V) { return MkBlt_4(V.z, V.x, V.y, V.x); }
inline blt_4 SwizzZXYY(blt_3 V) { return MkBlt_4(V.z, V.x, V.y, V.y); }
inline blt_4 SwizzZXYZ(blt_3 V) { return MkBlt_4(V.z, V.x, V.y, V.z); }
inline blt_4 SwizzZXY0(blt_3 V) { return MkBlt_4(V.z, V.x, V.y, (blt)0); }
inline blt_4 SwizzZXZX(blt_3 V) { return MkBlt_4(V.z, V.x, V.z, V.x); }
inline blt_4 SwizzZXZY(blt_3 V) { return MkBlt_4(V.z, V.x, V.z, V.y); }
inline blt_4 SwizzZXZZ(blt_3 V) { return MkBlt_4(V.z, V.x, V.z, V.z); }
inline blt_4 SwizzZXZ0(blt_3 V) { return MkBlt_4(V.z, V.x, V.z, (blt)0); }
inline blt_4 SwizzZX0X(blt_3 V) { return MkBlt_4(V.z, V.x, (blt)0, V.x); }
inline blt_4 SwizzZX0Y(blt_3 V) { return MkBlt_4(V.z, V.x, (blt)0, V.y); }
inline blt_4 SwizzZX0Z(blt_3 V) { return MkBlt_4(V.z, V.x, (blt)0, V.z); }
inline blt_4 SwizzZX00(blt_3 V) { return MkBlt_4(V.z, V.x, (blt)0, (blt)0); }
inline blt_4 SwizzZYXX(blt_3 V) { return MkBlt_4(V.z, V.y, V.x, V.x); }
inline blt_4 SwizzZYXY(blt_3 V) { return MkBlt_4(V.z, V.y, V.x, V.y); }
inline blt_4 SwizzZYXZ(blt_3 V) { return MkBlt_4(V.z, V.y, V.x, V.z); }
inline blt_4 SwizzZYX0(blt_3 V) { return MkBlt_4(V.z, V.y, V.x, (blt)0); }
inline blt_4 SwizzZYYX(blt_3 V) { return MkBlt_4(V.z, V.y, V.y, V.x); }
inline blt_4 SwizzZYYY(blt_3 V) { return MkBlt_4(V.z, V.y, V.y, V.y); }
inline blt_4 SwizzZYYZ(blt_3 V) { return MkBlt_4(V.z, V.y, V.y, V.z); }
inline blt_4 SwizzZYY0(blt_3 V) { return MkBlt_4(V.z, V.y, V.y, (blt)0); }
inline blt_4 SwizzZYZX(blt_3 V) { return MkBlt_4(V.z, V.y, V.z, V.x); }
inline blt_4 SwizzZYZY(blt_3 V) { return MkBlt_4(V.z, V.y, V.z, V.y); }
inline blt_4 SwizzZYZZ(blt_3 V) { return MkBlt_4(V.z, V.y, V.z, V.z); }
inline blt_4 SwizzZYZ0(blt_3 V) { return MkBlt_4(V.z, V.y, V.z, (blt)0); }
inline blt_4 SwizzZY0X(blt_3 V) { return MkBlt_4(V.z, V.y, (blt)0, V.x); }
inline blt_4 SwizzZY0Y(blt_3 V) { return MkBlt_4(V.z, V.y, (blt)0, V.y); }
inline blt_4 SwizzZY0Z(blt_3 V) { return MkBlt_4(V.z, V.y, (blt)0, V.z); }
inline blt_4 SwizzZY00(blt_3 V) { return MkBlt_4(V.z, V.y, (blt)0, (blt)0); }
inline blt_4 SwizzZZXX(blt_3 V) { return MkBlt_4(V.z, V.z, V.x, V.x); }
inline blt_4 SwizzZZXY(blt_3 V) { return MkBlt_4(V.z, V.z, V.x, V.y); }
inline blt_4 SwizzZZXZ(blt_3 V) { return MkBlt_4(V.z, V.z, V.x, V.z); }
inline blt_4 SwizzZZX0(blt_3 V) { return MkBlt_4(V.z, V.z, V.x, (blt)0); }
inline blt_4 SwizzZZYX(blt_3 V) { return MkBlt_4(V.z, V.z, V.y, V.x); }
inline blt_4 SwizzZZYY(blt_3 V) { return MkBlt_4(V.z, V.z, V.y, V.y); }
inline blt_4 SwizzZZYZ(blt_3 V) { return MkBlt_4(V.z, V.z, V.y, V.z); }
inline blt_4 SwizzZZY0(blt_3 V) { return MkBlt_4(V.z, V.z, V.y, (blt)0); }
inline blt_4 SwizzZZZX(blt_3 V) { return MkBlt_4(V.z, V.z, V.z, V.x); }
inline blt_4 SwizzZZZY(blt_3 V) { return MkBlt_4(V.z, V.z, V.z, V.y); }
inline blt_4 SwizzZZZZ(blt_3 V) { return MkBlt_4(V.z, V.z, V.z, V.z); }
inline blt_4 SwizzZZZ0(blt_3 V) { return MkBlt_4(V.z, V.z, V.z, (blt)0); }
inline blt_4 SwizzZZ0X(blt_3 V) { return MkBlt_4(V.z, V.z, (blt)0, V.x); }
inline blt_4 SwizzZZ0Y(blt_3 V) { return MkBlt_4(V.z, V.z, (blt)0, V.y); }
inline blt_4 SwizzZZ0Z(blt_3 V) { return MkBlt_4(V.z, V.z, (blt)0, V.z); }
inline blt_4 SwizzZZ00(blt_3 V) { return MkBlt_4(V.z, V.z, (blt)0, (blt)0); }
inline blt_4 SwizzZ0XX(blt_3 V) { return MkBlt_4(V.z, (blt)0, V.x, V.x); }
inline blt_4 SwizzZ0XY(blt_3 V) { return MkBlt_4(V.z, (blt)0, V.x, V.y); }
inline blt_4 SwizzZ0XZ(blt_3 V) { return MkBlt_4(V.z, (blt)0, V.x, V.z); }
inline blt_4 SwizzZ0X0(blt_3 V) { return MkBlt_4(V.z, (blt)0, V.x, (blt)0); }
inline blt_4 SwizzZ0YX(blt_3 V) { return MkBlt_4(V.z, (blt)0, V.y, V.x); }
inline blt_4 SwizzZ0YY(blt_3 V) { return MkBlt_4(V.z, (blt)0, V.y, V.y); }
inline blt_4 SwizzZ0YZ(blt_3 V) { return MkBlt_4(V.z, (blt)0, V.y, V.z); }
inline blt_4 SwizzZ0Y0(blt_3 V) { return MkBlt_4(V.z, (blt)0, V.y, (blt)0); }
inline blt_4 SwizzZ0ZX(blt_3 V) { return MkBlt_4(V.z, (blt)0, V.z, V.x); }
inline blt_4 SwizzZ0ZY(blt_3 V) { return MkBlt_4(V.z, (blt)0, V.z, V.y); }
inline blt_4 SwizzZ0ZZ(blt_3 V) { return MkBlt_4(V.z, (blt)0, V.z, V.z); }
inline blt_4 SwizzZ0Z0(blt_3 V) { return MkBlt_4(V.z, (blt)0, V.z, (blt)0); }
inline blt_4 SwizzZ00X(blt_3 V) { return MkBlt_4(V.z, (blt)0, (blt)0, V.x); }
inline blt_4 SwizzZ00Y(blt_3 V) { return MkBlt_4(V.z, (blt)0, (blt)0, V.y); }
inline blt_4 SwizzZ00Z(blt_3 V) { return MkBlt_4(V.z, (blt)0, (blt)0, V.z); }
inline blt_4 SwizzZ000(blt_3 V) { return MkBlt_4(V.z, (blt)0, (blt)0, (blt)0); }
inline blt_4 Swizz0XXX(blt_3 V) { return MkBlt_4((blt)0, V.x, V.x, V.x); }
inline blt_4 Swizz0XXY(blt_3 V) { return MkBlt_4((blt)0, V.x, V.x, V.y); }
inline blt_4 Swizz0XXZ(blt_3 V) { return MkBlt_4((blt)0, V.x, V.x, V.z); }
inline blt_4 Swizz0XX0(blt_3 V) { return MkBlt_4((blt)0, V.x, V.x, (blt)0); }
inline blt_4 Swizz0XYX(blt_3 V) { return MkBlt_4((blt)0, V.x, V.y, V.x); }
inline blt_4 Swizz0XYY(blt_3 V) { return MkBlt_4((blt)0, V.x, V.y, V.y); }
inline blt_4 Swizz0XYZ(blt_3 V) { return MkBlt_4((blt)0, V.x, V.y, V.z); }
inline blt_4 Swizz0XY0(blt_3 V) { return MkBlt_4((blt)0, V.x, V.y, (blt)0); }
inline blt_4 Swizz0XZX(blt_3 V) { return MkBlt_4((blt)0, V.x, V.z, V.x); }
inline blt_4 Swizz0XZY(blt_3 V) { return MkBlt_4((blt)0, V.x, V.z, V.y); }
inline blt_4 Swizz0XZZ(blt_3 V) { return MkBlt_4((blt)0, V.x, V.z, V.z); }
inline blt_4 Swizz0XZ0(blt_3 V) { return MkBlt_4((blt)0, V.x, V.z, (blt)0); }
inline blt_4 Swizz0X0X(blt_3 V) { return MkBlt_4((blt)0, V.x, (blt)0, V.x); }
inline blt_4 Swizz0X0Y(blt_3 V) { return MkBlt_4((blt)0, V.x, (blt)0, V.y); }
inline blt_4 Swizz0X0Z(blt_3 V) { return MkBlt_4((blt)0, V.x, (blt)0, V.z); }
inline blt_4 Swizz0X00(blt_3 V) { return MkBlt_4((blt)0, V.x, (blt)0, (blt)0); }
inline blt_4 Swizz0YXX(blt_3 V) { return MkBlt_4((blt)0, V.y, V.x, V.x); }
inline blt_4 Swizz0YXY(blt_3 V) { return MkBlt_4((blt)0, V.y, V.x, V.y); }
inline blt_4 Swizz0YXZ(blt_3 V) { return MkBlt_4((blt)0, V.y, V.x, V.z); }
inline blt_4 Swizz0YX0(blt_3 V) { return MkBlt_4((blt)0, V.y, V.x, (blt)0); }
inline blt_4 Swizz0YYX(blt_3 V) { return MkBlt_4((blt)0, V.y, V.y, V.x); }
inline blt_4 Swizz0YYY(blt_3 V) { return MkBlt_4((blt)0, V.y, V.y, V.y); }
inline blt_4 Swizz0YYZ(blt_3 V) { return MkBlt_4((blt)0, V.y, V.y, V.z); }
inline blt_4 Swizz0YY0(blt_3 V) { return MkBlt_4((blt)0, V.y, V.y, (blt)0); }
inline blt_4 Swizz0YZX(blt_3 V) { return MkBlt_4((blt)0, V.y, V.z, V.x); }
inline blt_4 Swizz0YZY(blt_3 V) { return MkBlt_4((blt)0, V.y, V.z, V.y); }
inline blt_4 Swizz0YZZ(blt_3 V) { return MkBlt_4((blt)0, V.y, V.z, V.z); }
inline blt_4 Swizz0YZ0(blt_3 V) { return MkBlt_4((blt)0, V.y, V.z, (blt)0); }
inline blt_4 Swizz0Y0X(blt_3 V) { return MkBlt_4((blt)0, V.y, (blt)0, V.x); }
inline blt_4 Swizz0Y0Y(blt_3 V) { return MkBlt_4((blt)0, V.y, (blt)0, V.y); }
inline blt_4 Swizz0Y0Z(blt_3 V) { return MkBlt_4((blt)0, V.y, (blt)0, V.z); }
inline blt_4 Swizz0Y00(blt_3 V) { return MkBlt_4((blt)0, V.y, (blt)0, (blt)0); }
inline blt_4 Swizz0ZXX(blt_3 V) { return MkBlt_4((blt)0, V.z, V.x, V.x); }
inline blt_4 Swizz0ZXY(blt_3 V) { return MkBlt_4((blt)0, V.z, V.x, V.y); }
inline blt_4 Swizz0ZXZ(blt_3 V) { return MkBlt_4((blt)0, V.z, V.x, V.z); }
inline blt_4 Swizz0ZX0(blt_3 V) { return MkBlt_4((blt)0, V.z, V.x, (blt)0); }
inline blt_4 Swizz0ZYX(blt_3 V) { return MkBlt_4((blt)0, V.z, V.y, V.x); }
inline blt_4 Swizz0ZYY(blt_3 V) { return MkBlt_4((blt)0, V.z, V.y, V.y); }
inline blt_4 Swizz0ZYZ(blt_3 V) { return MkBlt_4((blt)0, V.z, V.y, V.z); }
inline blt_4 Swizz0ZY0(blt_3 V) { return MkBlt_4((blt)0, V.z, V.y, (blt)0); }
inline blt_4 Swizz0ZZX(blt_3 V) { return MkBlt_4((blt)0, V.z, V.z, V.x); }
inline blt_4 Swizz0ZZY(blt_3 V) { return MkBlt_4((blt)0, V.z, V.z, V.y); }
inline blt_4 Swizz0ZZZ(blt_3 V) { return MkBlt_4((blt)0, V.z, V.z, V.z); }
inline blt_4 Swizz0ZZ0(blt_3 V) { return MkBlt_4((blt)0, V.z, V.z, (blt)0); }
inline blt_4 Swizz0Z0X(blt_3 V) { return MkBlt_4((blt)0, V.z, (blt)0, V.x); }
inline blt_4 Swizz0Z0Y(blt_3 V) { return MkBlt_4((blt)0, V.z, (blt)0, V.y); }
inline blt_4 Swizz0Z0Z(blt_3 V) { return MkBlt_4((blt)0, V.z, (blt)0, V.z); }
inline blt_4 Swizz0Z00(blt_3 V) { return MkBlt_4((blt)0, V.z, (blt)0, (blt)0); }
inline blt_4 Swizz00XX(blt_3 V) { return MkBlt_4((blt)0, (blt)0, V.x, V.x); }
inline blt_4 Swizz00XY(blt_3 V) { return MkBlt_4((blt)0, (blt)0, V.x, V.y); }
inline blt_4 Swizz00XZ(blt_3 V) { return MkBlt_4((blt)0, (blt)0, V.x, V.z); }
inline blt_4 Swizz00X0(blt_3 V) { return MkBlt_4((blt)0, (blt)0, V.x, (blt)0); }
inline blt_4 Swizz00YX(blt_3 V) { return MkBlt_4((blt)0, (blt)0, V.y, V.x); }
inline blt_4 Swizz00YY(blt_3 V) { return MkBlt_4((blt)0, (blt)0, V.y, V.y); }
inline blt_4 Swizz00YZ(blt_3 V) { return MkBlt_4((blt)0, (blt)0, V.y, V.z); }
inline blt_4 Swizz00Y0(blt_3 V) { return MkBlt_4((blt)0, (blt)0, V.y, (blt)0); }
inline blt_4 Swizz00ZX(blt_3 V) { return MkBlt_4((blt)0, (blt)0, V.z, V.x); }
inline blt_4 Swizz00ZY(blt_3 V) { return MkBlt_4((blt)0, (blt)0, V.z, V.y); }
inline blt_4 Swizz00ZZ(blt_3 V) { return MkBlt_4((blt)0, (blt)0, V.z, V.z); }
inline blt_4 Swizz00Z0(blt_3 V) { return MkBlt_4((blt)0, (blt)0, V.z, (blt)0); }
inline blt_4 Swizz000X(blt_3 V) { return MkBlt_4((blt)0, (blt)0, (blt)0, V.x); }
inline blt_4 Swizz000Y(blt_3 V) { return MkBlt_4((blt)0, (blt)0, (blt)0, V.y); }
inline blt_4 Swizz000Z(blt_3 V) { return MkBlt_4((blt)0, (blt)0, (blt)0, V.z); }
inline blt_2 SwizzXX(blt_4 V) { return MkBlt_2(V.x, V.x); }
inline blt_2 SwizzXY(blt_4 V) { return MkBlt_2(V.x, V.y); }
inline blt_2 SwizzXZ(blt_4 V) { return MkBlt_2(V.x, V.z); }
inline blt_2 SwizzXW(blt_4 V) { return MkBlt_2(V.x, V.w); }
inline blt_2 SwizzX0(blt_4 V) { return MkBlt_2(V.x, (blt)0); }
inline blt_2 SwizzYX(blt_4 V) { return MkBlt_2(V.y, V.x); }
inline blt_2 SwizzYY(blt_4 V) { return MkBlt_2(V.y, V.y); }
inline blt_2 SwizzYZ(blt_4 V) { return MkBlt_2(V.y, V.z); }
inline blt_2 SwizzYW(blt_4 V) { return MkBlt_2(V.y, V.w); }
inline blt_2 SwizzY0(blt_4 V) { return MkBlt_2(V.y, (blt)0); }
inline blt_2 SwizzZX(blt_4 V) { return MkBlt_2(V.z, V.x); }
inline blt_2 SwizzZY(blt_4 V) { return MkBlt_2(V.z, V.y); }
inline blt_2 SwizzZZ(blt_4 V) { return MkBlt_2(V.z, V.z); }
inline blt_2 SwizzZW(blt_4 V) { return MkBlt_2(V.z, V.w); }
inline blt_2 SwizzZ0(blt_4 V) { return MkBlt_2(V.z, (blt)0); }
inline blt_2 SwizzWX(blt_4 V) { return MkBlt_2(V.w, V.x); }
inline blt_2 SwizzWY(blt_4 V) { return MkBlt_2(V.w, V.y); }
inline blt_2 SwizzWZ(blt_4 V) { return MkBlt_2(V.w, V.z); }
inline blt_2 SwizzWW(blt_4 V) { return MkBlt_2(V.w, V.w); }
inline blt_2 SwizzW0(blt_4 V) { return MkBlt_2(V.w, (blt)0); }
inline blt_2 Swizz0X(blt_4 V) { return MkBlt_2((blt)0, V.x); }
inline blt_2 Swizz0Y(blt_4 V) { return MkBlt_2((blt)0, V.y); }
inline blt_2 Swizz0Z(blt_4 V) { return MkBlt_2((blt)0, V.z); }
inline blt_2 Swizz0W(blt_4 V) { return MkBlt_2((blt)0, V.w); }
inline blt_3 SwizzXXX(blt_4 V) { return MkBlt_3(V.x, V.x, V.x); }
inline blt_3 SwizzXXY(blt_4 V) { return MkBlt_3(V.x, V.x, V.y); }
inline blt_3 SwizzXXZ(blt_4 V) { return MkBlt_3(V.x, V.x, V.z); }
inline blt_3 SwizzXXW(blt_4 V) { return MkBlt_3(V.x, V.x, V.w); }
inline blt_3 SwizzXX0(blt_4 V) { return MkBlt_3(V.x, V.x, (blt)0); }
inline blt_3 SwizzXYX(blt_4 V) { return MkBlt_3(V.x, V.y, V.x); }
inline blt_3 SwizzXYY(blt_4 V) { return MkBlt_3(V.x, V.y, V.y); }
inline blt_3 SwizzXYZ(blt_4 V) { return MkBlt_3(V.x, V.y, V.z); }
inline blt_3 SwizzXYW(blt_4 V) { return MkBlt_3(V.x, V.y, V.w); }
inline blt_3 SwizzXY0(blt_4 V) { return MkBlt_3(V.x, V.y, (blt)0); }
inline blt_3 SwizzXZX(blt_4 V) { return MkBlt_3(V.x, V.z, V.x); }
inline blt_3 SwizzXZY(blt_4 V) { return MkBlt_3(V.x, V.z, V.y); }
inline blt_3 SwizzXZZ(blt_4 V) { return MkBlt_3(V.x, V.z, V.z); }
inline blt_3 SwizzXZW(blt_4 V) { return MkBlt_3(V.x, V.z, V.w); }
inline blt_3 SwizzXZ0(blt_4 V) { return MkBlt_3(V.x, V.z, (blt)0); }
inline blt_3 SwizzXWX(blt_4 V) { return MkBlt_3(V.x, V.w, V.x); }
inline blt_3 SwizzXWY(blt_4 V) { return MkBlt_3(V.x, V.w, V.y); }
inline blt_3 SwizzXWZ(blt_4 V) { return MkBlt_3(V.x, V.w, V.z); }
inline blt_3 SwizzXWW(blt_4 V) { return MkBlt_3(V.x, V.w, V.w); }
inline blt_3 SwizzXW0(blt_4 V) { return MkBlt_3(V.x, V.w, (blt)0); }
inline blt_3 SwizzX0X(blt_4 V) { return MkBlt_3(V.x, (blt)0, V.x); }
inline blt_3 SwizzX0Y(blt_4 V) { return MkBlt_3(V.x, (blt)0, V.y); }
inline blt_3 SwizzX0Z(blt_4 V) { return MkBlt_3(V.x, (blt)0, V.z); }
inline blt_3 SwizzX0W(blt_4 V) { return MkBlt_3(V.x, (blt)0, V.w); }
inline blt_3 SwizzX00(blt_4 V) { return MkBlt_3(V.x, (blt)0, (blt)0); }
inline blt_3 SwizzYXX(blt_4 V) { return MkBlt_3(V.y, V.x, V.x); }
inline blt_3 SwizzYXY(blt_4 V) { return MkBlt_3(V.y, V.x, V.y); }
inline blt_3 SwizzYXZ(blt_4 V) { return MkBlt_3(V.y, V.x, V.z); }
inline blt_3 SwizzYXW(blt_4 V) { return MkBlt_3(V.y, V.x, V.w); }
inline blt_3 SwizzYX0(blt_4 V) { return MkBlt_3(V.y, V.x, (blt)0); }
inline blt_3 SwizzYYX(blt_4 V) { return MkBlt_3(V.y, V.y, V.x); }
inline blt_3 SwizzYYY(blt_4 V) { return MkBlt_3(V.y, V.y, V.y); }
inline blt_3 SwizzYYZ(blt_4 V) { return MkBlt_3(V.y, V.y, V.z); }
inline blt_3 SwizzYYW(blt_4 V) { return MkBlt_3(V.y, V.y, V.w); }
inline blt_3 SwizzYY0(blt_4 V) { return MkBlt_3(V.y, V.y, (blt)0); }
inline blt_3 SwizzYZX(blt_4 V) { return MkBlt_3(V.y, V.z, V.x); }
inline blt_3 SwizzYZY(blt_4 V) { return MkBlt_3(V.y, V.z, V.y); }
inline blt_3 SwizzYZZ(blt_4 V) { return MkBlt_3(V.y, V.z, V.z); }
inline blt_3 SwizzYZW(blt_4 V) { return MkBlt_3(V.y, V.z, V.w); }
inline blt_3 SwizzYZ0(blt_4 V) { return MkBlt_3(V.y, V.z, (blt)0); }
inline blt_3 SwizzYWX(blt_4 V) { return MkBlt_3(V.y, V.w, V.x); }
inline blt_3 SwizzYWY(blt_4 V) { return MkBlt_3(V.y, V.w, V.y); }
inline blt_3 SwizzYWZ(blt_4 V) { return MkBlt_3(V.y, V.w, V.z); }
inline blt_3 SwizzYWW(blt_4 V) { return MkBlt_3(V.y, V.w, V.w); }
inline blt_3 SwizzYW0(blt_4 V) { return MkBlt_3(V.y, V.w, (blt)0); }
inline blt_3 SwizzY0X(blt_4 V) { return MkBlt_3(V.y, (blt)0, V.x); }
inline blt_3 SwizzY0Y(blt_4 V) { return MkBlt_3(V.y, (blt)0, V.y); }
inline blt_3 SwizzY0Z(blt_4 V) { return MkBlt_3(V.y, (blt)0, V.z); }
inline blt_3 SwizzY0W(blt_4 V) { return MkBlt_3(V.y, (blt)0, V.w); }
inline blt_3 SwizzY00(blt_4 V) { return MkBlt_3(V.y, (blt)0, (blt)0); }
inline blt_3 SwizzZXX(blt_4 V) { return MkBlt_3(V.z, V.x, V.x); }
inline blt_3 SwizzZXY(blt_4 V) { return MkBlt_3(V.z, V.x, V.y); }
inline blt_3 SwizzZXZ(blt_4 V) { return MkBlt_3(V.z, V.x, V.z); }
inline blt_3 SwizzZXW(blt_4 V) { return MkBlt_3(V.z, V.x, V.w); }
inline blt_3 SwizzZX0(blt_4 V) { return MkBlt_3(V.z, V.x, (blt)0); }
inline blt_3 SwizzZYX(blt_4 V) { return MkBlt_3(V.z, V.y, V.x); }
inline blt_3 SwizzZYY(blt_4 V) { return MkBlt_3(V.z, V.y, V.y); }
inline blt_3 SwizzZYZ(blt_4 V) { return MkBlt_3(V.z, V.y, V.z); }
inline blt_3 SwizzZYW(blt_4 V) { return MkBlt_3(V.z, V.y, V.w); }
inline blt_3 SwizzZY0(blt_4 V) { return MkBlt_3(V.z, V.y, (blt)0); }
inline blt_3 SwizzZZX(blt_4 V) { return MkBlt_3(V.z, V.z, V.x); }
inline blt_3 SwizzZZY(blt_4 V) { return MkBlt_3(V.z, V.z, V.y); }
inline blt_3 SwizzZZZ(blt_4 V) { return MkBlt_3(V.z, V.z, V.z); }
inline blt_3 SwizzZZW(blt_4 V) { return MkBlt_3(V.z, V.z, V.w); }
inline blt_3 SwizzZZ0(blt_4 V) { return MkBlt_3(V.z, V.z, (blt)0); }
inline blt_3 SwizzZWX(blt_4 V) { return MkBlt_3(V.z, V.w, V.x); }
inline blt_3 SwizzZWY(blt_4 V) { return MkBlt_3(V.z, V.w, V.y); }
inline blt_3 SwizzZWZ(blt_4 V) { return MkBlt_3(V.z, V.w, V.z); }
inline blt_3 SwizzZWW(blt_4 V) { return MkBlt_3(V.z, V.w, V.w); }
inline blt_3 SwizzZW0(blt_4 V) { return MkBlt_3(V.z, V.w, (blt)0); }
inline blt_3 SwizzZ0X(blt_4 V) { return MkBlt_3(V.z, (blt)0, V.x); }
inline blt_3 SwizzZ0Y(blt_4 V) { return MkBlt_3(V.z, (blt)0, V.y); }
inline blt_3 SwizzZ0Z(blt_4 V) { return MkBlt_3(V.z, (blt)0, V.z); }
inline blt_3 SwizzZ0W(blt_4 V) { return MkBlt_3(V.z, (blt)0, V.w); }
inline blt_3 SwizzZ00(blt_4 V) { return MkBlt_3(V.z, (blt)0, (blt)0); }
inline blt_3 SwizzWXX(blt_4 V) { return MkBlt_3(V.w, V.x, V.x); }
inline blt_3 SwizzWXY(blt_4 V) { return MkBlt_3(V.w, V.x, V.y); }
inline blt_3 SwizzWXZ(blt_4 V) { return MkBlt_3(V.w, V.x, V.z); }
inline blt_3 SwizzWXW(blt_4 V) { return MkBlt_3(V.w, V.x, V.w); }
inline blt_3 SwizzWX0(blt_4 V) { return MkBlt_3(V.w, V.x, (blt)0); }
inline blt_3 SwizzWYX(blt_4 V) { return MkBlt_3(V.w, V.y, V.x); }
inline blt_3 SwizzWYY(blt_4 V) { return MkBlt_3(V.w, V.y, V.y); }
inline blt_3 SwizzWYZ(blt_4 V) { return MkBlt_3(V.w, V.y, V.z); }
inline blt_3 SwizzWYW(blt_4 V) { return MkBlt_3(V.w, V.y, V.w); }
inline blt_3 SwizzWY0(blt_4 V) { return MkBlt_3(V.w, V.y, (blt)0); }
inline blt_3 SwizzWZX(blt_4 V) { return MkBlt_3(V.w, V.z, V.x); }
inline blt_3 SwizzWZY(blt_4 V) { return MkBlt_3(V.w, V.z, V.y); }
inline blt_3 SwizzWZZ(blt_4 V) { return MkBlt_3(V.w, V.z, V.z); }
inline blt_3 SwizzWZW(blt_4 V) { return MkBlt_3(V.w, V.z, V.w); }
inline blt_3 SwizzWZ0(blt_4 V) { return MkBlt_3(V.w, V.z, (blt)0); }
inline blt_3 SwizzWWX(blt_4 V) { return MkBlt_3(V.w, V.w, V.x); }
inline blt_3 SwizzWWY(blt_4 V) { return MkBlt_3(V.w, V.w, V.y); }
inline blt_3 SwizzWWZ(blt_4 V) { return MkBlt_3(V.w, V.w, V.z); }
inline blt_3 SwizzWWW(blt_4 V) { return MkBlt_3(V.w, V.w, V.w); }
inline blt_3 SwizzWW0(blt_4 V) { return MkBlt_3(V.w, V.w, (blt)0); }
inline blt_3 SwizzW0X(blt_4 V) { return MkBlt_3(V.w, (blt)0, V.x); }
inline blt_3 SwizzW0Y(blt_4 V) { return MkBlt_3(V.w, (blt)0, V.y); }
inline blt_3 SwizzW0Z(blt_4 V) { return MkBlt_3(V.w, (blt)0, V.z); }
inline blt_3 SwizzW0W(blt_4 V) { return MkBlt_3(V.w, (blt)0, V.w); }
inline blt_3 SwizzW00(blt_4 V) { return MkBlt_3(V.w, (blt)0, (blt)0); }
inline blt_3 Swizz0XX(blt_4 V) { return MkBlt_3((blt)0, V.x, V.x); }
inline blt_3 Swizz0XY(blt_4 V) { return MkBlt_3((blt)0, V.x, V.y); }
inline blt_3 Swizz0XZ(blt_4 V) { return MkBlt_3((blt)0, V.x, V.z); }
inline blt_3 Swizz0XW(blt_4 V) { return MkBlt_3((blt)0, V.x, V.w); }
inline blt_3 Swizz0X0(blt_4 V) { return MkBlt_3((blt)0, V.x, (blt)0); }
inline blt_3 Swizz0YX(blt_4 V) { return MkBlt_3((blt)0, V.y, V.x); }
inline blt_3 Swizz0YY(blt_4 V) { return MkBlt_3((blt)0, V.y, V.y); }
inline blt_3 Swizz0YZ(blt_4 V) { return MkBlt_3((blt)0, V.y, V.z); }
inline blt_3 Swizz0YW(blt_4 V) { return MkBlt_3((blt)0, V.y, V.w); }
inline blt_3 Swizz0Y0(blt_4 V) { return MkBlt_3((blt)0, V.y, (blt)0); }
inline blt_3 Swizz0ZX(blt_4 V) { return MkBlt_3((blt)0, V.z, V.x); }
inline blt_3 Swizz0ZY(blt_4 V) { return MkBlt_3((blt)0, V.z, V.y); }
inline blt_3 Swizz0ZZ(blt_4 V) { return MkBlt_3((blt)0, V.z, V.z); }
inline blt_3 Swizz0ZW(blt_4 V) { return MkBlt_3((blt)0, V.z, V.w); }
inline blt_3 Swizz0Z0(blt_4 V) { return MkBlt_3((blt)0, V.z, (blt)0); }
inline blt_3 Swizz0WX(blt_4 V) { return MkBlt_3((blt)0, V.w, V.x); }
inline blt_3 Swizz0WY(blt_4 V) { return MkBlt_3((blt)0, V.w, V.y); }
inline blt_3 Swizz0WZ(blt_4 V) { return MkBlt_3((blt)0, V.w, V.z); }
inline blt_3 Swizz0WW(blt_4 V) { return MkBlt_3((blt)0, V.w, V.w); }
inline blt_3 Swizz0W0(blt_4 V) { return MkBlt_3((blt)0, V.w, (blt)0); }
inline blt_3 Swizz00X(blt_4 V) { return MkBlt_3((blt)0, (blt)0, V.x); }
inline blt_3 Swizz00Y(blt_4 V) { return MkBlt_3((blt)0, (blt)0, V.y); }
inline blt_3 Swizz00Z(blt_4 V) { return MkBlt_3((blt)0, (blt)0, V.z); }
inline blt_3 Swizz00W(blt_4 V) { return MkBlt_3((blt)0, (blt)0, V.w); }
inline blt_4 SwizzXXXX(blt_4 V) { return MkBlt_4(V.x, V.x, V.x, V.x); }
inline blt_4 SwizzXXXY(blt_4 V) { return MkBlt_4(V.x, V.x, V.x, V.y); }
inline blt_4 SwizzXXXZ(blt_4 V) { return MkBlt_4(V.x, V.x, V.x, V.z); }
inline blt_4 SwizzXXXW(blt_4 V) { return MkBlt_4(V.x, V.x, V.x, V.w); }
inline blt_4 SwizzXXX0(blt_4 V) { return MkBlt_4(V.x, V.x, V.x, (blt)0); }
inline blt_4 SwizzXXYX(blt_4 V) { return MkBlt_4(V.x, V.x, V.y, V.x); }
inline blt_4 SwizzXXYY(blt_4 V) { return MkBlt_4(V.x, V.x, V.y, V.y); }
inline blt_4 SwizzXXYZ(blt_4 V) { return MkBlt_4(V.x, V.x, V.y, V.z); }
inline blt_4 SwizzXXYW(blt_4 V) { return MkBlt_4(V.x, V.x, V.y, V.w); }
inline blt_4 SwizzXXY0(blt_4 V) { return MkBlt_4(V.x, V.x, V.y, (blt)0); }
inline blt_4 SwizzXXZX(blt_4 V) { return MkBlt_4(V.x, V.x, V.z, V.x); }
inline blt_4 SwizzXXZY(blt_4 V) { return MkBlt_4(V.x, V.x, V.z, V.y); }
inline blt_4 SwizzXXZZ(blt_4 V) { return MkBlt_4(V.x, V.x, V.z, V.z); }
inline blt_4 SwizzXXZW(blt_4 V) { return MkBlt_4(V.x, V.x, V.z, V.w); }
inline blt_4 SwizzXXZ0(blt_4 V) { return MkBlt_4(V.x, V.x, V.z, (blt)0); }
inline blt_4 SwizzXXWX(blt_4 V) { return MkBlt_4(V.x, V.x, V.w, V.x); }
inline blt_4 SwizzXXWY(blt_4 V) { return MkBlt_4(V.x, V.x, V.w, V.y); }
inline blt_4 SwizzXXWZ(blt_4 V) { return MkBlt_4(V.x, V.x, V.w, V.z); }
inline blt_4 SwizzXXWW(blt_4 V) { return MkBlt_4(V.x, V.x, V.w, V.w); }
inline blt_4 SwizzXXW0(blt_4 V) { return MkBlt_4(V.x, V.x, V.w, (blt)0); }
inline blt_4 SwizzXX0X(blt_4 V) { return MkBlt_4(V.x, V.x, (blt)0, V.x); }
inline blt_4 SwizzXX0Y(blt_4 V) { return MkBlt_4(V.x, V.x, (blt)0, V.y); }
inline blt_4 SwizzXX0Z(blt_4 V) { return MkBlt_4(V.x, V.x, (blt)0, V.z); }
inline blt_4 SwizzXX0W(blt_4 V) { return MkBlt_4(V.x, V.x, (blt)0, V.w); }
inline blt_4 SwizzXX00(blt_4 V) { return MkBlt_4(V.x, V.x, (blt)0, (blt)0); }
inline blt_4 SwizzXYXX(blt_4 V) { return MkBlt_4(V.x, V.y, V.x, V.x); }
inline blt_4 SwizzXYXY(blt_4 V) { return MkBlt_4(V.x, V.y, V.x, V.y); }
inline blt_4 SwizzXYXZ(blt_4 V) { return MkBlt_4(V.x, V.y, V.x, V.z); }
inline blt_4 SwizzXYXW(blt_4 V) { return MkBlt_4(V.x, V.y, V.x, V.w); }
inline blt_4 SwizzXYX0(blt_4 V) { return MkBlt_4(V.x, V.y, V.x, (blt)0); }
inline blt_4 SwizzXYYX(blt_4 V) { return MkBlt_4(V.x, V.y, V.y, V.x); }
inline blt_4 SwizzXYYY(blt_4 V) { return MkBlt_4(V.x, V.y, V.y, V.y); }
inline blt_4 SwizzXYYZ(blt_4 V) { return MkBlt_4(V.x, V.y, V.y, V.z); }
inline blt_4 SwizzXYYW(blt_4 V) { return MkBlt_4(V.x, V.y, V.y, V.w); }
inline blt_4 SwizzXYY0(blt_4 V) { return MkBlt_4(V.x, V.y, V.y, (blt)0); }
inline blt_4 SwizzXYZX(blt_4 V) { return MkBlt_4(V.x, V.y, V.z, V.x); }
inline blt_4 SwizzXYZY(blt_4 V) { return MkBlt_4(V.x, V.y, V.z, V.y); }
inline blt_4 SwizzXYZZ(blt_4 V) { return MkBlt_4(V.x, V.y, V.z, V.z); }
inline blt_4 SwizzXYZW(blt_4 V) { return MkBlt_4(V.x, V.y, V.z, V.w); }
inline blt_4 SwizzXYZ0(blt_4 V) { return MkBlt_4(V.x, V.y, V.z, (blt)0); }
inline blt_4 SwizzXYWX(blt_4 V) { return MkBlt_4(V.x, V.y, V.w, V.x); }
inline blt_4 SwizzXYWY(blt_4 V) { return MkBlt_4(V.x, V.y, V.w, V.y); }
inline blt_4 SwizzXYWZ(blt_4 V) { return MkBlt_4(V.x, V.y, V.w, V.z); }
inline blt_4 SwizzXYWW(blt_4 V) { return MkBlt_4(V.x, V.y, V.w, V.w); }
inline blt_4 SwizzXYW0(blt_4 V) { return MkBlt_4(V.x, V.y, V.w, (blt)0); }
inline blt_4 SwizzXY0X(blt_4 V) { return MkBlt_4(V.x, V.y, (blt)0, V.x); }
inline blt_4 SwizzXY0Y(blt_4 V) { return MkBlt_4(V.x, V.y, (blt)0, V.y); }
inline blt_4 SwizzXY0Z(blt_4 V) { return MkBlt_4(V.x, V.y, (blt)0, V.z); }
inline blt_4 SwizzXY0W(blt_4 V) { return MkBlt_4(V.x, V.y, (blt)0, V.w); }
inline blt_4 SwizzXY00(blt_4 V) { return MkBlt_4(V.x, V.y, (blt)0, (blt)0); }
inline blt_4 SwizzXZXX(blt_4 V) { return MkBlt_4(V.x, V.z, V.x, V.x); }
inline blt_4 SwizzXZXY(blt_4 V) { return MkBlt_4(V.x, V.z, V.x, V.y); }
inline blt_4 SwizzXZXZ(blt_4 V) { return MkBlt_4(V.x, V.z, V.x, V.z); }
inline blt_4 SwizzXZXW(blt_4 V) { return MkBlt_4(V.x, V.z, V.x, V.w); }
inline blt_4 SwizzXZX0(blt_4 V) { return MkBlt_4(V.x, V.z, V.x, (blt)0); }
inline blt_4 SwizzXZYX(blt_4 V) { return MkBlt_4(V.x, V.z, V.y, V.x); }
inline blt_4 SwizzXZYY(blt_4 V) { return MkBlt_4(V.x, V.z, V.y, V.y); }
inline blt_4 SwizzXZYZ(blt_4 V) { return MkBlt_4(V.x, V.z, V.y, V.z); }
inline blt_4 SwizzXZYW(blt_4 V) { return MkBlt_4(V.x, V.z, V.y, V.w); }
inline blt_4 SwizzXZY0(blt_4 V) { return MkBlt_4(V.x, V.z, V.y, (blt)0); }
inline blt_4 SwizzXZZX(blt_4 V) { return MkBlt_4(V.x, V.z, V.z, V.x); }
inline blt_4 SwizzXZZY(blt_4 V) { return MkBlt_4(V.x, V.z, V.z, V.y); }
inline blt_4 SwizzXZZZ(blt_4 V) { return MkBlt_4(V.x, V.z, V.z, V.z); }
inline blt_4 SwizzXZZW(blt_4 V) { return MkBlt_4(V.x, V.z, V.z, V.w); }
inline blt_4 SwizzXZZ0(blt_4 V) { return MkBlt_4(V.x, V.z, V.z, (blt)0); }
inline blt_4 SwizzXZWX(blt_4 V) { return MkBlt_4(V.x, V.z, V.w, V.x); }
inline blt_4 SwizzXZWY(blt_4 V) { return MkBlt_4(V.x, V.z, V.w, V.y); }
inline blt_4 SwizzXZWZ(blt_4 V) { return MkBlt_4(V.x, V.z, V.w, V.z); }
inline blt_4 SwizzXZWW(blt_4 V) { return MkBlt_4(V.x, V.z, V.w, V.w); }
inline blt_4 SwizzXZW0(blt_4 V) { return MkBlt_4(V.x, V.z, V.w, (blt)0); }
inline blt_4 SwizzXZ0X(blt_4 V) { return MkBlt_4(V.x, V.z, (blt)0, V.x); }
inline blt_4 SwizzXZ0Y(blt_4 V) { return MkBlt_4(V.x, V.z, (blt)0, V.y); }
inline blt_4 SwizzXZ0Z(blt_4 V) { return MkBlt_4(V.x, V.z, (blt)0, V.z); }
inline blt_4 SwizzXZ0W(blt_4 V) { return MkBlt_4(V.x, V.z, (blt)0, V.w); }
inline blt_4 SwizzXZ00(blt_4 V) { return MkBlt_4(V.x, V.z, (blt)0, (blt)0); }
inline blt_4 SwizzXWXX(blt_4 V) { return MkBlt_4(V.x, V.w, V.x, V.x); }
inline blt_4 SwizzXWXY(blt_4 V) { return MkBlt_4(V.x, V.w, V.x, V.y); }
inline blt_4 SwizzXWXZ(blt_4 V) { return MkBlt_4(V.x, V.w, V.x, V.z); }
inline blt_4 SwizzXWXW(blt_4 V) { return MkBlt_4(V.x, V.w, V.x, V.w); }
inline blt_4 SwizzXWX0(blt_4 V) { return MkBlt_4(V.x, V.w, V.x, (blt)0); }
inline blt_4 SwizzXWYX(blt_4 V) { return MkBlt_4(V.x, V.w, V.y, V.x); }
inline blt_4 SwizzXWYY(blt_4 V) { return MkBlt_4(V.x, V.w, V.y, V.y); }
inline blt_4 SwizzXWYZ(blt_4 V) { return MkBlt_4(V.x, V.w, V.y, V.z); }
inline blt_4 SwizzXWYW(blt_4 V) { return MkBlt_4(V.x, V.w, V.y, V.w); }
inline blt_4 SwizzXWY0(blt_4 V) { return MkBlt_4(V.x, V.w, V.y, (blt)0); }
inline blt_4 SwizzXWZX(blt_4 V) { return MkBlt_4(V.x, V.w, V.z, V.x); }
inline blt_4 SwizzXWZY(blt_4 V) { return MkBlt_4(V.x, V.w, V.z, V.y); }
inline blt_4 SwizzXWZZ(blt_4 V) { return MkBlt_4(V.x, V.w, V.z, V.z); }
inline blt_4 SwizzXWZW(blt_4 V) { return MkBlt_4(V.x, V.w, V.z, V.w); }
inline blt_4 SwizzXWZ0(blt_4 V) { return MkBlt_4(V.x, V.w, V.z, (blt)0); }
inline blt_4 SwizzXWWX(blt_4 V) { return MkBlt_4(V.x, V.w, V.w, V.x); }
inline blt_4 SwizzXWWY(blt_4 V) { return MkBlt_4(V.x, V.w, V.w, V.y); }
inline blt_4 SwizzXWWZ(blt_4 V) { return MkBlt_4(V.x, V.w, V.w, V.z); }
inline blt_4 SwizzXWWW(blt_4 V) { return MkBlt_4(V.x, V.w, V.w, V.w); }
inline blt_4 SwizzXWW0(blt_4 V) { return MkBlt_4(V.x, V.w, V.w, (blt)0); }
inline blt_4 SwizzXW0X(blt_4 V) { return MkBlt_4(V.x, V.w, (blt)0, V.x); }
inline blt_4 SwizzXW0Y(blt_4 V) { return MkBlt_4(V.x, V.w, (blt)0, V.y); }
inline blt_4 SwizzXW0Z(blt_4 V) { return MkBlt_4(V.x, V.w, (blt)0, V.z); }
inline blt_4 SwizzXW0W(blt_4 V) { return MkBlt_4(V.x, V.w, (blt)0, V.w); }
inline blt_4 SwizzXW00(blt_4 V) { return MkBlt_4(V.x, V.w, (blt)0, (blt)0); }
inline blt_4 SwizzX0XX(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.x, V.x); }
inline blt_4 SwizzX0XY(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.x, V.y); }
inline blt_4 SwizzX0XZ(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.x, V.z); }
inline blt_4 SwizzX0XW(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.x, V.w); }
inline blt_4 SwizzX0X0(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.x, (blt)0); }
inline blt_4 SwizzX0YX(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.y, V.x); }
inline blt_4 SwizzX0YY(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.y, V.y); }
inline blt_4 SwizzX0YZ(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.y, V.z); }
inline blt_4 SwizzX0YW(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.y, V.w); }
inline blt_4 SwizzX0Y0(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.y, (blt)0); }
inline blt_4 SwizzX0ZX(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.z, V.x); }
inline blt_4 SwizzX0ZY(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.z, V.y); }
inline blt_4 SwizzX0ZZ(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.z, V.z); }
inline blt_4 SwizzX0ZW(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.z, V.w); }
inline blt_4 SwizzX0Z0(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.z, (blt)0); }
inline blt_4 SwizzX0WX(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.w, V.x); }
inline blt_4 SwizzX0WY(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.w, V.y); }
inline blt_4 SwizzX0WZ(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.w, V.z); }
inline blt_4 SwizzX0WW(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.w, V.w); }
inline blt_4 SwizzX0W0(blt_4 V) { return MkBlt_4(V.x, (blt)0, V.w, (blt)0); }
inline blt_4 SwizzX00X(blt_4 V) { return MkBlt_4(V.x, (blt)0, (blt)0, V.x); }
inline blt_4 SwizzX00Y(blt_4 V) { return MkBlt_4(V.x, (blt)0, (blt)0, V.y); }
inline blt_4 SwizzX00Z(blt_4 V) { return MkBlt_4(V.x, (blt)0, (blt)0, V.z); }
inline blt_4 SwizzX00W(blt_4 V) { return MkBlt_4(V.x, (blt)0, (blt)0, V.w); }
inline blt_4 SwizzX000(blt_4 V) { return MkBlt_4(V.x, (blt)0, (blt)0, (blt)0); }
inline blt_4 SwizzYXXX(blt_4 V) { return MkBlt_4(V.y, V.x, V.x, V.x); }
inline blt_4 SwizzYXXY(blt_4 V) { return MkBlt_4(V.y, V.x, V.x, V.y); }
inline blt_4 SwizzYXXZ(blt_4 V) { return MkBlt_4(V.y, V.x, V.x, V.z); }
inline blt_4 SwizzYXXW(blt_4 V) { return MkBlt_4(V.y, V.x, V.x, V.w); }
inline blt_4 SwizzYXX0(blt_4 V) { return MkBlt_4(V.y, V.x, V.x, (blt)0); }
inline blt_4 SwizzYXYX(blt_4 V) { return MkBlt_4(V.y, V.x, V.y, V.x); }
inline blt_4 SwizzYXYY(blt_4 V) { return MkBlt_4(V.y, V.x, V.y, V.y); }
inline blt_4 SwizzYXYZ(blt_4 V) { return MkBlt_4(V.y, V.x, V.y, V.z); }
inline blt_4 SwizzYXYW(blt_4 V) { return MkBlt_4(V.y, V.x, V.y, V.w); }
inline blt_4 SwizzYXY0(blt_4 V) { return MkBlt_4(V.y, V.x, V.y, (blt)0); }
inline blt_4 SwizzYXZX(blt_4 V) { return MkBlt_4(V.y, V.x, V.z, V.x); }
inline blt_4 SwizzYXZY(blt_4 V) { return MkBlt_4(V.y, V.x, V.z, V.y); }
inline blt_4 SwizzYXZZ(blt_4 V) { return MkBlt_4(V.y, V.x, V.z, V.z); }
inline blt_4 SwizzYXZW(blt_4 V) { return MkBlt_4(V.y, V.x, V.z, V.w); }
inline blt_4 SwizzYXZ0(blt_4 V) { return MkBlt_4(V.y, V.x, V.z, (blt)0); }
inline blt_4 SwizzYXWX(blt_4 V) { return MkBlt_4(V.y, V.x, V.w, V.x); }
inline blt_4 SwizzYXWY(blt_4 V) { return MkBlt_4(V.y, V.x, V.w, V.y); }
inline blt_4 SwizzYXWZ(blt_4 V) { return MkBlt_4(V.y, V.x, V.w, V.z); }
inline blt_4 SwizzYXWW(blt_4 V) { return MkBlt_4(V.y, V.x, V.w, V.w); }
inline blt_4 SwizzYXW0(blt_4 V) { return MkBlt_4(V.y, V.x, V.w, (blt)0); }
inline blt_4 SwizzYX0X(blt_4 V) { return MkBlt_4(V.y, V.x, (blt)0, V.x); }
inline blt_4 SwizzYX0Y(blt_4 V) { return MkBlt_4(V.y, V.x, (blt)0, V.y); }
inline blt_4 SwizzYX0Z(blt_4 V) { return MkBlt_4(V.y, V.x, (blt)0, V.z); }
inline blt_4 SwizzYX0W(blt_4 V) { return MkBlt_4(V.y, V.x, (blt)0, V.w); }
inline blt_4 SwizzYX00(blt_4 V) { return MkBlt_4(V.y, V.x, (blt)0, (blt)0); }
inline blt_4 SwizzYYXX(blt_4 V) { return MkBlt_4(V.y, V.y, V.x, V.x); }
inline blt_4 SwizzYYXY(blt_4 V) { return MkBlt_4(V.y, V.y, V.x, V.y); }
inline blt_4 SwizzYYXZ(blt_4 V) { return MkBlt_4(V.y, V.y, V.x, V.z); }
inline blt_4 SwizzYYXW(blt_4 V) { return MkBlt_4(V.y, V.y, V.x, V.w); }
inline blt_4 SwizzYYX0(blt_4 V) { return MkBlt_4(V.y, V.y, V.x, (blt)0); }
inline blt_4 SwizzYYYX(blt_4 V) { return MkBlt_4(V.y, V.y, V.y, V.x); }
inline blt_4 SwizzYYYY(blt_4 V) { return MkBlt_4(V.y, V.y, V.y, V.y); }
inline blt_4 SwizzYYYZ(blt_4 V) { return MkBlt_4(V.y, V.y, V.y, V.z); }
inline blt_4 SwizzYYYW(blt_4 V) { return MkBlt_4(V.y, V.y, V.y, V.w); }
inline blt_4 SwizzYYY0(blt_4 V) { return MkBlt_4(V.y, V.y, V.y, (blt)0); }
inline blt_4 SwizzYYZX(blt_4 V) { return MkBlt_4(V.y, V.y, V.z, V.x); }
inline blt_4 SwizzYYZY(blt_4 V) { return MkBlt_4(V.y, V.y, V.z, V.y); }
inline blt_4 SwizzYYZZ(blt_4 V) { return MkBlt_4(V.y, V.y, V.z, V.z); }
inline blt_4 SwizzYYZW(blt_4 V) { return MkBlt_4(V.y, V.y, V.z, V.w); }
inline blt_4 SwizzYYZ0(blt_4 V) { return MkBlt_4(V.y, V.y, V.z, (blt)0); }
inline blt_4 SwizzYYWX(blt_4 V) { return MkBlt_4(V.y, V.y, V.w, V.x); }
inline blt_4 SwizzYYWY(blt_4 V) { return MkBlt_4(V.y, V.y, V.w, V.y); }
inline blt_4 SwizzYYWZ(blt_4 V) { return MkBlt_4(V.y, V.y, V.w, V.z); }
inline blt_4 SwizzYYWW(blt_4 V) { return MkBlt_4(V.y, V.y, V.w, V.w); }
inline blt_4 SwizzYYW0(blt_4 V) { return MkBlt_4(V.y, V.y, V.w, (blt)0); }
inline blt_4 SwizzYY0X(blt_4 V) { return MkBlt_4(V.y, V.y, (blt)0, V.x); }
inline blt_4 SwizzYY0Y(blt_4 V) { return MkBlt_4(V.y, V.y, (blt)0, V.y); }
inline blt_4 SwizzYY0Z(blt_4 V) { return MkBlt_4(V.y, V.y, (blt)0, V.z); }
inline blt_4 SwizzYY0W(blt_4 V) { return MkBlt_4(V.y, V.y, (blt)0, V.w); }
inline blt_4 SwizzYY00(blt_4 V) { return MkBlt_4(V.y, V.y, (blt)0, (blt)0); }
inline blt_4 SwizzYZXX(blt_4 V) { return MkBlt_4(V.y, V.z, V.x, V.x); }
inline blt_4 SwizzYZXY(blt_4 V) { return MkBlt_4(V.y, V.z, V.x, V.y); }
inline blt_4 SwizzYZXZ(blt_4 V) { return MkBlt_4(V.y, V.z, V.x, V.z); }
inline blt_4 SwizzYZXW(blt_4 V) { return MkBlt_4(V.y, V.z, V.x, V.w); }
inline blt_4 SwizzYZX0(blt_4 V) { return MkBlt_4(V.y, V.z, V.x, (blt)0); }
inline blt_4 SwizzYZYX(blt_4 V) { return MkBlt_4(V.y, V.z, V.y, V.x); }
inline blt_4 SwizzYZYY(blt_4 V) { return MkBlt_4(V.y, V.z, V.y, V.y); }
inline blt_4 SwizzYZYZ(blt_4 V) { return MkBlt_4(V.y, V.z, V.y, V.z); }
inline blt_4 SwizzYZYW(blt_4 V) { return MkBlt_4(V.y, V.z, V.y, V.w); }
inline blt_4 SwizzYZY0(blt_4 V) { return MkBlt_4(V.y, V.z, V.y, (blt)0); }
inline blt_4 SwizzYZZX(blt_4 V) { return MkBlt_4(V.y, V.z, V.z, V.x); }
inline blt_4 SwizzYZZY(blt_4 V) { return MkBlt_4(V.y, V.z, V.z, V.y); }
inline blt_4 SwizzYZZZ(blt_4 V) { return MkBlt_4(V.y, V.z, V.z, V.z); }
inline blt_4 SwizzYZZW(blt_4 V) { return MkBlt_4(V.y, V.z, V.z, V.w); }
inline blt_4 SwizzYZZ0(blt_4 V) { return MkBlt_4(V.y, V.z, V.z, (blt)0); }
inline blt_4 SwizzYZWX(blt_4 V) { return MkBlt_4(V.y, V.z, V.w, V.x); }
inline blt_4 SwizzYZWY(blt_4 V) { return MkBlt_4(V.y, V.z, V.w, V.y); }
inline blt_4 SwizzYZWZ(blt_4 V) { return MkBlt_4(V.y, V.z, V.w, V.z); }
inline blt_4 SwizzYZWW(blt_4 V) { return MkBlt_4(V.y, V.z, V.w, V.w); }
inline blt_4 SwizzYZW0(blt_4 V) { return MkBlt_4(V.y, V.z, V.w, (blt)0); }
inline blt_4 SwizzYZ0X(blt_4 V) { return MkBlt_4(V.y, V.z, (blt)0, V.x); }
inline blt_4 SwizzYZ0Y(blt_4 V) { return MkBlt_4(V.y, V.z, (blt)0, V.y); }
inline blt_4 SwizzYZ0Z(blt_4 V) { return MkBlt_4(V.y, V.z, (blt)0, V.z); }
inline blt_4 SwizzYZ0W(blt_4 V) { return MkBlt_4(V.y, V.z, (blt)0, V.w); }
inline blt_4 SwizzYZ00(blt_4 V) { return MkBlt_4(V.y, V.z, (blt)0, (blt)0); }
inline blt_4 SwizzYWXX(blt_4 V) { return MkBlt_4(V.y, V.w, V.x, V.x); }
inline blt_4 SwizzYWXY(blt_4 V) { return MkBlt_4(V.y, V.w, V.x, V.y); }
inline blt_4 SwizzYWXZ(blt_4 V) { return MkBlt_4(V.y, V.w, V.x, V.z); }
inline blt_4 SwizzYWXW(blt_4 V) { return MkBlt_4(V.y, V.w, V.x, V.w); }
inline blt_4 SwizzYWX0(blt_4 V) { return MkBlt_4(V.y, V.w, V.x, (blt)0); }
inline blt_4 SwizzYWYX(blt_4 V) { return MkBlt_4(V.y, V.w, V.y, V.x); }
inline blt_4 SwizzYWYY(blt_4 V) { return MkBlt_4(V.y, V.w, V.y, V.y); }
inline blt_4 SwizzYWYZ(blt_4 V) { return MkBlt_4(V.y, V.w, V.y, V.z); }
inline blt_4 SwizzYWYW(blt_4 V) { return MkBlt_4(V.y, V.w, V.y, V.w); }
inline blt_4 SwizzYWY0(blt_4 V) { return MkBlt_4(V.y, V.w, V.y, (blt)0); }
inline blt_4 SwizzYWZX(blt_4 V) { return MkBlt_4(V.y, V.w, V.z, V.x); }
inline blt_4 SwizzYWZY(blt_4 V) { return MkBlt_4(V.y, V.w, V.z, V.y); }
inline blt_4 SwizzYWZZ(blt_4 V) { return MkBlt_4(V.y, V.w, V.z, V.z); }
inline blt_4 SwizzYWZW(blt_4 V) { return MkBlt_4(V.y, V.w, V.z, V.w); }
inline blt_4 SwizzYWZ0(blt_4 V) { return MkBlt_4(V.y, V.w, V.z, (blt)0); }
inline blt_4 SwizzYWWX(blt_4 V) { return MkBlt_4(V.y, V.w, V.w, V.x); }
inline blt_4 SwizzYWWY(blt_4 V) { return MkBlt_4(V.y, V.w, V.w, V.y); }
inline blt_4 SwizzYWWZ(blt_4 V) { return MkBlt_4(V.y, V.w, V.w, V.z); }
inline blt_4 SwizzYWWW(blt_4 V) { return MkBlt_4(V.y, V.w, V.w, V.w); }
inline blt_4 SwizzYWW0(blt_4 V) { return MkBlt_4(V.y, V.w, V.w, (blt)0); }
inline blt_4 SwizzYW0X(blt_4 V) { return MkBlt_4(V.y, V.w, (blt)0, V.x); }
inline blt_4 SwizzYW0Y(blt_4 V) { return MkBlt_4(V.y, V.w, (blt)0, V.y); }
inline blt_4 SwizzYW0Z(blt_4 V) { return MkBlt_4(V.y, V.w, (blt)0, V.z); }
inline blt_4 SwizzYW0W(blt_4 V) { return MkBlt_4(V.y, V.w, (blt)0, V.w); }
inline blt_4 SwizzYW00(blt_4 V) { return MkBlt_4(V.y, V.w, (blt)0, (blt)0); }
inline blt_4 SwizzY0XX(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.x, V.x); }
inline blt_4 SwizzY0XY(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.x, V.y); }
inline blt_4 SwizzY0XZ(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.x, V.z); }
inline blt_4 SwizzY0XW(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.x, V.w); }
inline blt_4 SwizzY0X0(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.x, (blt)0); }
inline blt_4 SwizzY0YX(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.y, V.x); }
inline blt_4 SwizzY0YY(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.y, V.y); }
inline blt_4 SwizzY0YZ(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.y, V.z); }
inline blt_4 SwizzY0YW(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.y, V.w); }
inline blt_4 SwizzY0Y0(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.y, (blt)0); }
inline blt_4 SwizzY0ZX(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.z, V.x); }
inline blt_4 SwizzY0ZY(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.z, V.y); }
inline blt_4 SwizzY0ZZ(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.z, V.z); }
inline blt_4 SwizzY0ZW(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.z, V.w); }
inline blt_4 SwizzY0Z0(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.z, (blt)0); }
inline blt_4 SwizzY0WX(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.w, V.x); }
inline blt_4 SwizzY0WY(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.w, V.y); }
inline blt_4 SwizzY0WZ(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.w, V.z); }
inline blt_4 SwizzY0WW(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.w, V.w); }
inline blt_4 SwizzY0W0(blt_4 V) { return MkBlt_4(V.y, (blt)0, V.w, (blt)0); }
inline blt_4 SwizzY00X(blt_4 V) { return MkBlt_4(V.y, (blt)0, (blt)0, V.x); }
inline blt_4 SwizzY00Y(blt_4 V) { return MkBlt_4(V.y, (blt)0, (blt)0, V.y); }
inline blt_4 SwizzY00Z(blt_4 V) { return MkBlt_4(V.y, (blt)0, (blt)0, V.z); }
inline blt_4 SwizzY00W(blt_4 V) { return MkBlt_4(V.y, (blt)0, (blt)0, V.w); }
inline blt_4 SwizzY000(blt_4 V) { return MkBlt_4(V.y, (blt)0, (blt)0, (blt)0); }
inline blt_4 SwizzZXXX(blt_4 V) { return MkBlt_4(V.z, V.x, V.x, V.x); }
inline blt_4 SwizzZXXY(blt_4 V) { return MkBlt_4(V.z, V.x, V.x, V.y); }
inline blt_4 SwizzZXXZ(blt_4 V) { return MkBlt_4(V.z, V.x, V.x, V.z); }
inline blt_4 SwizzZXXW(blt_4 V) { return MkBlt_4(V.z, V.x, V.x, V.w); }
inline blt_4 SwizzZXX0(blt_4 V) { return MkBlt_4(V.z, V.x, V.x, (blt)0); }
inline blt_4 SwizzZXYX(blt_4 V) { return MkBlt_4(V.z, V.x, V.y, V.x); }
inline blt_4 SwizzZXYY(blt_4 V) { return MkBlt_4(V.z, V.x, V.y, V.y); }
inline blt_4 SwizzZXYZ(blt_4 V) { return MkBlt_4(V.z, V.x, V.y, V.z); }
inline blt_4 SwizzZXYW(blt_4 V) { return MkBlt_4(V.z, V.x, V.y, V.w); }
inline blt_4 SwizzZXY0(blt_4 V) { return MkBlt_4(V.z, V.x, V.y, (blt)0); }
inline blt_4 SwizzZXZX(blt_4 V) { return MkBlt_4(V.z, V.x, V.z, V.x); }
inline blt_4 SwizzZXZY(blt_4 V) { return MkBlt_4(V.z, V.x, V.z, V.y); }
inline blt_4 SwizzZXZZ(blt_4 V) { return MkBlt_4(V.z, V.x, V.z, V.z); }
inline blt_4 SwizzZXZW(blt_4 V) { return MkBlt_4(V.z, V.x, V.z, V.w); }
inline blt_4 SwizzZXZ0(blt_4 V) { return MkBlt_4(V.z, V.x, V.z, (blt)0); }
inline blt_4 SwizzZXWX(blt_4 V) { return MkBlt_4(V.z, V.x, V.w, V.x); }
inline blt_4 SwizzZXWY(blt_4 V) { return MkBlt_4(V.z, V.x, V.w, V.y); }
inline blt_4 SwizzZXWZ(blt_4 V) { return MkBlt_4(V.z, V.x, V.w, V.z); }
inline blt_4 SwizzZXWW(blt_4 V) { return MkBlt_4(V.z, V.x, V.w, V.w); }
inline blt_4 SwizzZXW0(blt_4 V) { return MkBlt_4(V.z, V.x, V.w, (blt)0); }
inline blt_4 SwizzZX0X(blt_4 V) { return MkBlt_4(V.z, V.x, (blt)0, V.x); }
inline blt_4 SwizzZX0Y(blt_4 V) { return MkBlt_4(V.z, V.x, (blt)0, V.y); }
inline blt_4 SwizzZX0Z(blt_4 V) { return MkBlt_4(V.z, V.x, (blt)0, V.z); }
inline blt_4 SwizzZX0W(blt_4 V) { return MkBlt_4(V.z, V.x, (blt)0, V.w); }
inline blt_4 SwizzZX00(blt_4 V) { return MkBlt_4(V.z, V.x, (blt)0, (blt)0); }
inline blt_4 SwizzZYXX(blt_4 V) { return MkBlt_4(V.z, V.y, V.x, V.x); }
inline blt_4 SwizzZYXY(blt_4 V) { return MkBlt_4(V.z, V.y, V.x, V.y); }
inline blt_4 SwizzZYXZ(blt_4 V) { return MkBlt_4(V.z, V.y, V.x, V.z); }
inline blt_4 SwizzZYXW(blt_4 V) { return MkBlt_4(V.z, V.y, V.x, V.w); }
inline blt_4 SwizzZYX0(blt_4 V) { return MkBlt_4(V.z, V.y, V.x, (blt)0); }
inline blt_4 SwizzZYYX(blt_4 V) { return MkBlt_4(V.z, V.y, V.y, V.x); }
inline blt_4 SwizzZYYY(blt_4 V) { return MkBlt_4(V.z, V.y, V.y, V.y); }
inline blt_4 SwizzZYYZ(blt_4 V) { return MkBlt_4(V.z, V.y, V.y, V.z); }
inline blt_4 SwizzZYYW(blt_4 V) { return MkBlt_4(V.z, V.y, V.y, V.w); }
inline blt_4 SwizzZYY0(blt_4 V) { return MkBlt_4(V.z, V.y, V.y, (blt)0); }
inline blt_4 SwizzZYZX(blt_4 V) { return MkBlt_4(V.z, V.y, V.z, V.x); }
inline blt_4 SwizzZYZY(blt_4 V) { return MkBlt_4(V.z, V.y, V.z, V.y); }
inline blt_4 SwizzZYZZ(blt_4 V) { return MkBlt_4(V.z, V.y, V.z, V.z); }
inline blt_4 SwizzZYZW(blt_4 V) { return MkBlt_4(V.z, V.y, V.z, V.w); }
inline blt_4 SwizzZYZ0(blt_4 V) { return MkBlt_4(V.z, V.y, V.z, (blt)0); }
inline blt_4 SwizzZYWX(blt_4 V) { return MkBlt_4(V.z, V.y, V.w, V.x); }
inline blt_4 SwizzZYWY(blt_4 V) { return MkBlt_4(V.z, V.y, V.w, V.y); }
inline blt_4 SwizzZYWZ(blt_4 V) { return MkBlt_4(V.z, V.y, V.w, V.z); }
inline blt_4 SwizzZYWW(blt_4 V) { return MkBlt_4(V.z, V.y, V.w, V.w); }
inline blt_4 SwizzZYW0(blt_4 V) { return MkBlt_4(V.z, V.y, V.w, (blt)0); }
inline blt_4 SwizzZY0X(blt_4 V) { return MkBlt_4(V.z, V.y, (blt)0, V.x); }
inline blt_4 SwizzZY0Y(blt_4 V) { return MkBlt_4(V.z, V.y, (blt)0, V.y); }
inline blt_4 SwizzZY0Z(blt_4 V) { return MkBlt_4(V.z, V.y, (blt)0, V.z); }
inline blt_4 SwizzZY0W(blt_4 V) { return MkBlt_4(V.z, V.y, (blt)0, V.w); }
inline blt_4 SwizzZY00(blt_4 V) { return MkBlt_4(V.z, V.y, (blt)0, (blt)0); }
inline blt_4 SwizzZZXX(blt_4 V) { return MkBlt_4(V.z, V.z, V.x, V.x); }
inline blt_4 SwizzZZXY(blt_4 V) { return MkBlt_4(V.z, V.z, V.x, V.y); }
inline blt_4 SwizzZZXZ(blt_4 V) { return MkBlt_4(V.z, V.z, V.x, V.z); }
inline blt_4 SwizzZZXW(blt_4 V) { return MkBlt_4(V.z, V.z, V.x, V.w); }
inline blt_4 SwizzZZX0(blt_4 V) { return MkBlt_4(V.z, V.z, V.x, (blt)0); }
inline blt_4 SwizzZZYX(blt_4 V) { return MkBlt_4(V.z, V.z, V.y, V.x); }
inline blt_4 SwizzZZYY(blt_4 V) { return MkBlt_4(V.z, V.z, V.y, V.y); }
inline blt_4 SwizzZZYZ(blt_4 V) { return MkBlt_4(V.z, V.z, V.y, V.z); }
inline blt_4 SwizzZZYW(blt_4 V) { return MkBlt_4(V.z, V.z, V.y, V.w); }
inline blt_4 SwizzZZY0(blt_4 V) { return MkBlt_4(V.z, V.z, V.y, (blt)0); }
inline blt_4 SwizzZZZX(blt_4 V) { return MkBlt_4(V.z, V.z, V.z, V.x); }
inline blt_4 SwizzZZZY(blt_4 V) { return MkBlt_4(V.z, V.z, V.z, V.y); }
inline blt_4 SwizzZZZZ(blt_4 V) { return MkBlt_4(V.z, V.z, V.z, V.z); }
inline blt_4 SwizzZZZW(blt_4 V) { return MkBlt_4(V.z, V.z, V.z, V.w); }
inline blt_4 SwizzZZZ0(blt_4 V) { return MkBlt_4(V.z, V.z, V.z, (blt)0); }
inline blt_4 SwizzZZWX(blt_4 V) { return MkBlt_4(V.z, V.z, V.w, V.x); }
inline blt_4 SwizzZZWY(blt_4 V) { return MkBlt_4(V.z, V.z, V.w, V.y); }
inline blt_4 SwizzZZWZ(blt_4 V) { return MkBlt_4(V.z, V.z, V.w, V.z); }
inline blt_4 SwizzZZWW(blt_4 V) { return MkBlt_4(V.z, V.z, V.w, V.w); }
inline blt_4 SwizzZZW0(blt_4 V) { return MkBlt_4(V.z, V.z, V.w, (blt)0); }
inline blt_4 SwizzZZ0X(blt_4 V) { return MkBlt_4(V.z, V.z, (blt)0, V.x); }
inline blt_4 SwizzZZ0Y(blt_4 V) { return MkBlt_4(V.z, V.z, (blt)0, V.y); }
inline blt_4 SwizzZZ0Z(blt_4 V) { return MkBlt_4(V.z, V.z, (blt)0, V.z); }
inline blt_4 SwizzZZ0W(blt_4 V) { return MkBlt_4(V.z, V.z, (blt)0, V.w); }
inline blt_4 SwizzZZ00(blt_4 V) { return MkBlt_4(V.z, V.z, (blt)0, (blt)0); }
inline blt_4 SwizzZWXX(blt_4 V) { return MkBlt_4(V.z, V.w, V.x, V.x); }
inline blt_4 SwizzZWXY(blt_4 V) { return MkBlt_4(V.z, V.w, V.x, V.y); }
inline blt_4 SwizzZWXZ(blt_4 V) { return MkBlt_4(V.z, V.w, V.x, V.z); }
inline blt_4 SwizzZWXW(blt_4 V) { return MkBlt_4(V.z, V.w, V.x, V.w); }
inline blt_4 SwizzZWX0(blt_4 V) { return MkBlt_4(V.z, V.w, V.x, (blt)0); }
inline blt_4 SwizzZWYX(blt_4 V) { return MkBlt_4(V.z, V.w, V.y, V.x); }
inline blt_4 SwizzZWYY(blt_4 V) { return MkBlt_4(V.z, V.w, V.y, V.y); }
inline blt_4 SwizzZWYZ(blt_4 V) { return MkBlt_4(V.z, V.w, V.y, V.z); }
inline blt_4 SwizzZWYW(blt_4 V) { return MkBlt_4(V.z, V.w, V.y, V.w); }
inline blt_4 SwizzZWY0(blt_4 V) { return MkBlt_4(V.z, V.w, V.y, (blt)0); }
inline blt_4 SwizzZWZX(blt_4 V) { return MkBlt_4(V.z, V.w, V.z, V.x); }
inline blt_4 SwizzZWZY(blt_4 V) { return MkBlt_4(V.z, V.w, V.z, V.y); }
inline blt_4 SwizzZWZZ(blt_4 V) { return MkBlt_4(V.z, V.w, V.z, V.z); }
inline blt_4 SwizzZWZW(blt_4 V) { return MkBlt_4(V.z, V.w, V.z, V.w); }
inline blt_4 SwizzZWZ0(blt_4 V) { return MkBlt_4(V.z, V.w, V.z, (blt)0); }
inline blt_4 SwizzZWWX(blt_4 V) { return MkBlt_4(V.z, V.w, V.w, V.x); }
inline blt_4 SwizzZWWY(blt_4 V) { return MkBlt_4(V.z, V.w, V.w, V.y); }
inline blt_4 SwizzZWWZ(blt_4 V) { return MkBlt_4(V.z, V.w, V.w, V.z); }
inline blt_4 SwizzZWWW(blt_4 V) { return MkBlt_4(V.z, V.w, V.w, V.w); }
inline blt_4 SwizzZWW0(blt_4 V) { return MkBlt_4(V.z, V.w, V.w, (blt)0); }
inline blt_4 SwizzZW0X(blt_4 V) { return MkBlt_4(V.z, V.w, (blt)0, V.x); }
inline blt_4 SwizzZW0Y(blt_4 V) { return MkBlt_4(V.z, V.w, (blt)0, V.y); }
inline blt_4 SwizzZW0Z(blt_4 V) { return MkBlt_4(V.z, V.w, (blt)0, V.z); }
inline blt_4 SwizzZW0W(blt_4 V) { return MkBlt_4(V.z, V.w, (blt)0, V.w); }
inline blt_4 SwizzZW00(blt_4 V) { return MkBlt_4(V.z, V.w, (blt)0, (blt)0); }
inline blt_4 SwizzZ0XX(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.x, V.x); }
inline blt_4 SwizzZ0XY(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.x, V.y); }
inline blt_4 SwizzZ0XZ(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.x, V.z); }
inline blt_4 SwizzZ0XW(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.x, V.w); }
inline blt_4 SwizzZ0X0(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.x, (blt)0); }
inline blt_4 SwizzZ0YX(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.y, V.x); }
inline blt_4 SwizzZ0YY(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.y, V.y); }
inline blt_4 SwizzZ0YZ(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.y, V.z); }
inline blt_4 SwizzZ0YW(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.y, V.w); }
inline blt_4 SwizzZ0Y0(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.y, (blt)0); }
inline blt_4 SwizzZ0ZX(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.z, V.x); }
inline blt_4 SwizzZ0ZY(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.z, V.y); }
inline blt_4 SwizzZ0ZZ(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.z, V.z); }
inline blt_4 SwizzZ0ZW(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.z, V.w); }
inline blt_4 SwizzZ0Z0(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.z, (blt)0); }
inline blt_4 SwizzZ0WX(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.w, V.x); }
inline blt_4 SwizzZ0WY(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.w, V.y); }
inline blt_4 SwizzZ0WZ(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.w, V.z); }
inline blt_4 SwizzZ0WW(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.w, V.w); }
inline blt_4 SwizzZ0W0(blt_4 V) { return MkBlt_4(V.z, (blt)0, V.w, (blt)0); }
inline blt_4 SwizzZ00X(blt_4 V) { return MkBlt_4(V.z, (blt)0, (blt)0, V.x); }
inline blt_4 SwizzZ00Y(blt_4 V) { return MkBlt_4(V.z, (blt)0, (blt)0, V.y); }
inline blt_4 SwizzZ00Z(blt_4 V) { return MkBlt_4(V.z, (blt)0, (blt)0, V.z); }
inline blt_4 SwizzZ00W(blt_4 V) { return MkBlt_4(V.z, (blt)0, (blt)0, V.w); }
inline blt_4 SwizzZ000(blt_4 V) { return MkBlt_4(V.z, (blt)0, (blt)0, (blt)0); }
inline blt_4 SwizzWXXX(blt_4 V) { return MkBlt_4(V.w, V.x, V.x, V.x); }
inline blt_4 SwizzWXXY(blt_4 V) { return MkBlt_4(V.w, V.x, V.x, V.y); }
inline blt_4 SwizzWXXZ(blt_4 V) { return MkBlt_4(V.w, V.x, V.x, V.z); }
inline blt_4 SwizzWXXW(blt_4 V) { return MkBlt_4(V.w, V.x, V.x, V.w); }
inline blt_4 SwizzWXX0(blt_4 V) { return MkBlt_4(V.w, V.x, V.x, (blt)0); }
inline blt_4 SwizzWXYX(blt_4 V) { return MkBlt_4(V.w, V.x, V.y, V.x); }
inline blt_4 SwizzWXYY(blt_4 V) { return MkBlt_4(V.w, V.x, V.y, V.y); }
inline blt_4 SwizzWXYZ(blt_4 V) { return MkBlt_4(V.w, V.x, V.y, V.z); }
inline blt_4 SwizzWXYW(blt_4 V) { return MkBlt_4(V.w, V.x, V.y, V.w); }
inline blt_4 SwizzWXY0(blt_4 V) { return MkBlt_4(V.w, V.x, V.y, (blt)0); }
inline blt_4 SwizzWXZX(blt_4 V) { return MkBlt_4(V.w, V.x, V.z, V.x); }
inline blt_4 SwizzWXZY(blt_4 V) { return MkBlt_4(V.w, V.x, V.z, V.y); }
inline blt_4 SwizzWXZZ(blt_4 V) { return MkBlt_4(V.w, V.x, V.z, V.z); }
inline blt_4 SwizzWXZW(blt_4 V) { return MkBlt_4(V.w, V.x, V.z, V.w); }
inline blt_4 SwizzWXZ0(blt_4 V) { return MkBlt_4(V.w, V.x, V.z, (blt)0); }
inline blt_4 SwizzWXWX(blt_4 V) { return MkBlt_4(V.w, V.x, V.w, V.x); }
inline blt_4 SwizzWXWY(blt_4 V) { return MkBlt_4(V.w, V.x, V.w, V.y); }
inline blt_4 SwizzWXWZ(blt_4 V) { return MkBlt_4(V.w, V.x, V.w, V.z); }
inline blt_4 SwizzWXWW(blt_4 V) { return MkBlt_4(V.w, V.x, V.w, V.w); }
inline blt_4 SwizzWXW0(blt_4 V) { return MkBlt_4(V.w, V.x, V.w, (blt)0); }
inline blt_4 SwizzWX0X(blt_4 V) { return MkBlt_4(V.w, V.x, (blt)0, V.x); }
inline blt_4 SwizzWX0Y(blt_4 V) { return MkBlt_4(V.w, V.x, (blt)0, V.y); }
inline blt_4 SwizzWX0Z(blt_4 V) { return MkBlt_4(V.w, V.x, (blt)0, V.z); }
inline blt_4 SwizzWX0W(blt_4 V) { return MkBlt_4(V.w, V.x, (blt)0, V.w); }
inline blt_4 SwizzWX00(blt_4 V) { return MkBlt_4(V.w, V.x, (blt)0, (blt)0); }
inline blt_4 SwizzWYXX(blt_4 V) { return MkBlt_4(V.w, V.y, V.x, V.x); }
inline blt_4 SwizzWYXY(blt_4 V) { return MkBlt_4(V.w, V.y, V.x, V.y); }
inline blt_4 SwizzWYXZ(blt_4 V) { return MkBlt_4(V.w, V.y, V.x, V.z); }
inline blt_4 SwizzWYXW(blt_4 V) { return MkBlt_4(V.w, V.y, V.x, V.w); }
inline blt_4 SwizzWYX0(blt_4 V) { return MkBlt_4(V.w, V.y, V.x, (blt)0); }
inline blt_4 SwizzWYYX(blt_4 V) { return MkBlt_4(V.w, V.y, V.y, V.x); }
inline blt_4 SwizzWYYY(blt_4 V) { return MkBlt_4(V.w, V.y, V.y, V.y); }
inline blt_4 SwizzWYYZ(blt_4 V) { return MkBlt_4(V.w, V.y, V.y, V.z); }
inline blt_4 SwizzWYYW(blt_4 V) { return MkBlt_4(V.w, V.y, V.y, V.w); }
inline blt_4 SwizzWYY0(blt_4 V) { return MkBlt_4(V.w, V.y, V.y, (blt)0); }
inline blt_4 SwizzWYZX(blt_4 V) { return MkBlt_4(V.w, V.y, V.z, V.x); }
inline blt_4 SwizzWYZY(blt_4 V) { return MkBlt_4(V.w, V.y, V.z, V.y); }
inline blt_4 SwizzWYZZ(blt_4 V) { return MkBlt_4(V.w, V.y, V.z, V.z); }
inline blt_4 SwizzWYZW(blt_4 V) { return MkBlt_4(V.w, V.y, V.z, V.w); }
inline blt_4 SwizzWYZ0(blt_4 V) { return MkBlt_4(V.w, V.y, V.z, (blt)0); }
inline blt_4 SwizzWYWX(blt_4 V) { return MkBlt_4(V.w, V.y, V.w, V.x); }
inline blt_4 SwizzWYWY(blt_4 V) { return MkBlt_4(V.w, V.y, V.w, V.y); }
inline blt_4 SwizzWYWZ(blt_4 V) { return MkBlt_4(V.w, V.y, V.w, V.z); }
inline blt_4 SwizzWYWW(blt_4 V) { return MkBlt_4(V.w, V.y, V.w, V.w); }
inline blt_4 SwizzWYW0(blt_4 V) { return MkBlt_4(V.w, V.y, V.w, (blt)0); }
inline blt_4 SwizzWY0X(blt_4 V) { return MkBlt_4(V.w, V.y, (blt)0, V.x); }
inline blt_4 SwizzWY0Y(blt_4 V) { return MkBlt_4(V.w, V.y, (blt)0, V.y); }
inline blt_4 SwizzWY0Z(blt_4 V) { return MkBlt_4(V.w, V.y, (blt)0, V.z); }
inline blt_4 SwizzWY0W(blt_4 V) { return MkBlt_4(V.w, V.y, (blt)0, V.w); }
inline blt_4 SwizzWY00(blt_4 V) { return MkBlt_4(V.w, V.y, (blt)0, (blt)0); }
inline blt_4 SwizzWZXX(blt_4 V) { return MkBlt_4(V.w, V.z, V.x, V.x); }
inline blt_4 SwizzWZXY(blt_4 V) { return MkBlt_4(V.w, V.z, V.x, V.y); }
inline blt_4 SwizzWZXZ(blt_4 V) { return MkBlt_4(V.w, V.z, V.x, V.z); }
inline blt_4 SwizzWZXW(blt_4 V) { return MkBlt_4(V.w, V.z, V.x, V.w); }
inline blt_4 SwizzWZX0(blt_4 V) { return MkBlt_4(V.w, V.z, V.x, (blt)0); }
inline blt_4 SwizzWZYX(blt_4 V) { return MkBlt_4(V.w, V.z, V.y, V.x); }
inline blt_4 SwizzWZYY(blt_4 V) { return MkBlt_4(V.w, V.z, V.y, V.y); }
inline blt_4 SwizzWZYZ(blt_4 V) { return MkBlt_4(V.w, V.z, V.y, V.z); }
inline blt_4 SwizzWZYW(blt_4 V) { return MkBlt_4(V.w, V.z, V.y, V.w); }
inline blt_4 SwizzWZY0(blt_4 V) { return MkBlt_4(V.w, V.z, V.y, (blt)0); }
inline blt_4 SwizzWZZX(blt_4 V) { return MkBlt_4(V.w, V.z, V.z, V.x); }
inline blt_4 SwizzWZZY(blt_4 V) { return MkBlt_4(V.w, V.z, V.z, V.y); }
inline blt_4 SwizzWZZZ(blt_4 V) { return MkBlt_4(V.w, V.z, V.z, V.z); }
inline blt_4 SwizzWZZW(blt_4 V) { return MkBlt_4(V.w, V.z, V.z, V.w); }
inline blt_4 SwizzWZZ0(blt_4 V) { return MkBlt_4(V.w, V.z, V.z, (blt)0); }
inline blt_4 SwizzWZWX(blt_4 V) { return MkBlt_4(V.w, V.z, V.w, V.x); }
inline blt_4 SwizzWZWY(blt_4 V) { return MkBlt_4(V.w, V.z, V.w, V.y); }
inline blt_4 SwizzWZWZ(blt_4 V) { return MkBlt_4(V.w, V.z, V.w, V.z); }
inline blt_4 SwizzWZWW(blt_4 V) { return MkBlt_4(V.w, V.z, V.w, V.w); }
inline blt_4 SwizzWZW0(blt_4 V) { return MkBlt_4(V.w, V.z, V.w, (blt)0); }
inline blt_4 SwizzWZ0X(blt_4 V) { return MkBlt_4(V.w, V.z, (blt)0, V.x); }
inline blt_4 SwizzWZ0Y(blt_4 V) { return MkBlt_4(V.w, V.z, (blt)0, V.y); }
inline blt_4 SwizzWZ0Z(blt_4 V) { return MkBlt_4(V.w, V.z, (blt)0, V.z); }
inline blt_4 SwizzWZ0W(blt_4 V) { return MkBlt_4(V.w, V.z, (blt)0, V.w); }
inline blt_4 SwizzWZ00(blt_4 V) { return MkBlt_4(V.w, V.z, (blt)0, (blt)0); }
inline blt_4 SwizzWWXX(blt_4 V) { return MkBlt_4(V.w, V.w, V.x, V.x); }
inline blt_4 SwizzWWXY(blt_4 V) { return MkBlt_4(V.w, V.w, V.x, V.y); }
inline blt_4 SwizzWWXZ(blt_4 V) { return MkBlt_4(V.w, V.w, V.x, V.z); }
inline blt_4 SwizzWWXW(blt_4 V) { return MkBlt_4(V.w, V.w, V.x, V.w); }
inline blt_4 SwizzWWX0(blt_4 V) { return MkBlt_4(V.w, V.w, V.x, (blt)0); }
inline blt_4 SwizzWWYX(blt_4 V) { return MkBlt_4(V.w, V.w, V.y, V.x); }
inline blt_4 SwizzWWYY(blt_4 V) { return MkBlt_4(V.w, V.w, V.y, V.y); }
inline blt_4 SwizzWWYZ(blt_4 V) { return MkBlt_4(V.w, V.w, V.y, V.z); }
inline blt_4 SwizzWWYW(blt_4 V) { return MkBlt_4(V.w, V.w, V.y, V.w); }
inline blt_4 SwizzWWY0(blt_4 V) { return MkBlt_4(V.w, V.w, V.y, (blt)0); }
inline blt_4 SwizzWWZX(blt_4 V) { return MkBlt_4(V.w, V.w, V.z, V.x); }
inline blt_4 SwizzWWZY(blt_4 V) { return MkBlt_4(V.w, V.w, V.z, V.y); }
inline blt_4 SwizzWWZZ(blt_4 V) { return MkBlt_4(V.w, V.w, V.z, V.z); }
inline blt_4 SwizzWWZW(blt_4 V) { return MkBlt_4(V.w, V.w, V.z, V.w); }
inline blt_4 SwizzWWZ0(blt_4 V) { return MkBlt_4(V.w, V.w, V.z, (blt)0); }
inline blt_4 SwizzWWWX(blt_4 V) { return MkBlt_4(V.w, V.w, V.w, V.x); }
inline blt_4 SwizzWWWY(blt_4 V) { return MkBlt_4(V.w, V.w, V.w, V.y); }
inline blt_4 SwizzWWWZ(blt_4 V) { return MkBlt_4(V.w, V.w, V.w, V.z); }
inline blt_4 SwizzWWWW(blt_4 V) { return MkBlt_4(V.w, V.w, V.w, V.w); }
inline blt_4 SwizzWWW0(blt_4 V) { return MkBlt_4(V.w, V.w, V.w, (blt)0); }
inline blt_4 SwizzWW0X(blt_4 V) { return MkBlt_4(V.w, V.w, (blt)0, V.x); }
inline blt_4 SwizzWW0Y(blt_4 V) { return MkBlt_4(V.w, V.w, (blt)0, V.y); }
inline blt_4 SwizzWW0Z(blt_4 V) { return MkBlt_4(V.w, V.w, (blt)0, V.z); }
inline blt_4 SwizzWW0W(blt_4 V) { return MkBlt_4(V.w, V.w, (blt)0, V.w); }
inline blt_4 SwizzWW00(blt_4 V) { return MkBlt_4(V.w, V.w, (blt)0, (blt)0); }
inline blt_4 SwizzW0XX(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.x, V.x); }
inline blt_4 SwizzW0XY(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.x, V.y); }
inline blt_4 SwizzW0XZ(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.x, V.z); }
inline blt_4 SwizzW0XW(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.x, V.w); }
inline blt_4 SwizzW0X0(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.x, (blt)0); }
inline blt_4 SwizzW0YX(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.y, V.x); }
inline blt_4 SwizzW0YY(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.y, V.y); }
inline blt_4 SwizzW0YZ(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.y, V.z); }
inline blt_4 SwizzW0YW(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.y, V.w); }
inline blt_4 SwizzW0Y0(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.y, (blt)0); }
inline blt_4 SwizzW0ZX(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.z, V.x); }
inline blt_4 SwizzW0ZY(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.z, V.y); }
inline blt_4 SwizzW0ZZ(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.z, V.z); }
inline blt_4 SwizzW0ZW(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.z, V.w); }
inline blt_4 SwizzW0Z0(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.z, (blt)0); }
inline blt_4 SwizzW0WX(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.w, V.x); }
inline blt_4 SwizzW0WY(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.w, V.y); }
inline blt_4 SwizzW0WZ(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.w, V.z); }
inline blt_4 SwizzW0WW(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.w, V.w); }
inline blt_4 SwizzW0W0(blt_4 V) { return MkBlt_4(V.w, (blt)0, V.w, (blt)0); }
inline blt_4 SwizzW00X(blt_4 V) { return MkBlt_4(V.w, (blt)0, (blt)0, V.x); }
inline blt_4 SwizzW00Y(blt_4 V) { return MkBlt_4(V.w, (blt)0, (blt)0, V.y); }
inline blt_4 SwizzW00Z(blt_4 V) { return MkBlt_4(V.w, (blt)0, (blt)0, V.z); }
inline blt_4 SwizzW00W(blt_4 V) { return MkBlt_4(V.w, (blt)0, (blt)0, V.w); }
inline blt_4 SwizzW000(blt_4 V) { return MkBlt_4(V.w, (blt)0, (blt)0, (blt)0); }
inline blt_4 Swizz0XXX(blt_4 V) { return MkBlt_4((blt)0, V.x, V.x, V.x); }
inline blt_4 Swizz0XXY(blt_4 V) { return MkBlt_4((blt)0, V.x, V.x, V.y); }
inline blt_4 Swizz0XXZ(blt_4 V) { return MkBlt_4((blt)0, V.x, V.x, V.z); }
inline blt_4 Swizz0XXW(blt_4 V) { return MkBlt_4((blt)0, V.x, V.x, V.w); }
inline blt_4 Swizz0XX0(blt_4 V) { return MkBlt_4((blt)0, V.x, V.x, (blt)0); }
inline blt_4 Swizz0XYX(blt_4 V) { return MkBlt_4((blt)0, V.x, V.y, V.x); }
inline blt_4 Swizz0XYY(blt_4 V) { return MkBlt_4((blt)0, V.x, V.y, V.y); }
inline blt_4 Swizz0XYZ(blt_4 V) { return MkBlt_4((blt)0, V.x, V.y, V.z); }
inline blt_4 Swizz0XYW(blt_4 V) { return MkBlt_4((blt)0, V.x, V.y, V.w); }
inline blt_4 Swizz0XY0(blt_4 V) { return MkBlt_4((blt)0, V.x, V.y, (blt)0); }
inline blt_4 Swizz0XZX(blt_4 V) { return MkBlt_4((blt)0, V.x, V.z, V.x); }
inline blt_4 Swizz0XZY(blt_4 V) { return MkBlt_4((blt)0, V.x, V.z, V.y); }
inline blt_4 Swizz0XZZ(blt_4 V) { return MkBlt_4((blt)0, V.x, V.z, V.z); }
inline blt_4 Swizz0XZW(blt_4 V) { return MkBlt_4((blt)0, V.x, V.z, V.w); }
inline blt_4 Swizz0XZ0(blt_4 V) { return MkBlt_4((blt)0, V.x, V.z, (blt)0); }
inline blt_4 Swizz0XWX(blt_4 V) { return MkBlt_4((blt)0, V.x, V.w, V.x); }
inline blt_4 Swizz0XWY(blt_4 V) { return MkBlt_4((blt)0, V.x, V.w, V.y); }
inline blt_4 Swizz0XWZ(blt_4 V) { return MkBlt_4((blt)0, V.x, V.w, V.z); }
inline blt_4 Swizz0XWW(blt_4 V) { return MkBlt_4((blt)0, V.x, V.w, V.w); }
inline blt_4 Swizz0XW0(blt_4 V) { return MkBlt_4((blt)0, V.x, V.w, (blt)0); }
inline blt_4 Swizz0X0X(blt_4 V) { return MkBlt_4((blt)0, V.x, (blt)0, V.x); }
inline blt_4 Swizz0X0Y(blt_4 V) { return MkBlt_4((blt)0, V.x, (blt)0, V.y); }
inline blt_4 Swizz0X0Z(blt_4 V) { return MkBlt_4((blt)0, V.x, (blt)0, V.z); }
inline blt_4 Swizz0X0W(blt_4 V) { return MkBlt_4((blt)0, V.x, (blt)0, V.w); }
inline blt_4 Swizz0X00(blt_4 V) { return MkBlt_4((blt)0, V.x, (blt)0, (blt)0); }
inline blt_4 Swizz0YXX(blt_4 V) { return MkBlt_4((blt)0, V.y, V.x, V.x); }
inline blt_4 Swizz0YXY(blt_4 V) { return MkBlt_4((blt)0, V.y, V.x, V.y); }
inline blt_4 Swizz0YXZ(blt_4 V) { return MkBlt_4((blt)0, V.y, V.x, V.z); }
inline blt_4 Swizz0YXW(blt_4 V) { return MkBlt_4((blt)0, V.y, V.x, V.w); }
inline blt_4 Swizz0YX0(blt_4 V) { return MkBlt_4((blt)0, V.y, V.x, (blt)0); }
inline blt_4 Swizz0YYX(blt_4 V) { return MkBlt_4((blt)0, V.y, V.y, V.x); }
inline blt_4 Swizz0YYY(blt_4 V) { return MkBlt_4((blt)0, V.y, V.y, V.y); }
inline blt_4 Swizz0YYZ(blt_4 V) { return MkBlt_4((blt)0, V.y, V.y, V.z); }
inline blt_4 Swizz0YYW(blt_4 V) { return MkBlt_4((blt)0, V.y, V.y, V.w); }
inline blt_4 Swizz0YY0(blt_4 V) { return MkBlt_4((blt)0, V.y, V.y, (blt)0); }
inline blt_4 Swizz0YZX(blt_4 V) { return MkBlt_4((blt)0, V.y, V.z, V.x); }
inline blt_4 Swizz0YZY(blt_4 V) { return MkBlt_4((blt)0, V.y, V.z, V.y); }
inline blt_4 Swizz0YZZ(blt_4 V) { return MkBlt_4((blt)0, V.y, V.z, V.z); }
inline blt_4 Swizz0YZW(blt_4 V) { return MkBlt_4((blt)0, V.y, V.z, V.w); }
inline blt_4 Swizz0YZ0(blt_4 V) { return MkBlt_4((blt)0, V.y, V.z, (blt)0); }
inline blt_4 Swizz0YWX(blt_4 V) { return MkBlt_4((blt)0, V.y, V.w, V.x); }
inline blt_4 Swizz0YWY(blt_4 V) { return MkBlt_4((blt)0, V.y, V.w, V.y); }
inline blt_4 Swizz0YWZ(blt_4 V) { return MkBlt_4((blt)0, V.y, V.w, V.z); }
inline blt_4 Swizz0YWW(blt_4 V) { return MkBlt_4((blt)0, V.y, V.w, V.w); }
inline blt_4 Swizz0YW0(blt_4 V) { return MkBlt_4((blt)0, V.y, V.w, (blt)0); }
inline blt_4 Swizz0Y0X(blt_4 V) { return MkBlt_4((blt)0, V.y, (blt)0, V.x); }
inline blt_4 Swizz0Y0Y(blt_4 V) { return MkBlt_4((blt)0, V.y, (blt)0, V.y); }
inline blt_4 Swizz0Y0Z(blt_4 V) { return MkBlt_4((blt)0, V.y, (blt)0, V.z); }
inline blt_4 Swizz0Y0W(blt_4 V) { return MkBlt_4((blt)0, V.y, (blt)0, V.w); }
inline blt_4 Swizz0Y00(blt_4 V) { return MkBlt_4((blt)0, V.y, (blt)0, (blt)0); }
inline blt_4 Swizz0ZXX(blt_4 V) { return MkBlt_4((blt)0, V.z, V.x, V.x); }
inline blt_4 Swizz0ZXY(blt_4 V) { return MkBlt_4((blt)0, V.z, V.x, V.y); }
inline blt_4 Swizz0ZXZ(blt_4 V) { return MkBlt_4((blt)0, V.z, V.x, V.z); }
inline blt_4 Swizz0ZXW(blt_4 V) { return MkBlt_4((blt)0, V.z, V.x, V.w); }
inline blt_4 Swizz0ZX0(blt_4 V) { return MkBlt_4((blt)0, V.z, V.x, (blt)0); }
inline blt_4 Swizz0ZYX(blt_4 V) { return MkBlt_4((blt)0, V.z, V.y, V.x); }
inline blt_4 Swizz0ZYY(blt_4 V) { return MkBlt_4((blt)0, V.z, V.y, V.y); }
inline blt_4 Swizz0ZYZ(blt_4 V) { return MkBlt_4((blt)0, V.z, V.y, V.z); }
inline blt_4 Swizz0ZYW(blt_4 V) { return MkBlt_4((blt)0, V.z, V.y, V.w); }
inline blt_4 Swizz0ZY0(blt_4 V) { return MkBlt_4((blt)0, V.z, V.y, (blt)0); }
inline blt_4 Swizz0ZZX(blt_4 V) { return MkBlt_4((blt)0, V.z, V.z, V.x); }
inline blt_4 Swizz0ZZY(blt_4 V) { return MkBlt_4((blt)0, V.z, V.z, V.y); }
inline blt_4 Swizz0ZZZ(blt_4 V) { return MkBlt_4((blt)0, V.z, V.z, V.z); }
inline blt_4 Swizz0ZZW(blt_4 V) { return MkBlt_4((blt)0, V.z, V.z, V.w); }
inline blt_4 Swizz0ZZ0(blt_4 V) { return MkBlt_4((blt)0, V.z, V.z, (blt)0); }
inline blt_4 Swizz0ZWX(blt_4 V) { return MkBlt_4((blt)0, V.z, V.w, V.x); }
inline blt_4 Swizz0ZWY(blt_4 V) { return MkBlt_4((blt)0, V.z, V.w, V.y); }
inline blt_4 Swizz0ZWZ(blt_4 V) { return MkBlt_4((blt)0, V.z, V.w, V.z); }
inline blt_4 Swizz0ZWW(blt_4 V) { return MkBlt_4((blt)0, V.z, V.w, V.w); }
inline blt_4 Swizz0ZW0(blt_4 V) { return MkBlt_4((blt)0, V.z, V.w, (blt)0); }
inline blt_4 Swizz0Z0X(blt_4 V) { return MkBlt_4((blt)0, V.z, (blt)0, V.x); }
inline blt_4 Swizz0Z0Y(blt_4 V) { return MkBlt_4((blt)0, V.z, (blt)0, V.y); }
inline blt_4 Swizz0Z0Z(blt_4 V) { return MkBlt_4((blt)0, V.z, (blt)0, V.z); }
inline blt_4 Swizz0Z0W(blt_4 V) { return MkBlt_4((blt)0, V.z, (blt)0, V.w); }
inline blt_4 Swizz0Z00(blt_4 V) { return MkBlt_4((blt)0, V.z, (blt)0, (blt)0); }
inline blt_4 Swizz0WXX(blt_4 V) { return MkBlt_4((blt)0, V.w, V.x, V.x); }
inline blt_4 Swizz0WXY(blt_4 V) { return MkBlt_4((blt)0, V.w, V.x, V.y); }
inline blt_4 Swizz0WXZ(blt_4 V) { return MkBlt_4((blt)0, V.w, V.x, V.z); }
inline blt_4 Swizz0WXW(blt_4 V) { return MkBlt_4((blt)0, V.w, V.x, V.w); }
inline blt_4 Swizz0WX0(blt_4 V) { return MkBlt_4((blt)0, V.w, V.x, (blt)0); }
inline blt_4 Swizz0WYX(blt_4 V) { return MkBlt_4((blt)0, V.w, V.y, V.x); }
inline blt_4 Swizz0WYY(blt_4 V) { return MkBlt_4((blt)0, V.w, V.y, V.y); }
inline blt_4 Swizz0WYZ(blt_4 V) { return MkBlt_4((blt)0, V.w, V.y, V.z); }
inline blt_4 Swizz0WYW(blt_4 V) { return MkBlt_4((blt)0, V.w, V.y, V.w); }
inline blt_4 Swizz0WY0(blt_4 V) { return MkBlt_4((blt)0, V.w, V.y, (blt)0); }
inline blt_4 Swizz0WZX(blt_4 V) { return MkBlt_4((blt)0, V.w, V.z, V.x); }
inline blt_4 Swizz0WZY(blt_4 V) { return MkBlt_4((blt)0, V.w, V.z, V.y); }
inline blt_4 Swizz0WZZ(blt_4 V) { return MkBlt_4((blt)0, V.w, V.z, V.z); }
inline blt_4 Swizz0WZW(blt_4 V) { return MkBlt_4((blt)0, V.w, V.z, V.w); }
inline blt_4 Swizz0WZ0(blt_4 V) { return MkBlt_4((blt)0, V.w, V.z, (blt)0); }
inline blt_4 Swizz0WWX(blt_4 V) { return MkBlt_4((blt)0, V.w, V.w, V.x); }
inline blt_4 Swizz0WWY(blt_4 V) { return MkBlt_4((blt)0, V.w, V.w, V.y); }
inline blt_4 Swizz0WWZ(blt_4 V) { return MkBlt_4((blt)0, V.w, V.w, V.z); }
inline blt_4 Swizz0WWW(blt_4 V) { return MkBlt_4((blt)0, V.w, V.w, V.w); }
inline blt_4 Swizz0WW0(blt_4 V) { return MkBlt_4((blt)0, V.w, V.w, (blt)0); }
inline blt_4 Swizz0W0X(blt_4 V) { return MkBlt_4((blt)0, V.w, (blt)0, V.x); }
inline blt_4 Swizz0W0Y(blt_4 V) { return MkBlt_4((blt)0, V.w, (blt)0, V.y); }
inline blt_4 Swizz0W0Z(blt_4 V) { return MkBlt_4((blt)0, V.w, (blt)0, V.z); }
inline blt_4 Swizz0W0W(blt_4 V) { return MkBlt_4((blt)0, V.w, (blt)0, V.w); }
inline blt_4 Swizz0W00(blt_4 V) { return MkBlt_4((blt)0, V.w, (blt)0, (blt)0); }
inline blt_4 Swizz00XX(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.x, V.x); }
inline blt_4 Swizz00XY(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.x, V.y); }
inline blt_4 Swizz00XZ(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.x, V.z); }
inline blt_4 Swizz00XW(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.x, V.w); }
inline blt_4 Swizz00X0(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.x, (blt)0); }
inline blt_4 Swizz00YX(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.y, V.x); }
inline blt_4 Swizz00YY(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.y, V.y); }
inline blt_4 Swizz00YZ(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.y, V.z); }
inline blt_4 Swizz00YW(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.y, V.w); }
inline blt_4 Swizz00Y0(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.y, (blt)0); }
inline blt_4 Swizz00ZX(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.z, V.x); }
inline blt_4 Swizz00ZY(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.z, V.y); }
inline blt_4 Swizz00ZZ(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.z, V.z); }
inline blt_4 Swizz00ZW(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.z, V.w); }
inline blt_4 Swizz00Z0(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.z, (blt)0); }
inline blt_4 Swizz00WX(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.w, V.x); }
inline blt_4 Swizz00WY(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.w, V.y); }
inline blt_4 Swizz00WZ(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.w, V.z); }
inline blt_4 Swizz00WW(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.w, V.w); }
inline blt_4 Swizz00W0(blt_4 V) { return MkBlt_4((blt)0, (blt)0, V.w, (blt)0); }
inline blt_4 Swizz000X(blt_4 V) { return MkBlt_4((blt)0, (blt)0, (blt)0, V.x); }
inline blt_4 Swizz000Y(blt_4 V) { return MkBlt_4((blt)0, (blt)0, (blt)0, V.y); }
inline blt_4 Swizz000Z(blt_4 V) { return MkBlt_4((blt)0, (blt)0, (blt)0, V.z); }
inline blt_4 Swizz000W(blt_4 V) { return MkBlt_4((blt)0, (blt)0, (blt)0, V.w); }
} // OH
#pragma warning(pop)
