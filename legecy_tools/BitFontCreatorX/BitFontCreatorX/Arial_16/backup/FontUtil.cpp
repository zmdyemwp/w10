
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "FontTable.h"

const static int space_width = 4;

int GetIndex(char c) {
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

int GDI_GetStringWidth(char * str) {
	int result = 0;
	size_t i = 0;
	for(i = 0; i < strlen(str); i++) {
		int index = GetIndex(str[i]);
		if(-1 == index) {
			result += space_width;
		}
		if(0 <= index) {
			result += normal_font_width_table[index];
		}
		else {
			continue;
		}
	}
	return result;
}


extern void GDI_PaintBuffer(int, int, int, int, unsigned char *, bool);
void GDI_PrintString(int x, int y, char * str, int alignment, bool highlight) {
	int wsum = GDI_GetStringWidth(str);
	int X = 0;
	int Y = y;
	size_t i = 0;
	int height = 0;
	if(0 > alignment) {
		X = x;
	}
	else if(0 == alignment) {
		X = x - wsum/2;
	}
	else {
		X = x - wsum;
	}
	for(i = 0; i < strlen(str); i++) {
		int index = GetIndex(str[i]);
		if(-1 == index) {
			X += space_width;
			continue;
		}
		else if(0 > index) {
			continue;
		}
		else {
			wsum = normal_font_width_table[index];
		}
		height = (int)((normal_font_offset_table[index+1] - normal_font_offset_table[index])/ceil((double)wsum/8));
		GDI_PaintBuffer(X, Y, wsum, height, (unsigned char *)normal_font_data_table + normal_font_offset_table[index], highlight);
		X += wsum;
	}
}
