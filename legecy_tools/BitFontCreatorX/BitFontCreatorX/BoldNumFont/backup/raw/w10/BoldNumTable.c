//#include <stdio.h>
//#include <string.h>

#include "Watch.h"
#include "gdi.h"

#include "BoldNumTable08.h"
#include "BoldNumTable11.h"
#include "BoldNumTable17.h"
#include "BoldNumTable34.h"
#include "BoldNumTable38.h"
#include "BoldNumTable47.h"
#include "BoldNumTable60.h"
#include "BoldNumTable.h"

/*
		For the bold numbers with height 11: set the value of parameter "size": 0
		For the bold numbers with height 17: set the value of parameter "size": 1
		For the bold numbers with height 34: set the value of parameter "size": 2
		For the bold numbers with height 08: set the value of parameter "size": 3
		For the bold numbers with height 38: set the value of parameter "size": 4
		For the bold numbers with height 47: set the value of parameter "size": 5
		For the bold numbers with height 60: set the value of parameter "size": 6
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

int GetBoldNumWidth(int size) {
	int result = 0;
	switch(size) {
		case 0:
			result = bold_num_font_width_11;
			break;
		case 1:
			result = bold_num_font_width_17;
			break;
		case 2:
			result = bold_num_font_width_34;
			break;
		case 3:
			result = bold_num_font_width_08;
			break;
		case 4:
			result = bold_num_font_width_38;
			break;
		case 5:
			result = bold_num_font_width_47;
			break;
		case 6:
			result = bold_num_font_width_60;
			break;
		default:
			break;
	}
	return result;
}

int GetBoldNumHeight(int size) {
	int result = 0;
	int offset = 0;
	int width = 0;
	switch(size) {
		case 0:
			offset = bold_num_font_offset_11;
			width = bold_num_font_width_11;
			break;
		case 1:
			offset = bold_num_font_offset_17;
			width = bold_num_font_width_17;
			break;
		case 2:
			offset = bold_num_font_offset_34;
			width = bold_num_font_width_34;
			break;
		case 3:
			offset = bold_num_font_offset_08;
			width = bold_num_font_width_08;
			break;
		case 4:
			offset = bold_num_font_offset_38;
			width = bold_num_font_width_38;
			break;
		case 5:
			offset = bold_num_font_offset_47;
			width = bold_num_font_width_47;
			break;
		case 6:
			offset = bold_num_font_offset_60;
			width = bold_num_font_width_60;
			break;
		default:
			break;
	}
	result = (int)( offset / ((7 + width)/8) );
	return result;
}

int GetBoldNumOffset(int index, int size) {
	int result = 0;
	switch(size) {
		case 0:
			result = bold_num_font_offset_11;
			break;
		case 1:
			result = bold_num_font_offset_17;
			break;
		case 2:
			result = bold_num_font_offset_34;
			break;
		case 3:
			result = bold_num_font_offset_08;
			break;
		case 4:
			result = bold_num_font_offset_38;
			break;
		case 5:
			result = bold_num_font_offset_47;
			break;
		case 6:
			result = bold_num_font_offset_60;
			break;
		default:
			break;
	}
	return index * result;
}

unsigned char * GetBoldNumDate(int size) {
	unsigned char * result = NULL;
	switch(size) {
		case 0:
			result = (unsigned char*)bold_num_font_data_table_11;
			break;
		case 1:
			result = (unsigned char*)bold_num_font_data_table_17;
			break;
		case 2:
			result = (unsigned char*)bold_num_font_data_table_34;
			break;
		case 3:
			result = (unsigned char*)bold_num_font_data_table_08;
			break;
		case 4:
			result = (unsigned char*)bold_num_font_data_table_38;
			break;
		case 5:
			result = (unsigned char*)bold_num_font_data_table_47;
			break;
		case 6:
			result = (unsigned char*)bold_num_font_data_table_60;
			break;
		default:
			break;
	}
	return result;
}

int GDI_GetBoldNumWidth(char * str, int size) {
	int result = 0;
	result = GetBoldNumWidth(size) * strlen(str);
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
			X += GetBoldNumWidth(fontsize);
			continue;
		}
		else if(0 > index) {
			continue;
		}
		else {
			wsum = GetBoldNumWidth(fontsize);
		}
		height = GetBoldNumHeight(fontsize);
		GDI_PaintBuffer(X, Y, wsum, height, GetBoldNumDate(fontsize) + GetBoldNumOffset(index, fontsize), highlight);
		X += wsum;
	}
}
