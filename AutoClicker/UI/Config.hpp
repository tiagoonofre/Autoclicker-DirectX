#pragma once

#include <tchar.h>

#include <d3d9.h>
#include <d3dx9.h>

#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>
#include <psapi.h>

class CConfig
{
public:
	bool bEnabled = false;
	int iCPS = 0;
	int iKey = 0;
	int iHotkeyState = -1;
	int iHotkeyMode = 0;
	void HandleHotkeyState(int key, int s);
	int iDelay = 100;
	int iDelayBetweenClick = 10;

	// 

	HWND Hwnd = NULL;
	LPDIRECT3D9 pD3D = NULL;
	LPDIRECT3DDEVICE9 pD3DDevice = NULL;
	D3DPRESENT_PARAMETERS D3DPP = {};
};

extern CConfig g_Config;