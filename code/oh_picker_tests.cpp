namespace OH { namespace picker { namespace test {

#include "oh_3d_math_test_data.inl"

OH_INTERN void PrintExpectedValues() // using some method that I know works
{
    OH_FOR_COUNT(IdxX, OH_COUNTOF(SampleEulerXs)) {
        OH_FOR_COUNT(IdxY, OH_COUNTOF(SampleEulerYs)) {
            OH_FOR_COUNT(IdxZ, OH_COUNTOF(SampleEulerZs)) {
                transform_3d Tf3d;
                InitTf3d(&Tf3d);
                Tf3d.Rotation = MkF4t_3(SampleEulerXs[IdxX], SampleEulerYs[IdxY], SampleEulerZs[IdxZ]);
                f4t_m4 TfMtx;
                MtxFromTf3d(&TfMtx, &Tf3d);
                OH_FOR_COUNT(IdxPt, OH_COUNTOF(SamplePoints)) {
                    f4t_3 TfPt = MtxMul0(SamplePoints[IdxPt], &TfMtx);
                    OH_DBG("%.4f, %.4f, %.4f", TfPt.x, TfPt.y, TfPt.z);
                }
            }
        }
    }
}

OH_INTERN void Test3dMath()
{
    u4t CntX = OH_COUNTOF(SampleEulerXs);
    u4t CntY = OH_COUNTOF(SampleEulerYs);
    u4t CntZ = OH_COUNTOF(SampleEulerZs);
    u4t CntP = OH_COUNTOF(SamplePoints);


    palette_tree* PalTree;
    gui::palette_tree_transient* PTTran;
    palette_node* Root;
    palette_node* Transform1;
    palette_node* Transform2;
    palette_node* Transform3;
    palette_node* ColorNode;
    memptr PalTreeMem = OH::MemPtrAlloc(sizeof(palette_tree));
    memptr PTTranMem = OH::MemPtrAlloc(sizeof(gui::palette_tree_transient));
    OH_DEFER(MemPtrFree(PalTreeMem));
    OH_DEFER(MemPtrFree(PTTranMem));
    {
        PalTree = (palette_tree*)PalTreeMem->data;
        PTTran = (gui::palette_tree_transient*)PTTranMem->data;

        InitPaletteTree(PalTree);
        gui::InitPaletteTreeTran(PalTree, PTTran);

        Root       = PalTree->Nodes + 0;
        Transform1 = PalTree->Nodes + 1;
        Transform2 = PalTree->Nodes + 2;
        Transform3 = PalTree->Nodes + 3;
        ColorNode  = PalTree->Nodes + 4;

        Root->      ChildIdxs.push_back((u4t)(Transform1 - PalTree->Nodes));
        Transform1->ChildIdxs.push_back((u4t)(Transform2 - PalTree->Nodes));
        Transform2->ChildIdxs.push_back((u4t)(Transform3 - PalTree->Nodes));
        Transform3->ChildIdxs.push_back((u4t)(ColorNode  - PalTree->Nodes));

        bx::snprintf(Transform1->Name, sizeof(Transform1->Name), "Transform1");
        bx::snprintf(Transform2->Name, sizeof(Transform2->Name), "Transform2");
        bx::snprintf(Transform3->Name, sizeof(Transform3->Name), "Transform3");
        bx::snprintf(ColorNode->Name,  sizeof(ColorNode->Name),  "ColorNode");

        Transform1->Type = NodeType_Transform;
        Transform2->Type = NodeType_Transform;
        Transform3->Type = NodeType_Transform;
        ColorNode->Type  = NodeType_Color;
    }

    OH_FOR_COUNT(IdxX, CntX) {
        OH_FOR_COUNT(IdxY, CntY) {
            OH_FOR_COUNT(IdxZ, CntZ) {
                OH_FOR_COUNT(IdxPt, CntP) {
                    f4t_3 Euler = MkF4t_3(SampleEulerXs[IdxX], SampleEulerYs[IdxY], SampleEulerZs[IdxZ]);
                    f4t_3 Point = SamplePoints[IdxPt];
                    f4t_3 ExpectedPt = ExpectedTfPoints[0
                        + IdxX * CntY * CntZ * CntP
                        + IdxY * CntZ * CntP
                        + IdxZ * CntP
                        + IdxPt];

                    {
                        transform_3d Tf3d = {};
                        InitTf3d(&Tf3d);
                        Tf3d.Rotation = MkF4t_3(SampleEulerXs[IdxX], SampleEulerYs[IdxY], SampleEulerZs[IdxZ]);
                        f4t_m4 TfMtx = {};
                        MtxFromTf3d(&TfMtx, &Tf3d);
                        f4t_3 PtFromMtxFromTf = MtxMul1(Point, &TfMtx);
                        OH_CHECK(AllEpsEq(ExpectedPt, 0.001f, PtFromMtxFromTf), "PtFromMtxFromTf");
                    }
                    {
                        quat Q = EulersToQuat(Euler);
                        f4t_m4 QuatMtx = {};
                        MtxRotate(&QuatMtx, Q);
                        f4t_3 PtFromMtxFromQuat = MtxMul1(Point, &QuatMtx);
                        OH_CHECK(AllEpsEq(ExpectedPt, 0.001f, PtFromMtxFromQuat), "PtFromMtxFromQuat"); 
                    }
                    {
                        quat Qx = QuatRotX(Euler.x);
                        quat Qy = QuatRotY(Euler.y);
                        quat Qz = QuatRotZ(Euler.z);
                        quat Q = QuatMul(QuatMul(Qz, Qx), Qy);
                        f4t_3 PtFromQuatProduct = QuatMul(Point, Q);
                        OH_CHECK(AllEpsEq(ExpectedPt, 0.001f, PtFromQuatProduct), "PtFromQuatProduct"); 
                    }
                    {
                        quat Qx = QuatRotX(Euler.x);
                        quat Qy = QuatRotY(Euler.y);
                        quat Qz = QuatRotZ(Euler.z);
                        f4t_3 PtFromQuatRepeat;
                        PtFromQuatRepeat = QuatMul(Point, Qz);
                        PtFromQuatRepeat = QuatMul(PtFromQuatRepeat, Qx);
                        PtFromQuatRepeat = QuatMul(PtFromQuatRepeat, Qy);
                        OH_CHECK(AllEpsEq(ExpectedPt, 0.001f, PtFromQuatRepeat), "PtFromQuatRepeat");
                    }
                    {
                        quat Qx = QuatAxisAngle(MkF4t_3(Dir_E), Euler.x);
                        quat Qy = QuatAxisAngle(MkF4t_3(Dir_U), Euler.y);
                        quat Qz = QuatAxisAngle(MkF4t_3(Dir_N), Euler.z);
                        quat Q = QuatMul(QuatMul(Qz, Qx), Qy);
                        f4t_3 PtFromQuatAxisAngleProduct = QuatMul(Point, Q);
                        OH_CHECK(AllEpsEq(ExpectedPt, 0.001f, PtFromQuatAxisAngleProduct), "PtFromQuatAxisAngleProduct");
                    }
                    {
                        f4t_m4 MtxRotX = {};
                        f4t_m4 MtxRotY = {};
                        f4t_m4 MtxRotZ = {};
                        quat Qx = QuatRotX(Euler.x); MtxRotate(&MtxRotX, Qx);
                        quat Qy = QuatRotY(Euler.y); MtxRotate(&MtxRotY, Qy);
                        quat Qz = QuatRotZ(Euler.z); MtxRotate(&MtxRotZ, Qz);
                        f4t_3 PtFromMtxFromQuatRepeat;
                        PtFromMtxFromQuatRepeat = MtxMul1(Point, &MtxRotZ);
                        PtFromMtxFromQuatRepeat = MtxMul1(PtFromMtxFromQuatRepeat, &MtxRotX);
                        PtFromMtxFromQuatRepeat = MtxMul1(PtFromMtxFromQuatRepeat, &MtxRotY);
                        OH_CHECK(AllEpsEq(ExpectedPt, 0.001f, PtFromMtxFromQuatRepeat), "PtFromMtxFromQuatRepeat");
                    }
                    {
                        f4t_m4 MtxRotX = {};
                        f4t_m4 MtxRotY = {};
                        f4t_m4 MtxRotZ = {};
                        f4t_m4 MtxRotZX = {};
                        f4t_m4 MtxRotZXY = {};
                        quat Qx = QuatRotX(Euler.x); MtxRotate(&MtxRotX, Qx);
                        quat Qy = QuatRotY(Euler.y); MtxRotate(&MtxRotY, Qy);
                        quat Qz = QuatRotZ(Euler.z); MtxRotate(&MtxRotZ, Qz);
                        MtxMul(&MtxRotZX,  &MtxRotZ,  &MtxRotX);
                        MtxMul(&MtxRotZXY, &MtxRotZX, &MtxRotY);
                        f4t_3 PointFromMtxFromQuatProduct = MtxMul1(Point, &MtxRotZXY);
                        OH_CHECK(AllEpsEq(ExpectedPt, 0.001f, PointFromMtxFromQuatProduct), "PointFromMtxFromQuatProduct");
                    }

                    {
                        Transform1->Tf.Rotation = Euler.y*MkF4t_3(Dir_U);
                        Transform2->Tf.Rotation = Euler.x*MkF4t_3(Dir_E);
                        Transform3->Tf.Rotation = Euler.z*MkF4t_3(Dir_N);
                        UpdateMtxCache_Rcrsv(PalTree, PTTran, 0, kInvalidIdx);
                        f4t_m4* MtxFromHeir = PTTran->MtxCache + (Transform3 - PalTree->Nodes);
                        f4t_3 PtFromMtxFromHeir = MtxMul1(Point, MtxFromHeir);
                        OH_CHECK(AllEpsEq(ExpectedPt, 0.001f, PtFromMtxFromHeir), "PtFromMtxFromHeir");
                    }
                    {
                        Transform1->Tf.Rotation = Euler.y*MkF4t_3(Dir_U);
                        Transform2->Tf.Rotation = Euler.x*MkF4t_3(Dir_E);
                        Transform3->Tf.Rotation = Euler.z*MkF4t_3(Dir_N);
                        ColorNode-> Tf.Displace = Point;
                        UpdateMtxCache_Rcrsv(PalTree, PTTran, 0, kInvalidIdx);
                        f4t_m4* MtxFromHeirLeaf = PTTran->MtxCache + (ColorNode - PalTree->Nodes);
                        f4t_3 PtFromMtxFromHeirLeaf = MtxExtractDispl(MtxFromHeirLeaf);
                        OH_CHECK(AllEpsEq(ExpectedPt, 0.001f, PtFromMtxFromHeirLeaf), "PtFromMtxFromHeirLeaf");
                    }
                    {
                        transform_3d Tf3d;
                        InitTf3d(&Tf3d);
                        Tf3d.Rotation = MkF4t_3(SampleEulerXs[IdxX], SampleEulerYs[IdxY], SampleEulerZs[IdxZ]);
                        f4t_m4 TfMtx = {};
                        MtxFromTf3d(&TfMtx, &Tf3d);
                        transform_3d Tf3dRev;
                        InitTf3d(&Tf3dRev);
                        DecompMtxToTf(&Tf3dRev, &TfMtx);
                        f4t_m4 TfRevMtx;
                        MtxFromTf3d(&TfRevMtx, &Tf3dRev);
                        f4t_3 PtFromDecompRoundTrip = MtxMul1(Point, &TfRevMtx);
                        OH_CHECK(AllEpsEq(ExpectedPt, 0.001f, PtFromDecompRoundTrip), "PtFromDecompRoundTrip");
                    }
                    {
                        quat RoundTrippedQ = EulersToQuat(QuatToEulers(EulersToQuat(Euler)));
                        f4t_3 PtFromQuatToEulers = QuatMul(Point, RoundTrippedQ);
                        OH_CHECK(AllEpsEq(ExpectedPt, 0.001f, PtFromQuatToEulers), "PtFromQuatToEulers");
                    }
                }
            }
        }
    }
}

// namespace OH { namespace picker { namespace test {
} } }