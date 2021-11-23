#pragma once

#include "Resources.h"
#include "Config.hpp"

#include "../ImGui/imgui.h"
#include "../ImGui/imgui_impl_dx9.h"
#include "../ImGui/imgui_impl_win32.h"
#include "../ImGui/imgui_internal.h"

#include "../Main.h"

namespace CustomGui
{
	bool Hotkey(const char* label, int* k, const ImVec2& size_arg);
	bool isHotKeyDown(int* k);
}

CConfig g_Config;