namespace OH { namespace picker {

enum palette_node_type : u4t {
    NodeType_Free = 0,
    NodeType_Root,
    NodeType_Transform,
    //NodeType_Ghost,
    NodeType_Color,
    NodeType_COUNT,
};

struct palette_node {
    str_256t Name;
    palette_node_type Type;
    transform_3d Tf;
    //i4t BasisIdx; // Ghost only
    tinystl::vector<u4t> ChildIdxs; // Transform, Root
};

#define OH_NUM_PALETTE_NODES 4096

struct palette_tree {
    palette_node Nodes[OH_NUM_PALETTE_NODES];
    u4t AssignedColorNodeIdxs[OH_PALETTE_MAX_SIZE];
    str_256t SlotNames[OH_PALETTE_MAX_SIZE];
};

OH_INLINE blt NodeCanHaveChild(palette_node* N) {
    return N->Type == NodeType_Root
        || N->Type == NodeType_Transform;
}

OH_INTERN void InitPaletteTree(palette_tree* PalTree)
{
    OH_MEM_CLEAR_ARRAY(PalTree->Nodes);

    OH_FOR_COUNT(NodeIdx, OH_COUNTOF(PalTree->Nodes)) {
        InitTf3d(&PalTree->Nodes[NodeIdx].Tf);
    }

    palette_node* Root = PalTree->Nodes + 0;
    Root->Type = NodeType_Root;
    bx::snprintf(Root->Name, sizeof(Root->Name), "Root");

    OH_FOR_COUNT(SlotIdx, OH_PALETTE_MAX_SIZE)
    {
        PalTree->AssignedColorNodeIdxs[SlotIdx] = kInvalidIdx;
    }
}

OH_INTERN void AddChild(palette_tree* PalTree, u4t NodeIdx, palette_node_type Type);

OH_INTERN void FreeSubtree(palette_tree* PalTree, u4t NodeIdx);

OH_INTERN u4t FindParentNodeIdx_Rcrsv(palette_tree* PalTree, u4t TargetIdx, u4t NodeIdx);

// MAYBE Move gui stuff out of gui namespace
namespace gui {

// TODO reimpl all GUI actions as these verbs
enum paltree_verb {
    PtVerb_None = 0,
    PtVerb_MoveAsSibling,     // Drag drop selected nodes to be older siblings of dest node (all to same depth)
    PtVerb_MoveAsChild,       // Drag drop selected nodes to be child of dest node
    PtVerb_MoveAsChild_Front, // Drag drop selected nodes to be first children of dest node
    PtVerb_GiveColorChild,    // Give selected nodes a child of type NodeType_Color
    PtVerb_GiveTfChild,       // Give selected nodes a child of type NodeType_Transform
    PtVerb_Delete,            // Delete selected nodes
    //PtVerb_AsgmtFromNode,   // Asgmts from selected nodes
    //PtVerb_AsgmtDelete,     // Delete values from selected assignment slots
    //PtVerb_AsgmtMove,       // Move/Swap Asgmnts
};

struct pip_draw_inst {
    f4t_3 Pos;
    f4t Roll;
    i4t Sprite;
    bool Highlight;
    u4t NodeIdx;
};

enum spectrum_mouse_state {
    SpectrumMouse_None,
    SpectrumMouse_Hovering,
    SpectrumMouse_Clicking,
    SpectrumMouse_CtrlClicking,
    SpectrumMouse_Dragging,
    SpectrumMouse_Panning,
    SpectrumMouse_RightClicking,
    SpectrumMouse_RightDragging
};

struct spectrum_panel {
    f4t_2 CenterUV;
    f4t ExtUV;
    f4t CenterW;
    f4t ExtW;
    // 3 copies of these might be SSOT-violating
    u4t HuvlitNodeIdx;
    f4t RotationInitialAngle;
    f4t_3 NodeInitialRotation;
};

struct spectrum_state {
    blt NodeParentSelected[OH_NUM_PALETTE_NODES];
    spectrum_panel Panels[3];
    tinystl::vector<pip_draw_inst> Pips;
    f4t_2 MousePos_Rel;
    spectrum_mouse_state MouseState;
    f4t_2 RepositionDelta;
};

const f4t_3 kSpectrumPanMin = {-256.0f, -100.0f, -256.0f};
const f4t_3 kSpectrumPanMax = { 256.0f,  200.0f,  256.0f};
const f4t_2 PanelAspectRatios[3] = {
    { 1.0f, 100.0f/256.0f },
    { 1.0f, 1.0f },
    { 1.0f, 100.0f/256.0f },
};
const f4t kMinExt = 5.0f;

struct palette_tree_transient {
    f4t_m4 MtxCache[OH_NUM_PALETTE_NODES];
    f4t_m4 InvMtxCache[OH_NUM_PALETTE_NODES];
    blt NodeSelected[OH_NUM_PALETTE_NODES];
    blt EditDecomposition;
    u4t PrevSoleSelectedNodeIdx;
    str_256t NodeNameInputBuff;
    paltree_verb Verb;
    u4t VerbTargetIdx;
    tinystl::vector<u4t> OrphanedNodeIdxs;
    spectrum_state Spectrum;
};

const str kDDPayload_Assignment = "_AP";

enum payload_idx_enum {
    PayloadIdxEnum_NodeIdx,
    PayloadIdxEnum_SlotIdx,
};

struct assignment_payload {
    payload_idx_enum PayloadIdxEnum;
    u4t Value;
};

OH_INTERN void InitPaletteTreeTran(palette_tree* PalTree, palette_tree_transient* PTTran) {
    OH_MEM_CLEAR_ARRAY(PTTran->NodeSelected);
    // MtxCache updates to proper values at top of each frame
    OH_MEM_CLEAR_ARRAY(PTTran->MtxCache);
    OH_MEM_CLEAR_ARRAY(PTTran->InvMtxCache);
    PTTran->PrevSoleSelectedNodeIdx = kInvalidIdx;
    PTTran->OrphanedNodeIdxs = {};
    PTTran->Spectrum = {};
    PTTran->Spectrum.Pips = {};
    PTTran->Spectrum.Panels[0].CenterUV = MkF4t_2(0.0f, 50.0f);
    PTTran->Spectrum.Panels[1].CenterUV = MkF4t_2(0.0f, 0.0f);
    PTTran->Spectrum.Panels[2].CenterUV = MkF4t_2(0.0f, 50.0f);
    PTTran->Spectrum.Panels[0].ExtUV = 80.0f;
    PTTran->Spectrum.Panels[1].ExtUV = 80.0f;
    PTTran->Spectrum.Panels[2].ExtUV = 80.0f;
    PTTran->Spectrum.Panels[0].CenterW = 0.0f;
    PTTran->Spectrum.Panels[1].CenterW = 50.0f;
    PTTran->Spectrum.Panels[2].CenterW = 0.0f;
    PTTran->Spectrum.Panels[0].ExtW = 30.0f;
    PTTran->Spectrum.Panels[1].ExtW = 30.0f;
    PTTran->Spectrum.Panels[2].ExtW = 30.0f;
    OH_UNUSED(PalTree);
}

OH_INTERN void ValidateSpectrumZoomPanForPanel(spectrum_state* Spectrum, axis ViewAxis) {
    spectrum_panel* Panel = Spectrum->Panels + ViewAxis;

    f4t_2 MinColorUVLimit, MaxColorUVLimit;
    f4t MinWLimit, MaxWLimit;
    switch (ViewAxis) {
    case Axis_X: {
        MinColorUVLimit = SwizzZY(kSpectrumPanMin);
        MaxColorUVLimit = SwizzZY(kSpectrumPanMax);
        MinWLimit = kSpectrumPanMin.x;
        MaxWLimit = kSpectrumPanMax.x;
    } break;
    case Axis_Y: {
        MinColorUVLimit = SwizzXZ(kSpectrumPanMin);
        MaxColorUVLimit = SwizzXZ(kSpectrumPanMax);
        MinWLimit = kSpectrumPanMin.y;
        MaxWLimit = kSpectrumPanMax.y;
    } break;
    case Axis_Z: {
        MinColorUVLimit = SwizzXY(kSpectrumPanMin);
        MaxColorUVLimit = SwizzXY(kSpectrumPanMax);
        MinWLimit = kSpectrumPanMin.z;
        MaxWLimit = kSpectrumPanMax.z;
    } break;
    }

    // Min Ext enforcement
    Panel->ExtUV = Max(kMinExt, Panel->ExtUV);
    Panel->ExtW = Max(kMinExt, Panel->ExtW);

    // Max Ext enforcement
    f4t_2 TrueUVExts = PanelAspectRatios[ViewAxis] * Panel->ExtUV;
    f4t_2 MaxExt = (MaxColorUVLimit - MinColorUVLimit)/2;

    if (!AllLte(TrueUVExts, MaxExt))
    {
        // Assumes MaxExt.u is a valid value for ExtUV
        Panel->ExtUV = MaxExt.u;
        TrueUVExts = PanelAspectRatios[ViewAxis] * Panel->ExtUV;
    }

    f4t MaxExtW = (MaxWLimit - MinWLimit)/2;
    Panel->ExtW = Min(MaxExtW, Panel->ExtW);
    
    // CenterUV enforcement
    f4t_2 MinColorUV = Panel->CenterUV - TrueUVExts;
    f4t_2 MaxColorUV = Panel->CenterUV + TrueUVExts;

    f4t_2 MinColorUVDiff = MinColorUV - MinColorUVLimit;
    f4t_2 MaxColorUVDiff = MaxColorUV - MaxColorUVLimit;

    if      (MinColorUVDiff.u < 0.0f) { Panel->CenterUV.u -= MinColorUVDiff.u; }
    else if (MaxColorUVDiff.u > 0.0f) { Panel->CenterUV.u -= MaxColorUVDiff.u; }

    if      (MinColorUVDiff.v < 0.0f) { Panel->CenterUV.v -= MinColorUVDiff.v; }
    else if (MaxColorUVDiff.v > 0.0f) { Panel->CenterUV.v -= MaxColorUVDiff.v; }

    // CenterW enforcement
    f4t MinWDiffLimit = (Panel->CenterW - Panel->ExtW) - MinWLimit;
    f4t MaxWDiffLimit = (Panel->CenterW + Panel->ExtW) - MaxWLimit;

    if (MinWDiffLimit < 0.0f) { Panel->CenterW -= MinWDiffLimit; }
    if (MaxWDiffLimit > 0.0f) { Panel->CenterW -= MaxWDiffLimit; }
}

OH_INTERN void ValidateSpectrumZoomPan(spectrum_state* Spectrum) {
    ValidateSpectrumZoomPanForPanel(Spectrum, Axis_X);
    ValidateSpectrumZoomPanForPanel(Spectrum, Axis_Y);
    ValidateSpectrumZoomPanForPanel(Spectrum, Axis_Z);
}

// Center spectrum view on Node
// TODO replace this (constant) zoom with one based on range of child positions, scale, etc
// Also has problem when zooming on nodes near edge (displayed as not in legal range)
OH_INTERN void CenterSpectrumViewAroundPoint(spectrum_state* Spectrum, f4t_3 Pos)
{
    Spectrum->Panels[0].CenterUV = SwizzZY(Pos);
    Spectrum->Panels[1].CenterUV = SwizzXZ(Pos);
    Spectrum->Panels[2].CenterUV = SwizzXY(Pos);
    Spectrum->Panels[0].CenterW = Pos.x;
    Spectrum->Panels[1].CenterW = Pos.y;
    Spectrum->Panels[2].CenterW = Pos.z;

    OH_FOR_COUNT(PanelIdx, 3) {
        spectrum_panel* Panel = Spectrum->Panels + PanelIdx;
        Panel->ExtUV = Min(Panel->ExtUV, (kSpectrumPanMax - kSpectrumPanMin).x/4);
        Panel->ExtW  = Min(Panel->ExtW,  (kSpectrumPanMax - kSpectrumPanMin).x/4);
    }
}

// namespace gui {
}
// namespace OH { namespace picker {
} }