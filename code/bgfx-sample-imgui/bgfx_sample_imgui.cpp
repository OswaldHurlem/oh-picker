/*
 * Derived from imgui.cpp
 * Copyright 2014-2015 Daniel Collin. All rights reserved.
 * License: https://github.com/bkaradzic/bgfx#license-bsd-2-clause
 */

#include <bgfx/bgfx.h>
#include <bgfx/embedded_shader.h>
#include <bx/allocator.h>
#include <bx/math.h>
#include <bx/timer.h>
#include <dear-imgui/imgui.h>

#include "bgfx-sample-imgui/bgfx_sample_imgui.h"
#include "../bgfx_utils.h"

#define USE_ENTRY 1

#ifndef USE_ENTRY
#	if defined(SCI_NAMESPACE)
#		define USE_ENTRY 1
#	else
#		define USE_ENTRY 0
#	endif // defined(SCI_NAMESPACE)
#endif // USE_ENTRY

#if USE_ENTRY
#	include "../entry/entry.h"
#	include "../entry/input.h"
#endif // USE_ENTRY

#if defined(SCI_NAMESPACE)
#	include "scintilla.h"
#endif // defined(SCI_NAMESPACE)

#include "oh_ubershader.h"
#include "roboto_regular.ttf.h"
#include "robotomono_regular.ttf.h"
#include "icons_kenney.ttf.h"
#include "icons_font_awesome.ttf.h"

struct FontRangeMerge
{
	const void* data;
	size_t      size;
	ImWchar     ranges[3];
};

static FontRangeMerge s_fontRangeMerge[] =
{
	{ s_iconsKenneyTtf,      sizeof(s_iconsKenneyTtf),      { ICON_MIN_KI, ICON_MAX_KI, 0 } },
	{ s_iconsFontAwesomeTtf, sizeof(s_iconsFontAwesomeTtf), { ICON_MIN_FA, ICON_MAX_FA, 0 } },
};

static void* memAlloc(size_t _size, void* _userData);
static void memFree(void* _ptr, void* _userData);

struct OcornutImguiContext
{
	void render(ImDrawData* _drawData)
	{
		const ImGuiIO& io = ImGui::GetIO();
		const float width  = io.DisplaySize.x;
		const float height = io.DisplaySize.y;

		bgfx::setViewName(mViewId, "ImGui");
		bgfx::setViewMode(mViewId, bgfx::ViewMode::Sequential);

		float ortho[16];
		bx::mtxOrtho(ortho, 0.0f, width, height, 0.0f, 0.0f, 1000.0f, 0.0f, bgfx::getCaps()->homogeneousDepth);
		bgfx::setViewTransform(mViewId, NULL, ortho);
		bgfx::setViewRect(mViewId, 0, 0, uint16_t(width), uint16_t(height) );

		// Render command lists
		for (int32_t ii = 0, num = _drawData->CmdListsCount; ii < num; ++ii)
		{
			bgfx::TransientVertexBuffer tvb;
			bgfx::TransientIndexBuffer tib;

			const ImDrawList* drawList = _drawData->CmdLists[ii];
			uint32_t numVertices = (uint32_t)drawList->VtxBuffer.size();
			uint32_t numIndices  = (uint32_t)drawList->IdxBuffer.size();

			if (!checkAvailTransientBuffers(numVertices, mVertexDecl, numIndices) )
			{
				// not enough space in transient buffer just quit drawing the rest...
				break;
			}

			bgfx::allocTransientVertexBuffer(&tvb, numVertices, mVertexDecl);
			bgfx::allocTransientIndexBuffer(&tib, numIndices);

			ImDrawVert* verts = (ImDrawVert*)tvb.data;
			bx::memCopy(verts, drawList->VtxBuffer.begin(), numVertices * sizeof(ImDrawVert) );

			ImDrawIdx* indices = (ImDrawIdx*)tib.data;
			bx::memCopy(indices, drawList->IdxBuffer.begin(), numIndices * sizeof(ImDrawIdx) );

			uint32_t offset = 0;
			for (const ImDrawCmd* cmd = drawList->CmdBuffer.begin(), *cmdEnd = drawList->CmdBuffer.end(); cmd != cmdEnd; ++cmd)
			{
				if (cmd->UserCallback) { cmd->UserCallback(drawList, cmd); }
				else if (0 != cmd->ElemCount)
				{
					OH::f4t_4 u_cieLabMode_val = OH::MkF4t_4(
						g_ImguiRenderEx.CurSettings.Gamut == ImGamut::CieLab ? 1.0f : 0.0f,
						0.0f, 0.0f, 0.0f);
					bgfx::setUniform(u_cieLabMode, u_cieLabMode_val.E);

					const uint16_t xx = uint16_t(bx::max(cmd->ClipRect.x, 0.0f) );
					const uint16_t yy = uint16_t(bx::max(cmd->ClipRect.y, 0.0f) );
					bgfx::setScissor(xx, yy,
						uint16_t(bx::min(cmd->ClipRect.z, 65535.0f)-xx),
						uint16_t(bx::min(cmd->ClipRect.w, 65535.0f)-yy));
					
					bgfx::TextureHandle Tex = cmd->TextureId ? OH::ImguiTexToBgfx(cmd->TextureId) : mFontAtlas;

					bgfx::setState(BGFX_STATE_WRITE_RGB | BGFX_STATE_WRITE_A | BGFX_STATE_MSAA
						| BGFX_STATE_BLEND_FUNC(BGFX_STATE_BLEND_SRC_ALPHA, BGFX_STATE_BLEND_INV_SRC_ALPHA));
					bgfx::setTexture(0, s_tex, Tex);
					bgfx::setTexture(1, s_labToRgbLookup, OH::picker::g_LabToRgbLookup_Gpu);
					bgfx::setVertexBuffer(0, &tvb, 0, numVertices);
					bgfx::setIndexBuffer(&tib, offset, cmd->ElemCount);
					bgfx::submit(mViewId, mProgram);
				}

				offset += cmd->ElemCount;
			}
		}
	}

	void create(float _fontSize, bx::AllocatorI* _allocator)
	{
		mAllocator = _allocator;

		if (NULL == _allocator)
		{
			static bx::DefaultAllocator allocator;
			mAllocator = &allocator;
		}

		mViewId = 255;
		m_lastScroll = 0;
		m_last = bx::getHPCounter();

		ImGui::SetAllocatorFunctions(memAlloc, memFree, NULL);
		mImGuiCtx = ImGui::CreateContext();
		ImGuiIO& io = ImGui::GetIO();

		io.DisplaySize = ImVec2(1280.0f, 720.0f);
		io.DeltaTime   = 1.0f / 60.0f;
		io.IniFilename = NULL;

		setupStyle(true);

#if USE_ENTRY
		io.KeyMap[ImGuiKey_Tab]        = (int)entry::Key::Tab;
		io.KeyMap[ImGuiKey_LeftArrow]  = (int)entry::Key::Left;
		io.KeyMap[ImGuiKey_RightArrow] = (int)entry::Key::Right;
		io.KeyMap[ImGuiKey_UpArrow]    = (int)entry::Key::Up;
		io.KeyMap[ImGuiKey_DownArrow]  = (int)entry::Key::Down;
		io.KeyMap[ImGuiKey_PageUp]     = (int)entry::Key::PageUp;
		io.KeyMap[ImGuiKey_PageDown]   = (int)entry::Key::PageDown;
		io.KeyMap[ImGuiKey_Home]       = (int)entry::Key::Home;
		io.KeyMap[ImGuiKey_End]        = (int)entry::Key::End;
		io.KeyMap[ImGuiKey_Insert]     = (int)entry::Key::Insert;
		io.KeyMap[ImGuiKey_Delete]     = (int)entry::Key::Delete;
		io.KeyMap[ImGuiKey_Backspace]  = (int)entry::Key::Backspace;
		io.KeyMap[ImGuiKey_Space]      = (int)entry::Key::Space;
		io.KeyMap[ImGuiKey_Enter]      = (int)entry::Key::Return;
		io.KeyMap[ImGuiKey_Escape]     = (int)entry::Key::Esc;
		io.KeyMap[ImGuiKey_A]          = (int)entry::Key::KeyA;
		io.KeyMap[ImGuiKey_C]          = (int)entry::Key::KeyC;
		io.KeyMap[ImGuiKey_V]          = (int)entry::Key::KeyV;
		io.KeyMap[ImGuiKey_X]          = (int)entry::Key::KeyX;
		io.KeyMap[ImGuiKey_Y]          = (int)entry::Key::KeyY;
		io.KeyMap[ImGuiKey_Z]          = (int)entry::Key::KeyZ;

		io.ConfigFlags |= 0
			| ImGuiConfigFlags_NavEnableGamepad
			| ImGuiConfigFlags_NavEnableKeyboard
			;

		io.NavInputs[ImGuiNavInput_Activate]    = (int)entry::Key::GamepadA;
		io.NavInputs[ImGuiNavInput_Cancel]      = (int)entry::Key::GamepadB;
//		io.NavInputs[ImGuiNavInput_Input]       = (int)entry::Key::;
//		io.NavInputs[ImGuiNavInput_Menu]        = (int)entry::Key::;
		io.NavInputs[ImGuiNavInput_DpadLeft]    = (int)entry::Key::GamepadLeft;
		io.NavInputs[ImGuiNavInput_DpadRight]   = (int)entry::Key::GamepadRight;
		io.NavInputs[ImGuiNavInput_DpadUp]      = (int)entry::Key::GamepadUp;
		io.NavInputs[ImGuiNavInput_DpadDown]    = (int)entry::Key::GamepadDown;
//		io.NavInputs[ImGuiNavInput_LStickLeft]  = (int)entry::Key::;
//		io.NavInputs[ImGuiNavInput_LStickRight] = (int)entry::Key::;
//		io.NavInputs[ImGuiNavInput_LStickUp]    = (int)entry::Key::;
//		io.NavInputs[ImGuiNavInput_LStickDown]  = (int)entry::Key::;
//		io.NavInputs[ImGuiNavInput_FocusPrev]   = (int)entry::Key::;
//		io.NavInputs[ImGuiNavInput_FocusNext]   = (int)entry::Key::;
//		io.NavInputs[ImGuiNavInput_TweakSlow]   = (int)entry::Key::;
//		io.NavInputs[ImGuiNavInput_TweakFast]   = (int)entry::Key::;
#endif // USE_ENTRY

		mProgram = OH::bgfx_wrap::CompileEmbedProgram(
			&OH::picker::vs_imgui_uber,
			&OH::picker::fs_imgui_uber,
			true);

		u_cieLabMode = bgfx::createUniform("u_cieLabMode", bgfx::UniformType::Vec4);

		mVertexDecl
			.begin()
			.add(bgfx::Attrib::Position,  2, bgfx::AttribType::Float)
			.add(bgfx::Attrib::TexCoord0, 2, bgfx::AttribType::Float)
			.add(bgfx::Attrib::Color0,    4, bgfx::AttribType::Uint8, true)
			.end();

		s_tex = bgfx::createUniform("s_tex", bgfx::UniformType::Int1);
		s_labToRgbLookup = bgfx::createUniform("s_labToRgbLookup", bgfx::UniformType::Int1);

		uint8_t* data;
		int32_t width;
		int32_t height;
		{
			ImFontConfig config;
			config.FontDataOwnedByAtlas = false;
			config.MergeMode = false;
//			config.MergeGlyphCenterV = true;

			// Font Class code added by BGFX
			/*
			const ImWchar* ranges = io.Fonts->GetGlyphRangesCyrillic();
			m_font[ImGui::Font::Regular] = io.Fonts->AddFontFromMemoryTTF( (void*)s_robotoRegularTtf,     sizeof(s_robotoRegularTtf),     _fontSize,      &config, ranges);
			m_font[ImGui::Font::Mono   ] = io.Fonts->AddFontFromMemoryTTF( (void*)s_robotoMonoRegularTtf, sizeof(s_robotoMonoRegularTtf), _fontSize-3.0f, &config, ranges);

			config.MergeMode = true;
			config.DstFont   = m_font[ImGui::Font::Regular];
			*/

			io.Fonts->AddFontFromMemoryTTF((void*)s_robotoRegularTtf, sizeof(s_robotoRegularTtf), _fontSize, &config, io.Fonts->GetGlyphRangesCyrillic());

			for (uint32_t ii = 0; ii < BX_COUNTOF(s_fontRangeMerge); ++ii)
			{
				const FontRangeMerge& frm = s_fontRangeMerge[ii];

				io.Fonts->AddFontFromMemoryTTF( (void*)frm.data
						, (int)frm.size
						, _fontSize-3.0f
						, &config
						, frm.ranges
						);
			}
		}

		io.Fonts->GetTexDataAsRGBA32(&data, &width, &height);

		mFontAtlas = bgfx::createTexture2D(
			  (uint16_t)width
			, (uint16_t)height
			, false
			, 1
			, bgfx::TextureFormat::BGRA8
			, BGFX_TEXTURE_MAG_POINT | BGFX_TEXTURE_U_CLAMP | BGFX_TEXTURE_V_CLAMP
			, bgfx::copy(data, width*height*4)
			);

		InitImGuiExRender();
	}

	void destroy()
	{
		ImGui::DestroyContext(mImGuiCtx);

		bgfx::destroy(s_tex);
		bgfx::destroy(mFontAtlas);

		bgfx::destroy(u_cieLabMode);
		bgfx::destroy(mProgram);

		mAllocator = NULL;
	}

	void setupStyle(bool _dark)
	{
		// Doug Binks' darl color scheme
		// https://gist.github.com/dougbinks/8089b4bbaccaaf6fa204236978d165a9
		ImGuiStyle& style = ImGui::GetStyle();
		if (_dark)
		{
			ImGui::StyleColorsDark(&style);
		}
		else
		{
			ImGui::StyleColorsLight(&style);
		}

		style.FrameRounding    = 4.0f;
		style.WindowBorderSize = 0.0f;
	}

	void beginFrame(
		  int32_t _mx
		, int32_t _my
		, uint8_t _button
		, int32_t _scroll
		, int _width
		, int _height
		, char _inputChar
		, bgfx::ViewId _viewId
		)
	{
		mViewId = _viewId;

		ImGuiIO& io = ImGui::GetIO();
		if (_inputChar < 0x7f) { io.AddInputCharacter(_inputChar); }

		io.DisplaySize = ImVec2( (float)_width, (float)_height);

		const int64_t now = bx::getHPCounter();
		const int64_t frameTime = now - m_last;
		m_last = now;
		const double freq = double(bx::getHPFrequency() );
		io.DeltaTime = float(frameTime/freq);

		io.MousePos = ImVec2( (float)_mx, (float)_my);
		io.MouseDown[0] = 0 != (_button & IMGUI_MBUT_LEFT);
		io.MouseDown[1] = 0 != (_button & IMGUI_MBUT_RIGHT);
		io.MouseDown[2] = 0 != (_button & IMGUI_MBUT_MIDDLE);
		io.MouseWheel = (float)(_scroll - m_lastScroll);
		m_lastScroll = _scroll;

#if USE_ENTRY
		uint8_t modifiers = inputGetModifiersState();
		io.KeyShift = 0 != (modifiers & (entry::Modifier::LeftShift | entry::Modifier::RightShift) );
		io.KeyCtrl  = 0 != (modifiers & (entry::Modifier::LeftCtrl  | entry::Modifier::RightCtrl ) );
		io.KeyAlt   = 0 != (modifiers & (entry::Modifier::LeftAlt   | entry::Modifier::RightAlt  ) );
		for (int32_t ii = 0; ii < (int32_t)entry::Key::Count; ++ii)
		{
			io.KeysDown[ii] = inputGetKeyState(entry::Key::Enum(ii) );
		}
#endif // USE_ENTRY

		ImGui::NewFrame();
	}

	void endFrame()
	{
		ImGuiExEndFrame();
		ImGui::Render();
		render(ImGui::GetDrawData() );
	}

	bgfx::TextureHandle mFontAtlas;
	ImGuiContext*       mImGuiCtx;
	bx::AllocatorI*     mAllocator;
	bgfx::VertexDecl    mVertexDecl;
	bgfx::ProgramHandle mProgram;
	bgfx::UniformHandle s_tex;
	bgfx::UniformHandle s_labToRgbLookup;
	bgfx::UniformHandle u_cieLabMode;
	//ImFont* m_font[ImGui::Font::Count];
	int64_t m_last;
	int32_t m_lastScroll;
	bgfx::ViewId mViewId;
};

static OcornutImguiContext s_ctx;

static void* memAlloc(size_t _size, void* _userData)
{
	BX_UNUSED(_userData);
	return BX_ALLOC(s_ctx.mAllocator, _size);
}

static void memFree(void* _ptr, void* _userData)
{
	BX_UNUSED(_userData);
	BX_FREE(s_ctx.mAllocator, _ptr);
}

void imguiCreate(float _fontSize, bx::AllocatorI* _allocator)
{
	s_ctx.create(_fontSize, _allocator);
}

void imguiDestroy()
{
	s_ctx.destroy();
	DestroyImGuiExRender();
}

void imguiBeginFrame(int32_t _mx, int32_t _my, uint8_t _button, int32_t _scroll, uint16_t _width, uint16_t _height, char _inputChar, bgfx::ViewId _viewId)
{
	s_ctx.beginFrame(_mx, _my, _button, _scroll, _width, _height, _inputChar, _viewId);
}

void imguiEndFrame()
{
	s_ctx.endFrame();
}

BX_PRAGMA_DIAGNOSTIC_IGNORED_MSVC(4505); // error C4505: '' : unreferenced local function has been removed
BX_PRAGMA_DIAGNOSTIC_IGNORED_CLANG_GCC("-Wunused-function"); // warning: ‘int rect_width_compare(const void*, const void*)’ defined but not used
BX_PRAGMA_DIAGNOSTIC_PUSH();
BX_PRAGMA_DIAGNOSTIC_IGNORED_CLANG("-Wunknown-pragmas")
//BX_PRAGMA_DIAGNOSTIC_IGNORED_CLANG_GCC("-Wunused-but-set-variable"); // warning: variable ‘L1’ set but not used
BX_PRAGMA_DIAGNOSTIC_IGNORED_CLANG_GCC("-Wtype-limits"); // warning: comparison is always true due to limited range of data type
#define STBTT_malloc(_size, _userData) memAlloc(_size, _userData)
#define STBTT_free(_ptr, _userData) memFree(_ptr, _userData)
#define STB_RECT_PACK_IMPLEMENTATION
#include <stb/stb_rect_pack.h>
#define STB_TRUETYPE_IMPLEMENTATION
#include <stb/stb_truetype.h>
BX_PRAGMA_DIAGNOSTIC_POP();
