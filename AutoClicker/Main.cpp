#include <iostream>
#include <chrono>
#include "Main.h"

void AutoClicker::HandleClicks()
{
	if (!g_Config.bEnabled) return;

	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	Sleep(g_Config.iDelayBetweenClick);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	Sleep(g_Config.iDelay);
}

// TODO: ADD ME!
void AutoClicker::SyncSettings()
{
	
}
