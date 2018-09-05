namespace OH { namespace picker { namespace gui {

void DrawCustomImGuiDragDropPreview(blt TopBar)
{
    ImGuiContext* Context = ImGui::GetCurrentContext();
    ImGuiPayload* Payload = &Context->DragDropPayload;
    ImRect Rect = Context->DragDropTargetRect;
    ImGuiWindow* Window = ImGui::GetCurrentWindow();

    if (Payload->Preview)
    {
        // FIXME-DRAG: Settle on a proper default visuals for drop target.
        Rect.Expand(3.5f);
        bool PushClipRect = !Window->ClipRect.Contains(Rect);
        if (PushClipRect) { Window->DrawList->PushClipRectFullScreen(); }
        if (TopBar) { Rect.Max.y = Rect.Min.y; }
        Window->DrawList->AddRect(Rect.Min, Rect.Max, ImGui::GetColorU32(ImGuiCol_DragDropTarget), 0.0f, ~0, 2.0f);
        if (PushClipRect) { Window->DrawList->PopClipRect(); }
    }
}

bool ImGuiCustomArrowButton(const char* str_id, const ImVec2& size_arg, ImGuiDir dir, bool RenderFrame) {
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    if (window->SkipItems)
        return false;

    ImGuiContext& g = *GImGui;
    const ImGuiID id = window->GetID(str_id);
    ImVec2 size = ImGui::CalcItemSize(size_arg, ImGui::GetFrameHeight(), ImGui::GetFrameHeight());
    const ImRect bb(window->DC.CursorPos, window->DC.CursorPos + size);
    ImGui::ItemSize(bb);
    if (!ImGui::ItemAdd(bb, id))
        return false;

    bool hovered, held;
    bool pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held);

    const ImU32 col = ImGui::GetColorU32(
        (hovered && held)
        ? ImGuiCol_ButtonActive
        : (hovered ? ImGuiCol_ButtonHovered : ImGuiCol_Button));
    ImGui::RenderNavHighlight(bb, id);
    if (RenderFrame) { ImGui::RenderFrame(bb.Min, bb.Max, col, true, g.Style.FrameRounding); }
    ImGui::RenderArrow(bb.Min + g.Style.FramePadding, dir);

    return pressed;
}

} } }
