#include "stdafx.h"
#include "stdio.h"
#include "SPP_API.h"
#include "Storage.h"

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
	if( !WriteFile(hCom, cmd, len, &w, NULL) ) {
		w = 0;
	}
	return w;
}

DWORD RecvCmd(char * buf, DWORD size) {
	if (NULL == hCom) {
		return 0;
	}
	DWORD read = 0;
	DWORD err = 0;
	unsigned char end = 0;
	while (read < size && err < 10) {
		DWORD r = 0;
		if( !ReadFile(hCom, buf + read, size - read, &r, NULL)) {
			read = 0;
			break;
		}
		if (0 == r) {
			err++;
		}
		else {
			err = 0;
			read += r;
		}
		if ('\r' == *(buf + read - 2) && '\0' == *(buf + read - 1)) {
			break;
		}
		Sleep(50);
	}

	return read;
}

BOOL SppStopAll() {
	char cmd[64] = { 0 };
	sprintf_s(cmd, 64, "SPP+STOP=\r\0");
	if(0 == SendCmd(cmd, 11)) {
		return FALSE;
	}
	if(0 == RecvCmd(cmd, 64)) {
		return FALSE;
	}
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
	if(0 == SendCmd(buf, 13 + strlen(szName))) {
		return FALSE;
	}
	if(0 == RecvCmd(buf, 32)) {
		return FALSE;
	}
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
	if(0 == SendCmd(buf, 12 + strlen(szName))) {
		return FALSE;
	}
	if(0 == RecvCmd(buf, 64)) {
		return FALSE;
	}
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


DWORD SppReadData(TCHAR * dest, TCHAR * szName, DWORD pos, DWORD size) {
	DWORD result = SppReadData(wcs2mbs(dest), wcs2mbs(szName), pos, size);
	return result;
}

DWORD SppReadData(char * dest, char * szName, DWORD pos, DWORD size) {
	char cmd[64];
	sprintf_s(cmd, 64, "SPP+FREADP=%s,%d,%d\r\0", szName, pos, size);
	if(0 == SendCmd(cmd, strlen(cmd)+1)) {
		return 0;
	}
	DWORD len = 32 + size;
	char * buffer = new char[len];
	if(0 == RecvCmd(buffer, len)) {
		delete [] buffer;
		return 0;
	}
	char * p = strstr(buffer, ",");
	if (p) {
		p++;
		size = strtol(p, NULL, 10);
		p = strstr(p, ",");
		if (p) {
			p++;
			memcpy(dest, p, size);
		}
	} else {
		size = 0;
	}
	delete [] buffer;
	return size;
}


Dir * SppDir() {
	static Dir dir;
	dir.clear();
	char cmd[] = "SPP+READDIR=";
	if(0 == SendCmd(cmd, dim(cmd))) {
		printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxx 1\n");
		return NULL;
	}
	char buffer[32768];
	if(0 == RecvCmd(buffer, 32768)) {
		printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxx 2\n");
		return NULL;
	}
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxx 3::%s\n", buffer);
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

Dir * SppDirSn() {
	static Dir dirsn;
	dirsn.clear();
	Dir * dir = SppDir();
	if(NULL == dir) {
		return NULL;
	}

	dirsn.buffer = new char[32 * dir->count];

	for(DWORD i = 0; i < dir->GetCount(); i++) {
		if('0' == dir->Get(i)[0]) {
			STORAGE_HEAD head;
			DWORD size = sizeof(STORAGE_HEAD);
			if(0 == SppReadData((char*)&head, dir->Get(i), 0, size)) {
				dirsn.clear();
				return NULL;
			}
			sprintf_s(dirsn.buffer+32*dirsn.count, 16, "%d",
				head.Month*100000000+head.Day*1000000+head.Hour*10000+head.Min*100+head.Sec);
			strcpy_s(dirsn.buffer+32*dirsn.count+16, 16, dir->Get(i));
			dirsn.count++;
		}
	}
	return &dirsn;
}


TCHAR* SppGetVersion() {
	static TCHAR version[16];
	char cmd[32] = "SPP+VERSION=";
	if(0 == SendCmd(cmd, strlen(cmd))) {
		return NULL;
	}
	if(0 == RecvCmd(cmd, 32)) {
		return NULL;
	}
	char * p = strstr(cmd, ",");
	if (p) {
		p++;
		wsprintf(version, L"%S", p);
	} else {
		version[0] = '\0';
	}
	return version;
}


DWORD total_read = 0;
DWORD log_file_size = 0;

TCHAR * SppReadFile(TCHAR * logFile) {
	return SppReadFile(wcs2mbs(logFile));
}

TCHAR * SppReadFile(char * logFile) {
	total_read = 0;
	log_file_size = 0;
	static TCHAR fullFileName[MAX_PATH+1];
	GetTempPath(MAX_PATH, fullFileName);
	STORAGE_HEAD head;
	if(0 == SppReadData((char*)&head, logFile, 0, sizeof(STORAGE_HEAD))) {
		total_read = 0;
		log_file_size = 0;
		return NULL;
	}

	DWORD len = wcslen(fullFileName);
	swprintf(fullFileName+len, MAX_PATH - len, L"%d%02d%02d%02d%02d%02d_%S",
		head.Year, head.Month, head.Day, head.Hour, head.Min, head.Sec, logFile);

	HANDLE hFile = CreateFile(fullFileName, GENERIC_READ | GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if(INVALID_HANDLE_VALUE == hFile) {
		total_read = 0;
		log_file_size = 0;
		CloseHandle(hFile);
		return NULL;
	}

	char buffer[2048+1];

	log_file_size = SppGetSize(logFile);
	total_read += sizeof(STORAGE_HEAD);

	DWORD w = 0;
	//	Get total ticks, total distance, and total calorie
	STORAGE_DATA final;
	if(0 == SppReadData((char*)&final, logFile, log_file_size-sizeof(STORAGE_DATA), sizeof(STORAGE_DATA))) {
		total_read = 0;
		log_file_size = 0;
		CloseHandle(hFile);
		return NULL;
	}

	//	Check Head
	char mode;
	if(1 == head.Mode) mode = 'R';
	else if(2 == head.Mode) mode = 'B';
	else if(3 == head.Mode) mode = 'S';
	else if(4 == head.Mode) mode = 'O';
	else if(5 == head.Mode) mode = 'P';

	DWORD sn = head.Month*100000000 + head.Day*1000000 + head.Hour*10000 + head.Min*100 + head.Sec;
	sprintf_s(buffer, 2048, szCheckHead,
		sn, head.Year, head.Month, head.Day, head.Hour, head.Min, head.Sec, mode, (final.Tick/1000), final.Distance);
	WriteFile(hFile, buffer, strlen(buffer), &w, NULL);

	//	Write Head as Summary
	sprintf_s(buffer, 2048, szSummary,
			sn, head.Version, head.Year, head.Month, head.Day, head.Hour, head.Min, head.Sec,
			mode,
			head.Weight, head.Height, head.Gender, head.Age, (final.Tick/1000), final.Distance, final.Calories,
			head.MaxHR, head.RestHR,
			head.Conclusion.Ascent, head.Conclusion.Descent,
			head.Conclusion.HRAverage, head.Conclusion.HRAverageMax,
			head.Conclusion.HRMax, head.Conclusion.Efficiency, head.Conclusion.SWOLF);

	WriteFile(hFile, buffer, strlen(buffer), &w, NULL);

	//	Wrtie Data
	const unsigned char max_size = 10;
	STORAGE_DATA data[max_size];
	memset(data, 0, sizeof(data));
	
	while(total_read < log_file_size) {
		DWORD read = SppReadData((char*)data, logFile, total_read, 10*sizeof(STORAGE_DATA));
		if(0 == read) {
			total_read = log_file_size = 0;
			CloseHandle(hFile);
			return NULL;
		} else {
			total_read += read;
			for(DWORD i = 0; i < read/sizeof(STORAGE_DATA); i++) {
				if((data[i].Available >> 17)%2 == 0 || (data[i].Available >> 16)%2 == 0){	
					data[i].Lat = 9999;
					data[i].Long = 9999;
				}
				if((data[i].Available >> 11)%2 == 0)
				{
					data[i].Lengths = 9999;
				}
				if((data[i].Available >> 10)%2 == 0)
				{
					data[i].Elevation = 9999;
				}
				if((data[i].Available >> 9)%2 == 0)
				{
					data[i].Speed = 9999;
				}
				if((data[i].Available >> 7)%2 == 0)
				{
					data[i].HeartRate = 0;
				}
				if((data[i].Available >> 5)%2 == 0)
				{
					data[i].Cadence = 9999;
				}
				if((data[i].Available >> 4)%2 == 0)
				{
					data[i].Step = 9999;
				}
				if((data[i].Available >> 1)%2 == 0)
				{
					data[i].Calories = 9999;
				}
				if((data[i].Available)%2 == 0)
				{
					data[i].Distance = 9999;
				}
				sprintf_s(buffer, 2048, szGps, sn, mode, data[i].Lap, data[i].HeartRate, data[i].Step, data[i].Cadence,
						data[i].Elevation, data[i].Lengths, data[i].Lat, data[i].Long, data[i].Speed, data[i].Distance,
						(data[i].Tick/1000));
				WriteFile(hFile, buffer, strlen(buffer), &w, NULL);
			}
		}
	}
	CloseHandle(hFile);
	return fullFileName;
}

DWORD GetProgress() {
	if( 0 == total_read || 0 == log_file_size) {
		return 0;
	} else {
		return 100 * total_read / log_file_size;
	}
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

TCHAR * mbs2wcs(char * m) {
	static TCHAR * buf = NULL;
	DWORD len = strlen(m)+1;
	if(buf) {
		delete [] buf;
	}
	buf = new TCHAR[len];
	swprintf(buf, len, L"%S", m);
	return buf;
}

