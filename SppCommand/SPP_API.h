#include "windows.h"

#ifndef __SPP_COMMAND_API_H__

const TCHAR TAG[] = L"SppDebug";
#define	tag	TAG

BOOL InitComPort(DWORD port_number);

BOOL SppCheckFile(TCHAR * szName);
BOOL SppCheckFile(char * szName);

DWORD SppGetSize(TCHAR * szName);
DWORD SppGetSize(char * szName);

DWORD SppReadData(char * dest, TCHAR * szName, DWORD pos, DWORD size);
DWORD SppReadData(char * dest, char * szName, DWORD pos, DWORD size);

const char szCheckHead [] = "\
sn = '%d' and year = '%d' and month = '%d' and day = '%d' and hour = '%d' and min = '%d' and sec = '%d' \
and mode = '%c' and time = '%d' and distance = '%d'\r\n\
";
const char szSummary[] = "\
'%d','%X','%d','%d','%d','%d','%d','%d','%c','%d','%d','%d','%d','%d','%d','%d','%d','%d','%d','%d','%d','%d','%d','%d','%d'\r\n\
";
const char szGps[] = "\
'%d','%c','%d','%d','%d','%d','%d','%d','%f','%f','%d','%d','%d'\r\n\
";

TCHAR * SppReadFile(TCHAR * logFile);
TCHAR * SppReadFile(char * logFile);

DWORD GetProgress();

//BOOL SppWriteFile(TCHAR szName, char * buf, DWORD size);
//BOOL SppAppendFile(TCHAR szName, char * buf, DWORD size);

BOOL SppStopAll();
/*****************************************************************
*			DIR
*/

class Dir {
public:
	friend Dir * SppDir();
	friend Dir * SppDirSn();
	Dir() {
		buffer = NULL;
		count = 0;
	}
	~Dir() {
		clear();
	}
	void clear() {
		if (buffer) {
			delete[] buffer;
			buffer = NULL;
		}
		count = 0;
	}
	DWORD GetCount() { return count; }
	char* Get(DWORD index) {
		if(buffer && index < count) {
			return buffer + 32 * index;
		} else {
			return NULL;
		}
	}
	char* GetSub(DWORD index) {
		if(buffer && index < count) {
			return buffer+32 * index + 16;
		} else {
			return NULL;
		}
	}
private:
	DWORD count;
	char * buffer;
};

Dir * SppDir();
Dir * SppDirSn();

/******************************************************************/

TCHAR* SppGetVersion();

VOID DeinitComPort();

#endif // !__SPP_COMMAND_API_H__
