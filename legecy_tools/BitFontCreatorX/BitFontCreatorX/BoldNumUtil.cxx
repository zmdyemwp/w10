
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "BoldNumTable.h"

const static int space_width = 6;

/*
		For the bold numbers with height 10: set the value of parameter "size": 0
		For the bold numbers with height 17: set the value of parameter "size": 1
		For the bold numbers with height 34: set the value of parameter "size": 2
		For the bold numbers with height 08: set the value of parameter "size": 3
*/

int GetBoldNumIndex(char c, int size) {
	if(0x20 > c || 0x40 < c) {
		return -2;
	}
	else if(0x20 == c) {
		return -1;
	}
	else {
		return c - 0x21;
	}
}

int GDI_GetBoldNumWidth(char * str, int size) {
	int index = 0;
	int result = 0;
	size_t i = 0;
	for(i = 0; i < strlen(str); i++) {
		index = GetBoldNumIndex(str[i], size);
		if(-1 == index) {
			result += space_width;
		}
		if(0 <= index) {
			result += bold_num_font_width_table[index];
		}
		else {
			continue;
		}
	}
	return result;
}


extern void GDI_PaintBuffer(int, int, int, int, unsigned char *, bool);
void GDI_PaintBoldNum(int x, int y, char * str, int alignment, int highlight, int fontsize) {
	int wsum = GDI_GetBoldNumWidth(str, fontsize);
	int X = 0;
	int Y = y;
	size_t i = 0;
	int height = 0;
	int index = 0;
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
		index = GetBoldNumIndex(str[i], fontsize);
		if(-1 == index) {
			X += space_width;
			continue;
		}
		else if(0 > index) {
			continue;
		}
		else {
			wsum = bold_num_font_width_table[index];
		}
		height = (int)((bold_num_font_offset_table[index+1] - bold_num_font_offset_table[index])/ceil((double)wsum/8));
		GDI_PaintBuffer(X, Y, wsum, height, (unsigned char *)bold_num_font_data_table + bold_num_font_offset_table[index], highlight);
		X += wsum;
	}
}
