
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "A16FontTable.h"

static const unsigned char space_width = 10;

static int GetIndex(char c) {
	if(0x20 > c || 0x7f < c) {
		return -2;
	}
	else if(0x20 == c) {
		return -1;
	}
	else {
		return c - 0x21;
	}
}

int GDI_GetArial16StringWidth(char * str) {
	int result = 0;
	size_t i = 0;
	for(i = 0; i < StrLen(str); i++) {
		int index = GetIndex(str[i]);
		if(-1 == index) {
			result += space_width;
		}
		if(0 <= index) {
			result += width_table[index];
		}
		else {
			continue;
		}
	}
	return result;
}

void GDI_PrintArial16String(int x, int y, char * str, int alignment, bool highlight) {
	int wsum = GDI_GetStringWidth(str);
	int X = 0;
	int Y = y;
	size_t i = 0;
	int height = 0;
	if(0 < alignment) {
		X = x;
	}
	else if(0 == alignment) {
		X = x - wsum/2;
	}
	else {
		X = x - wsum;
	}
	for(i = 0; i < StrLen(str); i++) {
		int index = GetIndex(str[i]);
		if(-1 == index) {
			X += space_width;
			continue;
		}
		else if(0 > index) {
			continue;
		}
		else {
			wsum = width_table[index];
		}
		height = (int)((offset_table[index+1] - offset_table[index])/ceil((double)wsum/8));
		GDI_PaintBuffer(X, Y, wsum, height, (unsigned char *)data_table + offset_table[index], highlight);
		X += wsum;
	}
}
