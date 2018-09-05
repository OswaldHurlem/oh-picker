/* Ken Shoemake, 1993 */
#pragma once
#pragma warning(push)
#pragma warning(disable: 4456)

namespace Shoemake {
typedef struct {float x, y, z, w;} Quat; /* Quaternion */
enum QuatPart {X, Y, Z, W};
typedef Quat HVect; /* Homogeneous 3D vector */
typedef Quat EulerAngles;    /* (x,y,z)=ang 1,2,3, w=order code  */
typedef float HMatrix[4][4]; /* Right-handed, for column vectors */
typedef struct {
    HVect t;    /* Translation components */
    Quat  q;    /* Essential rotation     */
    Quat  u;    /* Stretch rotation   */
    HVect k;    /* Stretch factors    */
    float f;    /* Sign of determinant    */
} AffineParts;
float polar_decomp(HMatrix M, HMatrix Q, HMatrix S);
HVect spect_decomp(HMatrix S, HMatrix U);
Quat snuggle(Quat q, HVect *k);
void decomp_affine(HMatrix A, AffineParts *parts);
void invert_affine(AffineParts *parts, AffineParts *inverse);

/**** EulerAngles.h - Support for 24 angle schemes ****/
/* Ken Shoemake, 1993 */
/*** Order type constants, constructors, extractors ***/
    /* There are 24 possible conventions, designated by:    */
    /*    o SM_EulAxI = axis used initially            */
    /*    o SM_EulPar = parity of axis permutation         */
    /*    o SM_EulRep = repetition of initial axis as last     */
    /*    o SM_EulFrm = frame from which axes are taken        */
    /* Axes I,J,K will be a permutation of X,Y,Z.       */
    /* Axis H will be either I or K, depending on SM_EulRep.   */
    /* Frame S takes axes from initial static frame.        */
    /* If ord = (AxI=X, Par=Even, Rep=No, Frm=S), then      */
    /* {a,b,c,ord} means Rz(c)Ry(b)Rx(a), where Rz(c)v      */
    /* rotates v around Z by c radians.             */
#define SM_EPSILON 1.192092896e-07F
#define SM_EulFrmS      0
#define SM_EulFrmR      1
#define SM_EulFrm(ord)  ((unsigned)(ord)&1)
#define SM_EulRepNo     0
#define SM_EulRepYes    1
#define SM_EulRep(ord)  (((unsigned)(ord)>>1)&1)
#define SM_EulParEven   0
#define SM_EulParOdd    1
#define SM_EulPar(ord)  (((unsigned)(ord)>>2)&1)
/* this code is merely a quick (and legal!) way to set arrays, SM_EulSafe being 0,1,2,0 */
#define SM_EulSafe      "\000\001\002\000"
#define SM_EulNext      "\001\002\000\001"
#define SM_EulAxI(ord)  ((int)(SM_EulSafe[(((unsigned)(ord)>>3)&3)]))
#define SM_EulAxJ(ord)  ((int)(SM_EulNext[SM_EulAxI(ord)+(SM_EulPar(ord)==SM_EulParOdd)]))
#define SM_EulAxK(ord)  ((int)(SM_EulNext[SM_EulAxI(ord)+(SM_EulPar(ord)!=SM_EulParOdd)]))
#define SM_EulAxH(ord)  ((SM_EulRep(ord)==SM_EulRepNo)?SM_EulAxK(ord):SM_EulAxI(ord))
    /* SM_EulGetOrd unpacks all useful information about order simultaneously. */
#define SM_EulGetOrd(ord,i,j,k,h,n,s,f) {unsigned o=(unsigned)ord;f=o&1;o>>=1;s=o&1;o>>=1;\
    n=o&1;o>>=1;i=SM_EulSafe[o&3];j=SM_EulNext[i+n];k=SM_EulNext[i+1-n];h=s?k:i;}
    /* SM_EulOrd creates an order value between 0 and 23 from 4-tuple choices. */
#define SM_EulOrd(i,p,r,f)    (((((((i)<<1)+(p))<<1)+(r))<<1)+(f))
    /* Static axes */
#define SM_EulOrdXYZs    SM_EulOrd(Shoemake::X,SM_EulParEven,SM_EulRepNo,SM_EulFrmS)
#define SM_EulOrdXYXs    SM_EulOrd(Shoemake::X,SM_EulParEven,SM_EulRepYes,SM_EulFrmS)
#define SM_EulOrdXZYs    SM_EulOrd(Shoemake::X,SM_EulParOdd,SM_EulRepNo,SM_EulFrmS)
#define SM_EulOrdXZXs    SM_EulOrd(Shoemake::X,SM_EulParOdd,SM_EulRepYes,SM_EulFrmS)
#define SM_EulOrdYZXs    SM_EulOrd(Shoemake::Y,SM_EulParEven,SM_EulRepNo,SM_EulFrmS)
#define SM_EulOrdYZYs    SM_EulOrd(Shoemake::Y,SM_EulParEven,SM_EulRepYes,SM_EulFrmS)
#define SM_EulOrdYXZs    SM_EulOrd(Shoemake::Y,SM_EulParOdd,SM_EulRepNo,SM_EulFrmS)
#define SM_EulOrdYXYs    SM_EulOrd(Shoemake::Y,SM_EulParOdd,SM_EulRepYes,SM_EulFrmS)
#define SM_EulOrdZXYs    SM_EulOrd(Shoemake::Z,SM_EulParEven,SM_EulRepNo,SM_EulFrmS)
#define SM_EulOrdZXZs    SM_EulOrd(Shoemake::Z,SM_EulParEven,SM_EulRepYes,SM_EulFrmS)
#define SM_EulOrdZYXs    SM_EulOrd(Shoemake::Z,SM_EulParOdd,SM_EulRepNo,SM_EulFrmS)
#define SM_EulOrdZYZs    SM_EulOrd(Shoemake::Z,SM_EulParOdd,SM_EulRepYes,SM_EulFrmS)
    /* Rotating axes */
#define SM_EulOrdZYXr    SM_EulOrd(Shoemake::X,SM_EulParEven,SM_EulRepNo,SM_EulFrmR)
#define SM_EulOrdXYXr    SM_EulOrd(Shoemake::X,SM_EulParEven,SM_EulRepYes,SM_EulFrmR)
#define SM_EulOrdYZXr    SM_EulOrd(Shoemake::X,SM_EulParOdd,SM_EulRepNo,SM_EulFrmR)
#define SM_EulOrdXZXr    SM_EulOrd(Shoemake::X,SM_EulParOdd,SM_EulRepYes,SM_EulFrmR)
#define SM_EulOrdXZYr    SM_EulOrd(Shoemake::Y,SM_EulParEven,SM_EulRepNo,SM_EulFrmR)
#define SM_EulOrdYZYr    SM_EulOrd(Shoemake::Y,SM_EulParEven,SM_EulRepYes,SM_EulFrmR)
#define SM_EulOrdZXYr    SM_EulOrd(Shoemake::Y,SM_EulParOdd,SM_EulRepNo,SM_EulFrmR)
#define SM_EulOrdYXYr    SM_EulOrd(Shoemake::Y,SM_EulParOdd,SM_EulRepYes,SM_EulFrmR)
#define SM_EulOrdYXZr    SM_EulOrd(Shoemake::Z,SM_EulParEven,SM_EulRepNo,SM_EulFrmR)
#define SM_EulOrdZXZr    SM_EulOrd(Shoemake::Z,SM_EulParEven,SM_EulRepYes,SM_EulFrmR)
#define SM_EulOrdXYZr    SM_EulOrd(Shoemake::Z,SM_EulParOdd,SM_EulRepNo,SM_EulFrmR)
#define SM_EulOrdZYZr    SM_EulOrd(Shoemake::Z,SM_EulParOdd,SM_EulRepYes,SM_EulFrmR)

EulerAngles Eul_(float ai, float aj, float ah, int order);
Quat Eul_ToQuat(EulerAngles ea);
void Eul_ToHMatrix(EulerAngles ea, HMatrix M);
EulerAngles Eul_FromHMatrix(HMatrix M, int order);
EulerAngles Eul_FromQuat(Quat q, int order);

/**** EulerAngles.c - Convert Euler angles to/from matrix or quat ****/
EulerAngles Eul_(float ai, float aj, float ah, int order)
{
    EulerAngles ea;
    ea.x = ai; ea.y = aj; ea.z = ah;
    ea.w = (float)order;
    return (ea);
}
/* Construct quaternion from Euler angles (in radians). */
Quat Eul_ToQuat(EulerAngles ea)
{
    Quat qu;
    float a[3], ti, tj, th, ci, cj, ch, si, sj, sh, cc, cs, sc, ss;
    int i,j,k,h,n,s,f;
    SM_EulGetOrd(ea.w,i,j,k,h,n,s,f);
    if (f==SM_EulFrmR) {float t = ea.x; ea.x = ea.z; ea.z = t;}
    if (n==SM_EulParOdd) ea.y = -ea.y;
    ti = ea.x*0.5f; tj = ea.y*0.5f; th = ea.z*0.5f;
    ci = cosf(ti);  cj = cosf(tj);  ch = cosf(th);
    si = sinf(ti);  sj = sinf(tj);  sh = sinf(th);
    cc = ci*ch; cs = ci*sh; sc = si*ch; ss = si*sh;
    if (s==SM_EulRepYes) {
    a[i] = cj*(cs + sc);    /* Could speed up with */
    a[j] = sj*(cc + ss);    /* trig identities. */
    a[k] = sj*(cs - sc);
    qu.w = cj*(cc - ss);
    } else {
    a[i] = cj*sc - sj*cs;
    a[j] = cj*ss + sj*cc;
    a[k] = cj*cs - sj*sc;
    qu.w = cj*cc + sj*ss;
    }
    if (n==SM_EulParOdd) a[j] = -a[j];
    qu.x = a[X]; qu.y = a[Y]; qu.z = a[Z];
    return (qu);
}

/* Construct matrix from Euler angles (in radians). */
void Eul_ToHMatrix(EulerAngles ea, HMatrix M)
{
    float ti, tj, th, ci, cj, ch, si, sj, sh, cc, cs, sc, ss;
    int i,j,k,h,n,s,f;
    SM_EulGetOrd(ea.w,i,j,k,h,n,s,f);
    if (f==SM_EulFrmR) {float t = ea.x; ea.x = ea.z; ea.z = t;}
    if (n==SM_EulParOdd) {ea.x = -ea.x; ea.y = -ea.y; ea.z = -ea.z;}
    ti = ea.x;    tj = ea.y;    th = ea.z;
    ci = cosf(ti); cj = cosf(tj); ch = cosf(th);
    si = sinf(ti); sj = sinf(tj); sh = sinf(th);
    cc = ci*ch; cs = ci*sh; sc = si*ch; ss = si*sh;
    if (s==SM_EulRepYes) {
    M[i][i] = cj;     M[i][j] =  sj*si;    M[i][k] =  sj*ci;
    M[j][i] = sj*sh;  M[j][j] = -cj*ss+cc; M[j][k] = -cj*cs-sc;
    M[k][i] = -sj*ch; M[k][j] =  cj*sc+cs; M[k][k] =  cj*cc-ss;
    } else {
    M[i][i] = cj*ch; M[i][j] = sj*sc-cs; M[i][k] = sj*cc+ss;
    M[j][i] = cj*sh; M[j][j] = sj*ss+cc; M[j][k] = sj*cs-sc;
    M[k][i] = -sj;   M[k][j] = cj*si;    M[k][k] = cj*ci;
    }
    M[W][X]=M[W][Y]=M[W][Z]=M[X][W]=M[Y][W]=M[Z][W]=0.f; M[W][W]=1.f;
}

/* Convert matrix to Euler angles (in radians). */
EulerAngles Eul_FromHMatrix(HMatrix M, int order)
{
    EulerAngles ea;
    int i,j,k,h,n,s,f;
    SM_EulGetOrd(order,i,j,k,h,n,s,f);
    if (s==SM_EulRepYes) {
    float sy = sqrtf(M[i][j]*M[i][j] + M[i][k]*M[i][k]);
    if (sy > 16*SM_EPSILON) {
        ea.x = atan2f(M[i][j], M[i][k]);
        ea.y = atan2f(sy, M[i][i]);
        ea.z = atan2f(M[j][i], -M[k][i]);
    } else {
        ea.x = atan2f(-M[j][k], M[j][j]);
        ea.y = atan2f(sy, M[i][i]);
        ea.z = 0;
    }
    } else {
    float cy = sqrtf(M[i][i]*M[i][i] + M[j][i]*M[j][i]);
    if (cy > 16*SM_EPSILON) {
        ea.x = atan2f(M[k][j], M[k][k]);
        ea.y = atan2f(-M[k][i], cy);
        ea.z = atan2f(M[j][i], M[i][i]);
    } else {
        ea.x = atan2f(-M[j][k], M[j][j]);
        ea.y = atan2f(-M[k][i], cy);
        ea.z = 0;
    }
    }
    if (n==SM_EulParOdd) {ea.x = -ea.x; ea.y = - ea.y; ea.z = -ea.z;}
    if (f==SM_EulFrmR) {float t = ea.x; ea.x = ea.z; ea.z = t;}
    ea.w = (float)order;
    return (ea);
}

/* Convert quaternion to Euler angles (in radians). */
EulerAngles Eul_FromQuat(Quat q, int order)
{
    HMatrix M;
    float Nq = q.x*q.x+q.y*q.y+q.z*q.z+q.w*q.w;
    float s = (Nq > 0.f) ? (2.f / Nq) : 0.f;
    float xs = q.x*s,     ys = q.y*s,    zs = q.z*s;
    float wx = q.w*xs,    wy = q.w*ys,   wz = q.w*zs;
    float xx = q.x*xs,    xy = q.x*ys,   xz = q.x*zs;
    float yy = q.y*ys,    yz = q.y*zs,   zz = q.z*zs;
    M[X][X] = 1.f - (yy + zz); M[X][Y] = xy - wz; M[X][Z] = xz + wy;
    M[Y][X] = xy + wz; M[Y][Y] = 1.f - (xx + zz); M[Y][Z] = yz - wx;
    M[Z][X] = xz - wy; M[Z][Y] = yz + wx; M[Z][Z] = 1.f - (xx + yy);
    M[W][X]=M[W][Y]=M[W][Z]=M[X][W]=M[Y][W]=M[Z][W]=0.f; M[W][W]=1.f;
    return (Eul_FromHMatrix(M, order));
}

/******* Matrix Preliminaries *******/

/** Fill out 3x3 matrix to 4x4 **/
#define SM_mat_pad(A) (A[W][X]=A[X][W]=A[W][Y]=A[Y][W]=A[W][Z]=A[Z][W]=0,A[W][W]=1)

/** Copy nxn matrix A to C using "gets" for assignment **/
#define SM_mat_copy(C,gets,A,n) {int i,j; for(i=0;i<n;i++) for(j=0;j<n;j++)\
    C[i][j] gets (A[i][j]);}

/** Copy transpose of nxn matrix A to C using "gets" for assignment **/
#define SM_mat_tpose(AT,gets,A,n) {int i,j; for(i=0;i<n;i++) for(j=0;j<n;j++)\
    AT[i][j] gets (A[j][i]);}

/** Assign nxn matrix C the element-wise combination of A and B using "op" **/
#define SM_mat_binop(C,gets,A,op,B,n) {int i,j; for(i=0;i<n;i++) for(j=0;j<n;j++)\
    C[i][j] gets (A[i][j]) op (B[i][j]);}

/** Multiply the upper left 3x3 parts of A and B to get AB **/
void mat_mult(HMatrix A, HMatrix B, HMatrix AB)
{
    int i, j;
    for (i=0; i<3; i++) for (j=0; j<3; j++)
    AB[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + A[i][2]*B[2][j];
}

/** Return dot product of length 3 vectors va and vb **/
float vdot(float *va, float *vb)
{
    return (va[0]*vb[0] + va[1]*vb[1] + va[2]*vb[2]);
}

/** Set v to cross product of length 3 vectors va and vb **/
void vcross(float *va, float *vb, float *v)
{
    v[0] = va[1]*vb[2] - va[2]*vb[1];
    v[1] = va[2]*vb[0] - va[0]*vb[2];
    v[2] = va[0]*vb[1] - va[1]*vb[0];
}

/** Set MadjT to transpose of inverse of M times determinant of M **/
void adjoint_transpose(HMatrix M, HMatrix MadjT)
{
    vcross(M[1], M[2], MadjT[0]);
    vcross(M[2], M[0], MadjT[1]);
    vcross(M[0], M[1], MadjT[2]);
}

/******* Quaternion Preliminaries *******/

/* Construct a (possibly non-unit) quaternion from real components. */
Quat Qt_(float x, float y, float z, float w)
{
    Quat qq;
    qq.x = x; qq.y = y; qq.z = z; qq.w = w;
    return (qq);
}

/* Return conjugate of quaternion. */
Quat Qt_Conj(Quat q)
{
    Quat qq;
    qq.x = -q.x; qq.y = -q.y; qq.z = -q.z; qq.w = q.w;
    return (qq);
}

/* Return quaternion product qL * qR.  Note: order is important!
 * To combine rotations, use the product Mul(qSecond, qFirst),
 * which gives the effect of rotating by qFirst then qSecond. */
Quat Qt_Mul(Quat qL, Quat qR)
{
    Quat qq;
    qq.w = qL.w*qR.w - qL.x*qR.x - qL.y*qR.y - qL.z*qR.z;
    qq.x = qL.w*qR.x + qL.x*qR.w + qL.y*qR.z - qL.z*qR.y;
    qq.y = qL.w*qR.y + qL.y*qR.w + qL.z*qR.x - qL.x*qR.z;
    qq.z = qL.w*qR.z + qL.z*qR.w + qL.x*qR.y - qL.y*qR.x;
    return (qq);
}

/* Return product of quaternion q by scalar w. */
Quat Qt_Scale(Quat q, float w)
{
    Quat qq;
    qq.w = q.w*w; qq.x = q.x*w; qq.y = q.y*w; qq.z = q.z*w;
    return (qq);
}

/* Construct a unit quaternion from rotation matrix.  Assumes matrix is
 * used to multiply column vector on the left: vnew = mat vold.  Works
 * correctly for right-handed coordinate system and right-handed rotations.
 * Translation and perspective components ignored. */
Quat Qt_FromMatrix(HMatrix mat)
{
    /* This algorithm avoids near-zero divides by looking for a large component
     * - first w, then x, y, or z.  When the trace is greater than zero,
     * |w| is greater than 1/2, which is as small as a largest component can be.
     * Otherwise, the largest diagonal entry corresponds to the largest of |x|,
     * |y|, or |z|, one of which must be larger than |w|, and at least 1/2. */
    Quat qu;
    float tr, s;

    tr = mat[X][X] + mat[Y][Y]+ mat[Z][Z];
    if (tr >= 0.f) {
        s = sqrtf(tr + mat[W][W]);
        qu.w = s*0.5f;
        s = 0.5f / s;
        qu.x = (mat[Z][Y] - mat[Y][Z]) * s;
        qu.y = (mat[X][Z] - mat[Z][X]) * s;
        qu.z = (mat[Y][X] - mat[X][Y]) * s;
    } else {
        int h = X;
        if (mat[Y][Y] > mat[X][X]) h = Y;
        if (mat[Z][Z] > mat[h][h]) h = Z;
        switch (h) {
#define SM_caseMacro(i,j,k,I,J,K) \
        case I:\
        s = sqrtf( (mat[I][I] - (mat[J][J]+mat[K][K])) + mat[W][W] );\
        qu.i = s*0.5f;\
        s = 0.5f / s;\
        qu.j = (mat[I][J] + mat[J][I]) * s;\
        qu.k = (mat[K][I] + mat[I][K]) * s;\
        qu.w = (mat[K][J] - mat[J][K]) * s;\
        break
        SM_caseMacro(x,y,z,X,Y,Z);
        SM_caseMacro(y,z,x,Y,Z,X);
        SM_caseMacro(z,x,y,Z,X,Y);
        }
    }
    if (mat[W][W] != 1.f) qu = Qt_Scale(qu, 1.f/sqrtf(mat[W][W]));
    return (qu);
}
/******* Decomp Auxiliaries *******/

static HMatrix mat_id = {{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};

/** Compute either the 1 or infinity norm of M, depending on tpose **/
float mat_norm(HMatrix M, int tpose)
{
    int i;
    float sum, max;
    max = 0.f;
    for (i=0; i<3; i++) {
    if (tpose) sum = fabsf(M[0][i])+fabsf(M[1][i])+fabsf(M[2][i]);
    else       sum = fabsf(M[i][0])+fabsf(M[i][1])+fabsf(M[i][2]);
    if (max<sum) max = sum;
    }
    return max;
}

float norm_inf(HMatrix M) {return mat_norm(M, 0);}
float norm_one(HMatrix M) {return mat_norm(M, 1);}

/** Return index of column of M containing maximum abs entry, or -1 if M=0 **/
int find_max_col(HMatrix M)
{
    float abs, max;
    int i, j, col;
    max = 0.f; col = -1;
    for (i=0; i<3; i++) for (j=0; j<3; j++) {
    abs = M[i][j]; if (abs<0.f) abs = -abs;
    if (abs>max) {max = abs; col = j;}
    }
    return col;
}

/** Setup u for Household reflection to zero all v components but first **/
void make_reflector(float *v, float *u)
{
    float s = sqrtf(vdot(v, v));
    u[0] = v[0]; u[1] = v[1];
    u[2] = v[2] + ((v[2]<0.f) ? -s : s);
    s = sqrtf(2.f/vdot(u, u));
    u[0] = u[0]*s; u[1] = u[1]*s; u[2] = u[2]*s;
}

/** Apply Householder reflection represented by u to column vectors of M **/
void reflect_cols(HMatrix M, float *u)
{
    int i, j;
    for (i=0; i<3; i++) {
    float s = u[0]*M[0][i] + u[1]*M[1][i] + u[2]*M[2][i];
    for (j=0; j<3; j++) M[j][i] -= u[j]*s;
    }
}
/** Apply Householder reflection represented by u to row vectors of M **/
void reflect_rows(HMatrix M, float *u)
{
    int i, j;
    for (i=0; i<3; i++) {
    float s = vdot(u, M[i]);
    for (j=0; j<3; j++) M[i][j] -= u[j]*s;
    }
}

/** Find orthogonal factor Q of rank 1 (or less) M **/
void do_rank1(HMatrix M, HMatrix Q)
{
    float v1[3], v2[3], s;
    int col;
    /* If rank(M) is 1, we should find a non-zero column in M */
    col = find_max_col(M);
    if (col<0) {SM_mat_copy(Q,=,mat_id,4); return;} /* Rank is 0 */
    v1[0] = M[0][col]; v1[1] = M[1][col]; v1[2] = M[2][col];
    make_reflector(v1, v1); reflect_cols(M, v1);
    v2[0] = M[2][0]; v2[1] = M[2][1]; v2[2] = M[2][2];
    make_reflector(v2, v2); reflect_rows(M, v2);
    s = M[2][2];
    SM_mat_copy(Q,=,mat_id,4);
    if (s<0.f) Q[2][2] = -1.f;
    reflect_cols(Q, v1); reflect_rows(Q, v2);
}

/** Find orthogonal factor Q of rank 2 (or less) M using adjoint transpose **/
void do_rank2(HMatrix M, HMatrix MadjT, HMatrix Q)
{
    float v1[3], v2[3];
    float w, x, y, z, c, s, d;
    int col;
    /* If rank(M) is 2, we should find a non-zero column in MadjT */
    col = find_max_col(MadjT);
    if (col<0) {do_rank1(M, Q); return;} /* Rank<2 */
    v1[0] = MadjT[0][col]; v1[1] = MadjT[1][col]; v1[2] = MadjT[2][col];
    make_reflector(v1, v1); reflect_cols(M, v1);
    vcross(M[0], M[1], v2);
    make_reflector(v2, v2); reflect_rows(M, v2);
    w = M[0][0]; x = M[0][1]; y = M[1][0]; z = M[1][1];
    if (w*z>x*y) {
    c = z+w; s = y-x; d = sqrtf(c*c+s*s); c = c/d; s = s/d;
    Q[0][0] = Q[1][1] = c; Q[0][1] = -(Q[1][0] = s);
    } else {
    c = z-w; s = y+x; d = sqrtf(c*c+s*s); c = c/d; s = s/d;
    Q[0][0] = -(Q[1][1] = c); Q[0][1] = Q[1][0] = s;
    }
    Q[0][2] = Q[2][0] = Q[1][2] = Q[2][1] = 0.f; Q[2][2] = 1.f;
    reflect_cols(Q, v1); reflect_rows(Q, v2);
}


/******* Polar Decomposition *******/

/* Polar Decomposition of 3x3 matrix in 4x4,
 * M = QS.  See Nicholas Higham and Robert S. Schreiber,
 * Fast Polar Decomposition of An Arbitrary Matrix,
 * Technical Report 88-942, October 1988,
 * Department of Computer Science, Cornell University.
 */
float polar_decomp(HMatrix M, HMatrix Q, HMatrix S)
{
#define SM_TOL 1.0e-6
    HMatrix Mk, MadjTk, Ek;
    float det, M_one, M_inf, MadjT_one, MadjT_inf, E_one, gamma, g1, g2;
    int i, j;
    SM_mat_tpose(Mk,=,M,3);
    M_one = norm_one(Mk);  M_inf = norm_inf(Mk);
    do {
    adjoint_transpose(Mk, MadjTk);
    det = vdot(Mk[0], MadjTk[0]);
    if (det==0.f) {do_rank2(Mk, MadjTk, Mk); break;}
    MadjT_one = norm_one(MadjTk); MadjT_inf = norm_inf(MadjTk);
    gamma = sqrtf(sqrtf((MadjT_one*MadjT_inf)/(M_one*M_inf))/fabsf(det));
    g1 = gamma*0.5f;
    g2 = 0.5f/(gamma*det);
    SM_mat_copy(Ek,=,Mk,3);
    SM_mat_binop(Mk,=,g1*Mk,+,g2*MadjTk,3);
    SM_mat_copy(Ek,-=,Mk,3);
    E_one = norm_one(Ek);
    M_one = norm_one(Mk);  M_inf = norm_inf(Mk);
    } while (E_one>(M_one*SM_TOL));
    SM_mat_tpose(Q,=,Mk,3); SM_mat_pad(Q);
    mat_mult(Mk, M, S);  SM_mat_pad(S);
    for (i=0; i<3; i++) for (j=i; j<3; j++)
    S[i][j] = S[j][i] = 0.5f*(S[i][j]+S[j][i]);
    return (det);
}

















/******* Spectral Decomposition *******/

/* Compute the spectral decomposition of symmetric positive semi-definite S.
 * Returns rotation in U and scale factors in result, so that if K is a diagonal
 * matrix of the scale factors, then S = U K (U transpose). Uses Jacobi method.
 * See Gene H. Golub and Charles F. Van Loan. Matrix Computations. Hopkins 1983.
 */
HVect spect_decomp(HMatrix S, HMatrix U)
{
    HVect kv;
    float Diag[3],OffD[3]; /* OffD is off-diag (by omitted index) */
    float g,h,fabsh,fabsOffDi,t,theta,c,s,tau,ta,OffDq,a,b;
    static char nxt[] = {Y,Z,X};
    int sweep, i, j;
    SM_mat_copy(U,=,mat_id,4);
    Diag[X] = S[X][X]; Diag[Y] = S[Y][Y]; Diag[Z] = S[Z][Z];
    OffD[X] = S[Y][Z]; OffD[Y] = S[Z][X]; OffD[Z] = S[X][Y];
    for (sweep=20; sweep>0; sweep--) {
    float sm = fabsf(OffD[X])+fabsf(OffD[Y])+fabsf(OffD[Z]);
    if (sm==0.f) break;
    for (i=Z; i>=X; i--) {
        int p = nxt[i]; int q = nxt[p];
        fabsOffDi = fabsf(OffD[i]);
        g = 100.f*fabsOffDi;
        if (fabsOffDi>0.f) {
        h = Diag[q] - Diag[p];
        fabsh = fabsf(h);
        if (fabsh+g==fabsh) {
            t = OffD[i]/h;
        } else {
            theta = 0.5f*h/OffD[i];
            t = 1.f/(fabsf(theta)+sqrtf(theta*theta+1.f));
            if (theta<0.f) t = -t;
        }
        c = 1.f/sqrtf(t*t+1.f); s = t*c;
        tau = s/(c+1.f);
        ta = t*OffD[i]; OffD[i] = 0.f;
        Diag[p] -= ta; Diag[q] += ta;
        OffDq = OffD[q];
        OffD[q] -= s*(OffD[p] + tau*OffD[q]);
        OffD[p] += s*(OffDq   - tau*OffD[p]);
        for (j=Z; j>=X; j--) {
            a = U[j][p]; b = U[j][q];
            U[j][p] -= s*(b + tau*a);
            U[j][q] += s*(a - tau*b);
        }
        }
    }
    }
    kv.x = Diag[X]; kv.y = Diag[Y]; kv.z = Diag[Z]; kv.w = 1.f;
    return (kv);
}

/******* Spectral Axis Adjustment *******/

/* Given a unit quaternion, q, and a scale vector, k, find a unit quaternion, p,
 * which permutes the axes and turns freely in the plane of duplicate scale
 * factors, such that q p has the largest possible w component, i.e. the
 * smallest possible angle. Permutes k's components to go with q p instead of q.
 * See Ken Shoemake and Tom Duff. Matrix Animation and Polar Decomposition.
 * Proceedings of Graphics Interface 1992. Details on p. 262-263.
 */
Quat snuggle(Quat q, HVect *k)
{
#define SM_SQRTHALF (0.7071067811865475244f)
#define SM_sgn(n,v)    ((n)?-(v):(v))
#define SM_swap(a,i,j) {a[3]=a[i]; a[i]=a[j]; a[j]=a[3];}
#define SM_cycle(a,p)  if (p) {a[3]=a[0]; a[0]=a[1]; a[1]=a[2]; a[2]=a[3];}\
            else   {a[3]=a[2]; a[2]=a[1]; a[1]=a[0]; a[0]=a[3];}
    Quat p;
    float ka[4];
    int i, turn = -1;
    ka[X] = k->x; ka[Y] = k->y; ka[Z] = k->z;
    if (ka[X]==ka[Y]) {if (ka[X]==ka[Z]) turn = W; else turn = Z;}
    else {if (ka[X]==ka[Z]) turn = Y; else if (ka[Y]==ka[Z]) turn = X;}
    if (turn>=0) {
    Quat qtoz, qp;
    unsigned neg[3], win;
    float mag[3], t;
    static Quat qxtoz = {0,SM_SQRTHALF,0,SM_SQRTHALF};
    static Quat qytoz = {SM_SQRTHALF,0,0,SM_SQRTHALF};
    static Quat qppmm = { 0.5f, 0.5f,-0.5f,-0.5f};
    static Quat qpppp = { 0.5f, 0.5f, 0.5f, 0.5f};
    static Quat qmpmm = {-0.5f, 0.5f,-0.5f,-0.5f};
    static Quat qpppm = { 0.5f, 0.5f, 0.5f,-0.5f};
    static Quat q0001 = { 0.f, 0.f, 0.f, 1.f};
    static Quat q1000 = { 1.f, 0.f, 0.f, 0.f};
    switch (turn) {
    default: return (Qt_Conj(q));
    case X: q = Qt_Mul(q, qtoz = qxtoz); SM_swap(ka,X,Z) break;
    case Y: q = Qt_Mul(q, qtoz = qytoz); SM_swap(ka,Y,Z) break;
    case Z: qtoz = q0001; break;
    }
    q = Qt_Conj(q);
    mag[0] = (float)q.z*q.z+(float)q.w*q.w-0.5f;
    mag[1] = (float)q.x*q.z-(float)q.y*q.w;
    mag[2] = (float)q.y*q.z+(float)q.x*q.w;
    for (i=0; i<3; i++) if ((neg[i] = (mag[i]<0.f))) mag[i] = -mag[i];
    if (mag[0]>mag[1]) {if (mag[0]>mag[2]) win = 0; else win = 2;}
    else           {if (mag[1]>mag[2]) win = 1; else win = 2;}
    switch (win) {
    case 0: if (neg[0]) p = q1000; else p = q0001; break;
    case 1: if (neg[1]) p = qppmm; else p = qpppp; SM_cycle(ka,0) break;
    case 2: if (neg[2]) p = qmpmm; else p = qpppm; SM_cycle(ka,1) break;
    }
    qp = Qt_Mul(q, p);
    t = sqrtf(mag[win]+0.5f);
    p = Qt_Mul(p, Qt_(0.f,0.f,-qp.z/t,qp.w/t));
    p = Qt_Mul(qtoz, Qt_Conj(p));
    } else {
    float qa[4], pa[4];
    unsigned lo, hi, neg[4], par = 0;
    float all, big, two;
    qa[0] = q.x; qa[1] = q.y; qa[2] = q.z; qa[3] = q.w;
    for (i=0; i<4; i++) {
        pa[i] = 0.f;
        if ((neg[i] = (qa[i]<0.f))) qa[i] = -qa[i];
        par ^= neg[i];
    }
    /* Find two largest components, indices in hi and lo */
    if (qa[0]>qa[1]) lo = 0; else lo = 1;
    if (qa[2]>qa[3]) hi = 2; else hi = 3;
    if (qa[lo]>qa[hi]) {
        if (qa[lo^1]>qa[hi]) {hi = lo; lo ^= 1;}
        else {hi ^= lo; lo ^= hi; hi ^= lo;}
    } else {if (qa[hi^1]>qa[lo]) lo = hi^1;}
    all = (qa[0]+qa[1]+qa[2]+qa[3])*0.5f;
    two = (qa[hi]+qa[lo])*SM_SQRTHALF;
    big = qa[hi];
    if (all>two) {
        if (all>big) {/*all*/
        {int i; for (i=0; i<4; i++) pa[i] = SM_sgn(neg[i], 0.5f);}
        SM_cycle(ka,par)
        } else {/*big*/ pa[hi] = SM_sgn(neg[hi],1.f);}
    } else {
        if (two>big) {/*two*/
        pa[hi] = SM_sgn(neg[hi],SM_SQRTHALF); pa[lo] = SM_sgn(neg[lo], SM_SQRTHALF);
        if (lo>hi) {hi ^= lo; lo ^= hi; hi ^= lo;}
        /* This wild code is simply defining a fixed array from a string.
        ** The code in the braces is equivalent to:
        ** hi = (lo+1)%3; lo = (lo+2)%3; */
        if (hi==W) {hi = "\001\002\000"[lo]; lo = 3-hi-lo;}
        SM_swap(ka,hi,lo)
        } else {/*big*/ pa[hi] = SM_sgn(neg[hi],1.f);}
    }
    p.x = -pa[0]; p.y = -pa[1]; p.z = -pa[2]; p.w = pa[3];
    }
    k->x = ka[X]; k->y = ka[Y]; k->z = ka[Z];
    return (p);
}











/******* Decompose Affine Matrix *******/

/* Decompose 4x4 affine matrix A as TFRUK(U transpose), where t contains the
 * translation components, q contains the rotation R, u contains U, k contains
 * scale factors, and f contains the sign of the determinant.
 * Assumes A transforms column vectors in right-handed coordinates.
 * See Ken Shoemake and Tom Duff. Matrix Animation and Polar Decomposition.
 * Proceedings of Graphics Interface 1992.
 */
void decomp_affine(HMatrix A, AffineParts *parts)
{
    HMatrix Q, S, U;
    Quat p;
    float det;
    parts->t = Qt_(A[X][W], A[Y][W], A[Z][W], 0);
    det = polar_decomp(A, Q, S);
    if (det<0.f) {
    SM_mat_copy(Q,=,-Q,3);
    parts->f = -1;
    } else parts->f = 1;
    parts->q = Qt_FromMatrix(Q);
    parts->k = spect_decomp(S, U);
    parts->u = Qt_FromMatrix(U);
    p = snuggle(parts->u, &parts->k);
    parts->u = Qt_Mul(parts->u, p);
}

/******* Invert Affine Decomposition *******/

/* Compute inverse of affine decomposition.
 */
void invert_affine(AffineParts *parts, AffineParts *inverse)
{
    Quat t, p;
    inverse->f = parts->f;
    inverse->q = Qt_Conj(parts->q);
    inverse->u = Qt_Mul(parts->q, parts->u);
    inverse->k.x = (parts->k.x==0.f) ? 0.f : 1.f/parts->k.x;
    inverse->k.y = (parts->k.y==0.f) ? 0.f : 1.f/parts->k.y;
    inverse->k.z = (parts->k.z==0.f) ? 0.f : 1.f/parts->k.z;
    inverse->k.w = parts->k.w;
    t = Qt_(-parts->t.x, -parts->t.y, -parts->t.z, 0);
    t = Qt_Mul(Qt_Conj(inverse->u), Qt_Mul(t, inverse->u));
    t = Qt_(inverse->k.x*t.x, inverse->k.y*t.y, inverse->k.z*t.z, 0);
    p = Qt_Mul(inverse->q, inverse->u);
    t = Qt_Mul(p, Qt_Mul(t, Qt_Conj(p)));
    inverse->t = (inverse->f>0.f) ? t : Qt_(-t.x, -t.y, -t.z, 0);
}

} // namespace Shoemake
#pragma warning(pop)