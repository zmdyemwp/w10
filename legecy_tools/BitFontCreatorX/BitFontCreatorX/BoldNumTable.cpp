
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "BoldNumTable08.h"
#include "BoldNumTable11.h"
#include "BoldNumTable17.h"
#include "BoldNumTable34.h"
#include "BoldNumTable38.h"
#include "BoldNumTable47.h"
#include "BoldNumTable60.h"


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
	int result = -1;
	if(0x20 > c || 0x40 < c) {
		result = -2;
	}
	else if(0x20 == c) {
		result = -1;
	}
	else {
		result = c - 0x21;
	}
	return result;
}

int GetBoldNumWidth(int index, int size) {
	int result = 0;
	if(-1 == index)
		index = GetBoldNumIndex('8', size);
	else if(0 > index)
		return result;
	switch(size) {
		case 0:
			result = bold_num_font_width_11[index];
			break;
		case 1:
			result = bold_num_font_width_17[index];
			break;
		case 2:
			result = bold_num_font_width_34[index];
			break;
		case 3:
			result = bold_num_font_width_08[index];
			break;
		case 4:
			result = bold_num_font_width_38[index];
			break;
		case 5:
			result = bold_num_font_width_47[index];
			break;
		case 6:
			result = bold_num_font_width_60[index];
			break;
		default:
			break;
	}
	return result;
}

int GetBoldNumOffset(int index, int size) {
	int result = 0;
	if(0 > index)
		return result;
	switch(size) {
		case 0:
			result = bold_num_font_offset_11[index];
			break;
		case 1:
			result = bold_num_font_offset_17[index];
			break;
		case 2:
			result = bold_num_font_offset_34[index];
			break;
		case 3:
			result = bold_num_font_offset_08[index];
			break;
		case 4:
			result = bold_num_font_offset_38[index];
			break;
		case 5:
			result = bold_num_font_offset_47[index];
			break;
		case 6:
			result = bold_num_font_offset_60[index];
			break;
		default:
			break;
	}
	return result;
}

unsigned char * GetBoldNumDate(int size) {
	unsigned char * result = NULL;
	switch(size) {
		case 0:
			result = (unsigned char*)bold_num_font_data_11;
			break;
		case 1:
			result = (unsigned char*)bold_num_font_data_17;
			break;
		case 2:
			result = (unsigned char*)bold_num_font_data_34;
			break;
		case 3:
			result = (unsigned char*)bold_num_font_data_08;
			break;
		case 4:
			result = (unsigned char*)bold_num_font_data_38;
			break;
		case 5:
			result = (unsigned char*)bold_num_font_data_47;
			break;
		case 6:
			result = (unsigned char*)bold_num_font_data_60;
			break;
		default:
			break;
	}
	return result;
}

int GDI_GetBoldNumHeight(int size) {
	int result = 0;
	int offset = 0;
	int width = 0;
	switch(size) {
		case 0:
			offset = bold_num_font_offset_11[1] - bold_num_font_offset_11[0];
			width = bold_num_font_width_11[0];
			break;
		case 1:
			offset = bold_num_font_offset_17[1] - bold_num_font_offset_17[0];
			width = bold_num_font_width_17[0];
			break;
		case 2:
			offset = bold_num_font_offset_34[1] - bold_num_font_offset_34[0];
			width = bold_num_font_width_34[0];
			break;
		case 3:
			offset = bold_num_font_offset_08[1] - bold_num_font_offset_08[0];
			width = bold_num_font_width_08[0];
			break;
		case 4:
			offset = bold_num_font_offset_38[1] - bold_num_font_offset_38[0];
			width = bold_num_font_width_38[0];
			break;
		case 5:
			offset = bold_num_font_offset_47[1] - bold_num_font_offset_47[0];
			width = bold_num_font_width_47[0];
			break;
		case 6:
			offset = bold_num_font_offset_60[1] - bold_num_font_offset_60[0];
			width = bold_num_font_width_60[0];
			break;
		default:
			break;
	}
	result = offset / ((width+7)/8);
	return result;
}

int GDI_GetBoldNumWidth(char * str, int size) {
	int result = 0;
	int i = 0;
	for(i = 0; i < strlen(str); i++) {
		result += GetBoldNumWidth(GetBoldNumIndex(str[i], size), size);
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
	if(alignment > 0) {				//Align Left
		X = x;
	} else if(0 == alignment) {		//Align Center
		X = x - wsum/2;
	} else {						//Align Right
		X = x - wsum;
	}
	for(i = 0; i < strlen(str); i++) {
		index = GetBoldNumIndex(str[i], fontsize);
		if(-1 == index) {
			X += GetBoldNumWidth(index, fontsize);
			continue;
		} else if(0 > index) {
			continue;
		} else {
			wsum = GetBoldNumWidth(index, fontsize);
			height = GDI_GetBoldNumHeight(fontsize);
			GDI_PaintBuffer(X, Y, wsum, height, GetBoldNumDate(fontsize) + GetBoldNumOffset(index, fontsize), highlight);
			X += wsum;
		}
	}
}


