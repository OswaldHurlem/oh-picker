#include "oh_embed_rsrc.h"
#include "oh_color_convert.h"
#include "oh_indexed_img.h"
#include "oh_palette.h"

// MAYBE Hot Reloading (look at GImGui)
namespace OH { namespace picker {

struct app_input {
    DebugDrawEncoder DDrawer;
    Ray CameraRay;
};

struct app_state_transient {
    gui::palette_tree_transient PTTran;
    const bimg::ImageContainer* DeIndexedImg;
    bgfx::TextureHandle DeIndexedTex;
};

struct app_state_saveable {
    palette_tree PalTree;
    u1t_indexed_img IndexedImage;
};

struct app_state {
    bx::AllocatorI* Allocator;
    blt Initialized;
    app_state_transient Tran;
    app_state_saveable Saved;
    str_1kt OpenedPngPath;
};

OH_INTERN void GiveColorNodesToMatchImage(palette_tree* PalTree, u1t_indexed_img* IndexedImage)
{
    palette_node* RootNode = PalTree->Nodes + 0;
    OH_FOR_COUNT(SlotIdx, IndexedImage->PaletteCount) {
        AddChild(PalTree, 0, NodeType_Color);
        lab_color LabColor = SwizzXYZ(RgbaToLabA(DecompressRgba(IndexedImage->Palette[SlotIdx])));
        u4t ColorNodeIdx = RootNode->ChildIdxs.back();
        PalTree->Nodes[ColorNodeIdx].Tf.Displace = LabColor;
        PalTree->AssignedColorNodeIdxs[SlotIdx] = ColorNodeIdx;
    }
}

} }

#include "oh_individual_pickers_gui.cpp"
#include "oh_palette_gui.cpp"
#include "oh_picker_saver.cpp"
#include "oh_picker_tests.cpp"

namespace OH { namespace picker {

lab_color Dawnbringer8Colors[7] = {
    {  13.6f,  30.5f,  14.5f },
    { -02.8f,  43.8f,  02.1f },
    {  38.1f,  59.9f,  34.9f },
    { -02.2f,  56.8f, -45.1f },
    { -40.1f,  68.3f,  34.7f },
    {  02.8f,  81.8f,  48.6f },
    { -07.0f,  94.9f, -07.7f },
};

// TEMP
#include "oh_sandbox.inl"

#ifndef OH_SANDBOX_CONDITIONAL
    #define OH_SANDBOX_CONDITIONAL(_Code) /*Nothing!*/
#endif

// MAYBE cut down on encapsulation, Carmack-style
OH_INTERN void InitPicker(app_state* State)
{
    // NOTE precautionary
    MemClear(State, sizeof(app_state));

    CreateLookups();
    gui::InitCursors();
    State->Allocator = entry::getAllocator();

    str_256t StartingPngPath = "../user_data/test.png";
    MemCpy(State->OpenedPngPath, StartingPngPath, OH_COUNTOF(StartingPngPath));
    QSave_File(State->OpenedPngPath, &State->Saved, false);

    gui::InitPaletteTreeTran(&State->Saved.PalTree, &State->Tran.PTTran);
    State->Tran.DeIndexedTex = { bgfx::kInvalidHandle };

    OH_SANDBOX_CONDITIONAL(Sandbox_Init(State));
    State->Initialized = 1; 
}

// TODO move "backend" stuff to arbitarary place in frame
OH_INTERN void UpdatePicker(app_state* _S, app_input* Input)
{
    OH_UNUSED(Input);

    if (!_S->Initialized) { InitPicker(_S); }

    app_state_saveable* const _F = &_S->Saved;
    app_state_transient* const _T = &_S->Tran;
    ImGuiWindowFlags WindowFlagsAll = 0;//ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse;

    str_4kt ImageWindowTitle = "Image";
    if (_S->OpenedPngPath[0] != '\0') {
        StrFmt(ImageWindowTitle, OH_COUNTOF(ImageWindowTitle), "%s###Image", _S->OpenedPngPath);
    }

    // TODO ImGui::SetNextWindowSize?
    if (ImGui::Begin(ImageWindowTitle, NULL, ImGuiWindowFlags_MenuBar | WindowFlagsAll)) {
        if (ImGui::BeginMenuBar()) {
            OH_DEFER(ImGui::EndMenuBar());
            if (ImGui::BeginMenu("File"))  
            {
                OH_DEFER(ImGui::EndMenu());

                str Filters[1] = {"*.png"};
                str_4kt SaveXXX;
                str FindA = FindCharFromEnd(_S->OpenedPngPath, sizeof(str_1kt), '/');
                str FindB = FindCharFromEnd(_S->OpenedPngPath, sizeof(str_1kt), '\\');
                str OpenedPngName = (FindA > FindB) ? FindA+1 : FindB+1;
                StrFmt(SaveXXX, OH_COUNTOF(SaveXXX), "Save %s", OpenedPngName);
                
                if (ImGui::MenuItem("Open...")) {
                    str Result = tinyfd_openFileDialog(
                        "Open..", _S->OpenedPngPath, OH_COUNTOF(Filters), Filters, "PNG", 0);
                    if (Result) {
                        MemCpy(_S->OpenedPngPath, Result, sizeof(str_1kt));
                        QSave_File(_S->OpenedPngPath, _F, false);
                        _T->DeIndexedTex = { bgfx::kInvalidHandle };
                    }
                }
                if (ImGui::MenuItem(SaveXXX)) {
                    QSave_File(_S->OpenedPngPath, _F, true);
                }

                if (ImGui::MenuItem("Save As...")) {
                    str Result = tinyfd_saveFileDialog(
                        "Save As...", _S->OpenedPngPath, OH_COUNTOF(Filters), Filters, "PNG");
                    if (Result) {
                        MemCpy(_S->OpenedPngPath, Result, sizeof(str_1kt));
                        QSave_File(_S->OpenedPngPath, _F, true);
                    }
                }
            }
        }

        if (bgfx::isValid(_T->DeIndexedTex))
        {
            f4t Zooms[13] = { 
                0.125f, 0.1875f, 0.25f, 0.375f, 0.5f, 0.75f, 
                1.0f, 
                1.5f, 2.0f, 3.0f, 4.0f, 6.0f, 8.0f };
            f4t_2 ImgDims = MkF4t_2((f4t)_F->IndexedImage.Image->m_width, (f4t)_F->IndexedImage.Image->m_height);
            f4t_2 RegionAvail = ImGui::GetContentRegionAvail();

            f4t Zoom = HzMax(RegionAvail/ImgDims);
            OH_FOR_COUNT(ZoomIdx, OH_COUNTOF(Zooms)) {
                if (AllLte(Zooms[ZoomIdx]*ImgDims, RegionAvail)) {
                    Zoom = Zooms[ZoomIdx];
                }
                else { break; }
            }

            gui::imgui_image Params;
            Params.Texture = _T->DeIndexedTex;
            Params.Size = Zoom*ImgDims;
            ImGuiImage(&Params);
        }
    } ImGui::End();

    // Updates Assignment table in case colors are added/removed from tree
    OH_FOR_COUNT(SlotIdx, OH_PALETTE_MAX_SIZE) {
        u4t NodeIdx = _F->PalTree.AssignedColorNodeIdxs[SlotIdx];
        if (NodeIdx != kInvalidIdx) {
            palette_node* Node = _F->PalTree.Nodes + NodeIdx;
            if (Node->Type != NodeType_Color) {
                _F->PalTree.AssignedColorNodeIdxs[SlotIdx] = kInvalidIdx;
            }
        }
    }

    _T->PTTran.Verb = gui::PtVerb_None;
	_T->PTTran.OrphanedNodeIdxs.clear();

    ImGui::SetNextWindowSize(MkF4t_2(850, 600), ImGuiCond_Always);
    if (ImGui::Begin("Color Tree", NULL, 0 | WindowFlagsAll))
    {
        {
            ImGui::BeginChild("Assigned", MkF4t_2(300, 0), true);
            ImGui::Text("-= Assignments =-");
            PaletteAssignments(&_F->PalTree, _F->IndexedImage.PaletteCount, &_T->PTTran);
            ImGui::EndChild();
        }
        ImGui::SameLine();
        {
            ImGui::BeginChild("Tree", MkF4t_2(200, 0), true);
            ImGui::Text("-= Tree =-");
            PaletteTree(&_F->PalTree, &_T->PTTran);
            ImGui::EndChild();
        }
        ImGui::SameLine();
        {
            ImGui::BeginChild("Selected Node", MkF4t_2(0.0f, -ImGui::GetFrameHeightWithSpacing()));
            ImGui::Text("-= Selected Node =-");
            gui::NodeEditor(&_F->PalTree, &_T->PTTran);
            ImGui::EndChild();
        }
        // TODO this operation already happens in NodeEditor
        u4t FirstSelectedNodeIdx = kInvalidIdx;
        blt IsSoleSelectedNode = TryGetSoleSelectedNodeIdx(&_T->PTTran, &FirstSelectedNodeIdx);
        _T->PTTran.PrevSoleSelectedNodeIdx = IsSoleSelectedNode
            ? FirstSelectedNodeIdx
            : kInvalidIdx;
    } ImGui::End();

    ImGui::SetNextWindowSize(MkF4t_2(1200,600), ImGuiCond_Always);
    if (ImGui::Begin("Spectrum", NULL, 0 | WindowFlagsAll)) {
        gui::PaletteMap(&_F->PalTree, &_T->PTTran);
    } ImGui::End();

    ValidateSpectrumZoomPan(&_T->PTTran.Spectrum);

    switch (_T->PTTran.Verb) {
    case gui::PtVerb_MoveAsChild:
    case gui::PtVerb_MoveAsChild_Front:
    {
        OrphanSelected_Rcrsv(&_F->PalTree, &_T->PTTran, 0);
        palette_node* TargetNode = _F->PalTree.Nodes + _T->PTTran.VerbTargetIdx;
        // TODO recompose transform
        for (u4t OrphanedNodeIdx : _T->PTTran.OrphanedNodeIdxs) {
            RecomposeNode(&_F->PalTree, &_T->PTTran, OrphanedNodeIdx, _T->PTTran.VerbTargetIdx);
        }
        auto Insertion = _T->PTTran.Verb == gui::PtVerb_MoveAsChild_Front
            ? TargetNode->ChildIdxs.begin()
            : TargetNode->ChildIdxs.end();
        TargetNode->ChildIdxs.insert(
            Insertion,
             _T->PTTran.OrphanedNodeIdxs.begin(), _T->PTTran.OrphanedNodeIdxs.end());
    } break;
    case gui::PtVerb_MoveAsSibling:
    {
        u4t ParentNodeIdx = FindParentNodeIdx_Rcrsv(&_F->PalTree, _T->PTTran.VerbTargetIdx, 0);
        OH_CHECK(ParentNodeIdx != kInvalidIdx, "Coudn't find parent node");
        OrphanSelected_Rcrsv(&_F->PalTree, &_T->PTTran, 0);
        palette_node* ParentNode = _F->PalTree.Nodes + ParentNodeIdx;
        u4t InsertionListIdx = 0;
        for (u4t ChildNodeIdx : ParentNode->ChildIdxs) {
            if (ChildNodeIdx == _T->PTTran.VerbTargetIdx) { break; }
            InsertionListIdx++;
        }
        // TODO recompose transform
        for (u4t OrphanedNodeIdx : _T->PTTran.OrphanedNodeIdxs) {
            RecomposeNode(&_F->PalTree, &_T->PTTran, OrphanedNodeIdx, ParentNodeIdx);
        }
        ParentNode->ChildIdxs.insert(
            ParentNode->ChildIdxs.begin() + InsertionListIdx,
            _T->PTTran.OrphanedNodeIdxs.begin(), _T->PTTran.OrphanedNodeIdxs.end());
    } break;
    case gui::PtVerb_Delete:
    {
        OrphanSelected_Rcrsv(&_F->PalTree, &_T->PTTran, 0);
        for (u4t OrphanedNodeIdx : _T->PTTran.OrphanedNodeIdxs) {
            FreeSubtree(&_F->PalTree, OrphanedNodeIdx);
        }
        OH_MEM_CLEAR_ARRAY(_T->PTTran.NodeSelected);
    } break;
    case gui::PtVerb_GiveColorChild:
    {
        blt MadeChild = false;
        OH_FOR_COUNT(Idx, OH_COUNTOF(_F->PalTree.Nodes)) {
            if (_T->PTTran.NodeSelected[Idx]) {
                AddChild(&_F->PalTree, Idx, NodeType_Color);
                MadeChild = true;
            }
        }
        if (!MadeChild) {
            AddChild(&_F->PalTree, 0, NodeType_Color);
            u4t NodeIdx = _F->PalTree.Nodes[0].ChildIdxs.back();
            // NOTE Just to make the program more "encouraging" 
            lab_color Color = Dawnbringer8Colors[NodeIdx % OH_COUNTOF(Dawnbringer8Colors)];
            _F->PalTree.Nodes[NodeIdx].Tf.Displace = Color; 
        }
    } break;
    case gui::PtVerb_GiveTfChild:
    {
        blt MadeChild = false;
        OH_FOR_COUNT(Idx, OH_COUNTOF(_F->PalTree.Nodes)) {
            if (_T->PTTran.NodeSelected[Idx]) {
                AddChild(&_F->PalTree, Idx, NodeType_Transform);
                MadeChild = true;
            }
        }
        if (!MadeChild) {
            AddChild(&_F->PalTree, 0, NodeType_Transform);
            u4t NodeIdx = _F->PalTree.Nodes[0].ChildIdxs.back();
            _F->PalTree.Nodes[NodeIdx].Tf.Displace.y = 50.0f;
        }
    } break;
    }

    UpdateMtxCache_Rcrsv(&_F->PalTree, &_T->PTTran, 0, kInvalidIdx);
    UpdateParentSelected_Rcrsv(&_F->PalTree, &_T->PTTran, 0, false);

    // TODO be conscious of palette size somehow
    // Applies colors to image
    OH_FOR_COUNT(SlotIdx, OH_COUNTOF(_F->IndexedImage.Palette)) {
        u4t NodeIdx = _F->PalTree.AssignedColorNodeIdxs[SlotIdx];
        if (NodeIdx == kInvalidIdx) { _F->IndexedImage.Palette[SlotIdx] = MkU1t_4(255, 0, 255, 255 /*0*/); }
        else {
            lab_color LabColor = GetComputedNodeColor(&_T->PTTran, NodeIdx);
            _F->IndexedImage.Palette[SlotIdx] = CompressRgba(VConcat(LabToRgb(LabColor), 1.0f));
        }
    }

    UpdatingRgba8FromIndexedImg(&_T->DeIndexedImg, &_F->IndexedImage);
    UpdatingTexture2dFromImage(&_T->DeIndexedTex, _T->DeIndexedImg, gui::kSpriteTextureFlags /*, name*/);

    OH_SANDBOX_CONDITIONAL(Sandbox_Update(_S, Input));
}

OH_INTERN void DestroyPicker(app_state* State)
{
    OH_UNUSED(State);
}

// namespace OH { namespace picker {
} }