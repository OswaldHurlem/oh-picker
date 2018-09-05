#pragma once
// BX has left-first order for matrices and quaternions

#define OH_FOR_V3_RANGE_BEGIN(_ItVec, _Min, _Max) {                            \
    i4t_3 _ItVec##Min = _Min; i4t_3 _ItVec##Max = _Max; i4t_3 _ItVec;          \
    for(_ItVec.z = _ItVec##Min.z; _ItVec.z < _ItVec##Max.z; ++_ItVec.z) {      \
        for(_ItVec.y = _ItVec##Min.y; _ItVec.y < _ItVec##Max.y; ++_ItVec.y) {  \
            for(_ItVec.x = _ItVec##Min.x; _ItVec.x < _ItVec##Max.x; ++_ItVec.x)
#define OH_FOR_V3_RANGE_END } } }

namespace OH {

OH_INLINE f4t ToDegrees(f4t A) { return bx::toDeg(A); }
OH_INLINE f4t ToRadians(f4t A) { return bx::toRad(A); }
OH_INLINE f4t Cos(f4t A)       { return bx::cos(A);   }
OH_INLINE f4t Sin(f4t A)       { return bx::sin(A);   }
OH_INLINE f4t Tan(f4t A)       { return bx::tan(A);   }
OH_INLINE f4t InvCos(f4t A)    { return bx::acos(A);  }
OH_INLINE f4t InvSin(f4t A)    { return bx::asin(A);  }
OH_INLINE f4t InvTan(f4t A)    { return bx::atan(A);  }
OH_INLINE f4t Round(f4t A)     { return bx::round(A); }
OH_INLINE f4t RSqrt(f4t A)     { return bx::rsqrt(A); }
OH_INLINE f4t Fract(f4t A)     { return bx::fract(A); }
OH_INLINE f4t Exp(f4t A)       { return bx::exp(A);   }
OH_INLINE f4t Log(f4t A)       { return bx::log(A);   }
OH_INLINE f4t Recip(f4t A)     { return 1.0f/A;       }
OH_INLINE f4t Sign(f4t A)      { return bx::sign(A);  }
OH_INLINE f4t ATan2(f4t X, f4t Y) { return bx::atan2(X, Y); }


OH_INLINE f8t ToDegrees(f8t A) { return A*180.0/3.1415926535897932384626433832795; }
OH_INLINE f8t ToRadians(f8t A) { return A*3.1415926535897932384626433832795/180.0; }
OH_INLINE f8t Cos(f8t A)       { return cos(A);       }
OH_INLINE f8t Sin(f8t A)       { return sin(A);       }
OH_INLINE f8t Tan(f8t A)       { return tan(A);       }
OH_INLINE f8t InvCos(f8t A)    { return acos(A);      }
OH_INLINE f8t InvSin(f8t A)    { return asin(A);      }
OH_INLINE f8t InvTan(f8t A)    { return atan(A);      }
OH_INLINE f8t Round(f8t A)     { return round(A);     }
OH_INLINE f8t RSqrt(f8t A)     { return 1.0/sqrt(A);  }
OH_INLINE f8t Fract(f8t A)     { return A - ((i8t)A); }
OH_INLINE f8t Exp(f8t A)       { return exp(A);       }
OH_INLINE f8t Log(f8t A)       { return log(A);       }
OH_INLINE f8t Recip(f8t A)     { return 1.0/A;        }
OH_INLINE f8t Sign(f8t A)      { return 0.0 < A ? 1.0 : -1.0;  }
OH_INLINE f8t ATan2(f8t X, f8t Y) { return atan2(X, Y); }

// namespace OH {
}

#include "oh_generate_vectors.py.h"
#include "shoemake_decomp.h"

namespace OH {

OH_INLINE blt AllEpsEq(f4t_2 A, f4t Eps, f4t_2 B) { return EpsEq(A.x, Eps, B.x) && EpsEq(A.y, Eps, B.y); }
OH_INLINE blt AllEpsEq(f4t_3 A, f4t Eps, f4t_3 B) { 
    return EpsEq(A.x, Eps, B.x) && EpsEq(A.y, Eps, B.y) && EpsEq(A.z, Eps, B.z); 
}
OH_INLINE blt AllEpsEq(f4t_4 A, f4t Eps, f4t_4 B) {
    return EpsEq(A.x, Eps, B.x)
        && EpsEq(A.y, Eps, B.y)
        && EpsEq(A.z, Eps, B.z)
        && EpsEq(A.w, Eps, B.w);
}

union f4t_m4 {
    struct {
        f4t_4 cX;
        f4t_4 cY;
        f4t_4 cZ;
        f4t_4 cW;
    };
    f4t_4 Cols[4];
    f4t E[16];
};

typedef f4t_4 quat;

struct transform_3d {
    f4t_3 Displace;
    f4t_3 Rotation;
    f4t_3 Scale;
};

void ShoemakeMtxFromOhMtx(Shoemake::HMatrix* ShoemakeMtxOut, const f4t_m4* MtxIn);
void OhMtxFromShoemakeMtx(f4t_m4* MtxOut, const Shoemake::HMatrix* ShoemakeMtxIn);
Shoemake::HVect OhVecToShoemakeVec(f4t_4 VIn);
f4t_4 ShoemakeVecToOhVec(Shoemake::HVect ShoemakeVIn);
Shoemake::Quat OhQuatToShoemakeQuat(quat QuatIn);
quat ShoemakeQuatToOhQuat(Shoemake::Quat ShoemakeQuatIn);

typedef f4t_4 quat;

OH_INLINE quat MkQuatIdent() { quat Q; bx::quatIdentity(Q.E); return Q; }
OH_INLINE quat QuatInv(quat Q) { quat R; bx::quatInvert(R.E, Q.E); return R; }
OH_INLINE quat QuatAxisAngle(f4t_3 Axis, f4t Angle) { quat Q; bx::quatRotateAxis(Q.E, Axis.E, -Angle); return Q; }
OH_INLINE quat QuatRotX(f4t Angle) { quat Q; bx::quatRotateX(Q.E, -Angle); return Q; }
OH_INLINE quat QuatRotY(f4t Angle) { quat Q; bx::quatRotateY(Q.E, -Angle); return Q; }
OH_INLINE quat QuatRotZ(f4t Angle) { quat Q; bx::quatRotateZ(Q.E, -Angle); return Q; }
OH_INLINE f4t_3 QuatMul(f4t_3 V, quat Q) { f4t_3 R; bx::vec3MulQuat(R.E, V.E, Q.E); return R; }
OH_INLINE quat QuatMul(quat A, quat B) {
    quat R;
    bx::quatMul(R.E, A.E, B.E);
    return R;
}

OH_INLINE quat QuatSlerp(quat AtZero, f4t T, quat AtOne)
{
    f4t Angle = Cos(DotP(AtZero, AtOne));

    quat ResultTimesSine = AtZero*Sin((1.0f-T)*Angle)
        + AtOne*Sin(T*Angle);
    return ResultTimesSine/Sin(Angle);
}

#define OH_SM_EULER_SWIZZ_IN SwizzYXZ
#define OH_SM_EULER_SWIZZ_OUT SwizzYXZ


OH_INLINE quat EulersToQuat_Cfg(f4t_3 Eulers, i4t Cfg) {
    Shoemake::EulerAngles SmEulers = Shoemake::Eul_(OH_VA3(Eulers), Cfg);
    Shoemake::Quat SmQuat = Eul_ToQuat(SmEulers);
    return ShoemakeQuatToOhQuat(SmQuat);
}

OH_INLINE quat EulersToQuat(f4t_3 Eulers) {
    quat Qx = QuatRotX(Eulers.x);
    quat Qy = QuatRotY(Eulers.y);
    quat Qz = QuatRotZ(Eulers.z);
    return QuatMul(QuatMul(Qz, Qx), Qy);
}

OH_INLINE f4t_3 QuatToEulers_Cfg(quat Q, i4t Cfg) {
    Shoemake::Quat SmQuat = OhQuatToShoemakeQuat(Q);
    Shoemake::EulerAngles SmEulers = Eul_FromQuat(SmQuat, Cfg);
    return OH_SM_EULER_SWIZZ_OUT(ShoemakeVecToOhVec(SmEulers));
}

OH_INLINE f4t_3 QuatToEulers(quat Q) {
    // Rotate on Y by first param, then on X by second param, then on Z by third param
    return -QuatToEulers_Cfg(Q, SM_EulOrdYXZs);
}

OH_INLINE f4t_4 QuatToAxisAngle(quat Q) {
    return MkF4t_4(
        Q.x / Sqrt(1 - Q.w*Q.w),
        Q.y / Sqrt(1 - Q.w*Q.w),
        Q.z / Sqrt(1 - Q.w*Q.w),
        -2.0f * InvCos(Q.w));
}

OH_INLINE f4t QuatDiff(quat A, quat B) {
    f4t SignedArc = QuatToAxisAngle(QuatMul(QuatInv(A), B)).w;
    return Abs(Rem(SignedArc + kPi, kPi2) - kPi);
}

OH_INLINE f4t_3 DeHomog(f4t_4 HomogV) { 
    if (HomogV.w) { HomogV /= HomogV.w; }
    return SwizzXYZ(HomogV);
}

// MAYBE LookAt, Projections??
OH_INLINE void MtxIdent(f4t_m4* MtxOut) { bx::mtxIdentity(MtxOut->E); }
OH_INLINE void MtxDispl(f4t_m4* MtxOut, f4t_3 V) { bx::mtxTranslate(MtxOut->E, OH_VA3(V)); }
OH_INLINE void MtxScale(f4t_m4* MtxOut, f4t_3 V) { bx::mtxScale(MtxOut->E, OH_VA3(V)); }
OH_INLINE void MtxRotate(f4t_m4* MtxOut, quat Q) { bx::mtxQuat(MtxOut->E, Q.E); }
OH_INLINE f4t_3 MtxMul1(f4t_3 V, const f4t_m4* MtxIn) { f4t_3 R; bx::vec3MulMtxH(R.E, V.E, MtxIn->E);    return R; }
OH_INLINE f4t_3 MtxMul0(f4t_3 V, const f4t_m4* MtxIn) { f4t_3 R; bx::vec3MulMtxXyz0(R.E, V.E, MtxIn->E); return R; }
OH_INLINE f4t_4 MtxMul(f4t_4 V,  const f4t_m4* MtxIn) { f4t_4 R; bx::vec4MulMtx(R.E, V.E, MtxIn->E);     return R; }
OH_INLINE void MtxMul(f4t_m4* R, const f4t_m4* A, const f4t_m4* B) { bx::mtxMul(R->E, A->E, B->E); }
OH_INLINE void MtxTransp(f4t_m4* MtxOut, const f4t_m4* MtxIn) { bx::mtxTranspose(MtxOut->E, MtxIn->E); }
OH_INLINE void MtxInv(f4t_m4* MtxOut, const f4t_m4* MtxIn) { bx::mtxInverse(MtxOut->E, MtxIn->E); }

OH_INLINE void InitTf3d(transform_3d* TfOut) {
    TfOut->Displace = MkF4t_3(0);
    TfOut->Rotation = MkF4t_3(0);
    TfOut->Scale = MkF4t_3(1);
}

OH_INLINE void MtxFromTf3d(f4t_m4* MtxOut, const transform_3d* TfIn) {
    f4t_m4 ScaleMtx;
    f4t_m4 RotMtx;
    f4t_m4 DisplMtx;
    f4t_m4 SR;
    MtxRotate(&RotMtx, EulersToQuat(TfIn->Rotation));
    MtxScale(&ScaleMtx, TfIn->Scale);
    MtxDispl(&DisplMtx, TfIn->Displace);
    MtxMul(&SR, &ScaleMtx, &RotMtx);
    MtxMul(MtxOut, &SR, &DisplMtx); // SRD
}

OH_INLINE void InvMtxFromTf3d(f4t_m4* MtxOut, const transform_3d* TfIn) {
    f4t_m4 ScaleMtx;
    f4t_m4 RotMtx;
    f4t_m4 DisplMtx;
    f4t_m4 RS;
    MtxRotate(&RotMtx, QuatInv(EulersToQuat(TfIn->Rotation)));
    MtxScale(&ScaleMtx, 1.0f/TfIn->Scale);
    MtxDispl(&DisplMtx, -TfIn->Displace);
    MtxMul(&RS, &RotMtx, &ScaleMtx);
    MtxMul(MtxOut, &DisplMtx, &RS); // D^R^S^
}

OH_INLINE void ShoemakeMtxFromOhMtx(Shoemake::HMatrix* ShoemakeMtxOut, const f4t_m4* MtxIn) {
    OH_MK_MEMPTR(ShoemakeMtxMem, ShoemakeMtxOut, sizeof(Shoemake::HMatrix));
    OH_MK_MEMPTR(MtxInMem, MtxIn, sizeof(f4t_m4));
    MemPtrCpy(ShoemakeMtxMem, MtxInMem);
}

OH_INLINE void OhMtxFromShoemakeMtx(f4t_m4* MtxOut, const Shoemake::HMatrix* ShoemakeMtxIn) {
    OH_MK_MEMPTR(ShoemakeMtxMem, ShoemakeMtxIn, sizeof(Shoemake::HMatrix));
    OH_MK_MEMPTR(MtxOutMem, MtxOut, sizeof(f4t_m4));
    MemPtrCpy(MtxOutMem, ShoemakeMtxMem);
}

OH_INLINE Shoemake::HVect OhVecToShoemakeVec(f4t_4 VIn) {
    Shoemake::HVect ShoemakeVOut;
    ShoemakeVOut.x = VIn.x;
    ShoemakeVOut.y = VIn.y;
    ShoemakeVOut.z = VIn.z;
    ShoemakeVOut.w = VIn.w;
    return ShoemakeVOut;
}

OH_INLINE f4t_4 ShoemakeVecToOhVec(Shoemake::HVect ShoemakeVIn) {
    f4t_4 VOut;
    VOut.x = ShoemakeVIn.x;
    VOut.y = ShoemakeVIn.y;
    VOut.z = ShoemakeVIn.z;
    VOut.w = ShoemakeVIn.w;
    return VOut;
}

OH_INLINE Shoemake::Quat OhQuatToShoemakeQuat(quat QuatIn) {
    Shoemake::Quat ShoemakeQuatOut;
    ShoemakeQuatOut.x = QuatIn.x;
    ShoemakeQuatOut.y = QuatIn.y;
    ShoemakeQuatOut.z = QuatIn.z;
    ShoemakeQuatOut.w = QuatIn.w;
    return ShoemakeQuatOut;
}

OH_INLINE quat ShoemakeQuatToOhQuat(Shoemake::Quat ShoemakeQuatIn) {
    quat QuatOut;
    QuatOut.x = ShoemakeQuatIn.x;
    QuatOut.y = ShoemakeQuatIn.y;
    QuatOut.z = ShoemakeQuatIn.z;
    QuatOut.w = ShoemakeQuatIn.w;
    return QuatOut;
}

OH_INTERN f4t DecompMtxToTf(transform_3d* TfOut, const f4t_m4* MtxIn)
{
    Shoemake::HMatrix A, Q, Qk, QkA, S;
    TfOut->Displace = MkF4t_3(
        MtxIn->cW.x,
        MtxIn->cW.y,
        MtxIn->cW.z);
    ShoemakeMtxFromOhMtx(&A, MtxIn);
    f4t det = Shoemake::polar_decomp(A, Q, S);
    if (det<0.f) {
        SM_mat_copy(Q,=,-Q,3);
    }
    TfOut->Rotation = QuatToEulers(ShoemakeQuatToOhQuat(Shoemake::Qt_FromMatrix(Q)));
    SM_mat_tpose(Qk,=,Q,3);
    Shoemake::mat_mult(A, Qk, QkA);
    TfOut->Scale = MkF4t_3(
        QkA[Shoemake::X][Shoemake::X],
        QkA[Shoemake::Y][Shoemake::Y],
        QkA[Shoemake::Z][Shoemake::Z]);
    return QkA[0][1] + QkA[0][2]
         + QkA[1][0] + QkA[1][2]
         + QkA[2][0] + QkA[2][1];
}

OH_INTERN f4t_3 MtxExtractDispl(const f4t_m4* MtxIn) {
    return SwizzXYZ(MtxIn->cW);
}

OH_INLINE i4t FlattenIdx(i4t_3 Min, i4t_3 Idx, i4t_3 Max) {
    i4t_3 IdxMinusMin = Idx - Min;
    OH_CHECK(AllGte(IdxMinusMin, MkI4t_3(0)), "3D Index out of range");
    i4t_3 MaxMinusMin = Max - Min;
    OH_CHECK(AllGt(MaxMinusMin, IdxMinusMin), "3D Index out of range");
    return MaxMinusMin.y * MaxMinusMin.x * IdxMinusMin.z
        + MaxMinusMin.x * IdxMinusMin.y
        + IdxMinusMin.x;
}

// namespace OH {
}