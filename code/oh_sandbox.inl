#include "oh_bunny_mesh.inl"
#include "oh_hand_mesh.inl"

#define OH_SANDBOX_CONDITIONAL(_Code) do { _Code; } while(0)
#define OH_SANDBOX_UPDATE(_State, _Input) Sandbox_Update(_State, _Input)

OH_GLOBAL GeometryHandle sbx_HandGeoH;
//OH_GLOBAL u1t_indexed_img* sbx_IndexedImg;
//OH_GLOBAL bimg::ImageContainer* sbx_DeIndexedImg;
//OH_GLOBAL bgfx::TextureHandle sbx_DeIndexedTexture;

void Sandbox_Init(app_state* State)
{
    OH_UNUSED(State);

    /*PaletteTreeDummyData(&State->Saved.PalTree);

    OH_FOR_COUNT(Idx, OH_COUNTOF(g_HandIdxs)) {
        g_HandIdxs[Idx]--;
    }

    quat Q = EulersToQuat(MkF4t_3(kPiHalf, 0.0f, 0.0f));

    OH_FOR_COUNT(Idx, OH_COUNTOF(g_HandVerts)) {
        DdVertex DdV = g_HandVerts[Idx];
        f4t_3 V = 0.1f*MkF4t_3(DdV.x, DdV.y, DdV.z);
        V = QuatMul(V, Q);
        g_HandVerts[Idx] = { V.x, V.y, V.z };
    }
    
    sbx_HandGeoH = ddCreateGeometry(
        OH_COUNTOF(g_HandVerts), g_HandVerts,
        OH_COUNTOF(g_HandIdxs),  g_HandIdxs);*/

    //sbx_IndexedImg = LoadIndexedPngFromFile("../user_data/6ix9ine_pico8.png");
    //sbx_DeIndexedImg = ConvertIndexedImgToRGBA8(sbx_IndexedImg);
    //sbx_DeIndexedTexture = ImageToTexture(sbx_DeIndexedImg, gui::kSpriteTextureFlags, "6ix9ine_pico8");
}

void DrawSphere(DebugDrawEncoder* DD, f4t_3 Point) {
    Sphere S;
    S.m_center[0] = Point.x;
    S.m_center[1] = Point.y;
    S.m_center[2] = Point.z;
    S.m_radius = 1.0f;
    DD->draw(S);
}

void MkAabb(Aabb* Box, f4t_3 Min, f4t_3 Max) {
    Box->m_min[0] = Min.x;
    Box->m_min[1] = Min.y;
    Box->m_min[2] = Min.z;
    Box->m_max[0] = Max.x;
    Box->m_max[1] = Max.y;
    Box->m_max[2] = Max.z;
}

struct tf_dbg {
    blt ShowHand;
    blt ShowSpaceship;
    blt WireFrame;
};

void TfDbg(str Id, DebugDrawEncoder* DDrawer, transform_3d* Tf, tf_dbg* TfDbg)
{
    ImGui::Text(Id);
    OH_IMGUI_SCOPE_ID(Id);

    ImGui::Checkbox("ShowHand",      &TfDbg->ShowHand);
    ImGui::Checkbox("ShowSpaceship", &TfDbg->ShowSpaceship);
    ImGui::Checkbox("WireFrame",     &TfDbg->WireFrame);
    DDrawer->push(); OH_DEFER(DDrawer->pop(););

    f4t_m4 TfMtx;
    MtxFromTf3d(&TfMtx, Tf);

    DDrawer->setTransform(TfMtx.E);
    DDrawer->setWireframe(TfDbg->WireFrame);

    if (TfDbg->ShowHand) {  
        DDrawer->setColor(0x99999900);
        DDrawer->draw(sbx_HandGeoH);
    }

    if (TfDbg->ShowSpaceship) {
        Aabb Body;
        Aabb Wings;
        Aabb Tail;
        DDrawer->setColor(0x99009999);
        MkAabb(&Body, MkF4t_3(-1.0f, -1.0f, -4.0f), MkF4t_3(1.0f, 1.0f, 2.0f));
        MkAabb(&Wings, MkF4t_3(-3.0f, -0.2f, -0.5f), MkF4t_3(3.0f, 0.2f, 0.5f));
        MkAabb(&Tail, MkF4t_3(-0.2f, 0.0f, -4.0f), MkF4t_3(0.2f, 2.0f, -3.0f));
        DDrawer->draw(Body);
        DDrawer->draw(Wings);
        DDrawer->draw(Tail);

    }
}

void TestQuatDiff(app_input* Input) {
    ImGui::Begin("Piss"); OH_DEFER(ImGui::End());
    OH_PERSIST transform_3d Tf1;
    OH_PERSIST transform_3d Tf2;
    OH_PERSIST tf_dbg TfDbg1 = {};
    OH_PERSIST tf_dbg TfDbg2 = {};
    OH_PERSIST blt Init = true;
    if (Init) {
        InitTf3d(&Tf1);
        InitTf3d(&Tf2);
        Init = false;
    }

    gui::TransformEdit("Tf1", &Tf1, true);
    gui::TransformEdit("Tf2", &Tf2, true);
    TfDbg("Tf1Dbg", &Input->DDrawer, &Tf1, &TfDbg1);
    TfDbg("Tf2Dbg", &Input->DDrawer, &Tf2, &TfDbg2);
    f4t Diff = QuatDiff(EulersToQuat(Tf1.Rotation), EulersToQuat(Tf2.Rotation));
    ImGui::DragFloat("Diff", &Diff);
}

void Sandbox_Update(app_state* State, app_input* Input)
{
    OH_UNUSED(State);
    OH_UNUSED(Input);

    // ImGui::ShowDemoWindow(NULL);

    /*ImGui::BeginChild("Child1", ImVec2(ImGui::GetWindowContentRegionWidth() * 0.5f, 300), false, ImGuiWindowFlags_HorizontalScrollbar);
    OH_PERSIST lab_a_color LabAColor = MkF4t_4(0.0f, 50.0f, 0.0f, 1.0f);
    gui::TriplePicker("asfsadf", &LabAColor);
    OH_PERSIST rgba_color RgbaColor = MkF4t_4(1.0f, 1.0f, 1.0f, 1.0f);
    ImGui::ColorPicker4("fasdf", RgbaColor.E);
    ImGui::EndChild();*/

    //gui::imgui_image Params;
    //Params.Texture = sbx_DeIndexedTexture;
    //Params.Size = MkF4t_2(256.0f, 190.0f);
    //ImGuiImage(&Params);

    OH_DBG("-- New Picker Frame --");
}