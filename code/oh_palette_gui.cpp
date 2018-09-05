// TODO replace with more lightweight sort
#include <algorithm>
namespace OH { namespace picker {

//blt NodeCanHaveChild(palette_node* N);

//OH_INTERN void InitPaletteTree(palette_tree* PalTree);

OH_INTERN void AddChild(palette_tree* PalTree, u4t NodeIdx, palette_node_type Type)
{
    palette_node* Parent = PalTree->Nodes + NodeIdx;
    palette_node* NewChild = 0;

    // Find empty slot in buffer
    OH_FOR_COUNT(Idx, OH_COUNTOF(PalTree->Nodes)) {
        palette_node* Candidate = PalTree->Nodes + Idx;
        if (Candidate->Type == NodeType_Free) {
            NewChild = Candidate;
            break;
        }
    }

    OH_CHECK(NewChild != 0, "Could not create new node");

    if (NewChild) {
        InitTf3d(&NewChild->Tf);
        NewChild->Type = Type;
        u4t Idx = (u4t)(NewChild - PalTree->Nodes);

        if (NewChild->Type == NodeType_Color) {
            bx::snprintf(NewChild->Name, sizeof(NewChild->Name), "Color %d", Idx);
        }
        else if (NewChild->Type == NodeType_Transform) {
            bx::snprintf(NewChild->Name, sizeof(NewChild->Name), "Transform %d", Idx);
            NewChild->ChildIdxs.clear();
            NewChild->Tf = {};
            NewChild->Tf.Scale = MkF4t_3(1);
        }

        Parent->ChildIdxs.push_back(Idx);
    }
}

OH_INTERN void FreeSubtree(palette_tree* PalTree, u4t NodeIdx)
{
    palette_node* Node = PalTree->Nodes + NodeIdx;

    if (NodeCanHaveChild(Node)) {
        for (u4t ChildIdx : Node->ChildIdxs) {
            FreeSubtree(PalTree, ChildIdx);
        }
    }

    Node->Type = NodeType_Free;
}

OH_INTERN u4t FindParentNodeIdx_Rcrsv(palette_tree* PalTree, u4t TargetIdx, u4t NodeIdx)
{
    palette_node* Node = PalTree->Nodes + NodeIdx;

    if (NodeCanHaveChild(Node)) {
        for (u4t ChildIdx : Node->ChildIdxs)
        {
            if (ChildIdx == TargetIdx) { return NodeIdx; }
            u4t RcrsvResult = FindParentNodeIdx_Rcrsv(PalTree, TargetIdx, ChildIdx);
            if (RcrsvResult != kInvalidIdx) { return RcrsvResult; }
        }
    }

    return kInvalidIdx;
}

namespace gui {

OH_INLINE lab_color GetComputedNodeColor(palette_tree_transient* PTTran, u4t NodeIdx) { 
    return MtxExtractDispl(PTTran->MtxCache + NodeIdx);
}

OH_INLINE void SetComputedNodeColor(palette_tree_transient* PTTran, u4t NodeIdx, lab_color Color) {
    f4t_m4* MtxPtr = PTTran->MtxCache + NodeIdx;
    MtxDispl(MtxPtr, Color);
}

OH_INTERN void RecomposeNode(
    palette_tree* PalTree, palette_tree_transient* PTTran, u4t NodeIdx, u4t NewParentIdx)
{
    palette_node* Node = PalTree->Nodes + NodeIdx;

    // [Old Tf Mtx] x [Old Parent Cached Mtx] = [Cached Mtx] = [New Tf Mtx] x [New Parent Cached Mtx]
    // [New Tf Mtx] = [Cached Mtx] x [New Parent Cached Mtx]^-1
    if (Node->Type == NodeType_Color)
    {
        f4t_3 CachedDisplace = GetComputedNodeColor(PTTran, NodeIdx);
        f4t_m4* NewParentInvMtx = PTTran->InvMtxCache + NewParentIdx;
        lab_color RecomposedDisplace = MtxMul1(CachedDisplace, NewParentInvMtx);
        Node->Tf.Displace = RecomposedDisplace;
    }
    else if (Node->Type == NodeType_Transform)
    {
        f4t_m4* CachedMtx = PTTran->MtxCache + NodeIdx;
        f4t_m4* NewParentCachedInvMtx = PTTran->InvMtxCache + NewParentIdx;
        f4t_m4* NewTfMtx = OH_STACK_PTR(f4t_m4);
        MtxMul(NewTfMtx, CachedMtx, NewParentCachedInvMtx);
        DecompMtxToTf(&Node->Tf, NewTfMtx);
    }
    else { OH_CHECK(false, "RecomposeNode got invalid node type") }
}

OH_INTERN void UpdateMtxCache_Rcrsv(palette_tree* PalTree, palette_tree_transient* PTTran, u4t NodeIdx, u4t ParentIdx)
{
    palette_node* Node = PalTree->Nodes + NodeIdx;

    switch (Node->Type) {
    case NodeType_Root: {
        MtxIdent(PTTran->MtxCache + NodeIdx);
        MtxIdent(PTTran->InvMtxCache + NodeIdx);
    } break;
    case NodeType_Transform:
    {
        f4t_m4* MtxPtr = PTTran->MtxCache + NodeIdx;
        f4t_m4* ParentMtx = PTTran->MtxCache + ParentIdx;
        f4t_m4* TfMtx = OH_STACK_PTR(f4t_m4);
        MtxFromTf3d(TfMtx, &Node->Tf);
        MtxMul(MtxPtr, TfMtx, ParentMtx);
        
        f4t_m4* InvMtxPtr = PTTran->InvMtxCache + NodeIdx;
        f4t_m4* ParentInvMtx = PTTran->InvMtxCache + ParentIdx;
        f4t_m4* InvTfMtx = OH_STACK_PTR(f4t_m4);
        InvMtxFromTf3d(InvTfMtx, &Node->Tf);
        MtxMul(InvMtxPtr, ParentInvMtx, InvTfMtx);
    } break;
    case NodeType_Color: {
        // NOTE we just pun the resolved Color into the last column of the Mtx
        f4t_m4* ParentMtx = PTTran->MtxCache + ParentIdx;
        f4t_3 Color = MtxMul1(Node->Tf.Displace, ParentMtx);
        SetComputedNodeColor(PTTran, NodeIdx, Color);
    } break;
    default: OH_CHECK(0, "Invalid node type");
    }

    if (NodeCanHaveChild(Node)) {
        for (u4t ChildIdx : Node->ChildIdxs) {
            UpdateMtxCache_Rcrsv(PalTree, PTTran, ChildIdx, NodeIdx);
        }
    }
}

//OH_INTERN void InitPaletteTreeTran(palette_tree* PalTree, palette_tree_transient* PTTran)

// SelectedNodeIdx gets set to first selected Node Idx
// Returns true if exactly one element found
OH_INTERN blt TryGetSoleSelectedNodeIdx(palette_tree_transient* PTTran, u4t* SelectedNodeIdx) {
    *SelectedNodeIdx = kInvalidIdx;
    u4t Count = 0;
    OH_FOR_COUNT(Idx, OH_COUNTOF(PTTran->NodeSelected))
    {
        if (PTTran->NodeSelected[Idx]) {
            Count++;
            if (*SelectedNodeIdx == kInvalidIdx) {
                *SelectedNodeIdx = Idx;
            }
        }
    }

    return Count == 1;
}

OH_INTERN blt OrphanSelected_Rcrsv(palette_tree* PalTree, palette_tree_transient* PTTran, u4t NodeIdx)
{
    palette_node* Node = PalTree->Nodes + NodeIdx;
    blt OrphanThisNode = PTTran->NodeSelected[NodeIdx];

    if (NodeCanHaveChild(Node)) {
        for (auto It = Node->ChildIdxs.begin(); It != Node->ChildIdxs.end(); /*noop*/) {
            blt Orphaned = OrphanSelected_Rcrsv(PalTree, PTTran, *It);
            if (Orphaned) {
                PTTran->OrphanedNodeIdxs.push_back(*It);
                It = Node->ChildIdxs.erase(It);
            }
            else { ++It; }
        }
    }

    return OrphanThisNode;
}

OH_INTERN void PaletteTree_ColorNode(palette_tree* PalTree, palette_tree_transient* PTTran, u4t NodeIdx);
OH_INTERN void PaletteTree_TfNode(palette_tree* PalTree, palette_tree_transient* PTTran, u4t NodeIdx);

OH_INTERN void PaletteTree_Recurse(palette_tree* PalTree, palette_tree_transient* PTTran, palette_node* Node)
{
    for (u4t ChildIdx : Node->ChildIdxs) {
        switch (PalTree->Nodes[ChildIdx].Type) {
        case NodeType_Color: { PaletteTree_ColorNode(PalTree, PTTran, ChildIdx); } break;
        case NodeType_Transform: { PaletteTree_TfNode(PalTree, PTTran, ChildIdx); } break;
        default: { OH_CHECK(false, "Invalid node type"); } break;
        }
    }
}

OH_INTERN void PalTree_NodeClicks(
    palette_tree* PalTree, palette_tree_transient* PTTran, u4t NodeIdx, blt FalsePositiveClickOccurred = false)
{
    // Interaction -1
    if (ImGuiIsItemDoubleMDowned()) {
        CenterSpectrumViewAroundPoint(&PTTran->Spectrum, GetComputedNodeColor(PTTran, NodeIdx));
        return;
    }

    // Interaction 0
    if (ImGui::BeginDragDropSource(/*No flags*/)) {
        OH_DEFER(ImGui::EndDragDropSource());
        // TODO remove NodeIdx from payload (it isn't used)
        assignment_payload Pkg = { PayloadIdxEnum_NodeIdx, (u4t)NodeIdx };
        ImGui::SetDragDropPayload(kDDPayload_Assignment, &Pkg, sizeof(assignment_payload), ImGuiCond_Once);
        OH_FOR_COUNT(Idx, OH_COUNTOF(PTTran->NodeSelected)) 
        {
            if (PTTran->NodeSelected[Idx]) {
                OH_IMGUI_SCOPE_ID(Idx);
                palette_node* Node = PalTree->Nodes + Idx;
                if (Node->Type == NodeType_Transform) {
                    ImGuiCustomArrowButton("##ArrowButton", MkF4t_2(ImGui::GetFontSize()), ImGuiDir_Right, false);
                }
                else if (Node->Type == NodeType_Color) {
                    lab_color LabColor = GetComputedNodeColor(PTTran, Idx);
                    rgb_color RgbColor = LabToRgb(LabColor);
                    ImGuiColorEditFlags ColorButtonFlags = ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop;
                    ImGui::ColorButton("##ColorButton", VConcat(RgbColor, 1.0f), ColorButtonFlags, MkF4t_2(ImGui::GetFontSize()));
                }
                ImGui::SameLine();
                ImGui::Text(Node->Name);
            }
        }
        return;
    }
    // Interaction EX
    if (FalsePositiveClickOccurred) { return; }
    if (!ImGui::IsMouseDragging()) {
        blt MouseDown = ImGuiIsItemMDowned(0) || ImGuiIsItemMDowned(1);
        // Interaction 1
        if (MouseDown && ImGui::GetIO().KeyCtrl) {
            PTTran->NodeSelected[NodeIdx] = !PTTran->NodeSelected[NodeIdx];
            return;
        }
        // Interaction 2
        if (MouseDown && !ImGui::GetIO().KeyCtrl && !PTTran->NodeSelected[NodeIdx]) {
            OH_MEM_CLEAR_ARRAY(PTTran->NodeSelected);
            PTTran->NodeSelected[NodeIdx] = true;
            return;
        }
    }

    // Interaction 3.1
    if (ImGui::GetIO().KeyShift && NodeCanHaveChild(PalTree->Nodes + NodeIdx) && ImGui::BeginDragDropTarget())
    {
        const ImGuiPayload* Payload = ImGui::AcceptDragDropPayload(kDDPayload_Assignment);
        if (Payload) {
            assignment_payload AP = *((assignment_payload*)Payload->Data);
            if ((AP.PayloadIdxEnum == PayloadIdxEnum_NodeIdx)) {
                // Make selected nodes become children of NodeIdx
                PTTran->Verb = PtVerb_MoveAsChild_Front;
                PTTran->VerbTargetIdx = NodeIdx;
                PTTran->NodeSelected[NodeIdx] = false;
            }
        }
        return;
    }

    // Interaction 3.2
    if (!ImGui::GetIO().KeyShift &&  ImGui::BeginDragDropTarget())
    {
        const ImGuiPayload* Payload = ImGui::AcceptDragDropPayload(
            kDDPayload_Assignment, ImGuiDragDropFlags_AcceptNoDrawDefaultRect);
        DrawCustomImGuiDragDropPreview(true);
        if (Payload) {
            assignment_payload AP = *((assignment_payload*)Payload->Data);
            if ((AP.PayloadIdxEnum == PayloadIdxEnum_NodeIdx)) {
                // Make selected nodes become children of NodeIdx
                PTTran->Verb = PtVerb_MoveAsSibling;
                PTTran->VerbTargetIdx = NodeIdx;
                PTTran->NodeSelected[NodeIdx] = false;
            }
        }
        return;
    }

    // Interaction 4
    if (ImGuiIsItemMUpped(0) && !ImGui::GetIO().KeyCtrl) {
        OH_MEM_CLEAR_ARRAY(PTTran->NodeSelected);
        PTTran->NodeSelected[NodeIdx] = true;
        return;
    }
}

OH_INTERN void PaletteTree_CheckVerbAvailability(
    palette_tree* PalTree, palette_tree_transient* PTTran,
    blt* CanGiveChild, blt* CanDelete)
{
    *CanGiveChild = true;
    *CanDelete = false;

    OH_FOR_COUNT(Idx, OH_COUNTOF(PTTran->NodeSelected))
    {
        if (PTTran->NodeSelected[Idx]) {
            *CanDelete = true;
            if (PalTree->Nodes[Idx].Type == NodeType_Color) {
                *CanGiveChild = false;
            }
        }
    }
}

OH_INTERN void PaletteTree_NodeContextMenu(
    palette_tree* PalTree, palette_tree_transient* PTTran, u4t NodeIdx, bool ReqHover)
{
    OH_UNUSED(NodeIdx);
    OH_CHECK(ReqHover, "Currently only works with ReqHover == true");

    if (ReqHover && ImGuiIsItemMUpped(1)) {
        ImGui::OpenPopup("##Context");
    }

    //if (!ReqHover && ImGui::IsMouseReleased(1)) {
    //    ImGui::OpenPopup("##Context");
    //}

    if (ImGui::BeginPopup("##Context"))
    {
        OH_DEFER(ImGui::EndPopup());
        blt CanGiveChild, CanDelete;
        PaletteTree_CheckVerbAvailability(PalTree, PTTran, &CanGiveChild, &CanDelete);

        if (CanGiveChild) {
            if (ImGui::Selectable("Add Color")) { PTTran->Verb = PtVerb_GiveColorChild; }
            if (ImGui::Selectable("Add Transform")) { PTTran->Verb = PtVerb_GiveTfChild; }
        }

        if (CanDelete) {
            if (ImGui::Selectable("Delete")) { PTTran->Verb = PtVerb_Delete; }
        }
    }
}

OH_INTERN void PaletteTree_DeselectorInteract(palette_tree* PalTree, palette_tree_transient* PTTran, u4t NodeIdx)
{
    OH_UNUSED(PalTree);

    if (!ImGui::IsMouseDragging()) {
        blt MouseDown = ImGuiIsItemMDowned(0);

        // Interaction 2
        if (MouseDown && !ImGui::GetIO().KeyCtrl && !PTTran->NodeSelected[NodeIdx]) {
            OH_MEM_CLEAR_ARRAY(PTTran->NodeSelected);
            return;
        }
    }

    // Interaction 3.2
    if (!ImGui::GetIO().KeyShift &&  ImGui::BeginDragDropTarget())
    {
        const ImGuiPayload* Payload = ImGui::AcceptDragDropPayload(
            kDDPayload_Assignment, ImGuiDragDropFlags_AcceptNoDrawDefaultRect);
        DrawCustomImGuiDragDropPreview(true);
        if (Payload) {
            assignment_payload AP = *((assignment_payload*)Payload->Data);
            if ((AP.PayloadIdxEnum == PayloadIdxEnum_NodeIdx)) {
                // Make selected nodes become children of NodeIdx
                PTTran->Verb = PtVerb_MoveAsChild;
                PTTran->VerbTargetIdx = NodeIdx;
                PTTran->NodeSelected[NodeIdx] = false;
            }
        }
        return;
    }
}

OH_INTERN void PaletteTree_ColorNode(palette_tree* PalTree, palette_tree_transient* PTTran, u4t NodeIdx)
{
    palette_node* Node = PalTree->Nodes + NodeIdx;
    OH_CHECK(Node->Type == NodeType_Color, "Expected Color Node");
    OH_IMGUI_SCOPE_ID(ConvertU4t_VoidP(NodeIdx));
    OH_IMGUI_SCOPE_GROUP();

    // TODO use TreeAdvanceToLabelPos and GetTreeNodeToLabelSpacing

    f4t_2 PrevCursorPos = ImGui::GetCursorPos();
    ImGui::TreeNodeEx(
        "##TreeNode",
        ImGuiTreeNodeFlags_Leaf
        | ImGuiTreeNodeFlags_NoTreePushOnOpen
        | (PTTran->NodeSelected[NodeIdx] ? ImGuiTreeNodeFlags_Selected : 0),
        Node->Name);
    PalTree_NodeClicks(PalTree, PTTran, NodeIdx);
    PaletteTree_NodeContextMenu(PalTree, PTTran, NodeIdx, true);
    ImGui::SetCursorPos(PrevCursorPos + ImGui::GetStyle().FramePadding.x*MkF4t_2(Dir_E));
    lab_color LabColor = GetComputedNodeColor(PTTran, NodeIdx);
    rgb_color RgbColor = LabToRgb(LabColor);
    ImGuiColorEditFlags ColorButtonFlags = ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop;
    f4t ColorBtnSize = ImGui::GetFontSize();
    ImGui::ColorButton("##ColorButton", VConcat(RgbColor, 1.0f), ColorButtonFlags, MkF4t_2(ColorBtnSize));
    
}

OH_INTERN void PaletteTree_TfNode(palette_tree* PalTree, palette_tree_transient* PTTran, u4t NodeIdx)
{
    palette_node* Node = PalTree->Nodes + NodeIdx;
    OH_CHECK(Node->Type == NodeType_Transform, "Expected Transform Node");
    OH_IMGUI_SCOPE_ID(ConvertU4t_VoidP(NodeIdx));
    OH_IMGUI_SCOPE_GROUP();

    f4t LabelStartX = ImGui::GetCursorScreenPos().x + ImGui::GetTreeNodeToLabelSpacing();
    blt Expanded = ImGui::TreeNodeEx(
        "##TreeNode",
        ImGuiTreeNodeFlags_DefaultOpen
        | ImGuiTreeNodeFlags_OpenOnArrow
        | (PTTran->NodeSelected[NodeIdx] ? ImGuiTreeNodeFlags_Selected : 0),
        Node->Name);

    blt FalsePositive = ImGui::GetMousePos().x < LabelStartX;

    PalTree_NodeClicks(PalTree, PTTran, NodeIdx, FalsePositive);
    PaletteTree_NodeContextMenu(PalTree, PTTran, NodeIdx, true);

    if (Expanded) {
        PaletteTree_Recurse(PalTree, PTTran, Node);
        {
            OH_IMGUI_SCOPE_ID(ConvertU4t_VoidP(NodeIdx));
            OH_IMGUI_SCOPE_GROUP();
            ImGui::InvisibleButton("Deselector", MkF4t_2(-0.01f, 6.0f));
            PaletteTree_DeselectorInteract(PalTree, PTTran, NodeIdx);
            PaletteTree_NodeContextMenu(PalTree, PTTran, NodeIdx, true);
        }
        ImGui::TreePop();
    }
}

// TODO make clicking elsewhere clear selection
OH_INTERN void PaletteTree(palette_tree* PalTree, palette_tree_transient* PTTran)
{
    palette_node* RootNode = PalTree->Nodes;

    blt CanGiveChild, CanDelete;
    PaletteTree_CheckVerbAvailability(PalTree, PTTran, &CanGiveChild, &CanDelete);

    if (CanGiveChild && CanDelete) {
        if (ImGui::Button("+Color")) { PTTran->Verb = PtVerb_GiveColorChild; }
        ImGui::SameLine();
        if (ImGui::Button("+TF")) { PTTran->Verb = PtVerb_GiveTfChild; }
        ImGui::SameLine();
        if (ImGui::Button("DEL")) { PTTran->Verb = PtVerb_Delete; }
    }
    else if (CanGiveChild) {
        if (ImGui::Button("+Color")) { PTTran->Verb = PtVerb_GiveColorChild; }
        ImGui::SameLine();
        if (ImGui::Button("+TF")) { PTTran->Verb = PtVerb_GiveTfChild; }
    }
    else if (CanDelete) {
        if (ImGui::Button("Delete")) { PTTran->Verb = PtVerb_Delete; }
        ImGui::SameLine();
        // This is given a dedicated button just for discoverability's sake
        if (ImGui::Button("Deselect")) { OH_MEM_CLEAR_ARRAY(PTTran->NodeSelected); }
    }

    ImGui::BeginChild("Nodes", MkF4t_2(0), true);

    // TODO Create pane
    PaletteTree_Recurse(PalTree, PTTran, RootNode);
    //f4t_2 LeftOverSpace = ImGui::GetContentRegionAvail();
    //LeftOverSpace.y = Max(LeftOverSpace.y, 32.0f);
    {
        OH_IMGUI_SCOPE_ID("Deselector 1");
        ImGui::InvisibleButton("", MkF4t_2(-0.01f, 32.0f));
        PaletteTree_DeselectorInteract(PalTree, PTTran, 0);
        PaletteTree_NodeContextMenu(PalTree, PTTran, 0, true);
    }
    {
        OH_IMGUI_SCOPE_ID("Deselector 2");
        ImGui::InvisibleButton("", MkF4t_2(-0.01f, -0.01f));
        PaletteTree_DeselectorInteract(PalTree, PTTran, 0);
        PaletteTree_NodeContextMenu(PalTree, PTTran, 0, true);
    }

    // NOTE this causes deselection when a any non-interactive window region is clicked... may be too zealous
    // See comment for Deselect button
    //if (ImGui::IsWindowHovered() && !ImGui::IsAnyItemHovered() && !ImGui::GetIO().KeyCtrl) {
    //    if (ImGui::IsMouseClicked(0)) { OH_MEM_CLEAR_ARRAY(PTTran->NodeSelected); }
    //    // TODO can't get this to work
    //    //PaletteTree_NodeContextMenu(PalTree, PTTran, 0, false);
    //}

    ImGui::EndChild();
}

// TODO naming scheme SUCKS! "Assigned" should be replaced with Assignor/Assignee, etc
OH_INTERN void PaletteAssignments(
    palette_tree* PalTree,
    u4t PaletteCount,
    palette_tree_transient* PTTran)
{
    // I handle the DragDrop... not you!
    ImGuiColorEditFlags ColorButtonFlags = ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop;

    {
        // TODO proper column layout... doing it lazy for now
        // MAYBE display original color from png??
        OH_FOR_COUNT(SlotIdx, PaletteCount)
        {
            OH_IMGUI_SCOPE_ID(SlotIdx);
            {
                OH_IMGUI_SCOPE_WIDTH(100.0f);
                char* SlotName = (char*)PalTree->SlotNames[SlotIdx];
                ImGui::InputText("##SlotName",
                    SlotName, sizeof(str_256t),
                    ImGuiInputTextFlags_AutoSelectAll);
                ImGui::SameLine();
            }

            str AssignedNodeName = "[ UNSET ]";
            rgba_color AssignedNodeRgba = MkF4t_4(1.0f, 0.0f, 1.0f, 1.0f);
            blt ClearButtonClicked = false;
            {
                OH_IMGUI_SCOPE_GROUP();
                u4t NodeIdx = PalTree->AssignedColorNodeIdxs[SlotIdx];
                if (NodeIdx != kInvalidIdx) {
                    ClearButtonClicked = ImGui::Button("X");
                    ImGui::SameLine();
                    lab_color LabColor = GetComputedNodeColor(PTTran, NodeIdx);
                    AssignedNodeRgba = VConcat(LabToRgb(LabColor), 1.0f);
                    ImGui::ColorButton("##AssignedNodeRgba", AssignedNodeRgba, ColorButtonFlags);
                    AssignedNodeName = (str)PalTree->Nodes[NodeIdx].Name;
                    if (ImGui::BeginDragDropSource(/*No flags*/)) {
                        assignment_payload Pkg = { PayloadIdxEnum_SlotIdx, (u4t)SlotIdx };
                        ImGui::SetDragDropPayload(
                            kDDPayload_Assignment,
                            &Pkg, sizeof(assignment_payload),
                            ImGuiCond_Once);
                        ImGui::ColorButton("##DraggyTooltip", AssignedNodeRgba, ColorButtonFlags);
                        ImGui::SameLine(); ImGui::Text(AssignedNodeName);
                        ImGui::EndDragDropSource();
                    }
                    ImGui::SameLine();
                }
                ImGui::Text(AssignedNodeName);
                // TODO give some kind of icon if slot is unset
            }

            if (ImGui::BeginDragDropTarget()) {
                OH_DEFER(ImGui::EndDragDropTarget());
                const ImGuiPayload* Payload = ImGui::AcceptDragDropPayload(kDDPayload_Assignment);
                if (Payload) {
                    assignment_payload AP = *((assignment_payload*)Payload->Data);
                    if (AP.PayloadIdxEnum == PayloadIdxEnum_SlotIdx) {
                        u4t This  = PalTree->AssignedColorNodeIdxs[SlotIdx];
                        u4t Other = PalTree->AssignedColorNodeIdxs[AP.Value];
                        PalTree->AssignedColorNodeIdxs[AP.Value] = This;
                        PalTree->AssignedColorNodeIdxs[SlotIdx] = Other;
                    }
                    else if (AP.PayloadIdxEnum == PayloadIdxEnum_NodeIdx) {
                        PalTree->AssignedColorNodeIdxs[SlotIdx] = AP.Value;
                    }
                }
            }

            if (ClearButtonClicked) { PalTree->AssignedColorNodeIdxs[SlotIdx] = kInvalidIdx; }
        }
    }
}

// TODO use this for Recompose??
OH_INTERN void GiveNodeNewWorldSpaceTf(
    palette_tree* PalTree, palette_tree_transient* PTTran, u4t NodeIdx, transform_3d* NewTf, blt InclRotAndScale)
{
    palette_node* Node = PalTree->Nodes + NodeIdx;
    u4t ParentNodeIdx = FindParentNodeIdx_Rcrsv(PalTree, NodeIdx, 0);
    // TODO merge with RecomposeNode
    if (Node->Type == NodeType_Color) {
        f4t_3 NewDispl = NewTf->Displace;
        f4t_m4* ParentInvMtx = PTTran->InvMtxCache + ParentNodeIdx;
        lab_color RecomposedDisplace = MtxMul1(NewDispl, ParentInvMtx);
        Node->Tf.Displace = RecomposedDisplace;
    }
    else if (Node->Type == NodeType_Transform) {
        f4t_m4* NewMtx = OH_STACK_PTR(f4t_m4);
        MtxFromTf3d(NewMtx, NewTf);
        f4t_m4* ParentInvMtx = PTTran->InvMtxCache + ParentNodeIdx;
        f4t_m4* NewTfMtx = OH_STACK_PTR(f4t_m4);
        MtxMul(NewTfMtx, NewMtx, ParentInvMtx);

        if (!InclRotAndScale) {
            f4t_3 PrevScale = Node->Tf.Scale;
            f4t_3 PrevRot = Node->Tf.Rotation;
            DecompMtxToTf(&Node->Tf, NewTfMtx);
            Node->Tf.Scale = PrevScale;
            Node->Tf.Rotation = PrevRot;
        }
        else { DecompMtxToTf(&Node->Tf, NewTfMtx); }
    }
}

// TODO refactor this for readability
OH_INTERN void NodeEditor(palette_tree* PalTree, palette_tree_transient* PTTran)
{
    u4t SoleSelectIdx = kInvalidIdx;
    blt IsSoleSelectedNode = TryGetSoleSelectedNodeIdx(PTTran, &SoleSelectIdx);
    if (IsSoleSelectedNode) {
        palette_node* Node = PalTree->Nodes + SoleSelectIdx;
        OH_IMGUI_SCOPE_ID(SoleSelectIdx);
        
        if (SoleSelectIdx != PTTran->PrevSoleSelectedNodeIdx) {
            MemCpy(PTTran->NodeNameInputBuff, Node->Name, sizeof(PTTran->NodeNameInputBuff));
        }

        blt EnterPressed = ImGui::InputText(
            "Name",
            PTTran->NodeNameInputBuff, sizeof(PTTran->NodeNameInputBuff),
            ImGuiInputTextFlags_AutoSelectAll | ImGuiInputTextFlags_EnterReturnsTrue);

        if (EnterPressed && (PTTran->NodeNameInputBuff[0] != '\0')) {
            MemCpy(Node->Name, PTTran->NodeNameInputBuff, sizeof(PTTran->NodeNameInputBuff));
        }

        ImGui::Separator();
        blt TfChanged = false;

        if (PTTran->EditDecomposition) {
            transform_3d DecompTf;
            f4t Diff = DecompMtxToTf(&DecompTf, PTTran->MtxCache + SoleSelectIdx);
            TfChanged = gui::TransformEdit("##TransformEdit", &DecompTf, Node->Type == NodeType_Transform);
            ImGui::Separator();
            ImGui::Checkbox("Edit World Space (Iffy!)", &PTTran->EditDecomposition);
            blt EditRotAndScaleDisabled = (0.01f < Abs(Diff));
            ImGui::Text("\"Skew\" = %.3f", Diff);
            if (EditRotAndScaleDisabled) { ImGui::Text("(Disable above to change Rotation/Scale)"); }
            if (TfChanged) {
                GiveNodeNewWorldSpaceTf(PalTree, PTTran, SoleSelectIdx, &DecompTf, !EditRotAndScaleDisabled);
            }
        }
        else {
            TfChanged = gui::TransformEdit("##TransformEdit", &Node->Tf, Node->Type == NodeType_Transform);
            ImGui::Separator();
            ImGui::Checkbox("Edit World Space (Iffy!)", &PTTran->EditDecomposition);
        }

        if (TfChanged) {
            CenterSpectrumViewAroundPoint(&PTTran->Spectrum, GetComputedNodeColor(PTTran, SoleSelectIdx));
        }

        rgba_color NodeColor = LabAToRgba(
                VConcat( GetComputedNodeColor(PTTran, SoleSelectIdx), 1.0f )
            );

        ImGui::ColorButton("#alpha", NodeColor,
            ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoDragDrop,
            MkF4t_2(64.0f));
    }
    else { ImGui::Text("(nothing to display)"); }
}

OH_INTERN void UpdateParentSelected_Rcrsv(
    palette_tree* PalTree, palette_tree_transient* PTTran, u4t NodeIdx, blt ParentIsSelected)
{
    palette_node* Node = PalTree->Nodes + NodeIdx;
    ParentIsSelected |= PTTran->NodeSelected[NodeIdx];
    PTTran->Spectrum.NodeParentSelected[NodeIdx] = ParentIsSelected;

    if (NodeCanHaveChild(Node)) {
        for (u4t ChildIdx : Node->ChildIdxs) {
            UpdateParentSelected_Rcrsv(PalTree, PTTran, ChildIdx, ParentIsSelected);
        }
    }
}

OH_INTERN void PaletteMap_Rcrsv(palette_tree*, palette_tree_transient*, u4t, axis);
OH_INTERN void PaletteMap_Panel(palette_tree*, palette_tree_transient*, axis);

OH_INTERN void PaletteMap(palette_tree* PalTree, palette_tree_transient* PTTran)
{
    //spectrum_state* Spectrum = &PTTran->Spectrum;

    OH_IMGUI_SCOPE_ID("PaletteMap");
    PaletteMap_Panel(PalTree, PTTran, Axis_Y);
    ImGui::SameLine();
    ImGui::BeginGroup();
    PaletteMap_Panel(PalTree, PTTran, Axis_Z);
    PaletteMap_Panel(PalTree, PTTran, Axis_X);
    ImGui::EndGroup();
}

OH_INTERN bool GoesBefore(pip_draw_inst A, pip_draw_inst B) {
    return A.Pos.z < B.Pos.z;
}

OH_INTERN void PaletteMap_Panel(palette_tree* PalTree, palette_tree_transient* PTTran, axis ViewAxis)
{
    OH_CHECK(0 <= Axis_X && ViewAxis <= Axis_Z, "!(0 <= ViewAxis < 3)");

    spectrum_state* Spectrum = &PTTran->Spectrum;
    spectrum_panel* Panel = Spectrum->Panels + ViewAxis;
    f4t_2 AspectRatio = PanelAspectRatios[ViewAxis];

    f4t_2 MapSize = AspectRatio * MkF4t_2(
        Max(ImGui::GetFrameHeight(), 0.5f*ImGui::CalcItemWidth()-ImGui::GetStyle().ItemInnerSpacing.x)
        );

    str Id;
    switch (ViewAxis) {
    case Axis_X: { Id = "Map_ZY"; } break;
    case Axis_Y: { Id = "Map_XZ"; } break;
    case Axis_Z: { Id = "Map_XY"; } break;
    }

    ImGui::BeginGroup();
    ImGui::BeginChild(Id, MapSize, true, 0);

    f4t_2 Screen01 = ImGui::GetCursorScreenPos();
    f4t_2 Screen10 = Screen01 + ImGui::GetContentRegionAvail();
    f4t_2 Screen00 = Diagonal(Screen01, Screen10);
    f4t_2 Screen11 = Diagonal(Screen10, Screen01);

    f4t_2 MinColorUV = Panel->CenterUV - AspectRatio*Panel->ExtUV;
    f4t_2 MaxColorUV = Panel->CenterUV + AspectRatio*Panel->ExtUV;

    u4t cU, cV, cW;
    switch (ViewAxis) {
    case Axis_X: { cU = 2; cV = 1; cW = 0; } break;
    case Axis_Y: { cU = 0; cV = 2; cW = 1; } break;
    case Axis_Z: { cU = 0; cV = 1; cW = 2; } break;
    }

    // Draw spectrum
    if (kMinLab.E[cW] < Panel->CenterW && Panel->CenterW < kMaxLab.E[cW])
    {
        lab_color Color00; Color00.E[cU] = kMinLab.E[cU]; Color00.E[cV] = kMinLab.E[cV]; Color00.E[cW] = Panel->CenterW;
        lab_color Color01; Color01.E[cU] = kMinLab.E[cU]; Color01.E[cV] = kMaxLab.E[cV]; Color01.E[cW] = Panel->CenterW;
        lab_color Color10; Color10.E[cU] = kMaxLab.E[cU]; Color10.E[cV] = kMinLab.E[cV]; Color10.E[cW] = Panel->CenterW;
        lab_color Color11; Color11.E[cU] = kMaxLab.E[cU]; Color11.E[cV] = kMaxLab.E[cV]; Color11.E[cW] = Panel->CenterW;

        u4t Color00_U4t = CompressLabA( VConcat(Color00, 1.0f) ).Packed;
        u4t Color01_U4t = CompressLabA( VConcat(Color01, 1.0f) ).Packed;
        u4t Color10_U4t = CompressLabA( VConcat(Color10, 1.0f) ).Packed;
        u4t Color11_U4t = CompressLabA( VConcat(Color11, 1.0f) ).Packed;

        f4t_2 Corner00_Rel = MkF4t_2(-9999.0f);
        f4t_2 Corner11_Rel = MkF4t_2( 9999.0f);

        switch (ViewAxis) {
        case Axis_X: { 
            Corner00_Rel = VtDeLerp(MinColorUV, SwizzZY(kMinLab), MaxColorUV);
            Corner11_Rel = VtDeLerp(MinColorUV, SwizzZY(kMaxLab), MaxColorUV);
        } break;
        case Axis_Y: { 
            Corner00_Rel = VtDeLerp(MinColorUV, SwizzXZ(kMinLab), MaxColorUV);
            Corner11_Rel = VtDeLerp(MinColorUV, SwizzXZ(kMaxLab), MaxColorUV);
        } break;
        case Axis_Z: { 
            Corner00_Rel = VtDeLerp(MinColorUV, SwizzXY(kMinLab), MaxColorUV);
            Corner11_Rel = VtDeLerp(MinColorUV, SwizzXY(kMaxLab), MaxColorUV);
        } break;
        }

        f4t_2 Corner01_Rel = Diagonal(Corner00_Rel, Corner11_Rel);
        f4t_2 Corner10_Rel = Diagonal(Corner11_Rel, Corner00_Rel);
        f4t_2 Corner01_Screen = VtLerp(Screen00, Corner01_Rel, Screen11);
        f4t_2 Corner10_Screen = VtLerp(Screen00, Corner10_Rel, Screen11);

        ImGuiExPushGamut(ImGamut::CieLab);
        ImGui::GetWindowDrawList()->AddRectFilledMultiColor(
            Corner01_Screen, Corner10_Screen,
            Color01_U4t, Color11_U4t, Color10_U4t, Color00_U4t);
        ImGuiExPopGamut();
    }

    PaletteMap_Rcrsv(PalTree, PTTran, 0, ViewAxis);

    {
        Spectrum->MouseState = SpectrumMouse_None;
        str DraggerIdStr = "##Dragger";
        i4t ActiveButton = 0;

        if (ImGui::GetIO().KeyShift) {
            blt PrevShift = ImGui::GetIO().KeyShift;
            ImGui::GetIO().KeyShift = false;
            ImGui::InvisibleButton(DraggerIdStr, MkF4t_2(-0.001f));
            ImGui::GetIO().KeyShift = PrevShift;
            ActiveButton = 2;
        }
        else if (ImGui::IsMouseDown(1))
        {
            ImGuiBackupLMBInput();
            ImguiClearLMBInput();
            ImGuiCombineMouseButtonInputIntoLMBInput(1);
            ImGui::InvisibleButton(DraggerIdStr, MkF4t_2(-0.001f));
            ImGuiRestoreLMBInput();
            ActiveButton = 1;
        }
        else if (ImGui::IsMouseDown(2)) {
            ImGuiBackupLMBInput();
            ImguiClearLMBInput();
            ImGuiCombineMouseButtonInputIntoLMBInput(2);
            ImGui::InvisibleButton(DraggerIdStr, MkF4t_2(-0.001f));
            ImGuiRestoreLMBInput();
            ActiveButton = 2;
        }
        else {
            blt PrevCtrl = ImGui::GetIO().KeyCtrl;
            ImGui::GetIO().KeyCtrl = false;
            ImGui::InvisibleButton(DraggerIdStr, MkF4t_2(-0.001f));
            ImGui::GetIO().KeyCtrl = PrevCtrl;
        }

        if ((ActiveButton == 2) && ImGui::IsItemActive())
        {
            f4t_2 MousePan = (ImGui::GetIO().MouseDelta / MapSize) * MkF4t_2(-1, 1);
            f4t_2 PanDispl = AspectRatio*Panel->ExtUV * MousePan * 2;
            Panel->CenterUV += PanDispl;
            Spectrum->MouseState = SpectrumMouse_Panning;
            // Spectrum->MousePos_Rel unused
        }
        else if (ActiveButton == 1)
        {
            Spectrum->MousePos_Rel = VtDeLerp(Screen00, ImGui::GetIO().MousePos, Screen11);

            if (ImGui::IsItemActive()) {
                if (ImGui::IsMouseClicked(1)) { Spectrum->MouseState = SpectrumMouse_RightClicking; }
                else { Spectrum->MouseState = SpectrumMouse_RightDragging; }
            }
        }
        else if (ActiveButton == 0)
        {
            Spectrum->MousePos_Rel = VtDeLerp(Screen00, ImGui::GetIO().MousePos, Screen11);

            if (ImGui::IsItemHovered()) { Spectrum->MouseState = SpectrumMouse_Hovering; }

            if (ImGui::IsItemActive())
            {
                if (ImGui::IsMouseClicked(0) && !ImGui::GetIO().KeyCtrl) { 
                    Spectrum->MouseState = SpectrumMouse_Clicking;
                }
                else if (ImGui::IsMouseClicked(0) && ImGui::GetIO().KeyCtrl) {
                    Spectrum->MouseState = SpectrumMouse_CtrlClicking;
                }
                else /*if (!ImGui::GetIO().KeyCtrl)*/ { Spectrum->MouseState = SpectrumMouse_Dragging; }
            }
        }

        if (ImGui::IsItemHovered() && (ImGui::GetIO().MouseWheel != 0.0f))
        {
            f4t Factor = Pow(1.1f, -ImGui::GetIO().MouseWheel) - 1.0f;
            f4t_2 ZoomCenter_Rel = VtDeLerp(Screen00, ImGui::GetIO().MousePos, Screen11);

            f4t_2 HoveredColorUV = VtLerp(MinColorUV, ZoomCenter_Rel, MaxColorUV);
            f4t_2 NewMinUV = MinColorUV + (Factor * (MinColorUV-HoveredColorUV));
            f4t_2 NewMaxUV = MaxColorUV + (Factor * (MaxColorUV-HoveredColorUV));

            Panel->CenterUV = (NewMaxUV + NewMinUV)/2;
            // NOTE this assumes that (NewMaxUV - Panel->CenterUV) has equal x and y
            Panel->ExtUV = (NewMaxUV - Panel->CenterUV).x;
        }
    }

    std::sort(Spectrum->Pips.begin(), Spectrum->Pips.end(), GoesBefore);

    u4t HoveredNodeIdx = 0;
    // TODO this is a temporary and janky way of keeping track of a drag operation...
    // having an ActiveID is better
    blt MouseHoversAnySelectedPip = false;

    if (Spectrum->MouseState == SpectrumMouse_Clicking
        || Spectrum->MouseState == SpectrumMouse_CtrlClicking
        || Spectrum->MouseState == SpectrumMouse_Hovering
        || /*TEMP*/Spectrum->MouseState == SpectrumMouse_Dragging)
    {
        f4t_2 PipExts_MostHovered_Rel = MkF4t_2(7.0f)/MapSize;
        f4t_2 PipExts_HoverSel_Rel = MkF4t_2(20.0f)/MapSize;

        for (pip_draw_inst PipDrawInst : Spectrum->Pips)
        {
            f4t_2 Pip00 = SwizzXY(PipDrawInst.Pos) - PipExts_MostHovered_Rel;
            f4t_2 Pip11 = SwizzXY(PipDrawInst.Pos) + PipExts_MostHovered_Rel;

            if (HzAnd(Pip00 < Spectrum->MousePos_Rel && Spectrum->MousePos_Rel < Pip11)) {
                HoveredNodeIdx = PipDrawInst.NodeIdx;
            }

            Pip00 = SwizzXY(PipDrawInst.Pos) - PipExts_HoverSel_Rel;
            Pip11 = SwizzXY(PipDrawInst.Pos) + PipExts_HoverSel_Rel;

            MouseHoversAnySelectedPip |= HzAnd(Pip00 < Spectrum->MousePos_Rel && Spectrum->MousePos_Rel < Pip11)
                && PTTran->NodeSelected[PipDrawInst.NodeIdx];
        }
    }

    // Share hover highlighting (huvlighting ^o^) btwn panels
    Panel->HuvlitNodeIdx = 0;
    if (Spectrum->MouseState == SpectrumMouse_Hovering) {
        Panel->HuvlitNodeIdx = HoveredNodeIdx;
    }
    u4t DrawingHuvlitNodeIdx = Spectrum->Panels[Axis_X].HuvlitNodeIdx
        | Spectrum->Panels[Axis_Y].HuvlitNodeIdx
        | Spectrum->Panels[Axis_Z].HuvlitNodeIdx;

    for (pip_draw_inst PipDrawInst : Spectrum->Pips)
    {
        f4t_2 PosXY = SwizzXY(PipDrawInst.Pos);

        blt Huvlight = DrawingHuvlitNodeIdx == PipDrawInst.NodeIdx;

        if (Spectrum->MouseState == SpectrumMouse_None) {
            OH_FOR_COUNT(Idx, 3) {
                if (Spectrum->Panels[Idx].HuvlitNodeIdx == PipDrawInst.NodeIdx) {
                    Huvlight = true;
                }
            }
        }

        if (PipDrawInst.Sprite < 0) {

            // Outline
            f4t_2 PipDims = MkF4t_2((PipDrawInst.Highlight ? 24.0f : 16.0f) + (Huvlight ? 4.0f : 0));

            f4t_2 CenterPoint = VtLerp(Screen00, PosXY, Screen11);

            lab_color LabColor = GetComputedNodeColor(PTTran, PipDrawInst.NodeIdx);
            rgba_color_32 DotColor = CompressRgba(VConcat(LabToRgb(LabColor), 1.0f));

            ImGui::GetWindowDrawList()->AddCircleFilled(CenterPoint, PipDims.x/2, DotColor.Packed);

            f4t_2 Corner00 = CenterPoint + PipDims*0.5f*MkF4t_2(-1,  1);
            f4t_2 Corner10 = CenterPoint + PipDims*0.5f*MkF4t_2( 1,  1);
            f4t_2 Corner01 = CenterPoint + PipDims*0.5f*MkF4t_2(-1, -1);
            f4t_2 Corner11 = CenterPoint + PipDims*0.5f*MkF4t_2( 1, -1);

            f4t_2 Uv00 = MkF4t_2(0,1);
            f4t_2 Uv01 = MkF4t_2(0,0);
            f4t_2 Uv10 = MkF4t_2(1,1);
            f4t_2 Uv11 = MkF4t_2(1,0);

            rgba_color Color = Huvlight ? MkF4t_4(1.0f, 1.0f, 1.0f, 1.0f) : MkF4t_4(0.9f, 0.9f, 0.9f, 1.0f);

            ImGui::GetWindowDrawList()->AddImageQuad(
                    BgfxTexToImgui(PipDrawInst.Highlight ? g_PipLightTex : g_PipDarkTex),
                    Corner00, Corner10, Corner11, Corner01,
                    Uv00, Uv10, Uv11, Uv01,
                    CompressRgba(Color).Packed);

            //ImGui::GetWindowDrawList()->AddCircle
        }
        else {
            f4t_2 CursorDims = (PipDrawInst.Highlight ? MkF4t_2(128.0f) : MkF4t_2(84.0f))
                + (Huvlight ? MkF4t_2(32.0f) : MkF4t_2(0.0f));

            f4t_2 Corner00_Unrotated = CursorDims*0.5f*MkF4t_2(-1, -1);
            f4t_2 Corner10_Unrotated = CursorDims*0.5f*MkF4t_2( 1, -1);
            f4t_2 Corner01_Unrotated = CursorDims*0.5f*MkF4t_2(-1,  1);
            f4t_2 Corner11_Unrotated = CursorDims*0.5f*MkF4t_2( 1,  1);

            quat Q = EulersToQuat(MkF4t_3(0.0f, 0.0f, PipDrawInst.Roll));
            f4t_2 Corner00_Unpositioned = SwizzXY(QuatMul(VConcat(Corner00_Unrotated, 0.0f), Q));
            f4t_2 Corner10_Unpositioned = SwizzXY(QuatMul(VConcat(Corner10_Unrotated, 0.0f), Q));
            f4t_2 Corner01_Unpositioned = SwizzXY(QuatMul(VConcat(Corner01_Unrotated, 0.0f), Q));
            f4t_2 Corner11_Unpositioned = SwizzXY(QuatMul(VConcat(Corner11_Unrotated, 0.0f), Q));

            f4t_2 CenterPoint = VtLerp(Screen00, PosXY, Screen11);
            f4t_2 Corner00 = CenterPoint + MkF4t_2(1.0f, -1.0f)*Corner00_Unpositioned;
            f4t_2 Corner10 = CenterPoint + MkF4t_2(1.0f, -1.0f)*Corner10_Unpositioned;
            f4t_2 Corner01 = CenterPoint + MkF4t_2(1.0f, -1.0f)*Corner01_Unpositioned;
            f4t_2 Corner11 = CenterPoint + MkF4t_2(1.0f, -1.0f)*Corner11_Unpositioned;

            f4t_2 Uv00 = MkF4t_2(0,1);
            f4t_2 Uv01 = MkF4t_2(0,0);
            f4t_2 Uv10 = MkF4t_2(1,1);
            f4t_2 Uv11 = MkF4t_2(1,0);

            rgba_color Color = PipDrawInst.Highlight 
                ? (Huvlight ? MkF4t_4(1.0f, 1.0f, 1.0f, 1.0f) : MkF4t_4(0.9f, 0.9f, 0.9f, 1.0f))
                : (Huvlight ? MkF4t_4(0.8f, 0.8f, 0.8f, 1.0f) : MkF4t_4(0.6f, 0.6f, 0.6f, 1.0f));

            ImGui::GetWindowDrawList()->AddImageQuad(
                BgfxTexToImgui(g_CursorTexs[PipDrawInst.Sprite]),
                Corner00, Corner10, Corner11, Corner01,
                Uv00, Uv10, Uv11, Uv01,
                CompressRgba(Color).Packed);
        }
    }

    Spectrum->Pips.clear();
    f4t_3 RepositionDelta = MkF4t_3(0);
    ImGui::EndChild();

    {
        // This is to prevent weird behavior in the event of any clutch-like mouse button pressing
        if (Spectrum->MouseState != SpectrumMouse_RightDragging) { 
            Panel->RotationInitialAngle = -9999.0f;
        }

        u4t SoleSelectIdx = kInvalidIdx;
        blt IsSoleSelectedNode = TryGetSoleSelectedNodeIdx(PTTran, &SoleSelectIdx);

        blt DoneHandlingClicks = false;

        if (!DoneHandlingClicks && HoveredNodeIdx)
        {
            // TODO fix dragging and remove !IsSoleSelectedNode clause
            if (Spectrum->MouseState == SpectrumMouse_Clicking
                && (IsSoleSelectedNode || SoleSelectIdx == kInvalidIdx)) {
                OH_MEM_CLEAR_ARRAY(PTTran->NodeSelected);
                PTTran->NodeSelected[HoveredNodeIdx] = true;
                DoneHandlingClicks = true;
            }
            else if (Spectrum->MouseState == SpectrumMouse_CtrlClicking) {
                PTTran->NodeSelected[HoveredNodeIdx] = !PTTran->NodeSelected[HoveredNodeIdx];
                DoneHandlingClicks = true;
            }
        }
        
        if (!DoneHandlingClicks 
            && Spectrum->MouseState == SpectrumMouse_Dragging
            && MouseHoversAnySelectedPip
            && IsSoleSelectedNode)
        {
            f4t_3 NodePos = GetComputedNodeColor(PTTran, SoleSelectIdx);
            f4t_2 ClickUV = VtLerp(MinColorUV, Spectrum->MousePos_Rel, MaxColorUV);
            f4t_3 ClickPos;
            switch (ViewAxis) {
            case Axis_X: { 
                ClickPos = Swizz0YX(ClickUV);
                ClickPos.x = NodePos.x;
            } break;
            case Axis_Y: { 
                ClickPos = SwizzX0Y(ClickUV);
                ClickPos.y = NodePos.y;
            } break;
            case Axis_Z: {
                ClickPos = SwizzXY0(ClickUV);
                ClickPos.z = NodePos.z;
            } break;
            }

            Spectrum->Panels[Axis_X].CenterW = NodePos.x;
            Spectrum->Panels[Axis_Y].CenterW = NodePos.y;
            Spectrum->Panels[Axis_Z].CenterW = NodePos.z;

            RepositionDelta = ClickPos - NodePos;
            DoneHandlingClicks = true;
        }

        if (!DoneHandlingClicks 
            && Spectrum->MouseState == SpectrumMouse_Dragging
            && MouseHoversAnySelectedPip)
        {
            // More than one node selected -> we use MouseDelta
            f4t_2 MousePan = (ImGui::GetIO().MouseDelta / MapSize) * MkF4t_2(1, -1);
            f4t_2 PanDisplUV = AspectRatio*Panel->ExtUV * MousePan * 2;

            // Use PanDisplUV to set RepositionDelta and move ExtW of other views
            switch (ViewAxis) {
            case Axis_X: { 
                RepositionDelta = Swizz0YX(PanDisplUV);
                Spectrum->Panels[Axis_Y].CenterW += RepositionDelta.y;
                Spectrum->Panels[Axis_Z].CenterW += RepositionDelta.z;
            } break;
            case Axis_Y: { 
                RepositionDelta = SwizzX0Y(PanDisplUV);
                Spectrum->Panels[Axis_X].CenterW += RepositionDelta.x;
                Spectrum->Panels[Axis_Z].CenterW += RepositionDelta.z;
            } break;
            case Axis_Z: {
                RepositionDelta = SwizzXY0(PanDisplUV);
                Spectrum->Panels[Axis_X].CenterW += RepositionDelta.x;
                Spectrum->Panels[Axis_Y].CenterW += RepositionDelta.y;
            } break;
            }
            DoneHandlingClicks = true;
        }

        if (!DoneHandlingClicks 
            && Spectrum->MouseState == SpectrumMouse_Clicking
            && !MouseHoversAnySelectedPip
            && !HoveredNodeIdx)
        {
            OH_MEM_CLEAR_ARRAY(PTTran->NodeSelected);
            DoneHandlingClicks = true;
        }

        if (!DoneHandlingClicks
            && Spectrum->MouseState == SpectrumMouse_RightClicking
            && IsSoleSelectedNode
            && ((PalTree->Nodes + SoleSelectIdx)->Type == NodeType_Transform)
            )
        {
            f4t_m4* TfMtx = PTTran->MtxCache + SoleSelectIdx;
            transform_3d Tf3d;
            DecompMtxToTf(&Tf3d, TfMtx); // MAYBE disable if skewed
            Panel->NodeInitialRotation = Tf3d.Rotation;
            f4t_3 NodePos = Tf3d.Displace;
            f4t_2 ClickUV = VtLerp(MinColorUV, Spectrum->MousePos_Rel, MaxColorUV);

            switch (ViewAxis) {
            case Axis_X: { 
                f4t_3 Vec = Swizz0YX(ClickUV) - NodePos;
                Panel->RotationInitialAngle = ATan2(Vec.y, Vec.z);
            } break;
            case Axis_Y: { 
                f4t_3 Vec = SwizzX0Y(ClickUV) - NodePos;
                Panel->RotationInitialAngle = ATan2(Vec.z, Vec.x);
            } break;
            case Axis_Z: {
                f4t_3 Vec = SwizzXY0(ClickUV) - NodePos;
                Panel->RotationInitialAngle = ATan2(Vec.y, Vec.x);
            } break;
            }
            DoneHandlingClicks = true;
        }

        if (!DoneHandlingClicks
            && Spectrum->MouseState == SpectrumMouse_RightDragging
            && IsSoleSelectedNode
            && (-9999.0f < Panel->RotationInitialAngle)
            && ((PalTree->Nodes + SoleSelectIdx)->Type == NodeType_Transform)
            )
        {
            f4t_m4* TfMtx = PTTran->MtxCache + SoleSelectIdx;
            transform_3d DecompTf;
            f4t Diff = DecompMtxToTf(&DecompTf, TfMtx);
            
            // Disabled for skewed TFs
            if (Abs(Diff) < 0.01f)
            {
                f4t_3 NodePos = DecompTf.Displace;
                f4t_2 ClickUV = VtLerp(MinColorUV, Spectrum->MousePos_Rel, MaxColorUV);

                f4t NewAngle;
                f4t_3 RotAxis;
                switch (ViewAxis) {
                case Axis_X: { 
                    f4t_3 Vec = Swizz0YX(ClickUV) - NodePos;
                    NewAngle = ATan2(Vec.y, Vec.z);
                    RotAxis = MkF4t_3(Dir_W);
                } break;
                case Axis_Y: { 
                    f4t_3 Vec = SwizzX0Y(ClickUV) - NodePos;
                    NewAngle = ATan2(Vec.z, Vec.x);
                    RotAxis = MkF4t_3(Dir_D);
                } break;
                case Axis_Z: {
                    f4t_3 Vec = SwizzXY0(ClickUV) - NodePos;
                    NewAngle = ATan2(Vec.y, Vec.x);
                    RotAxis = MkF4t_3(Dir_N);
                } break;
                }

                quat PrevRot = EulersToQuat(Panel->NodeInitialRotation);
                // This seems to be the opposite of what it shoudl be... ugh!
                quat AppliedRot = QuatAxisAngle(RotAxis, NewAngle - Panel->RotationInitialAngle);
                DecompTf.Rotation = QuatToEulers(QuatMul(PrevRot, AppliedRot));
                GiveNodeNewWorldSpaceTf(PalTree, PTTran, SoleSelectIdx, &DecompTf, true);
                DoneHandlingClicks = true;
            }
        }
    }

    if (!AllEq(RepositionDelta, MkF4t_3(0)))
    {
        OH_FOR_COUNT(NodeIdx, OH_COUNTOF(PTTran->NodeSelected))
        {
            if (PTTran->NodeSelected[NodeIdx])
            {
                f4t_3 NodePos = GetComputedNodeColor(PTTran, NodeIdx);
                NodePos += RepositionDelta;
                transform_3d DecompTf;
                f4t Diff = DecompMtxToTf(&DecompTf, PTTran->MtxCache + NodeIdx);
                OH_UNUSED(Diff);
                DecompTf.Displace += RepositionDelta;
                GiveNodeNewWorldSpaceTf(PalTree, PTTran, NodeIdx, &DecompTf, false);
            }
        }
    }

    {
        OH_IMGUI_SCOPE_ID(ViewAxis);
        f4t SliderWidth = MapSize.x * ((ViewAxis == Axis_Y) ?  100.0f/256.0f : 1.0f);
        ImGui::PushItemWidth(SliderWidth); OH_DEFER(ImGui::PopItemWidth());
        f4t MinW = kSpectrumPanMin.E[ViewAxis];
        f4t MaxW = kSpectrumPanMax.E[ViewAxis];
        ImGui::SliderFloat("##WExtSlider", &Panel->CenterW, MinW, MaxW);

        if (ImGui::IsItemHovered() && (ImGui::GetIO().MouseWheel != 0.0f)) {
            Panel->ExtW *= Pow(1.1f, -ImGui::GetIO().MouseWheel);
        }
        
        f4t_2 ExtBarSize = MkF4t_2(SliderWidth, ImGui::GetFrameHeight()/2) - 2*MkF4t_2(ImGui::GetStyle().FramePadding.x, 0.0f);
        f4t_2 ExtBar01_Screen = ImGui::GetCursorScreenPos() + MkF4t_2(ImGui::GetStyle().FramePadding.x, 0.0f);
        f4t_2 ExtBar10_Screen = ImGui::GetCursorScreenPos() + ExtBarSize;
        ImGui::InvisibleButton("##Unused", ExtBarSize);
        u4t ExtBarBgColor = CompressRgba(MkF4t_4(0.2f, 0.2f, 0.2f, 0.6f)).Packed;
        ImGui::GetWindowDrawList()->AddRectFilled(ExtBar01_Screen, ExtBar10_Screen, ExtBarBgColor);
        u4t ExtBarFgColor = CompressRgba(MkF4t_4(0.9f, 0.9f, 0.9f, 0.8f)).Packed;
        f4t ExtMin_Rel = Clamp01(DeLerp(MinW, Panel->CenterW - Panel->ExtW, MaxW));
        f4t ExtMax_Rel = Clamp01(DeLerp(MinW, Panel->CenterW + Panel->ExtW, MaxW));
        f4t ExtMin_Screen = Lerp(ExtBar01_Screen.x, ExtMin_Rel, ExtBar10_Screen.x);
        f4t ExtMax_Screen = Lerp(ExtBar01_Screen.x, ExtMax_Rel, ExtBar10_Screen.x);
        f4t_2 ExtPip01_Screen = MkF4t_2(ExtMin_Screen, ExtBar01_Screen.y);
        f4t_2 ExtPip10_Screen = MkF4t_2(ExtMax_Screen, ExtBar10_Screen.y);
        ImGui::GetWindowDrawList()->AddRectFilled(ExtPip01_Screen, ExtPip10_Screen, ExtBarFgColor);
    }

    ImGui::EndGroup();
}

OH_INTERN void PaletteMap_Rcrsv(palette_tree* PalTree, palette_tree_transient* PTTran, u4t NodeIdx, axis ViewAxis)
{
    spectrum_state* Spectrum = &PTTran->Spectrum;
    palette_node* Node = PalTree->Nodes + NodeIdx;
    spectrum_panel* Panel = Spectrum->Panels + ViewAxis;
    f4t_2 AspectRatio = PanelAspectRatios[ViewAxis];

    f4t_3 PanMin, PanMax;
    switch(ViewAxis) {
    case Axis_X: {
        PanMin = Swizz0YX(Panel->CenterUV - AspectRatio*Panel->ExtUV);
        PanMin.x = Panel->CenterW - Panel->ExtW;
        PanMax = Swizz0YX(Panel->CenterUV + AspectRatio*Panel->ExtUV);
        PanMax.x = Panel->CenterW + Panel->ExtW;
    } break;
    case Axis_Y: {
        PanMin = SwizzX0Y(Panel->CenterUV - AspectRatio*Panel->ExtUV);
        PanMin.y = Panel->CenterW - Panel->ExtW;
        PanMax = SwizzX0Y(Panel->CenterUV + AspectRatio*Panel->ExtUV);
        PanMax.y = Panel->CenterW + Panel->ExtW;
    } break;
    case Axis_Z: {
        PanMin = SwizzXY0(Panel->CenterUV - AspectRatio*Panel->ExtUV);
        PanMin.z = Panel->CenterW - Panel->ExtW;
        PanMax = SwizzXY0(Panel->CenterUV + AspectRatio*Panel->ExtUV);
        PanMax.z = Panel->CenterW + Panel->ExtW;
    } break;
    }

    switch (Node->Type) {
    case NodeType_Root:
    {
        for (u4t ChildIdx : Node->ChildIdxs) {
            PaletteMap_Rcrsv(PalTree, PTTran, ChildIdx, ViewAxis);
        }
    } break;
    case NodeType_Transform:
    {
        pip_draw_inst PipDrawInst = {};
        PipDrawInst.NodeIdx = NodeIdx;
        PipDrawInst.Highlight = Spectrum->NodeParentSelected[NodeIdx];
        f4t_m4* TfMtx = PTTran->MtxCache + NodeIdx;
        transform_3d Tf3d;
        DecompMtxToTf(&Tf3d, TfMtx);
        f4t_3 Pos = VtDeLerp(PanMin, Tf3d.Displace, PanMax);

        if (AllEq(Pos, VtClamp01(Pos))) {
            // TODO squashing/flipping with scale??
            quat Q = EulersToQuat(Tf3d.Rotation);

            switch(ViewAxis) {
            case Axis_X: { // L*b*
                PipDrawInst.Pos = MkF4t_3(Pos.z, Pos.y, Pos.x);
                Q = QuatMul(Q, EulersToQuat(MkF4t_3(0.0f, kPiHalf, 0.0f)));
            } break;
            case Axis_Y: { // a*b*
                PipDrawInst.Pos = MkF4t_3(Pos.x, Pos.z, Pos.y);
                Q = QuatMul(Q, EulersToQuat(MkF4t_3(-kPiHalf, 0.0f, 0.0f)));
            } break;
            case Axis_Z: { //L*a*
                PipDrawInst.Pos = MkF4t_3(Pos.x, Pos.y, -Pos.z);
                Q = QuatMul(Q, EulersToQuat(MkF4t_3(0.0f, 0.0f, 0.0f)));
            } break;
            }

            cursor_orientation* CursorOrtn = GetClosestCursorOrientation(Q);
            f4t_3 XAxis = MkF4t_3(CursorSpriteXAxes[CursorOrtn->Sprite]);
            f4t_2 AnglePointer = Norm(SwizzXY(QuatMul(XAxis, Q)));
            PipDrawInst.Roll = ATan2(AnglePointer.y, AnglePointer.x);
            PipDrawInst.Sprite = CursorOrtn->Sprite;
            Spectrum->Pips.push_back(PipDrawInst);
        }

        for (u4t ChildIdx : Node->ChildIdxs) {
            PaletteMap_Rcrsv(PalTree, PTTran, ChildIdx, ViewAxis);
        }
    } break;
    case NodeType_Color:
    {
        pip_draw_inst PipDrawInst = {};
        PipDrawInst.NodeIdx = NodeIdx;
        PipDrawInst.Highlight = Spectrum->NodeParentSelected[NodeIdx];
        PipDrawInst.Sprite = -1;
        lab_color LabColor = GetComputedNodeColor(PTTran, NodeIdx);
        f4t_3 Pos = VtDeLerp(PanMin, LabColor, PanMax);

        if (AllEq(Pos, VtClamp01(Pos))) {
            switch(ViewAxis) {
                case Axis_X: { PipDrawInst.Pos = MkF4t_3(Pos.z, Pos.y,  Pos.x); } break;
                case Axis_Y: { PipDrawInst.Pos = MkF4t_3(Pos.x, Pos.z,  Pos.y); } break;
                case Axis_Z: { PipDrawInst.Pos = MkF4t_3(Pos.x, Pos.y, -Pos.z); } break;
            }
            Spectrum->Pips.push_back(PipDrawInst);
        }
    } break;
    }
}

// namespace gui {
}
// namespace OH { namespace picker {
} }