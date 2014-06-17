
#ifndef		__CAPTURE_LINKED_LIST_H__
#define		__CAPTURE_LINKED_LIST_H__

#include "..\stdafx.h"

extern void dmsg(TCHAR*,DWORD=1);

typedef struct DataNote {
	DataNote(DWORD value) {
		v = value;
		next = NULL;
	}
	DataNote() {
		v = 0;
		next = NULL;
	}
	DWORD v;
	DataNote * next;
} * pDataNote;

class DataList {
	public:
		DataList();
		DataList(DWORD v);
		~DataList();
		DWORD addValue(DWORD v);
		DWORD getCount();
		DWORD getValue(DWORD index);
		DWORD setValue(DWORD index, DWORD value);
		DWORD operator[](DWORD index);
		void cleanAll();
	private:
		pDataNote first;
		DWORD count;
};

#endif		//__CAPTURE_LINKED_LIST_H__
