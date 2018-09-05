#pragma once

#define OH_INTERN static
#define OH_PERSIST static
#define OH_GLOBAL static
#define OH_INLINE inline

#define OH_COUNTOF(_x) BX_COUNTOF(_x)
#define OH_UNUSED(_x) BX_UNUSED(_x)

namespace OH {

typedef uint8_t  u1t;
typedef int8_t   i1t;
typedef uint16_t u2t;
typedef int16_t  i2t;
typedef uint32_t u4t;
typedef int32_t  i4t;
typedef int64_t  i8t;
typedef uint64_t u8t;
typedef float    f4t;
typedef double   f8t;
typedef bool     blt;
typedef size_t    upt;
typedef ptrdiff_t ipt;
typedef const char* str;
typedef char str_16t  [16];
typedef char str_64t  [64];
typedef char str_256t [256];
typedef char str_1kt  [1  *1024];
typedef char str_4kt  [4  *1024];
typedef char str_16kt [16 *1024];
typedef char str_64kt [64 *1024];
typedef char str_256kt[256*1024];
typedef char str_1mt  [1024*1024];

typedef char str_buff_small[1024];

template <typename F>
struct privDefer {
    F f;
    privDefer(F f) : f(f) {}
    ~privDefer() { f(); }
};

template <typename F>
privDefer<F> defer_func(F f) {
    return privDefer<F>(f);
}

#define OH_DEFER_1(x, y) x##y
#define OH_DEFER_2(x, y) OH_DEFER_1(x, y)
#define OH_DEFER_3(x)    OH_DEFER_2(x, __COUNTER__)
#define OH_DEFER(code)   auto OH_DEFER_3(_defer_) = defer_func([&](){code;})

enum card_dir {
    Dir_W,
    Dir_E,
    Dir_D,
    Dir_U,
    Dir_S,
    Dir_N,
    Dir_Ana,
    Dir_Kata,
    card_dir_Count,
};

enum axis {
    Axis_X,
    Axis_Y,
    Axis_Z,
    Axis_W,
};

#define OH_ASSIGN_ARR(_lh, _type, ...) const _type arr##__COUNTER__ [] = { __VA_ARGS__  }; _lh = (_type *) arr##__COUNTER__

// OH_CHECK(bool cond, string fmt, ...)
#define OH_CHECK BX_CHECK
// OH_DBG(string fmt, ...)
#define OH_DBG DBG

#define OH_NOT_IMPLEMENTED() NOT_IMPLEMENTED()

#define OH_FOR_RANGE(_ind,_min,_max) for (i4t (_ind) = (i4t)(_min); (_ind) < (i4t)(_max); (_ind)++)
#define OH_FOR_COUNT(_ind, _count) for (i4t (_ind) = 0; (_ind) < (i4t)(_count); (_ind)++)
#define OH_VAR_SWAP(_T, _x, _y) do { _T SWAP = (_x); (_x) = (_y); (_y) = SWAP; } while (0)
#define OH_ABS_DIFF(_A, _B) (((_A) > (_B)) ? ((_A) - (_B)) : ((_B) - (_A)))
#define OH_ARRAY_COUNT(Array) (sizeof(Array) / sizeof((Array)[0]))

#define OH_STACK_PTR(_type) (_type*)alloca(sizeof(_type))
#define OH_STACK_BUFF(_type, _n) (_type*)alloca(sizeof(_type) * (_n))

#define OH_SIGN(_x) ( ((_x) > 0) \
    ? 1                       \
    : ( ((_x) < 0)            \
        ? -1                  \
        : 0) )

#define OH_SHIFT_LEFT(_type, _X, _Shift)  (((_Shift) > 0) ? ((_type)(_X) << (_Shift)) : ((_type)(_X) >> -(_Shift)))
#define OH_SHIFT_RIGHT(_type, _X, _Shift) (((_Shift) < 0) ? ((_type)(_X) << -(_Shift)) : ((_type)(_X) >> (_Shift)))
#define OH_ASSIGN(_ptr, _val) (*(_ptr) = (_val))

#define OH_VARF_2(_func, _a, _b)         _func(_a, _b)
#define OH_VARF_3(_func, _a, _b, _c)     _func(_func(_a,_b), _c)
#define OH_VARF_4(_func, _a, _b, _c, _d) _func(_func(_a,_b), _func(_c,_d))

#define OH_VA2(_V) (_V).x, (_V).y
#define OH_VA3(_V) (_V).x, (_V).y, (_V).z
#define OH_VA4(_V) (_V).x, (_V).y, (_V).z, (_V).w

OH_INLINE i1t Abs(i1t A) { return 0 < A ? A : -A; } 
OH_INLINE i2t Abs(i2t A) { return 0 < A ? A : -A; } 
OH_INLINE i4t Abs(i4t A) { return 0 < A ? A : -A; } 
OH_INLINE i8t Abs(i8t A) { return 0 < A ? A : -A; } 
OH_INLINE f4t Abs(f4t A) { return 0 < A ? A : -A; } 
OH_INLINE f8t Abs(f8t A) { return 0 < A ? A : -A; } 

OH_INLINE f4t Ceil(f4t A)  { return ceilf(A); }
OH_INLINE f8t Ceil(f8t A)  { return ceil(A); }
OH_INLINE f4t Floor(f4t A) { return floorf(A); }
OH_INLINE f8t Floor(f8t A) { return floor(A); }
OH_INLINE f4t Sqrt(f4t A)  { return sqrtf(A); }
OH_INLINE f8t Sqrt(f8t A)  { return sqrt(A); }
OH_INLINE f4t Pow(f4t A, f4t B) { return powf(A, B); }
OH_INLINE f8t Pow(f8t A, f8t B) { return pow(A, B); }
OH_INLINE f4t Cbrt(f4t A)  { return cbrtf(A); }
OH_INLINE f8t Cbrt(f8t A)  { return cbrt(A); }

// Rename to AtZero/T/AtOne
OH_INLINE f4t Lerp(f4t MinVal, f4t Lerp, f4t MaxVal)  { return MinVal*(1-Lerp) + Lerp*MaxVal; }
OH_INLINE f8t Lerp(f8t MinVal, f8t Lerp, f8t MaxVal)  { return MinVal*(1-Lerp) + Lerp*MaxVal; }
OH_INLINE f4t DeLerp(f4t MinVal, f4t Val, f4t MaxVal)  { return (Val - MinVal)/(MaxVal - MinVal); }
OH_INLINE f8t DeLerp(f8t MinVal, f8t Val, f8t MaxVal)  { return (Val - MinVal)/(MaxVal - MinVal); }

OH_INLINE i4t ConvertU1t_I4t (u1t A) { return (i4t)A; }
OH_INLINE f4t ConvertU1t_F4t (u1t A) { return (f4t)A; }
OH_INLINE f8t ConvertU1t_F8t (u1t A) { return (f8t)A; }
OH_INLINE u1t ConvertI4t_U1t (i4t A) { return (u1t)A; }
OH_INLINE f4t ConvertI4t_F4t (i4t A) { return (f4t)A; }
OH_INLINE f8t ConvertI4t_F8t (i4t A) { return (f8t)A; }
OH_INLINE u1t ConvertF4t_U1t (f4t A) { return (u1t)Floor(A); }
OH_INLINE i4t ConvertF4t_I4t (f4t A) { return (i4t)Floor(A); }
OH_INLINE f8t ConvertF4t_F8t (f4t A) { return (f8t)Floor(A); }
OH_INLINE u1t ConvertF8t_U1t (f8t A) { return (u1t)Floor(A); }
OH_INLINE i4t ConvertF8t_I4t (f8t A) { return (i4t)Floor(A); }
OH_INLINE f4t ConvertF8t_F4t (f8t A) { return (f4t)Floor(A); }

#pragma warning(push)
#pragma warning(disable: 4838 4244)
OH_INLINE f4t BitwiseConvertU4t_F4t(u4t A) { union {f4t F; u4t I;} U = { A }; return U.F; }
OH_INLINE f8t BitwiseConvertU8t_F8t(u8t A) { union {f8t F; u8t I;} U = { A }; return U.F; }
OH_INLINE u4t BitwiseConvertF4t_U4t(f4t A) { union {f4t F; u4t I;} U = { A }; return U.I; }
OH_INLINE u8t BitwiseConvertF8t_U8t(f8t A) { union {f8t F; u8t I;} U = { A }; return U.I; }
#pragma warning(pop)

OH_INLINE upt   ConvertVoidP_Upt (void* A) { return (upt)A; }
OH_INLINE upt   ConvertU4t_Upt   (u4t A)   { return (upt)A; }
OH_INLINE void* ConvertU4t_VoidP (u4t A)   { return (void*)(upt)A; }
OH_INLINE void* ConvertUpt_VoidP (upt A)   { return (void*)A; }

OH_INLINE u1t Max(u1t A, u1t B) { return (A > B) ? A : B; }
OH_INLINE i4t Max(i4t A, i4t B) { return (A > B) ? A : B; }
OH_INLINE u4t Max(u4t A, u4t B) { return (A > B) ? A : B; }
OH_INLINE f4t Max(f4t A, f4t B) { return (A > B) ? A : B; }
OH_INLINE f8t Max(f8t A, f8t B) { return (A > B) ? A : B; }

OH_INLINE u1t Min(u1t A, u1t B) { return (A < B) ? A : B; }
OH_INLINE i4t Min(i4t A, i4t B) { return (A < B) ? A : B; }
OH_INLINE u4t Min(u4t A, u4t B) { return (A < B) ? A : B; }
OH_INLINE f4t Min(f4t A, f4t B) { return (A < B) ? A : B; }
OH_INLINE f8t Min(f8t A, f8t B) { return (A < B) ? A : B; }

OH_INLINE u1t Clamp(u1t MinVal, u1t A, u1t MaxVal) { return Min(Max(A, MinVal), MaxVal); }
OH_INLINE i4t Clamp(i4t MinVal, i4t A, i4t MaxVal) { return Min(Max(A, MinVal), MaxVal); }
OH_INLINE f4t Clamp(f4t MinVal, f4t A, f4t MaxVal) { return Min(Max(A, MinVal), MaxVal); }
OH_INLINE f8t Clamp(f8t MinVal, f8t A, f8t MaxVal) { return Min(Max(A, MinVal), MaxVal); }

OH_INLINE f4t Clamp01(f4t A) { return Clamp(0.0f, A, 1.0f); }
OH_INLINE f8t Clamp01(f8t A) { return Clamp(0.0,  A, 1.0);  }

OH_INLINE u1t Div(u1t A, u1t B) { return A/B; }
OH_INLINE f4t Div(f4t A, f4t B) { return A/B; }
OH_INLINE f8t Div(f8t A, f8t B) { return A/B; }
OH_INLINE u1t Rem(u1t A, u1t B) { return A%B; }
OH_INLINE f4t Rem(f4t A, f4t B) { return A - B*Floor(A/B);}
OH_INLINE f8t Rem(f8t A, f8t B) { return A - B*Floor(A/B);}

OH_INLINE f4t EpsEq(f4t A, f4t Eps, f4t B) { return bx::equal(A, B, Eps); }

#define OH_IMPL_DIV_INT(_intT)                                       \
    OH_INLINE _intT Div(_intT A, _intT B) {                          \
        _intT q = A/B, r = A%B;                                   \
        if ((r > 0 && B < 0) || (r < 0 && B > 0)) { return q-1; } \
        return q;                                                 \
    }

#define OH_IMPL_CEIL_DIV_INT(_intT)                                  \
    OH_INLINE _intT CeilDiv(_intT A, _intT B) {                      \
        _intT q = A/B, r = A%B;                                   \
        if ((r > 0 && B > 0) || (r < 0 && B < 0)) { return q+1; } \
        return q;                                                 \
    }


#define OH_IMPL_REM_INT(_intT)                                       \
    OH_INLINE _intT Rem(_intT A, _intT B) {                          \
        _intT r = A%B;                                            \
        if ((r > 0 && B < 0) || (r < 0 && B > 0)) { return r+B; } \
        return r;                                                 \
    }

// TODO allow negative value for B
#define OH_IMPL_POW2_MUL(_intT)  OH_INLINE _intT Pow2Mul( _intT A, _intT B) { OH_CHECK(B >= 0, "B < 0"); return A << B; }
#define OH_IMPL_POW2_DIV(_intT)  OH_INLINE _intT Pow2Div( _intT A, _intT B) { OH_CHECK(B >= 0, "B < 0"); return A >> B; }
#define OH_IMPL_POW2_REM(_intT) \
    OH_INLINE _intT Pow2Rem (_intT A, _intT B) { OH_CHECK(B >= 0, "B < 0"); return A - Pow2Mul(Pow2Div(A, B), B); }
#define OH_IMPL_POW2_CDIV(_intT)                  \
    OH_INLINE _intT Pow2CDiv(_intT A, _intT B) {  \
        _intT fq = Pow2Div(A,B);               \
        if (A == Pow2Mul(fq,B)) { return fq; } \
        return fq + 1;                         \
    }

OH_IMPL_DIV_INT(i1t)
OH_IMPL_DIV_INT(i2t)
OH_IMPL_DIV_INT(i4t)
OH_IMPL_REM_INT(i1t)
OH_IMPL_REM_INT(i2t)
OH_IMPL_REM_INT(i4t)
OH_IMPL_CEIL_DIV_INT(i1t)
OH_IMPL_CEIL_DIV_INT(i2t)
OH_IMPL_CEIL_DIV_INT(i4t)
OH_IMPL_POW2_MUL(i1t)
OH_IMPL_POW2_MUL(i2t)
OH_IMPL_POW2_MUL(i4t)
OH_IMPL_POW2_DIV(i1t)
OH_IMPL_POW2_DIV(i2t)
OH_IMPL_POW2_DIV(i4t)
OH_IMPL_POW2_REM(i1t)
OH_IMPL_POW2_REM(i2t)
OH_IMPL_POW2_REM(i4t)
OH_IMPL_POW2_CDIV(i1t)
OH_IMPL_POW2_CDIV(i2t)
OH_IMPL_POW2_CDIV(i4t)

#define OH_KILOS(Value) ((Value)*1024LL)
#define OH_MEGAS(Value) (OH_KILOS(Value)*1024LL)
#define OH_GIGAS(Value) (OH_MEGAS(Value)*1024LL)
#define OH_TERAS(Value) (OH_GIGAS(Value)*1024LL)

OH_INLINE void MemCpy(void* Dst, const void* Src, upt NumBytes) { bx::memCopy(Dst, Src, NumBytes); }
OH_INLINE void MemSet(void* Dst, u1t Val, upt NumBytes) { bx::memSet(Dst, Val, NumBytes); }
OH_INLINE i4t  MemCmp(const void* Lhs, const void* Rhs, upt NumBytes) { bx::memCmp(Lhs, Rhs, NumBytes); }
OH_INLINE void MemClear(void* Dst, upt NumBytes) { MemSet(Dst, 0, NumBytes); }

#define OH_MEM_CLEAR_ARRAY(_array) MemClear(_array, sizeof(_array))

// u1t* data; u4t size;
typedef const bgfx::Memory* memptr;

#define OH_MK_MEMPTR(_varname, _data, _size) memptr _varname;   \
    bgfx::Memory* ptr ## _varname = OH_STACK_PTR(bgfx::Memory); \
    ptr ## _varname->data = (u1t*)_data;                        \
    ptr ## _varname->size = _size;                              \
    _varname = (memptr)(ptr ## _varname);

// MAYBE replace with macros to allow allocation tracking
OH_INLINE memptr MemPtrAlloc(u4t Size) { return bgfx::alloc(Size); }

OH_INLINE void MemPtrSet(memptr Memory, u1t Val) {
    MemSet(Memory->data, Val, ConvertU4t_Upt(Memory->size));
}

OH_INLINE void MemPtrClear(memptr Memory) { MemPtrSet(Memory, 0); }

OH_INLINE void MemPtrCpy(memptr Dst, memptr Src) {
    MemCpy(Dst->data, Src->data, Min(Dst->size, Src->size));
}

OH_INLINE void MemPtrFree(memptr Memory) { BX_FREE(bgfx::g_allocator, (void*)Memory); }

// i4t snprintf(char* _out, i4t _max, str _format, ...);
#define StrFmt bx::snprintf

OH_INTERN str FindCharFromEnd(str _str, i4t _len, char _ch)
{
    for (i4t ii = _len; 0 <= ii; --ii)
    {
        if (_str[ii] == _ch)
        {
            return &_str[ii];
        }
    }

    return NULL;
}

OH_INTERN str FindCharFromStart(str _str, i4t _len, char _ch)
{
    for (i4t ii = 0; ii < _len; ++ii)
    {
        if (_str[ii] == _ch)
        {
            return &_str[ii];
        }
    }

    return NULL;
}

OH_INLINE i4t StrCmp(str Left, str Right, u4t Length = UINT32_MAX) {
    return strncmp(Left, Right, Length);
}

OH_INLINE u4t StrLen(str String) {
    return bx::strLen(String);
}

// PRINT_EXPR
// Saturated math
// Epsilon
// PI
// Safe division
// placement-new wrapper??

OH_GLOBAL const f4t kPi         = 3.1415926535897932384626433832795f;
OH_GLOBAL const f4t kPi2        = 6.2831853071795864769252867665590f;
OH_GLOBAL const f4t kInvPi      = 1.0f/kPi;
OH_GLOBAL const f4t kPiHalf     = 1.5707963267948966192313216916398f;
OH_GLOBAL const f4t kPiQuarter  = 0.7853981633974483096156608458199f;
OH_GLOBAL const f4t kSqrt2      = 1.4142135623730950488016887242097f;
OH_GLOBAL const f4t kLogNat10   = 2.3025850929940456840179914546844f;
OH_GLOBAL const f4t kInvLogNat2 = 1.4426950408889634073599246810019f;
OH_GLOBAL const f4t kLogNat2Hi  = 0.6931471805599453094172321214582f;
OH_GLOBAL const f4t kLogNat2Lo  = 1.90821492927058770002e-10f;
OH_GLOBAL const f4t kE          = 2.7182818284590452353602874713527f;
OH_GLOBAL const f4t kNearZero   = 1.0f/float(1 << 28);
OH_GLOBAL const f4t kFloatMin   = 1.175494e-38f;
OH_GLOBAL const f4t kFloatMax   = 3.402823e+38f;
OH_GLOBAL const f4t kInfinity   = BitwiseConvertU4t_F4t(UINT32_C(0x7f800000) );

OH_GLOBAL const u1t kMaxU1t = UINT8_MAX;
OH_GLOBAL const i1t kMaxI1t = INT8_MAX;
OH_GLOBAL const u2t kMaxU2t = UINT16_MAX;
OH_GLOBAL const i2t kMaxI2t = INT16_MAX;
OH_GLOBAL const u4t kMaxU4t = UINT32_MAX;
OH_GLOBAL const i4t kMaxI4t = INT32_MAX;
OH_GLOBAL const i8t kMaxI8t = INT64_MAX;
OH_GLOBAL const u8t kMaxU8t = UINT64_MAX;
OH_GLOBAL const u1t kMinU1t = 0;
OH_GLOBAL const i1t kMinI1t = INT8_MIN;
OH_GLOBAL const u2t kMinU2t = 0;
OH_GLOBAL const i2t kMinI2t = INT16_MIN;
OH_GLOBAL const u4t kMinU4t = 0;
OH_GLOBAL const i4t kMinI4t = INT32_MIN;
OH_GLOBAL const i8t kMinI8t = INT64_MIN;
OH_GLOBAL const u8t kMinU8t = 0;
OH_GLOBAL const u4t kInvalidIdx = (u4t)INT32_MAX;

// namespace OH {
}