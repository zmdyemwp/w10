#ifndef __SPP_COMMAND_API_H__

const TCHAR TAG[] = L"SppDebug";
#define	tag	TAG

BOOL InitComPort(DWORD port_number);

BOOL SppCheckFile(TCHAR * szName);
BOOL SppCheckFile(char * szName);

DWORD SppGetSize(TCHAR * szName);
DWORD SppGetSize(char * szName);

DWORD SppReadData(TCHAR * szName, DWORD pos, DWORD size);
DWORD SppReadData(char * szName, DWORD pos, DWORD size);

DWORD SppReadFile(TCHAR * destFile, TCHAR * logFile);
DWORD SppReadFile(char * destFile, char * logFile);

//BOOL SppWriteFile(TCHAR szName, char * buf, DWORD size);
//BOOL SppAppendFile(TCHAR szName, char * buf, DWORD size);

BOOL SppStopAll();
/*****************************************************************
*			DIR
*/

class Dir {
public:
	friend Dir * SppDir();
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
		}
		count = 0;
	}
	DWORD GetCount() { return count; }
	char* Get(DWORD index) { return buffer + 32 * index; }
private:

private:
	DWORD count;
	char * buffer;
};
Dir * SppDir();
/******************************************************************/

TCHAR* SppGetVersion();

VOID DeinitComPort();

#endif // !__SPP_COMMAND_API_H__
