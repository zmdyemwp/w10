// SppCommand.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "SppCommand.h"

#include "SPP_API.h"

int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPTSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	TCHAR temp[1024] = { 0 };
	InitComPort(6);

	wsprintf(temp, L"[SppDebug]    Stop All: %s", (SppStopAll()) ? L"Success" : L"Fail");
	OutputDebugString(temp);
	wsprintf(temp, L"[SppDebug]    000001: %s", (SppCheckFile(L"000001")) ? L"O" : L"X");
	OutputDebugString(temp);
	wsprintf(temp, L"[SppDebug]    000002: %s", (SppCheckFile(L"000002")) ? L"O" : L"X");
	OutputDebugString(temp);
	wsprintf(temp, L"[SppDebug]    000003: %s", (SppCheckFile(L"000003")) ? L"O" : L"X");
	OutputDebugString(temp);
	/************************************************************
	*		Dir
	*/
	Dir * dir = SppDir();
	for (DWORD i = 0; i < dir->GetCount(); i++) {
		wsprintf(temp, L"[SppDebug]    %S(%d)", dir->Get(i), SppGetSize(dir->Get(i)));
		OutputDebugString(temp);
	}

	DeinitComPort();
	OutputDebugString(L"[SppDebug] ***************************/    End of APP");
	return 0;
}

