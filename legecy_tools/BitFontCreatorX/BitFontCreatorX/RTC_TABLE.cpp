#include "stdafx.h"
#include "resource.h"
#include "ImageCapture\TextCapture\TextCapture.h"
#include "RTC_TABLE.h"

void RtcThread(void);
static HWND g_hDlg;

INT_PTR CALLBACK RTCProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam) {
	switch (message) {
		case WM_INITDIALOG:
			g_hDlg = hDlg;
			{
				HANDLE h = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)RtcThread, NULL, 0, NULL);
				CloseHandle(h);
			}
			return TRUE;
		case WM_COMMAND:
			switch(LOWORD(wParam)) {
				case IDOK:
				case IDCANCEL:
					EndDialog(hDlg, LOWORD(wParam));
					return TRUE;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return FALSE;
}

void RtcThread(void) {
	Sleep(1000);
	TxtCapture * p = new TxtCapture();
	p->Analyse(GetDlgItem(g_hDlg, IDC_RTC_TABLE));
	p->CreateCSourceFiles();
	delete p;
	MessageBox(g_hDlg, L"OK", NULL, 0);
}