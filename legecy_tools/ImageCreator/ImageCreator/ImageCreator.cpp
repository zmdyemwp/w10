// ImageCreator.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "ImageCreator.h"
#include "math.h"
#include <stdio.h>

TCHAR msg[2048] = {0};
void dmsg(TCHAR*,DWORD=1);


INT_PTR CALLBACK	About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
	DialogBox(hInstance, MAKEINTRESOURCE(IDD_ABOUTBOX), NULL, About);
	return 0;
}


// Message handler for about box.
HWND gItem;
void GetImage();
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		{
			gItem = GetDlgItem(hDlg, IDB_BITMAP2);
			HANDLE h = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)GetImage, NULL, 0, NULL);
		}
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}

DWORD GetLeft(HDC,LONG,LONG);
DWORD GetRight(HDC,LONG,LONG);
DWORD GetTop(HDC,LONG,LONG);
DWORD GetBottom(HDC,LONG,LONG);
void WriteStringToFile(HANDLE hfile, char * str);
void GetImage() {
	Sleep(1000);
	HWND hwnd = gItem;
	HDC hdc = GetDC(hwnd);
	if(NULL != hdc)
	{
		RECT rc;
		GetClientRect(hwnd, &rc);
		//FillRect(hdc, &rc, (HBRUSH)GetStockObject(LTGRAY_BRUSH));
		wsprintf(msg, L"RECT (%d,%d,%d,%d)", rc.left, rc.top, rc.right, rc.bottom);
		dmsg(msg);

		DWORD x0 = GetLeft(hdc, rc.right, rc.bottom);
		DWORD x1 = GetRight(hdc, rc.right, rc.bottom);
		DWORD y0 = GetTop(hdc, rc.right, rc.bottom);
		DWORD y1 = GetBottom(hdc, rc.right, rc.bottom);
		DWORD dx = x1 - x0 + 1;
		DWORD dy = y1 - y0 + 1;

		wsprintf(msg, L"(%d,%d,%d,%d)", x0,y0,x1,y1);
		dmsg(msg);
		wsprintf(msg, L"(%d, %d)", dx, dy);
		dmsg(msg);

		DWORD rowlen = (DWORD)ceil((double)dx/8);
		DWORD bufsize = rowlen * dy;
		wsprintf(msg, L"%d X %d = %d", rowlen, dy, bufsize);
		dmsg(msg);
		unsigned char * buf = new unsigned char [bufsize];
		{
			unsigned char * temp = new unsigned char [8 * bufsize];
			memset(temp, 0, 8 * bufsize);
			{
				//	get pixel
				for(DWORD j = y0; j <= y1; j++) {
					for(DWORD i = x0; i <= x1; i++) {
						if(0 == GetPixel(hdc, i, j)) {
							temp[8 * rowlen * (j-y0) + (i-x0)] = 1;
							SetPixel(hdc, i, j, RGB(255,0,0));
						} else {
							temp[8 * rowlen * (j-y0) + (i-x0)] = 0;
						}
					}
				}

				//		Show Image
				if(0) {
					msg[0] = '\0';
					for(int yy = 0; yy < dy; yy++) {
						for(int xx = 0; xx < rowlen*8; xx++) {
							wsprintf(msg+wcslen(msg), L"%c", (1 == temp[8*rowlen*yy+xx])? 'A':'O');
						}
						dmsg(msg);
						msg[0] = '\0';
					}
				}

				//	calcualte byte
				for(DWORD b = 0; b < bufsize; b++) {
					buf[b] =
						temp[8 * b + 0] << 7 |
						temp[8 * b + 1] << 6 |
						temp[8 * b + 2] << 5 |
						temp[8 * b + 3] << 4 |
						temp[8 * b + 4] << 3 |
						temp[8 * b + 5] << 2 |
						temp[8 * b + 6] << 1 |
						temp[8 * b + 7];
				}

				//	write array
				GetCurrentDirectory(2048, msg);
				wcscat_s(msg, 2048, L"\\Openning.h");
				HANDLE hfile = CreateFile(msg, GENERIC_READ | GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
				{
					char str[2048] = {0};
					//	write head
					str[0] = '\0';
					sprintf_s(str, 2048,
"\
#ifndef\t\t__W10_OPEN_BUFFER_H__\r\n\
#define\t\t__W10_OPEN_BUFFER_H__\r\n\r\n\
const int open_screen_width = %d;\r\n\
const int open_screen_height = %d;\r\n\
const unsigned char open_screen_buffer [] = {\r\n\
"						,dx,dy);
					WriteStringToFile(hfile, str);
					//	write content
					str[0] = '\0';
					for(DWORD r = 0; r < dy; r++) {
						str[0] = '\0';
						for(DWORD c = 0; c < rowlen; c++) {
							sprintf_s(str + strlen(str), 2048 - strlen(str), "0x%02x, ", buf[rowlen * r + c]);
						}
						sprintf_s(str + strlen(str), 2048 - strlen(str), "\r\n");
						WriteStringToFile(hfile, str);
					}
					//	write end
					WriteStringToFile(hfile,
"\
};\r\n\r\n\
#endif\t\t//__W10_OPEN_BUFFER_H__\r\n\r\n\
"
						);
				}
				CloseHandle(hfile);
			}
			delete [] temp;
		}
		delete [] buf;
	}
	ValidateRect(hwnd, NULL);
	ReleaseDC(hwnd, hdc);
}

DWORD GetLeft(HDC hdc, LONG X, LONG Y) {
	DWORD result = 0;
	static DWORD c = 0;
	for(LONG x = 0; x < X; x++) {
		for(LONG y = 0; y < Y; y++) {
			COLORREF rgb = GetPixel(hdc, x, y);
			if(0 == rgb) {
				result = x;
				x = X;
				y = Y;
			}
		}
	}
	return result;
}

DWORD GetRight(HDC hdc, LONG X, LONG Y) {
	DWORD result = 0;
	for(LONG x = X; x > 0; x--) {
		for(LONG y = 0; y < Y; y++) {
			if(0 == GetPixel(hdc, x, y)) {
				result = x;
				x = 0;
				y = Y;
			}
		}
	}
	return result;
}

DWORD GetTop(HDC hdc, LONG X, LONG Y) {
	DWORD result = 0;
	for(LONG y = 0; y < Y; y++) {
		for(LONG x = 0; x < X; x++) {
			if(0 == GetPixel(hdc, x, y)) {
				result = y;
				x = X;
				y = Y;
			}
		}
	}
	return result;
}

DWORD GetBottom(HDC hdc, LONG X, LONG Y) {
	DWORD result = 0;
	for(LONG y = Y; y > 0; y--) {
		for(LONG x = 0; x < X; x++) {
			if(0 == GetPixel(hdc, x, y)) {
				result = y;
				x = X;
				y = 0;
			}
		}
	}
	return result;
}

void dmsg(TCHAR * msg, DWORD x)
{
	if(0 == x)
		return;

	TCHAR buffer[1024] = {0};
	wsprintf(buffer, L"[ImageCreator]\t%s\r\n", msg);

	OutputDebugString(buffer);
	return;


	HWND hDlg = FindWindow(NULL, L"DebugMsg");
	if(IsWindow(hDlg))
	{
		//SetDlgItemText(hDlg, 10101, buffer);
		SendDlgItemMessage(hDlg, 10101, EM_REPLACESEL, 0, (LPARAM)buffer);
	}
	else
		MessageBox(NULL, L"Window NOT Found", NULL, 0);
}

void WriteStringToFile(HANDLE hfile, char * str)
{
	char buffer[2048+1] = {0};
	DWORD w = 0;
	sprintf_s(buffer, 2048, "%s", str);
	WriteFile(hfile, buffer, strlen(buffer), &w, NULL);
}

