/*
 * Derived from imgui.h
 * Copyright 2011-2018 Branimir Karadzic. All rights reserved.
 * License: https://github.com/bkaradzic/bgfx#license-bsd-2-clause
 */

#ifndef IMGUI_H_HEADER_GUARD
#define IMGUI_H_HEADER_GUARD

#include <bgfx/bgfx.h>
#include <dear-imgui/imgui.h>
#include <iconfontheaders/icons_kenney.h>
#include <iconfontheaders/icons_font_awesome.h>

#define IMGUI_MBUT_LEFT   0x01
#define IMGUI_MBUT_RIGHT  0x02
#define IMGUI_MBUT_MIDDLE 0x04

inline uint32_t imguiRGBA(uint8_t _r, uint8_t _g, uint8_t _b, uint8_t _a = 255)
{
	return 0
		| (uint32_t(_r) <<  0)
		| (uint32_t(_g) <<  8)
		| (uint32_t(_b) << 16)
		| (uint32_t(_a) << 24)
		;
}

namespace bx { struct AllocatorI; }

// TODO these can be member funcs (but IAGNI)
void imguiCreate(float _fontSize = 18.0f, bx::AllocatorI* _allocator = NULL);
void imguiDestroy();

void imguiBeginFrame(int32_t _mx, int32_t _my, uint8_t _button, int32_t _scroll, uint16_t _width, uint16_t _height, char _inputChar = 0, bgfx::ViewId _view = 255);
void imguiEndFrame();

namespace entry { class AppI; }
void showExampleDialog(entry::AppI* _app, const char* _errorText = NULL);

enum ImGamut {
	RGBA = 0,
	CieLab = 1,
};

struct imgui_ex_render_settings {
	ImGamut Gamut;
};

struct imgui_ex_render_cmd_assignmask
{
	OH::blt AssignsGamut;
};

struct imgui_ex_render_cmd
{
	imgui_ex_render_cmd_assignmask AssignMask;
	imgui_ex_render_settings SettingsVal;
};

typedef tinystl::vector<imgui_ex_render_settings> imgui_ex_setting_stack;
typedef tinystl::vector<imgui_ex_render_cmd> imgui_ex_cmd_list;

struct imgui_ex_render_state {
	imgui_ex_setting_stack SettingsStack;
	imgui_ex_render_settings CurSettings;
	imgui_ex_cmd_list CmdList;
};

OH_GLOBAL imgui_ex_render_state g_ImguiRenderEx;

void CB_ImguiExRenderSettings(const ImDrawList*, const ImDrawCmd* ImCmd) {
	OH::upt Idx = OH::ConvertVoidP_Upt(ImCmd->UserCallbackData);
	imgui_ex_render_cmd RenderCmd = g_ImguiRenderEx.CmdList[Idx];
	imgui_ex_render_cmd_assignmask AssignMask = RenderCmd.AssignMask;
	imgui_ex_render_settings SettingsVal = RenderCmd.SettingsVal;
	if (AssignMask.AssignsGamut) { g_ImguiRenderEx.CurSettings.Gamut = SettingsVal.Gamut; }
}

void ImGuiExPushGamut(ImGamut Gamut) {
	imgui_ex_render_cmd Cmd = {};

	Cmd.SettingsVal = g_ImguiRenderEx.SettingsStack.back();
	Cmd.SettingsVal.Gamut = Gamut;
	g_ImguiRenderEx.SettingsStack.push_back(Cmd.SettingsVal);

	Cmd.AssignMask.AssignsGamut = true;

	g_ImguiRenderEx.CmdList.push_back(Cmd);
	ImGui::GetWindowDrawList()->AddCallback(
		CB_ImguiExRenderSettings,
		OH::ConvertUpt_VoidP(g_ImguiRenderEx.CmdList.size() - 1)
		);
}

void ImGuiExPopGamut()
{
	imgui_ex_render_cmd Cmd = {};

	g_ImguiRenderEx.SettingsStack.pop_back();
	Cmd.SettingsVal = g_ImguiRenderEx.SettingsStack.back();

	Cmd.AssignMask.AssignsGamut = true;

	g_ImguiRenderEx.CmdList.push_back(Cmd);
	ImGui::GetWindowDrawList()->AddCallback(
		CB_ImguiExRenderSettings,
		OH::ConvertUpt_VoidP(g_ImguiRenderEx.CmdList.size() - 1)
		);
}

void InitImGuiExRender()
{
	g_ImguiRenderEx.CurSettings = {};
	g_ImguiRenderEx.SettingsStack.push_back(g_ImguiRenderEx.CurSettings);
}

void DestroyImGuiExRender()
{
	g_ImguiRenderEx = {};
}

void ImGuiExEndFrame()
{
	OH_CHECK(g_ImguiRenderEx.SettingsStack.size() == 1, "Something wrong with g_ImguiRenderEx.SettingsStack");
	g_ImguiRenderEx.CmdList.clear();
}

#endif // IMGUI_H_HEADER_GUARD
