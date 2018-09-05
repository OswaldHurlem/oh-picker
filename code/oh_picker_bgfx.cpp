/*
 * Derived from helloworld.cpp from BGFX
 * Copyright 2011-2018 Branimir Karadzic. All rights reserved.
 * License: https://github.com/bkaradzic/bgfx#license-bsd-2-clause
 */

#define OH_STRINGIZE_(x,__) #x
#define OH_STRINGIZE(x,__) OH_STRINGIZE_(x,__)
#define OH_MACRO_DBG(var,__) "Word \"" #var "\" expands to \"" OH_STRINGIZE(var,__) "\""

// https://msdn.microsoft.com/en-us/library/chh3fb0k.aspx -Oi
// https://msdn.microsoft.com/en-us/library/2c8f766e.aspx -W4, =Wd
// export??
// Idk what depends on these
#pragma comment(lib, "Gdi32.lib")
#pragma comment(lib, "User32.lib")
#pragma comment(lib, "Shell32.lib")
#pragma comment(lib, "SDL2.lib")
#pragma warning(push, 4)
 
#define MSVCW_PADDING_AT_END 4324
#define MSVCW_MACRO_REDEFINITION 4005
#define MSVCW_NAMELESS_STRUCT 4201
#define MSVCW_DOWNCAST_INT 4244
#define MSVCW_POSIX_DEPRECATION 4996
#define MSVCW_4B_SHIFT_CONVERTED_TO_8B 4334
#define MSVCW_DOWNCAST_SIZE 4267
#define MSVCW_UNUSED_PARAM 4100
#define MSVCW_COMPARES_SIGN_UNSIGNED 4018

#pragma message("#include bx private headers")
#include <bx/src/bx_p.h>

// NOTE although lodepng.cpp includes lodepng.h, including it here configures it to
// have certain features (encoding) that would be disabled otherwise
#pragma message("#include LodePNG header")
#define LODEPNG_NO_COMPILE_ALLOCATORS
#define LODEPNG_NO_COMPILE_CPP
#include "lodepng/lodepng.h"

#pragma message("#include bimg")
#include "bimg/decode.h"
#include "bimg/encode.h"

#pragma message("#include bgfx private headers")
#include "ib-compress/indexbufferdecompression.h"
#define BGFX_CONFIG_DEBUG 1
#pragma warning(push)
#pragma warning(disable: MSVCW_PADDING_AT_END MSVCW_MACRO_REDEFINITION)
#include <bgfx/src/bgfx_p.h>
#undef near
#undef far
#pragma warning(pop)
#include <bgfx/embedded_shader.h>
// NOTE Above defines TINYSTL_ALLOCATOR so let's import all tinystl to guard it against future includes
// (Alternative: undef TINYSTL's include guards, re-include, + debug allocs separate from BGFX)
#include <tinystl/string.h>
// #include <tinystl/string_view.h> not distributed?
#include <tinystl/unordered_map.h>
#include <tinystl/unordered_set.h>
#include <tinystl/vector.h>

#pragma message("#include tinyfiledialogs header")
#pragma warning(push)
#define TINYFD_COMPILE_AS_CPP
#define TINYFD_MAX_PATH 1024
#define TINYFD_MAX_PATH_OR_CMD 1024
#include "tinyfiledialogs.h"
#pragma warning(pop)

#pragma message("#include OH utils")
#include "oh_util.h"
#pragma warning(push)
#pragma warning(disable: MSVCW_NAMELESS_STRUCT)
#include "oh_3d_math.h"
#pragma warning(pop)
#include "oh_generated_lists.h"

#pragma message("#include imgui headers")
#pragma region imgui_config
    #define IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    #define IM_ASSERT(_EXPR, ...) BX_CHECK(_EXPR, "IM_ASSERT: " #_EXPR)
    // Avoid multiple STB libraries implementations, or redefine path/filenames to prioritize another version
    #define IMGUI_DISABLE_STB_RECT_PACK_IMPLEMENTATION
    #define IMGUI_DISABLE_STB_TRUETYPE_IMPLEMENTATION
    #define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS
    #define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS
    #define IM_VEC2_CLASS_EXTRA                              \
            ImVec2(const OH::f4t_2& V) { x = V.x; y = V.y; } \
            operator OH::f4t_2() const { return OH::MkF4t_2(x,y); }
    #define IM_VEC4_CLASS_EXTRA                                                \
            ImVec4(const OH::f4t_4& f) { x = f.x; y = f.y; z = f.z; w = f.w; } \
            operator OH::f4t_4() const { return OH::MkF4t_4(x,y,z,w); }
#pragma endregion imgui_config
#include "dear-imgui/imgui.h"

#pragma message("Code that goes in imgui_user.h")
#include "imgui-widgets/range_slider.h"

#pragma message("#include bgfx + imgui sample headers")
#undef TINYSTL_ALLOCATOR // Harmless as all of tinystl has already been included
#define ENTRY_CONFIG_IMPLEMENT_MAIN 1
#define ENTRY_DEFAULT_WIDTH 1920
#define ENTRY_DEFAULT_HEIGHT 1080
#define ENTRY_CONFIG_USE_SDL 1
#include "entry/entry_p.h"
#include "bgfx_utils.h"
#include "entry/input.h"
#include "bgfx-sample-imgui/bgfx_sample_imgui.h"
#include "common.h"

#pragma message("#include bgfx + debugdraw sample headers")
#define Mesh Mesh_Dbd
#define s_embeddedShaders s_embeddedShaders_Dbd
#include "camera.h"
#include "bgfx-sample-debugdraw/debugdraw.h"

#pragma message("#include SDL2")
#define SDL_MAIN_HANDLED
#include "SDL2/SDL.h"
// DONE WITH HEADERS

#pragma message("#include base64")
#pragma warning(push)
#pragma warning(disable: MSVCW_COMPARES_SIGN_UNSIGNED MSVCW_POSIX_DEPRECATION)
#define BASE64_IMPL
#include "base64.h"
#pragma warning(pop)

#pragma message("bgfx_picker_app")
#include "oh_bgfx_wrappers.h"
#include "oh_picker_gui.cpp"

namespace OH_BGFX {

OH_GLOBAL char* g_ClipboardTextData = NULL;

OH_INTERN const char* ImGui_ImplSdlGL2_GetClipboardText(void*)
{
    if (g_ClipboardTextData) 
        SDL_free(g_ClipboardTextData);
    g_ClipboardTextData = SDL_GetClipboardText();
    return g_ClipboardTextData;
}

OH_INTERN void ImGui_ImplSdlGL2_SetClipboardText(void*, const OH::str text)
{
    SDL_SetClipboardText(text);
}

class bgfx_picker_app : public entry::AppI
{
public:
    entry::MouseState MouseState;

    OH::u4t Width;
    OH::u4t Height;
    OH::u4t DebugFlags;
    OH::u4t ResetFlags;
    OH::i8t StartTime;
    OH::memptr PickerStateMemory = NULL;
    OH::picker::app_state* PickerState = NULL;
    OH::picker::app_input PickerInput = {};

    bgfx_picker_app(const OH::str _name, const OH::str _description)
        : entry::AppI(_name, _description)
    {
    }

    void init(int32_t ArgC, const char* const* ArgV, OH::u4t WidthIn, OH::u4t HeightIn) override
    {
        OH_UNUSED(ArgC);
        OH_UNUSED(ArgV);
        this->Width  = WidthIn;
        this->Height = HeightIn;
        this->DebugFlags  = BGFX_DEBUG_TEXT;// | BGFX_DEBUG_STATS | BGFX_DEBUG_PROFILER;
        this->ResetFlags  = 0;//BGFX_RESET_SRGB_BACKBUFFER | BGFX_RESET_VSYNC;

        // Enable debug text.
        bgfx::setDebug(this->DebugFlags);

        // Set view 0 clear state.
        bgfx::setViewClear(
            0, BGFX_CLEAR_COLOR|BGFX_CLEAR_DEPTH,
            0x303030ff, 1.0f, 0);

        this->StartTime = bx::getHPCounter();
        cameraCreate();
        const float initialPos[3] = { 0.0f, 2.0f, -12.0f };
        cameraSetPosition(initialPos);
        cameraSetVerticalAngle(0.0f);

        ddInit();

        imguiCreate(18.0f, bgfx::g_allocator);

        ImGuiIO& io = ImGui::GetIO();

        io.SetClipboardTextFn = ImGui_ImplSdlGL2_SetClipboardText;
        io.GetClipboardTextFn = ImGui_ImplSdlGL2_GetClipboardText;
        io.ClipboardUserData = NULL;

        io.IniFilename = "../user_data/imgui.ini";
        io.LogFilename = "../user_data/imgui_log.txt";

        OH::picker::test::Test3dMath();

        tinyfd_winUtf8 = 1;

        PickerStateMemory = OH::MemPtrAlloc(sizeof(OH::picker::app_state));
        PickerState = (OH::picker::app_state*)PickerStateMemory->data;
    }

    virtual int shutdown() override
    {
        OH::MemPtrFree(PickerStateMemory);
        PickerState = NULL;
        imguiDestroy();
        ddShutdown();
        cameraDestroy();

        // Destroy last known clipboard data
        if (g_ClipboardTextData)
            SDL_free(g_ClipboardTextData);

        return 0;
    }

    Ray MoveCameraAndGetRay(OH::f4t deltaTime)
    {
        // Update camera.
        cameraUpdate(deltaTime, MouseState);

        float view[16];
        cameraGetViewMtx(view);

        float proj[16];

        // Set view and projection matrix for view 0.
        bx::mtxProj(proj, 60.0f, float(Width)/float(Height), 0.1f, 100.0f, bgfx::getCaps()->homogeneousDepth);

        bgfx::setViewTransform(0, view, proj);
        bgfx::setViewRect(0, 0, 0, uint16_t(Width), uint16_t(Height) );

        float mtxVp[16];
        bx::mtxMul(mtxVp, view, proj);

        float mtxInvVp[16];
        bx::mtxInverse(mtxInvVp, mtxVp);

        float zero[3] = {};
        float eye[] = { 5.0f, 10.0f, 5.0f };
        bx::mtxLookAt(view, eye, zero);
        bx::mtxProj(proj, 45.0f, float(Width)/float(Height), 1.0f, 15.0f, bgfx::getCaps()->homogeneousDepth);
        bx::mtxMul(mtxVp, view, proj);

        return makeRay(
               (float(MouseState.m_mx)/float(Width)  * 2.0f - 1.0f)
            , -(float(MouseState.m_my)/float(Height) * 2.0f - 1.0f)
            , mtxInvVp
            );
    }

    bool update() override
    {
        if (!entry::processEvents(this->Width, this->Height, this->DebugFlags, this->ResetFlags, &this->MouseState))
        {
            ImGui::GetIO().MouseDrawCursor = true;
            SDL_ShowCursor(ImGui::GetIO().MouseDrawCursor ? SDL_DISABLE : SDL_ENABLE);

            // MAYBE encapsulate timing
            {
                int64_t now = bx::getHPCounter() - this->StartTime;
                OH_INTERN int64_t last = now;
                const int64_t frameTime = now - last;
                last = now;
                const double freq = double(bx::getHPFrequency() );
                const float deltaTime = float(frameTime/freq);
                float time = float(now/freq);

                this->PickerInput.CameraRay = MoveCameraAndGetRay(deltaTime);
                OH_UNUSED(time);
            }

            OH::i8t FrameStartTicks = bx::getHPCounter();
            const OH::u1t* inputChars = inputGetChar();
            
            imguiBeginFrame(
                this->MouseState.m_mx, this->MouseState.m_my,
                (this->MouseState.m_buttons[entry::MouseButton::Left  ] ? IMGUI_MBUT_LEFT   : 0)
                    | (this->MouseState.m_buttons[entry::MouseButton::Right ] ? IMGUI_MBUT_RIGHT  : 0)
                    | (this->MouseState.m_buttons[entry::MouseButton::Middle] ? IMGUI_MBUT_MIDDLE : 0),
                this->MouseState.m_mz,//
                (OH::u2t)this->Width, (OH::u2t)this->Height,
                (inputChars == NULL) ? 0 : inputChars[0]
                );

            //ImGui::ShowDemoWindow(NULL);

            //DebugDrawEncoder dde;
            //this->PickerInput.DDrawer = dde;
            //this->PickerInput.DDrawer.begin(0);
            //this->PickerInput.DDrawer.drawAxis(0.0f, 0.0f, 0.0f);

            UpdatePicker(this->PickerState, &this->PickerInput);

            //this->PickerInput.DDrawer.end();

            imguiEndFrame();
            bgfx::setViewRect(0, 0, 0, (OH::u2t)this->Width, (OH::u2t)this->Height);
            bgfx::touch(0); // clears
            bgfx::frame();

            // Very dumb framerate cap
            {
                OH::i8t FrameTicks = bx::getHPCounter() - FrameStartTicks;
                OH::f8t FrameTimeAdj = 1.0*FrameTicks/bx::getHPFrequency();
                OH::f8t MinFrameTime = 1.0/120;

                if (FrameTimeAdj < MinFrameTime)
                {
                    OH::f8t extraSleepMs = 1000*(MinFrameTime - FrameTimeAdj);
                    bx::sleep((OH::i4t)extraSleepMs);
                }
            }

            return true;
        }

        return false;
    }
};

// namespace OH_BGFX
}

ENTRY_IMPLEMENT_MAIN(OH_BGFX::bgfx_picker_app, "Oswald Hurlem's Picker", "{INIT/DEBUG TEXT}");

#pragma message("#include bgfx + debugdraw sample implementations")
#include "bgfx-sample-debugdraw/debugdraw.cpp"
#include "camera.cpp"
#include "bounds.cpp"
#undef Mesh
#undef s_embeddedShaders

#pragma message("#include bgfx + imgui sample implementations")
#include "bgfx-sample-imgui/bgfx_sample_imgui.cpp"
#include "bgfx_utils.cpp"
#include "example_glue.cpp"
#include "entry/entry.cpp"
//#include "entry/entry_windows.cpp"
#pragma warning(push)
#pragma warning(disable: MSVCW_DOWNCAST_INT)
#include "entry/entry_sdl.cpp"
#pragma warning(pop)
#include "entry/input.cpp"
#include "entry/cmd.cpp"

#pragma message("#include imgui impl")
#include "dear-imgui/imgui_demo.cpp"
#include "dear-imgui/imgui.cpp"
#include "dear-imgui/imgui_draw.cpp"

#pragma message("Code that goes in imgui_user.inl")
#include "imgui-widgets/range_slider.inl"

#include "ib-compress/indexbufferdecompression.cpp"

#undef snprintf

// Stray ImGui user function that needs to be implemented here (I avoid this AMAP)
#include "oh_imgui_internal.cpp"

#pragma message("#include tinyfiledialogs impl")
#pragma comment(lib, "Comdlg32.lib")
#pragma comment(lib, "Ole32.lib")
#pragma warning(push)
#define near
#define far
#define TINYFD_GET_WIN32_OWNER_WINDOW() NULL
#include "tinyfiledialogs.c"
#undef near
#undef far
#pragma warning(pop)

#pragma message("#include bgfx impl")
#pragma warning(push)
#pragma warning(disable: MSVCW_POSIX_DEPRECATION)
#define near
#define far
#include "bgfx/src/amalgamated.cpp"
#undef near
#undef far
#pragma warning(pop)

// NOTE includes LodePNG impl
#pragma message("#include bimg impl")
#include "bimg/src/image_gnf.cpp"
#include "bimg/src/image.cpp"
#pragma warning(push)
#pragma warning(disable: MSVCW_4B_SHIFT_CONVERTED_TO_8B MSVCW_DOWNCAST_SIZE)
#include "bimg/src/image_decode.cpp"
#pragma warning(pop)

#pragma message("#include bx impl")
#include "bx/src/amalgamated.cpp"

#pragma warning(pop)