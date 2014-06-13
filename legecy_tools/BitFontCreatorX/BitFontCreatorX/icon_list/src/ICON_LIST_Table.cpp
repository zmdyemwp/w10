#include <stdio.h>
#include <string.h>
/*
#include "Watch.h"
#include "gdi.h"
*/
#include "ICON_LIST_UP_DOWN_height10.h"
#include "ICON_LIST_UP_DOWN.h"
#include "ICON_LIST_UNITS.h"
#include "ICON_LIST_SYMBOL.h"
#include "ICON_LIST_SMALL.h"
#include "ICON_LIST_KCOL.h"
#include "ICON_LIST_BPM.h"
#include "ICON_LIST_BIG.h"

/*
		UP_DOWN:		set the value of parameter "type": 0
		UNITS:			set the value of parameter "type": 1
		SYMBOL:			set the value of parameter "type": 2
		SMALL:			set the value of parameter "type": 3
		KCOL:			set the value of parameter "type": 4
		BPM:			set the value of parameter "type": 5
		BIG:			set the value of parameter "type": 6
*/

#include "..\\..\\stdafx.h"
extern void GDI_PaintBuffer(int, int, int, int, unsigned char *, bool);
extern void dmsg(TCHAR * msg, DWORD x);
static TCHAR msg[256];

const unsigned char icon_list_width_table[] = {
	6,			//	UP_DOWN with height = 10
	6,			//	UP_DOWN
	10,			//	UNITS
	10,			//	SYMBOL
	16,			//	SMALL
	16,			//	KCOL
	10,			//	BPM
	43,			//	BIG
};

const unsigned char icon_list_offset_table[] = {
	10,			//	UP_DOWN with height = 10
	3,			//	UP_DOWN
	38,			//	UNITS
	18,			//	SYMBOL
	24,			//	SMALL
	44,			//	KCOL
	58,			//	BPM
	180,		//	BIG
};

const unsigned char * icon_list_data_table[] = {
	icon_list_up_down_height_10_data_table,
	icon_list_up_down_data_table,
	icon_list_units_data_table,
	icon_list_symbol_data_table,
	icon_list_small_data_table,
	icon_list_kcol_data_table,
	icon_list_bpm_data_table,
	icon_list_big_data_table,
};

char GetIconIndex(unsigned char * buf) {
	char index = -1;
	if( ('k' == buf[0] && ('h' == buf[1] || 'm' == buf[1] || 'g' == buf[1])) ||			//	kh, km, kg,
		('m' == buf[0] && 'm' == buf[1]) ||												//	mm,
		('c' == buf[0]) ) {																//	cm,
		index = 2;
	} else if('k' == buf[0]) {															//	kCol
		index = 5;
	}else if('b' == buf[0] && 'p' == buf[1] && 'm' == buf[2]) {							//	bpm
		index = 6;
	} else if('r' == buf[0] || 's' == buf[0] || 'd' == buf[0] ||						//	run, swim, data,
				'f' == buf[0] || 'F' == buf[0] || 'b' == buf[0]) {						//	f:searching gps, F:fixed, bike
		index = 4;
	} else if('R' == buf[0] || 'S' == buf[0] || 'D' == buf[0] || 'B' == buf[0]) {		//	RUN, SWIM, DATA, BIKE
		index = 7;
	} else if('g' == buf[0] || 'm' == buf[0] || '%' == buf[0]) {						//	g, m, %
		index = 3;
	} else if('u' == buf[0] || 'w' == buf[0]) {											//	u:up, w:down
		index = 1;
	} else if('U' == buf[0] || 'W' == buf[0]) {
		index = 0;
	} else {
		index = -1;
	}
	return index;
}

unsigned char GetIconWidth(unsigned char * buf) {
	unsigned char index = GetIconIndex(buf);
	if(0 > index) {
		return 0;
	} else {
		return icon_list_width_table[index];
	}
}

unsigned short GetIconOffset(unsigned char * buf) {
	unsigned char index = GetIconIndex(buf);
	unsigned short result = 0;
	if(0 > index)
		return 0;
	if(0 == index) {
		if('U' == buf[0]) result = 0;
		if('W' == buf[0]) result = icon_list_up_down_height_10_data_table[index];
	} else if(1 == index) {
		if('u' == buf[0]) result = 0;
		if('w' == buf[0]) result = icon_list_offset_table[index];
	} else if(2 == index) {
		if('k' == buf[0]) {
			if('h' == buf[1]) result = 0;											//	kh
			if('m' == buf[1]) result = icon_list_offset_table[index];				//	km
			if('g' == buf[1]) result = 2 * icon_list_offset_table[index];			//	kg
		} else if('m' == buf[0]) result = 3 * icon_list_offset_table[index];		//	mm
			else if('c' == buf[0]) result = 4 * icon_list_offset_table[index];		//	cm
	} else if(3 == index) {
		if('g' == buf[0]) result = 0;
		if('m' == buf[0]) result = icon_list_offset_table[index];
		if('%' == buf[0]) result = 2 * icon_list_offset_table[index];
	} else if(4 == index) {
		if('r' == buf[0]) result = 0;
		if('s' == buf[0]) result = icon_list_offset_table[index];
		if('d' == buf[0]) result = 2*icon_list_offset_table[index];
		if('f' == buf[0]) result = 3*icon_list_offset_table[index];
		if('F' == buf[0]) result = 4*icon_list_offset_table[index];
		if('b' == buf[0]) result = 5*icon_list_offset_table[index];
	} else if(5 == index || 6 == index) {
		result = 0;
	} else if(7 == index) {
		if('S' == buf[0]) result = 0;
		if('D' == buf[0]) result = icon_list_offset_table[index];
		if('B' == buf[0]) result = 2*icon_list_offset_table[index];
		if('R' == buf[0]) result = 3*icon_list_offset_table[index];
	} else {
		result = 0;
	}
	return result;
}

unsigned char * GetIconData(unsigned char * buf) {
	unsigned char index = GetIconIndex(buf);
	if(0 > index)
		return (unsigned char*)icon_list_data_table[3];
	else
		return (unsigned char*)icon_list_data_table[index];
}

unsigned char GDI_GetIconHeight(unsigned char * buf) {
	unsigned char result = 0;
	unsigned char index = GetIconIndex(buf);
	unsigned short offset = icon_list_offset_table[index];
	unsigned char width = GetIconWidth(buf);
	if(0 == width || 0 == offset)
		return 0;
	result = (unsigned char)( offset / ((7 + width)/8) );
	//wsprintf(msg, L"(%d, %d) => %d", offset, width, result);
	//dmsg(msg,1);
	return result;
}

unsigned char GDI_GetIconWidth(unsigned char * buf) {
	return GetIconWidth(buf);
}


int GDI_PaintIcon(int x, int y, unsigned char * buf, int alignment, int highlight, int type) {
	int wsum = GetIconWidth(buf);
	if(0 < alignment) {
		//x = x;
	}
	else if(0 == alignment) {
		x = x - wsum/2;
	}
	else {
		x = x - wsum;
	}
	//--------------------------------------------
	wsprintf(msg, L"<%d>>(%d):(%d,%d)", GetIconIndex(buf), GetIconOffset(buf), GetIconWidth(buf), GDI_GetIconHeight(buf));
	dmsg(msg,1);
	GDI_PaintBuffer(x, y, GetIconWidth(buf), GDI_GetIconHeight(buf), GetIconData(buf) + GetIconOffset(buf), highlight);
	return wsum;
}
