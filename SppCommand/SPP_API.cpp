#include "stdafx.h"
#include "stdio.h"
#include "SPP_API.h"

#define		dim(x) sizeof(x)/sizeof(x[0])
static HANDLE hCom = NULL;
char * wcs2mbs(TCHAR * w);

BOOL InitComPort(DWORD dwCom) {
	if (NULL != hCom) {
		CloseHandle(hCom);
	}
	TCHAR temp[256];
	wsprintf(temp, L"\\\\.\\COM%d", dwCom);
	hCom = CreateFile(temp, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == hCom) {
		CloseHandle(hCom);
		hCom = NULL;
		wsprintf(temp, L"[%s]******** InitComPort()::Fail...(%d)", tag, GetLastError());
		OutputDebugString(temp);
		return FALSE;
	}

	COMMTIMEOUTS timeout;
	timeout.ReadIntervalTimeout = MAXDWORD;
	timeout.ReadTotalTimeoutConstant = 0;
	timeout.ReadTotalTimeoutMultiplier = 0;
	SetCommTimeouts(hCom, &timeout);

	return TRUE;
}

DWORD SendCmd(char * cmd, DWORD len) {
	if (NULL == hCom) {
		return 0;
	}
	DWORD w = 0;
	WriteFile(hCom, cmd, len, &w, NULL);
	return w;
}

DWORD RecvCmd(char * buf, DWORD size) {
	if (NULL == hCom) {
		return 0;
	}
	DWORD read = 0;
	DWORD err = 0;
	unsigned char end = 0;
	while (read < size && err < 500) {
		DWORD r = 0;
		ReadFile(hCom, buf + read, size - read, &r, NULL);
		if (0 == r) {
			err++;
		}
		else {
			read += r;
		}
		if ('\r' == *(buf + read - 2) && '\0' == *(buf + read - 1)) {
			break;
		}
		Sleep(1);
	}
	return read;
}

BOOL SppStopAll() {
	char cmd[64] = { 0 };
	sprintf_s(cmd, 64, "SPP+STOP=\r\0");
	SendCmd(cmd, 11);
	RecvCmd(cmd, 64);
	char * p = strstr(cmd, ",");
	if (p) {
		p++;
		if ('1' == *p) {
			return TRUE;
		}
	}
	return FALSE;
}

BOOL SppCheckFile(char * szName) {
	char buf[32] = { 0 };
	sprintf_s(buf, 32, "SPP+FCHECK=%s\r\0", szName);
	SendCmd(buf, 13 + strlen(szName));
	RecvCmd(buf, 32);
	char * p = strstr(buf, ",");
	if (p) {
		p++;
		if ('1' == *p) {
			return TRUE;
		}
		else {
			return FALSE;
		}
	}
	return FALSE;
}
BOOL SppCheckFile(TCHAR * szName) {
	BOOL result = SppCheckFile(wcs2mbs(szName));
	return result;
}

DWORD SppGetSize(char * szName) {
	DWORD result = 0;
	char buf[64] = { 0 };
	sprintf_s(buf, 64, "SPP+FSIZE=%s\r\0", szName);
	SendCmd(buf, 12 + strlen(szName));
	RecvCmd(buf, 64);
	char * p = strstr(buf, ",");
	if (p) {
		p++;
		result = strtol(p, NULL, 10);
	}
	return result;
}
DWORD SppGetSize(TCHAR * szName) {
	DWORD result = SppGetSize(wcs2mbs(szName));
	return result;
}

Dir * SppDir() {
	static Dir dir;
	dir.clear();
	char cmd[] = "SPP+READDIR=";
	SendCmd(cmd, dim(cmd));
	char buffer[32768];
	RecvCmd(buffer, 32768);
	char * p = strstr(buffer, ",");
	if (NULL != p) {
		p++;
		DWORD len = strtol(p, NULL, 10);
		dir.count = len / 32;
		p = strstr(p, ",");
		if (NULL != p) {
			p++;
			dir.buffer = new char[len];
			memcpy(dir.buffer, p, len);
		}
	}
	return &dir;
}

VOID DeinitComPort() {
	CloseHandle(hCom);
	hCom = NULL;
}

char * wcs2mbs(TCHAR * w) {
	static char * buf = NULL; 
	DWORD len = wcslen(w) + 1;
	if (buf) {
		delete [] buf;
	}
	buf = new char[len];
	sprintf_s(buf, len, "%S", w);
	return buf;
}