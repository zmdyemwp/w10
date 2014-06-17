#include "../EnvSettings.h"
#include "LinkedList.h"

static TCHAR msg[1024+1];
DataList::DataList() {
	first = NULL;
	count = 0;
}

DataList::~DataList() {
	cleanAll();
}

DWORD DataList::addValue(DWORD v) {
	pDataNote p = first;
	while(p && p->next) {
		p = p->next;
	}
	if(NULL == p)
		first = new DataNote(v);
	else
		p->next = new DataNote(v);
	count++;
	return count;
}

DWORD DataList::getCount() {
	return count;
}

DWORD DataList::getValue(DWORD index) {
	DWORD result = 0;
	pDataNote p = first;
	for(DWORD i = 0; p && i < count; i++)
	{
		if(i == index)
		{
			result = p->v;
			break;
		}
		else
			p = p->next;
	}
	return result;
}

DWORD DataList::setValue(DWORD index, DWORD value) {
	pDataNote p = first;
	for(DWORD i = 0; p && i < count; i++)
	{
		if(i == index)
		{
			p->v = value;
			break;
		}
		else
			p = p->next;
	}
	return value;
}

DWORD DataList::operator[](DWORD index) {
	return getValue(index);
}

void DataList::cleanAll(void) {
	pDataNote p = first;
	DWORD c = 0;
	while(p) {
		pDataNote ptemp = p;
		p = p->next;
		delete ptemp;
		c++;
	}
	if(c != count)
	{
		wsprintf(msg, L"DataList::~DataList()::ERROR::Unexpected counter value");
		dmsg(msg);
	}
	count = 0;
}