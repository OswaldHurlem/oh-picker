// MAYBE put this stuff in ImGui namespace
#include "oh_color_convert.h"

namespace OH { namespace picker { namespace gui {

OH_INTERN void DrawCustomImGuiDragDropPreview(blt TopLine);
OH_INTERN bool ImGuiCustomArrowButton(const char* str_id, const ImVec2& size_arg, ImGuiDir dir, bool RenderFrame);

#define OH_IMGUI_SCOPE_ID(_id) ImGui::PushID(_id); OH_DEFER(ImGui::PopID())
#define OH_IMGUI_SCOPE_GROUP() ImGui::BeginGroup(); OH_DEFER(ImGui::EndGroup())
#define OH_IMGUI_SCOPE_WIDTH(_width) ImGui::PushItemWidth(_width); OH_DEFER(ImGui::PopItemWidth())
#define OH_IMGUI_DBG(_code) { ImGui::Begin("Debug"); { _code } ImGui::End(); }

OH_INLINE blt ImGuiIsItemMUpped(i4t MouseButton=0) {
    return ImGui::IsMouseReleased(MouseButton) && ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenBlockedByPopup);
}

OH_INLINE blt ImGuiIsItemMDowned(i4t MouseButton=0) {
    return ImGui::IsMouseClicked(MouseButton) && ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenBlockedByPopup);
}

OH_INLINE blt ImGuiIsItemDoubleMDowned(i4t MouseButton=0) {
    return ImGui::IsMouseDoubleClicked(MouseButton)
        && ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenBlockedByPopup);
}

OH_GLOBAL bool        g_BkupMouseDown0;
OH_GLOBAL bool        g_BkupMouseClicked0;
OH_GLOBAL bool        g_BkupMouseDoubleClicked0;
OH_GLOBAL bool        g_BkupMouseReleased0;
OH_GLOBAL bool        g_BkupMouseDownOwned0;
OH_GLOBAL float       g_BkupMouseClickedTime0;
OH_GLOBAL float       g_BkupMouseDownDuration0;
OH_GLOBAL float       g_BkupMouseDownDurationPrev0;
OH_GLOBAL float       g_BkupMouseDragMaxDistanceSqr0;
OH_GLOBAL ImVec2      g_BkupMouseClickedPos0;
OH_GLOBAL ImVec2      g_BkupMouseDragMaxDistanceAbs0;

void ImGuiBackupLMBInput() {
    ImGuiIO& IO = ImGui::GetIO();
    g_BkupMouseDown0               = IO.MouseDown[0];
    g_BkupMouseClickedPos0         = IO.MouseClickedPos[0];
    g_BkupMouseClickedTime0        = IO.MouseClickedTime[0];
    g_BkupMouseClicked0            = IO.MouseClicked[0];
    g_BkupMouseDoubleClicked0      = IO.MouseDoubleClicked[0];
    g_BkupMouseReleased0           = IO.MouseReleased[0];
    g_BkupMouseDownOwned0          = IO.MouseDownOwned[0];
    g_BkupMouseDownDuration0       = IO.MouseDownDuration[0];
    g_BkupMouseDownDurationPrev0   = IO.MouseDownDurationPrev[0];
    g_BkupMouseDragMaxDistanceAbs0 = IO.MouseDragMaxDistanceAbs[0];
    g_BkupMouseDragMaxDistanceSqr0 = IO.MouseDragMaxDistanceSqr[0];
}

void ImguiClearLMBInput() {
    g_BkupMouseDown0               = {};
    g_BkupMouseClickedPos0         = {};
    g_BkupMouseClickedTime0        = {};
    g_BkupMouseClicked0            = {};
    g_BkupMouseDoubleClicked0      = {};
    g_BkupMouseReleased0           = {};
    g_BkupMouseDownOwned0          = {};
    g_BkupMouseDownDuration0       = {};
    g_BkupMouseDownDurationPrev0   = {};
    g_BkupMouseDragMaxDistanceAbs0 = {};
    g_BkupMouseDragMaxDistanceSqr0 = {};
}

void ImGuiCombineMouseButtonInputIntoLMBInput(int Btn)
{
    ImGuiIO& IO = ImGui::GetIO();
    IO.MouseDown[0]          |= IO.MouseDown[Btn];
    IO.MouseClicked[0]       |= IO.MouseClicked[Btn];
    IO.MouseDoubleClicked[0] |= IO.MouseDoubleClicked[Btn];
    IO.MouseReleased[0]      |= IO.MouseReleased[Btn];
    IO.MouseDownOwned[0]     |= IO.MouseDownOwned[Btn];
    IO.MouseDownDuration[0]       = Max(IO.MouseDownDuration[0],       IO.MouseDownDuration[Btn]);
    IO.MouseDownDurationPrev[0]   = Max(IO.MouseDownDurationPrev[0],   IO.MouseDownDurationPrev[Btn]);
    IO.MouseDragMaxDistanceSqr[0] = Max(IO.MouseDragMaxDistanceSqr[0], IO.MouseDragMaxDistanceSqr[Btn]);
    IO.MouseDragMaxDistanceAbs[0] = VtMax(IO.MouseDragMaxDistanceAbs[0], IO.MouseDragMaxDistanceAbs[Btn]);
    IO.MouseClickedTime[0]        = IO.MouseClickedTime[Btn];
    IO.MouseClickedPos[0]         = IO.MouseClickedPos[Btn];
}

void ImGuiRestoreLMBInput() {
    ImGuiIO& IO = ImGui::GetIO();
    IO.MouseDown[0] =               g_BkupMouseDown0;
    IO.MouseClickedPos[0] =         g_BkupMouseClickedPos0;
    IO.MouseClickedTime[0] =        g_BkupMouseClickedTime0;
    IO.MouseClicked[0] =            g_BkupMouseClicked0;
    IO.MouseDoubleClicked[0] =      g_BkupMouseDoubleClicked0;
    IO.MouseReleased[0] =           g_BkupMouseReleased0;
    IO.MouseDownOwned[0] =          g_BkupMouseDownOwned0;
    IO.MouseDownDuration[0] =       g_BkupMouseDownDuration0;
    IO.MouseDownDurationPrev[0] =   g_BkupMouseDownDurationPrev0;
    IO.MouseDragMaxDistanceAbs[0] = g_BkupMouseDragMaxDistanceAbs0;
    IO.MouseDragMaxDistanceSqr[0] = g_BkupMouseDragMaxDistanceSqr0;
}

OH_INLINE const str FindTextDisplayEnd(str Text)
{
    str TextDisplayEnd = Text;
    
    while (*TextDisplayEnd != '\0' && (TextDisplayEnd[0] != '#' || TextDisplayEnd[1] != '#'))
        TextDisplayEnd++;
    return TextDisplayEnd;
}

struct imgui_image {
    bgfx::TextureHandle Texture = {bgfx::kInvalidHandle};
    f4t_2 Size = {0,0};
    f4t_2 Uv0 = {0,0};
    f4t_2 Uv1 = {1,1};
    f4t_4 TintColor   = {1,1,1,1};
    f4t_4 BorderColor = {0,0,0,0};
};

OH_INTERN void ImGuiImage(imgui_image* Params) {
    ImGui::Image(
        BgfxTexToImgui(Params->Texture), Params->Size,
        Params->Uv0, Params->Uv1,
        Params->TintColor, Params->BorderColor);
}

#if 0
// NOTE these draw within normalized Window Cordinates eg (0,0) = bottom left, (1,1) = top right
struct imgui_img_quad
{
    bgfx::TextureHandle Texture = {bgfx::kInvalidHandle};
    f4t_2 Dims = {0,0};
    f4t_2 Pos = {0.5f, 0.5f};
    f4t Rotation = 0.0f;
    f4t_2 Uv00   = {0, 1};
    f4t_2 Uv11   = {1, 0};
    f4t_4 Color = {1,1,1,1};
    blt Debug = false;
};

OH_INTERN void ImGuiImgQuad(const imgui_img_quad* Params) {
    f4t_2 Region01 = ImGui::GetWindowPos();
    f4t_2 Region10 = Region01 + ImGui::GetWindowSize();
    f4t_2 Region11 = Diagonal(Region10, Region01);
    f4t_2 Region00 = Diagonal(Region01, Region10);

    f4t_2 Corner00_Unrotated = Params->Dims*0.5f*MkF4t_2(-1, -1);
    f4t_2 Corner10_Unrotated = Params->Dims*0.5f*MkF4t_2( 1, -1);
    f4t_2 Corner01_Unrotated = Params->Dims*0.5f*MkF4t_2(-1,  1);
    f4t_2 Corner11_Unrotated = Params->Dims*0.5f*MkF4t_2( 1,  1);

    quat Q = EulersToQuat(MkF4t_3(0.0f, 0.0f, Params->Rotation));
    f4t_2 Corner00_Unpositioned = SwizzXY(QuatMul(VConcat(Corner00_Unrotated, 0.0f), Q));
    f4t_2 Corner10_Unpositioned = SwizzXY(QuatMul(VConcat(Corner10_Unrotated, 0.0f), Q));
    f4t_2 Corner01_Unpositioned = SwizzXY(QuatMul(VConcat(Corner01_Unrotated, 0.0f), Q));
    f4t_2 Corner11_Unpositioned = SwizzXY(QuatMul(VConcat(Corner11_Unrotated, 0.0f), Q));

    f4t_2 Corner00 = VtLerp(Region00, Params->Pos + Corner00_Unpositioned, Region11);
    f4t_2 Corner10 = VtLerp(Region00, Params->Pos + Corner10_Unpositioned, Region11);
    f4t_2 Corner01 = VtLerp(Region00, Params->Pos + Corner01_Unpositioned, Region11);
    f4t_2 Corner11 = VtLerp(Region00, Params->Pos + Corner11_Unpositioned, Region11);

    f4t_2 Uv01 = Diagonal(Params->Uv00, Params->Uv11);
    f4t_2 Uv10 = Diagonal(Params->Uv11, Params->Uv00);

    ImGui::GetWindowDrawList()->AddImageQuad(
        BgfxTexToImgui(Params->Texture),
        Corner00, Corner10, Corner11, Corner01,
        Params->Uv00, Uv10, Params->Uv11, Uv01,
        CompressRgba(Params->Color).Packed);

    if (Params->Debug) {
        ImGui::GetWindowDrawList()->AddCircleFilled(Corner00, 4.0f, IM_COL32(0,      0, 0, 255));
        ImGui::GetWindowDrawList()->AddCircleFilled(Corner10, 4.0f, IM_COL32(255,    0, 0, 255));
        ImGui::GetWindowDrawList()->AddCircleFilled(Corner01, 4.0f, IM_COL32(0,    255, 0, 255));
        ImGui::GetWindowDrawList()->AddCircleFilled(Corner11, 4.0f, IM_COL32(255,  255, 0, 255));
    }
}

OH_INTERN void ImGuiImgQuadUnscaled(const imgui_img_quad* Params) {
    // Copy pasted from ImGuiImgQuad
    f4t_2 Region01 = ImGui::GetWindowPos();
    f4t_2 Region10 = Region01 + ImGui::GetWindowSize();
    f4t_2 Region11 = Diagonal(Region10, Region01);
    f4t_2 Region00 = Diagonal(Region01, Region10);

    f4t_2 Corner00_Unrotated = Params->Dims*0.5f*MkF4t_2(-1, -1);
    f4t_2 Corner10_Unrotated = Params->Dims*0.5f*MkF4t_2( 1, -1);
    f4t_2 Corner01_Unrotated = Params->Dims*0.5f*MkF4t_2(-1,  1);
    f4t_2 Corner11_Unrotated = Params->Dims*0.5f*MkF4t_2( 1,  1);

    quat Q = EulersToQuat(MkF4t_3(0.0f, 0.0f, Params->Rotation));
    f4t_2 Corner00_Unpositioned = SwizzXY(QuatMul(VConcat(Corner00_Unrotated, 0.0f), Q));
    f4t_2 Corner10_Unpositioned = SwizzXY(QuatMul(VConcat(Corner10_Unrotated, 0.0f), Q));
    f4t_2 Corner01_Unpositioned = SwizzXY(QuatMul(VConcat(Corner01_Unrotated, 0.0f), Q));
    f4t_2 Corner11_Unpositioned = SwizzXY(QuatMul(VConcat(Corner11_Unrotated, 0.0f), Q));

    // Different
    f4t_2 CenterPoint = VtLerp(Region00, Params->Pos, Region11);
    f4t_2 Corner00 = CenterPoint + MkF4t_2(1.0f, -1.0f)*Corner00_Unpositioned;
    f4t_2 Corner10 = CenterPoint + MkF4t_2(1.0f, -1.0f)*Corner10_Unpositioned;
    f4t_2 Corner01 = CenterPoint + MkF4t_2(1.0f, -1.0f)*Corner01_Unpositioned;
    f4t_2 Corner11 = CenterPoint + MkF4t_2(1.0f, -1.0f)*Corner11_Unpositioned;

    // Same as ImGuiImgQuad
    f4t_2 Uv01 = Diagonal(Params->Uv00, Params->Uv11);
    f4t_2 Uv10 = Diagonal(Params->Uv11, Params->Uv00);

    ImGui::GetWindowDrawList()->AddImageQuad(
        BgfxTexToImgui(Params->Texture),
        Corner00, Corner10, Corner11, Corner01,
        Params->Uv00, Uv10, Params->Uv11, Uv01,
        CompressRgba(Params->Color).Packed);

    if (Params->Debug) {
        ImGui::GetWindowDrawList()->AddCircleFilled(Corner00, 4.0f, IM_COL32(0,      0, 0, 255));
        ImGui::GetWindowDrawList()->AddCircleFilled(Corner10, 4.0f, IM_COL32(255,    0, 0, 255));
        ImGui::GetWindowDrawList()->AddCircleFilled(Corner01, 4.0f, IM_COL32(0,    255, 0, 255));
        ImGui::GetWindowDrawList()->AddCircleFilled(Corner11, 4.0f, IM_COL32(255,  255, 0, 255));
    }
}
#endif

struct imgui_drag_floats_ex_p {
    str SuperLabel = "";
    str* Labels = NULL;
    f4t* Vals;
    i4t N;
    const f4t* Speeds = NULL; //1.0f
    const f4t* Mins = NULL; //0.0f
    const f4t* Maxs = NULL; //0.0f
    const f4t* Powers = NULL;
    str Format = "%.3f";
};

// MAYBE SuperLabel on same side
OH_INTERN blt ImGuiDragFloatsEx(imgui_drag_floats_ex_p* Params)
{
    blt Changed = false;

    OH_IMGUI_SCOPE_ID(Params->SuperLabel);
    OH_IMGUI_SCOPE_GROUP();

    ImGui::Text(Params->SuperLabel);

    f4t ItemHzSpacing = ImGui::GetStyle().ItemInnerSpacing.x;

    f4t Width = Max(
        1.0f, 
        (ImGui::GetContentRegionAvailWidth() - (2*(Params->N-1)*ItemHzSpacing)) / Params->N
        ) - ItemHzSpacing;

    OH_FOR_COUNT(Idx, Params->N) {
        OH_IMGUI_SCOPE_ID(Idx);
        const str Label = Params->Labels ? Params->Labels[Idx] : "";
        OH_IMGUI_SCOPE_WIDTH(Width - ImGui::CalcTextSize(Label).x);
        ImGui::TextUnformatted(Label, FindTextDisplayEnd(Label));
        ImGui::SameLine();
        f4t Min = Params->Mins ? Params->Mins[Idx] : 0.0f;
        f4t Max = Params->Maxs ? Params->Maxs[Idx] : 0.0f;
        f4t Speed = Params->Speeds ? Params->Speeds[Idx] : 1.0f;
        f4t Power = Params->Powers ? Params->Powers[Idx] : 1.0f;
        Changed |= ImGui::DragFloat("", Params->Vals + Idx, Speed, Min, Max, Params->Format, Power);
        ImGui::SameLine(0, ImGui::GetStyle().ItemInnerSpacing.x);
    }

    return Changed;
}

OH_INTERN void DisplayMatrix(str Label, f4t* Mtx)
{
    f4t Tp[16];
    bx::mtxTranspose(Tp, Mtx);

    OH_IMGUI_SCOPE_ID(Label);
    OH_IMGUI_SCOPE_GROUP();
    ImGui::Text(Label);

    ImGui::DragFloat4("R0", Tp +  0, 0.0f);
    ImGui::DragFloat4("R1", Tp +  4, 0.0f);
    ImGui::DragFloat4("R2", Tp +  8, 0.0f);
    ImGui::DragFloat4("R3", Tp + 12, 0.0f);
}

OH_INTERN blt TransformEdit(const str Label, transform_3d* Tf, blt IncludeScaleAndRotation)
{
    const f4t AllSpeed = 1.0f;
    OH_IMGUI_SCOPE_ID(Label);
    OH_IMGUI_SCOPE_GROUP();

    if (Label != FindTextDisplayEnd(Label)) { ImGui::Text(Label); }

    blt Changed = false;


    /*Position*/
    {
        f4t_3 SwizzDisplace = SwizzYXZ(Tf->Displace);
        imgui_drag_floats_ex_p PositionEditParams;
        PositionEditParams.SuperLabel = "Displacement (L*a*b*)";
        OH_ASSIGN_ARR(PositionEditParams.Labels, str, "L*", "a*", "b*");
        PositionEditParams.Vals = SwizzDisplace.E;
        PositionEditParams.N = 3;
        f4t_3 Speed = MkF4t_3(0.25f) * AllSpeed;
        PositionEditParams.Speeds = Speed.E;
        if (ImGuiDragFloatsEx(&PositionEditParams)) {
            Tf->Displace = SwizzYXZ(SwizzDisplace);
            Changed = true;
        }
    }
    
    if (IncludeScaleAndRotation)
    {
        f4t_3 YawPitchRoll = ToDegrees(SwizzYXZ(Tf->Rotation));
        imgui_drag_floats_ex_p RotationEditParams;
        RotationEditParams.SuperLabel = "Rotation (degrees)";
        OH_ASSIGN_ARR(RotationEditParams.Labels, str, "Yaw", "Ptch", "Roll");
        RotationEditParams.Vals = YawPitchRoll.E;
        RotationEditParams.N = 3;
        f4t_3 Speed = MkF4t_3(1.0f) * AllSpeed;
        RotationEditParams.Speeds = Speed.E;
        if (ImGuiDragFloatsEx(&RotationEditParams)) {
            Tf->Rotation = ToRadians(SwizzYXZ(YawPitchRoll));
            Changed = true;
            Tf->Rotation = VtRem(Tf->Rotation, MkF4t_3(2*kPi));
            if (Tf->Rotation.x >= kPi) { Tf->Rotation.x -= 2*kPi; }
            if (Tf->Rotation.y >= kPi) { Tf->Rotation.y -= 2*kPi; }
            if (Tf->Rotation.z >= kPi) { Tf->Rotation.z -= 2*kPi; }
        }
    }
    
    if (IncludeScaleAndRotation)
    {
        f4t_3 SwizzScale = SwizzYXZ(Tf->Scale);
        imgui_drag_floats_ex_p ScaleEditParams;
        ScaleEditParams.SuperLabel = "Scale";
        OH_ASSIGN_ARR(ScaleEditParams.Labels, str, "Y", "X", "Z");
        ScaleEditParams.Vals = SwizzScale.E;
        ScaleEditParams.N = 3;
        f4t_3 Speed = MkF4t_3(0.001f) * AllSpeed;
        ScaleEditParams.Speeds = Speed.E;
        f4t_3 Powers = VtIfElse(
            Abs(Tf->Scale) < MkF4t_3(0.0001f),
            1.0f,
            10.0f);
        ScaleEditParams.Powers = Powers.E;
        if (ImGuiDragFloatsEx(&ScaleEditParams)) {
            Tf->Scale = SwizzYXZ(SwizzScale);
            Changed = true;
        }
    }

    ImGui::Separator();
    if (ImGui::Button("Clear All")) { InitTf3d(Tf); }

    return Changed;
}

OH_INTERN blt TriplePicker(const str Label, lab_a_color* LabAColor)
{
    //const f4t PickerExt = 160.0f;
    //lab_a_color LabAColorCopy;
    //f4t_2 DrawTopLeft = ImGui::GetCursorScreenPos();
    //ImGuiIO& IoRef = ImGui::GetIO();

    OH_IMGUI_SCOPE_ID(Label);
    OH_IMGUI_SCOPE_GROUP();

    const f4t LPickerMin = 10.0f;
    const f4t LPickerMax = 95.0f;
    const f4t APickerMin = -80.0f;
    const f4t APickerMax = 80.0f;
    const f4t BPickerMin = -80.0f;
    const f4t BPickerMax = 80.0f;
    lab_a_color LabAColorCopy = *LabAColor;
    f4t_2 TriplePickerTL_Screen = ImGui::GetCursorScreenPos();
    ImGuiIO& IoRef = ImGui::GetIO();
    
    f4t HzInnerSpacing = ImGui::GetStyle().ItemInnerSpacing.x;
    
    f4t_2 PickerSize = MkF4t_2(Max(ImGui::GetFrameHeight(), ImGui::CalcItemWidth()/3 - HzInnerSpacing));
    
    f4t_2 ABPickerTL_Screen = TriplePickerTL_Screen;
    f4t_2 ABPickerBR_Screen = ABPickerTL_Screen + PickerSize;
    f4t_2 ABPickerBL_Screen = Diagonal(ABPickerTL_Screen, ABPickerBR_Screen);
    f4t_2 ABPickerTR_Screen = Diagonal(ABPickerBR_Screen, ABPickerTL_Screen);

    f4t_2 ALPickerTL_Screen = TriplePickerTL_Screen + MkF4t_2(1*PickerSize.x + 1*HzInnerSpacing, 0.0f);
    f4t_2 ALPickerBR_Screen = ALPickerTL_Screen + PickerSize;
    f4t_2 ALPickerBL_Screen = Diagonal(ALPickerTL_Screen, ALPickerBR_Screen);
    f4t_2 ALPickerTR_Screen = Diagonal(ALPickerBR_Screen, ALPickerTL_Screen);

    f4t_2 BLPickerTL_Screen = TriplePickerTL_Screen + MkF4t_2(2*PickerSize.x + 2*HzInnerSpacing, 0.0f);
    f4t_2 BLPickerBR_Screen = BLPickerTL_Screen + PickerSize;
    f4t_2 BLPickerBL_Screen = Diagonal(BLPickerTL_Screen, BLPickerBR_Screen);
    f4t_2 BLPickerTR_Screen = Diagonal(BLPickerBR_Screen, BLPickerTL_Screen);

    f4t_2 Color_AB_Min = MkF4t_2(APickerMin, BPickerMin);
    f4t_2 Color_AB_Max = MkF4t_2(APickerMax, BPickerMax);
    f4t_2 Color_AL_Min = MkF4t_2(APickerMin, LPickerMin);
    f4t_2 Color_AL_Max = MkF4t_2(APickerMax, LPickerMax);
    f4t_2 Color_BL_Min = MkF4t_2(BPickerMin, LPickerMin);
    f4t_2 Color_BL_Max = MkF4t_2(BPickerMax, LPickerMax);

    ImGui::SetCursorScreenPos(ABPickerTL_Screen);
    ImGui::InvisibleButton("ABPicker", ABPickerBR_Screen - ABPickerTL_Screen);
    if (ImGui::IsItemActive()) {
        f4t_2 PipPos_Rel = VtDeLerp(ABPickerBL_Screen, IoRef.MousePos, ABPickerTR_Screen);
        PipPos_Rel = VtClamp01(PipPos_Rel);
        f4t_2 ABValues = VtLerp(Color_AB_Min, PipPos_Rel, Color_AB_Max);
        *LabAColor = Swizz0Y0W(LabAColorCopy) + SwizzX0Y0(ABValues);
    }

    ImGui::SetCursorScreenPos(ALPickerTL_Screen);
    ImGui::InvisibleButton("ALPicker", ALPickerBR_Screen - ALPickerTL_Screen);
    if (ImGui::IsItemActive()) {
        f4t_2 PipPos_Rel = VtDeLerp(ALPickerBL_Screen, IoRef.MousePos, ALPickerTR_Screen);
        PipPos_Rel = VtClamp01(PipPos_Rel);
        f4t_2 ALValues = VtLerp(Color_AL_Min, PipPos_Rel, Color_AL_Max);
        *LabAColor = Swizz00ZW(LabAColorCopy) + SwizzXY00(ALValues);
    }

    ImGui::SetCursorScreenPos(BLPickerTL_Screen);
    ImGui::InvisibleButton("BLPicker", BLPickerBR_Screen - BLPickerTL_Screen);
    if (ImGui::IsItemActive()) {
        f4t_2 PipPos_Rel = VtDeLerp(BLPickerBL_Screen, IoRef.MousePos, BLPickerTR_Screen);
        PipPos_Rel = VtClamp01(PipPos_Rel);
        f4t_2 BLValues = VtLerp(Color_AL_Min, PipPos_Rel, Color_AL_Max);
        *LabAColor = SwizzX00W(LabAColorCopy) + Swizz0YX0(BLValues);
    }

    ImDrawList* DrawList = ImGui::GetWindowDrawList();
    const i4t SampleGridDims = 32;
    const f4t CellDim_Rel = 1.0f/SampleGridDims;

    {
        ImGuiExPushGamut(ImGamut::CieLab); OH_DEFER(ImGuiExPopGamut());

        f4t_2 Color_AB_TL = VtLerp(Color_AB_Min, MkF4t_2(0,1), Color_AB_Max);
        f4t_2 Color_AB_TR = VtLerp(Color_AB_Min, MkF4t_2(1,1), Color_AB_Max);
        f4t_2 Color_AB_BR = VtLerp(Color_AB_Min, MkF4t_2(1,0), Color_AB_Max);
        f4t_2 Color_AB_BL = VtLerp(Color_AB_Min, MkF4t_2(0,0), Color_AB_Max);
        u4t Color_AB_TL_U4t = CompressLabA(MkF4t_4(Color_AB_TL.x, LabAColorCopy.CIE_L, Color_AB_TL.y, 1.0f)).Packed;
        u4t Color_AB_TR_U4t = CompressLabA(MkF4t_4(Color_AB_TR.x, LabAColorCopy.CIE_L, Color_AB_TR.y, 1.0f)).Packed;
        u4t Color_AB_BR_U4t = CompressLabA(MkF4t_4(Color_AB_BR.x, LabAColorCopy.CIE_L, Color_AB_BR.y, 1.0f)).Packed;
        u4t Color_AB_BL_U4t = CompressLabA(MkF4t_4(Color_AB_BL.x, LabAColorCopy.CIE_L, Color_AB_BL.y, 1.0f)).Packed;
        DrawList->AddRectFilledMultiColor(ABPickerTL_Screen, ABPickerBR_Screen,
            Color_AB_TL_U4t, Color_AB_TR_U4t, Color_AB_BR_U4t, Color_AB_BL_U4t);

        f4t_2 Color_AL_TL = VtLerp(Color_AL_Min, MkF4t_2(0,1), Color_AL_Max);
        f4t_2 Color_AL_TR = VtLerp(Color_AL_Min, MkF4t_2(1,1), Color_AL_Max);
        f4t_2 Color_AL_BR = VtLerp(Color_AL_Min, MkF4t_2(1,0), Color_AL_Max);
        f4t_2 Color_AL_BL = VtLerp(Color_AL_Min, MkF4t_2(0,0), Color_AL_Max);
        u4t Color_AL_TL_U4t = CompressLabA(MkF4t_4(Color_AL_TL.x, Color_AL_TL.y, LabAColorCopy.CIE_b, 1.0f)).Packed;
        u4t Color_AL_TR_U4t = CompressLabA(MkF4t_4(Color_AL_TR.x, Color_AL_TR.y, LabAColorCopy.CIE_b, 1.0f)).Packed;
        u4t Color_AL_BR_U4t = CompressLabA(MkF4t_4(Color_AL_BR.x, Color_AL_BR.y, LabAColorCopy.CIE_b, 1.0f)).Packed;
        u4t Color_AL_BL_U4t = CompressLabA(MkF4t_4(Color_AL_BL.x, Color_AL_BL.y, LabAColorCopy.CIE_b, 1.0f)).Packed;
        DrawList->AddRectFilledMultiColor(ALPickerTL_Screen, ALPickerBR_Screen,
            Color_AL_TL_U4t, Color_AL_TR_U4t, Color_AL_BR_U4t, Color_AL_BL_U4t);

        f4t_2 Color_BL_TL = VtLerp(Color_BL_Min, MkF4t_2(0,1), Color_BL_Max);
        f4t_2 Color_BL_TR = VtLerp(Color_BL_Min, MkF4t_2(1,1), Color_BL_Max);
        f4t_2 Color_BL_BR = VtLerp(Color_BL_Min, MkF4t_2(1,0), Color_BL_Max);
        f4t_2 Color_BL_BL = VtLerp(Color_BL_Min, MkF4t_2(0,0), Color_BL_Max);
        u4t Color_BL_TL_U4t = CompressLabA(MkF4t_4(LabAColorCopy.CIE_a, Color_BL_TL.y, Color_BL_TL.x, 1.0f)).Packed;
        u4t Color_BL_TR_U4t = CompressLabA(MkF4t_4(LabAColorCopy.CIE_a, Color_BL_TR.y, Color_BL_TR.x, 1.0f)).Packed;
        u4t Color_BL_BR_U4t = CompressLabA(MkF4t_4(LabAColorCopy.CIE_a, Color_BL_BR.y, Color_BL_BR.x, 1.0f)).Packed;
        u4t Color_BL_BL_U4t = CompressLabA(MkF4t_4(LabAColorCopy.CIE_a, Color_BL_BL.y, Color_BL_BL.x, 1.0f)).Packed;
        DrawList->AddRectFilledMultiColor(BLPickerTL_Screen, BLPickerBR_Screen,
            Color_BL_TL_U4t, Color_BL_TR_U4t, Color_BL_BR_U4t, Color_BL_BL_U4t);
    }

    f4t_2 ABPicker_PipPos_Rel = VtDeLerp(Color_AB_Min, SwizzXZ(*LabAColor), Color_AB_Max);
    f4t_2 ALPicker_PipPos_Rel = VtDeLerp(Color_AL_Min, SwizzXY(*LabAColor), Color_AL_Max);
    f4t_2 BLPicker_PipPos_Rel = VtDeLerp(Color_BL_Min, SwizzZY(*LabAColor), Color_BL_Max);

    if (AllEq( ABPicker_PipPos_Rel, VtClamp01(ABPicker_PipPos_Rel) )) {
        f4t_2 ABPicker_PipPos_Screen = VtLerp(ABPickerBL_Screen, ABPicker_PipPos_Rel, ABPickerTR_Screen);
        DrawList->AddCircle(ABPicker_PipPos_Screen, 6.0f, IM_COL32_WHITE, 12);
        DrawList->AddCircle(ABPicker_PipPos_Screen, 5.5f, IM_COL32_BLACK, 12);
    }

    if (AllEq( ALPicker_PipPos_Rel, VtClamp01(ALPicker_PipPos_Rel) )) {
        f4t_2 ALPicker_PipPos_Screen = VtLerp(ALPickerBL_Screen, ALPicker_PipPos_Rel, ALPickerTR_Screen);
        DrawList->AddCircle(ALPicker_PipPos_Screen, 6.0f, IM_COL32_WHITE, 12);
        DrawList->AddCircle(ALPicker_PipPos_Screen, 5.5f, IM_COL32_BLACK, 12);
    }

    if (AllEq( BLPicker_PipPos_Rel, VtClamp01(BLPicker_PipPos_Rel) )) {
        f4t_2 BLPicker_PipPos_Screen = VtLerp(BLPickerBL_Screen, BLPicker_PipPos_Rel, BLPickerTR_Screen);
        DrawList->AddCircle(BLPicker_PipPos_Screen, 6.0f, IM_COL32_WHITE, 12);
        DrawList->AddCircle(BLPicker_PipPos_Screen, 5.5f, IM_COL32_BLACK, 12);
    }

    if (AnyNeq(*LabAColor, LabAColorCopy))
    {
        *LabAColor = VtClamp(kMinLabA, *LabAColor, kMaxLabA);
        return true;
    }

    return false;
}

// Based on ColorEdit4
// MAYBE reintroduce ImGuiItemFlags_ (they will be moved into ingui.h)
// MAYBE re-impl imgui utility funcs >_>
OH_INTERN blt LabAColorPicker(const str Label, lab_a_color* LabAColor)
{
    const f4t_4 MinColor = MkF4t_4(-80.0f,  5.0f, -80.0f, 0.0f);
    const f4t_4 MaxColor = MkF4t_4( 80.0f, 95.0f,  80.0f, 1.0f);

    lab_a_color LabAColorCopy = *LabAColor;
    f4t_2 PickerPos = ImGui::GetCursorScreenPos();
    ImGuiIO& IoRef = ImGui::GetIO();

    OH_IMGUI_SCOPE_ID(Label);
    OH_IMGUI_SCOPE_GROUP();

    // REMOVED ImGuiColorEditFlags_NoSidePreview (false), ImGuiColorEditFlags_NoSmallPreview (true), context menu
    // REMOVED Read stored options, ImGuiColorEditFlags_AlphaBar (true)
    f4t HzInnerSpacing = ImGui::GetStyle().ItemInnerSpacing.x;

    // Setup
    f4t SquareSize = ImGui::GetFrameHeight();
    f4t BarWidth = SquareSize; // Arbitrary smallish width of Hue/Alpha picking bars
    f4t ABPickerSize = Max(BarWidth, ImGui::CalcItemWidth() - BarWidth - HzInnerSpacing);

    // REMOVED convert color to and from other color space, backup color, wheel option, separate ValueChanged for indiv sub-controls
    // REMOVED ValueChanged (now just compare with value at top of func), PushItemFlag(ImGuiItemFlags_NoNav, true)

    f4t_2 ABPickerTL_Screen = PickerPos;
    f4t_2 ABPickerBR_Screen = ABPickerTL_Screen + ABPickerSize;
    f4t_2 ABPickerBL_Screen = Diagonal(ABPickerTL_Screen, ABPickerBR_Screen);
    f4t_2 ABPickerTR_Screen = Diagonal(ABPickerBR_Screen, ABPickerTL_Screen);

    f4t_2 LightBarTL_Screen = ABPickerTL_Screen + MkF4t_2(ABPickerSize + HzInnerSpacing, 0.0f);
    f4t_2 LightBarBR_Screen = LightBarTL_Screen + MkF4t_2(BarWidth, ABPickerSize);
    f4t_2 LightBarBL_Screen = Diagonal(LightBarTL_Screen, LightBarBR_Screen);
    f4t_2 LightBarTR_Screen = Diagonal(LightBarBR_Screen, LightBarTL_Screen);

    f4t_2 AlphaBarTL_Screen = LightBarTL_Screen + MkF4t_2(BarWidth + HzInnerSpacing, 0.0f);
    f4t_2 AlphaBarBR_Screen = AlphaBarTL_Screen + MkF4t_2(BarWidth, ABPickerSize);
    f4t_2 AlphaBarBL_Screen = Diagonal(AlphaBarTL_Screen, AlphaBarBR_Screen);
    f4t_2 AlphaBarTR_Screen = Diagonal(AlphaBarBR_Screen, AlphaBarTL_Screen);

    // a*b* rectangle logic
    ImGui::InvisibleButton("a*b*", ABPickerBR_Screen - ABPickerTL_Screen);
    if (ImGui::IsItemActive()) {
        f4t_2 PipPos_Rel = VtClamp01(
            VtDeLerp(ABPickerBL_Screen, IoRef.MousePos, ABPickerTR_Screen));
        f4t_2 ABValues = VtLerp(SwizzXZ(MinColor), PipPos_Rel, SwizzXZ(MaxColor));
        *LabAColor = Swizz0Y0W(LabAColorCopy) + SwizzX0Y0(ABValues);
    }

    // L* bar logic
    ImGui::SetCursorScreenPos(LightBarTL_Screen);
    ImGui::InvisibleButton("L*", LightBarBR_Screen - LightBarTL_Screen);
    if (ImGui::IsItemActive()) {
        f4t PipHeight_Rel = Clamp(0.0f, DeLerp(LightBarBL_Screen.y, IoRef.MousePos.y, LightBarTR_Screen.y), 1.0f);
        LabAColor->CIE_L = Lerp(MinColor.CIE_L, PipHeight_Rel, MaxColor.CIE_L);
    }

    // Alpha bar logic
    // NOTE we use ColorButton just so that a checkerboard can be rendered. LOL
    ImGui::SetCursorScreenPos(AlphaBarTL_Screen);
    ImGui::ColorButton("#alpha", MkF4t_4(0),
        ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoDragDrop,
        AlphaBarBR_Screen - AlphaBarTL_Screen);
    if (ImGui::IsItemActive()) {
        f4t PipHeight_Rel = Clamp(0.0f, DeLerp(AlphaBarBL_Screen.y, IoRef.MousePos.y, AlphaBarTR_Screen.y), 1.0f);
        LabAColor->a = Lerp(MinColor.a, PipHeight_Rel, MaxColor.a);
    }

    #if 0 // EXTRA PREVIEW STUFF
    {
        ImGui::SameLine(0, StyleRef.ItemInnerSpacing.x);
        ImGui::BeginGroup();

        //ImGui::PushItemFlag(ImGuiItemFlags_NoNavDefaultFocus, true);

        f4t_4 ColorCopy = *Color;

        ImGui::Text("Current");
        ImGui::ColorButton(
            "##current",
            ColorCopy,
            0, //(flags & (ImGuiColorEditFlags_HDR|ImGuiColorEditFlags_AlphaPreview|ImGuiColorEditFlags_AlphaPreviewHalf|ImGuiColorEditFlags_NoTooltip)),
            MkF4t_2(SquareSize * 3, SquareSize * 2));
        // Ref color
        //PopItemFlag();
        ImGui::EndGroup();
    }
    #endif

    // REMOVED Hue Wrap cancelling

    ImDrawList* DrawList = ImGui::GetWindowDrawList();

    // Fill a*b* rectangle using 64 sRGB tweens??
    {
        ImGuiExPushGamut(ImGamut::CieLab);

        f4t_2 Color_AB_TL = VtLerp(SwizzXZ(MinColor), MkF4t_2(0,1), SwizzXZ(MaxColor));
        f4t_2 Color_AB_TR = VtLerp(SwizzXZ(MinColor), MkF4t_2(1,1), SwizzXZ(MaxColor));
        f4t_2 Color_AB_BR = VtLerp(SwizzXZ(MinColor), MkF4t_2(1,0), SwizzXZ(MaxColor));
        f4t_2 Color_AB_BL = VtLerp(SwizzXZ(MinColor), MkF4t_2(0,0), SwizzXZ(MaxColor));
        u4t Color_AB_TL_U4t = CompressLabA(MkF4t_4(Color_AB_TL.x, LabAColorCopy.CIE_L, Color_AB_TL.y, 1.0f)).Packed;
        u4t Color_AB_TR_U4t = CompressLabA(MkF4t_4(Color_AB_TR.x, LabAColorCopy.CIE_L, Color_AB_TR.y, 1.0f)).Packed;
        u4t Color_AB_BR_U4t = CompressLabA(MkF4t_4(Color_AB_BR.x, LabAColorCopy.CIE_L, Color_AB_BR.y, 1.0f)).Packed;
        u4t Color_AB_BL_U4t = CompressLabA(MkF4t_4(Color_AB_BL.x, LabAColorCopy.CIE_L, Color_AB_BL.y, 1.0f)).Packed;
        DrawList->AddRectFilledMultiColor(ABPickerTL_Screen, ABPickerBR_Screen,
            Color_AB_TL_U4t, Color_AB_TR_U4t, Color_AB_BR_U4t, Color_AB_BL_U4t);

        u4t Color_L_Top_U4t = CompressLabA(MkF4t_4(LabAColorCopy.CIE_a, MaxColor.CIE_L, LabAColorCopy.CIE_b, 1.0f)).Packed;
        u4t Color_L_Bot_U4t = CompressLabA(MkF4t_4(LabAColorCopy.CIE_a, MinColor.CIE_L, LabAColorCopy.CIE_b, 1.0f)).Packed;
        DrawList->AddRectFilledMultiColor(LightBarTL_Screen, LightBarBR_Screen,
            Color_L_Top_U4t, Color_L_Top_U4t, Color_L_Bot_U4t, Color_L_Bot_U4t);

        ImGuiExPopGamut();

        // The alpha bar looks bad with Magic Stripes so we just convert it to RGB
        f4t_4 Color_Alpha_Top = LabAToRgba(MkF4t_4(LabAColorCopy.CIE_a, LabAColorCopy.CIE_L, LabAColorCopy.CIE_b, MaxColor.a));
        f4t_4 Color_Alpha_Bot = LabAToRgba(MkF4t_4(LabAColorCopy.CIE_a, LabAColorCopy.CIE_L, LabAColorCopy.CIE_b, MinColor.a));
        u4t Color_alpha_Top_U4t = ImGui::ColorConvertFloat4ToU32(VtClamp01(Color_Alpha_Top));
        u4t Color_alpha_Bot_U4t = ImGui::ColorConvertFloat4ToU32(VtClamp01(Color_Alpha_Bot));
        DrawList->AddRectFilledMultiColor(AlphaBarTL_Screen, AlphaBarBR_Screen,
            Color_alpha_Top_U4t, Color_alpha_Top_U4t, Color_alpha_Bot_U4t, Color_alpha_Bot_U4t);
    }

    // TODO don't draw if out of range (clipping is probably a simpler fix)
    f4t LightHandleY_Rel = Clamp(0.0f, DeLerp(MinColor.CIE_L, LabAColor->CIE_L, MaxColor.CIE_L), 1.0f);
    f4t LightHandleY_Screen = Lerp(LightBarBR_Screen.y, LightHandleY_Rel, LightBarTR_Screen.y);

    f4t_2 LightSliderTL = MkF4t_2(LightBarTL_Screen.x, LightHandleY_Screen - 0.2f*BarWidth);
    f4t_2 LightSliderBR = MkF4t_2(LightBarTR_Screen.x, LightHandleY_Screen - 0.2f*BarWidth);

    DrawList->AddRect(
        LightSliderTL, LightSliderBR,
        IM_COL32(0,0,0,255));
    DrawList->AddRect(
        LightSliderTL + MkF4t_2(1), LightSliderBR - MkF4t_2(1),
        IM_COL32(255,255,255,255));

    f4t AlphaHandleY_Rel = Clamp(0.0f, DeLerp(MinColor.a, LabAColor->a, MaxColor.a), 1.0f);
    f4t AlphaHandleY_Screen = Lerp(AlphaBarBR_Screen.y, AlphaHandleY_Rel, AlphaBarTR_Screen.y);

    f4t_2 AlphaSliderTL = MkF4t_2(AlphaBarTL_Screen.x, AlphaHandleY_Screen - 0.2f*BarWidth);
    f4t_2 AlphaSliderBR = MkF4t_2(AlphaBarTR_Screen.x, AlphaHandleY_Screen - 0.2f*BarWidth);

    DrawList->AddRect(
        AlphaSliderTL, AlphaSliderBR,
        IM_COL32(0,0,0,255));
    DrawList->AddRect(
        AlphaSliderTL + MkF4t_2(1), AlphaSliderBR - MkF4t_2(1),
        IM_COL32(255,255,255,255));

    // Render a*b* Pip
    f4t_2 ABPicker_PipPos_Rel = VtDeLerp(SwizzXZ(MinColor), SwizzXZ(*LabAColor), SwizzXZ(MaxColor));
    if (AllEq( ABPicker_PipPos_Rel, VtClamp01(ABPicker_PipPos_Rel) )) {
        f4t_2 ABPicker_PipPos_Screen = VtLerp(ABPickerBL_Screen, ABPicker_PipPos_Rel, ABPickerTR_Screen);
        DrawList->AddCircle(ABPicker_PipPos_Screen, 6.0f, IM_COL32_WHITE, 12);
        DrawList->AddCircle(ABPicker_PipPos_Screen, 5.5f, IM_COL32_BLACK, 12);
    }

    if (AnyNeq(*LabAColor, LabAColorCopy))
    {
        *LabAColor = VtClamp(kMinLabA, *LabAColor, kMaxLabA);
        return true;
    }

    return false;
}

// MAYBE reintroduce ImGuiItemFlags_ (they will be moved into ingui.h)
OH_INTERN blt LabAColorEdit(const str Label, lab_a_color* LabAColor)
{
    lab_a_color LabAColorCopy = *LabAColor;
    // REMOVED Window->SkipItems
    const f4t SquareSize = ImGui::GetFrameHeight();
    // REMOVED ImGuiColorEditFlags_NoSmallPreview (false)
    // REMOVED width from stack
    // REMOVED ImGuiColorEditFlags_NoAlpha (true)
    // REMOVED ImGuiColorEditFlags_HDR (false)
    OH_IMGUI_SCOPE_ID(Label);
    OH_IMGUI_SCOPE_GROUP();

    // REMOVED ImGuiColorEditFlags_NoInputs (false)

    // REMOVED ColorEditOptionsPopup, Stored options

    // REMOVED ImGuiColorEditFlags_RGB/RGB/HSV (RBG)
    // REMOVED Labeling
    // REMOVED blt ValueChanged = false;
    ImGuiStyle& StyleRef = ImGui::GetStyle();
    {
        OH_IMGUI_SCOPE_WIDTH(ImGui::CalcItemWidth() - SquareSize - StyleRef.ItemInnerSpacing.x);
        ImGui::DragFloat4("##hide", LabAColor->E, 1.0f, HzMin(kMinLab), HzMax(kMaxLab), "%0.3f");

        //OpenPopupOnItemClick("context");
    }
    ImGui::SameLine();

    if (ImGui::ColorButton("##ColorButton", LabAToRgba(*LabAColor), /*flags*/ImGuiColorEditFlags_AlphaPreviewHalf))
    {
        // REMOVED view "original" color
        ImGui::OpenPopup("picker");
        ImGui::SetNextWindowPos(Diagonal(ImGui::GetItemRectMin(), ImGui::GetItemRectMax()));
    }
    //OpenPopupOnItemClick("context");
    
    // REMOVED adjust ActiveID for popup
    if (ImGui::BeginPopup("picker"))
    {
        ImGui::PushItemWidth(SquareSize * 12.0f); // Uh OK??
        //ImGuiColorEditFlags Flags = ImGuiColorEditFlags_RGB | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_AlphaPreviewHalf;
        LabAColorPicker("##picker", LabAColor);
        ImGui::PopItemWidth();
        ImGui::EndPopup();
    }

    // REMOVED ImGuiColorEditFlags_NoLabel (false)

    const str LabelDisplayEnd = FindTextDisplayEnd(Label);

    if (Label != LabelDisplayEnd)
    {
        ImGui::SameLine();
        ImGui::TextUnformatted(Label, LabelDisplayEnd);
    }

    // POSTPONED Drag and Drop Target
    //if ((window->DC.LastItemStatusFlags & ImGuiItemStatusFlags_HoveredRect) && BeginDragDropTarget()) // NB: The flag test is merely an optional micro-optimization, BeginDragDropTarget() does the same test.
    //{
    //    if (const ImGuiPayload* payload = AcceptDragDropPayload(IMGUI_PAYLOAD_TYPE_COLOR_3F))
    //    {
    //        memcpy((float*)col, payload->Data, sizeof(float) * 3);
    //        ValueChanged = true;
    //    }
    //    if (const ImGuiPayload* payload = AcceptDragDropPayload(IMGUI_PAYLOAD_TYPE_COLOR_4F))
    //    {
    //        memcpy((float*)col, payload->Data, sizeof(float) * components);
    //        ValueChanged = true;
    //    }
    //    EndDragDropTarget();
    //}

    if (AnyNeq(*LabAColor, LabAColorCopy))
    {
        *LabAColor = VtClamp(kMinLabA, *LabAColor, kMaxLabA);
        return true;
    }

    return false;
}

OH_GLOBAL embed_rsrc_info g_CursorEmbeds[6] = {
    hand_W_png_Info,
    hand_E_png_Info,
    hand_D_png_Info,
    hand_U_png_Info,
    hand_S_png_Info,
    hand_N_png_Info,
};

OH_GLOBAL bgfx::TextureHandle g_CursorTexs[6] = {
    bgfx::kInvalidHandle, bgfx::kInvalidHandle, bgfx::kInvalidHandle,
    bgfx::kInvalidHandle, bgfx::kInvalidHandle, bgfx::kInvalidHandle };

struct cursor_orientation {
    f4t_3 Orientation;
    card_dir Sprite;
    // f4t SpriteRot;
};

OH_GLOBAL cursor_orientation g_CursorOrientations[24] = {
    { {  0*kPiHalf, 0*kPiHalf, 0*kPiHalf }, Dir_N /*, 0*kPiHalf*/ },
    { {  0*kPiHalf, 1*kPiHalf, 0*kPiHalf }, Dir_W /*, 0*kPiHalf*/ },
    { {  0*kPiHalf, 2*kPiHalf, 0*kPiHalf }, Dir_S /*, 0*kPiHalf*/ },
    { {  0*kPiHalf, 3*kPiHalf, 0*kPiHalf }, Dir_E /*, 0*kPiHalf*/ },

    { {  1*kPiHalf, 0*kPiHalf, 0*kPiHalf }, Dir_U /*, 0*kPiHalf*/ },
    { {  1*kPiHalf, 1*kPiHalf, 0*kPiHalf }, Dir_W /*, 3*kPiHalf*/ },
    { {  1*kPiHalf, 2*kPiHalf, 0*kPiHalf }, Dir_D /*, 2*kPiHalf*/ },
    { {  1*kPiHalf, 3*kPiHalf, 0*kPiHalf }, Dir_E /*, 1*kPiHalf*/ },

    { { -1*kPiHalf, 0*kPiHalf, 0*kPiHalf }, Dir_D /*, 0*kPiHalf*/ },
    { { -1*kPiHalf, 1*kPiHalf, 0*kPiHalf }, Dir_W /*, 1*kPiHalf*/ },
    { { -1*kPiHalf, 2*kPiHalf, 0*kPiHalf }, Dir_U /*, 2*kPiHalf*/ },
    { { -1*kPiHalf, 3*kPiHalf, 0*kPiHalf }, Dir_E /*, 3*kPiHalf*/ },

    { {  0*kPiHalf, 0*kPiHalf, 1*kPiHalf }, Dir_N /*, 1*kPiHalf*/ },
    { {  0*kPiHalf, 1*kPiHalf, 1*kPiHalf }, Dir_U /*, 1*kPiHalf*/ },
    { {  0*kPiHalf, 2*kPiHalf, 1*kPiHalf }, Dir_S /*, 3*kPiHalf*/ },
    { {  0*kPiHalf, 3*kPiHalf, 1*kPiHalf }, Dir_D /*, 1*kPiHalf*/ },

    { {  0*kPiHalf, 0*kPiHalf, 2*kPiHalf }, Dir_N /*, 2*kPiHalf*/ },
    { {  0*kPiHalf, 1*kPiHalf, 2*kPiHalf }, Dir_E /*, 2*kPiHalf*/ },
    { {  0*kPiHalf, 2*kPiHalf, 2*kPiHalf }, Dir_S /*, 2*kPiHalf*/ },
    { {  0*kPiHalf, 3*kPiHalf, 2*kPiHalf }, Dir_W /*, 2*kPiHalf*/ },

    { {  0*kPiHalf, 0*kPiHalf,-1*kPiHalf }, Dir_N /*, 3*kPiHalf*/ },
    { {  0*kPiHalf, 1*kPiHalf,-1*kPiHalf }, Dir_D /*, 3*kPiHalf*/ },
    { {  0*kPiHalf, 2*kPiHalf,-1*kPiHalf }, Dir_S /*, 1*kPiHalf*/ },
    { {  0*kPiHalf, 3*kPiHalf,-1*kPiHalf }, Dir_U /*, 3*kPiHalf*/ },
};

OH_GLOBAL card_dir CursorSpriteXAxes[6] = {
    Dir_N, //W
    Dir_S, //E
    Dir_E, //D
    Dir_W, //U
    Dir_W, //S
    Dir_E, //N
};

OH_INTERN cursor_orientation* GetClosestCursorOrientation(quat Q) {
    i4t ClosestIdx = -1;
    f4t ClosestArc = kPi;
    OH_FOR_COUNT(Idx, OH_COUNTOF(g_CursorOrientations)) {
        quat OrientationQ = EulersToQuat(g_CursorOrientations[Idx].Orientation);
        f4t Arc = QuatDiff(Q, OrientationQ);

        if (Arc < ClosestArc) {
            ClosestIdx = Idx;
            ClosestArc = Arc;
        }
    }

    OH_CHECK(ClosestIdx >= 0, "Could not find closest");

    return g_CursorOrientations + ClosestIdx;
}

// TODO Should have min filter = asino
const u4t kSpriteTextureFlags = BGFX_TEXTURE_MAG_POINT | BGFX_TEXTURE_U_CLAMP | BGFX_TEXTURE_V_CLAMP;

OH_GLOBAL bgfx::TextureHandle g_PipLightTex = { bgfx::kInvalidHandle };
OH_GLOBAL bgfx::TextureHandle g_PipDarkTex = { bgfx::kInvalidHandle };

OH_INTERN void InitCursors() {
    OH_PERSIST bimg::ImageContainer* p_CursorImages[6];

    OH_FOR_COUNT(Idx, 6) {
        p_CursorImages[Idx] = bimg::imageParse(
            entry::getAllocator(),
            (const void*)g_CursorEmbeds[Idx].Data,
            (u4t)g_CursorEmbeds[Idx].Size);
        if (p_CursorImages[Idx] != 0) {
            UpdatingTexture2dFromImage(
                g_CursorTexs + Idx,
                p_CursorImages[Idx],
                kSpriteTextureFlags,
                g_CursorEmbeds[Idx].Name);
        }
    }

    OH_PERSIST bimg::ImageContainer* p_PipLightImg = bimg::imageParse(
        entry::getAllocator(),
        (const void*)pip_light_png_Info.Data,
        (u4t)pip_light_png_Info.Size);
    UpdatingTexture2dFromImage(
        &g_PipLightTex,
        p_PipLightImg,
        BGFX_TEXTURE_NONE,
        "PipLight");

    OH_PERSIST bimg::ImageContainer* p_PipDarkImg = bimg::imageParse(
        entry::getAllocator(),
        (const void*)pip_dark_png_Info.Data,
        (u4t)pip_dark_png_Info.Size);
    UpdatingTexture2dFromImage(
        &g_PipDarkTex,
        p_PipDarkImg,
        BGFX_TEXTURE_NONE,
        "PipDark");
}

// namespace OH { namespace picker { namespace gui {
} } }