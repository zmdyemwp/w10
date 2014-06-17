
#include "..\stdafx.h"
#include "BitmapCapture.h"
#include <math.h>
#include <stdio.h>
#include "../EnvSettings.h"

static TCHAR msg[1024+1];

BitmapCapture::~BitmapCapture() {
	if(offset_table)
		delete [] offset_table;
	offset_table = NULL;
	if(data_table)
		delete [] data_table;
	data_table = NULL;
}

BOOL BitmapCapture::Analyse(HWND hwnd, DWORD X, DWORD Y) {
	bool result = TRUE;
	if(0 == X || 0 == Y) {
		RECT rc;
		GetClientRect(hwnd, &rc);
		X = rc.right;
		Y = rc.bottom;
	}
	wsprintf(msg, L"(X,Y) = (%d, %d)", X, Y);
	dmsg(msg);
	
	HDC hdc = GetDC(hwnd);
	//		Establish Height Table
	makeHeightTable(hdc, X, Y);

	//		Establish Width Table
	makeWidthTable(hdc, X, Y);
	
	//		Establish Data & Offset Table
	makeDataTableAndOffsetTable(hdc, X, Y);

	//---
	ReleaseDC(hwnd, hdc);
	return result;
}

void BitmapCapture::makeHeightTable(HDC hdc, DWORD X, DWORD Y)
{
	height_table.cleanAll();
	DWORD bw = 0;
	unsigned short h = 0;
	while(h <= Y) {
		BOOL r = TRUE;
		if(0 == bw) {
			r = findOneBlack(hdc, h, X);
		}
		else {
			r = checkAllWhite(hdc, h, X);
		}
		if(r) {
			DWORD c = height_table.addValue(h);
			++bw %= 2;
			//	for BPM & kCol & Units
			//if(1 == bw) h+=25;
		}
		++h;
	}
	if(1) {
		for(DWORD i = 0; i < height_table.getCount(); i++) {
			wsprintf(msg, L"height_table[%d] = %d", i, height_table[i]);
			dmsg(msg);
		}
	}
}

void BitmapCapture::makeWidthTable(HDC hdc, DWORD X, DWORD Y)
{
	width_table.cleanAll();
	width_l_table.cleanAll();
	width_r_table.cleanAll();
	
#ifdef		__CHT_CHARACTERS__

	width_l_table.addValue(0);
	width_r_table.addValue(5);

#endif		//__CHT_CHARACTERS__
	
	for(DWORD a = 0; a < height_table.getCount()/2; a++)
	{
		DWORD x0 = 0;
		while(x0 < X) {
			DWORD left = getNextStart(hdc, x0, X, a);
			if(X <= left) {
				break;
			}
			width_l_table.addValue(left);


			/*		60:		+16			+11	(semi-bold)
					47:		+12			+9
					1+37:	+10			+7
					34:		+9			+7
					1+16:	+4
					11:		+3
					1+1+8:	+2
			*/
#ifdef		__CHT_CHARACTERS__
			x0 = left + 10;			//	10: for font 11; 14: for font 16
#else
	#ifndef		__BOLD_NUM_FIXED_WIDTH__
				x0 = left + 2;
	#else
				x0 = left + 2;
	#endif		//__BOLD_NUM_FIXED_WIDTH__
#endif		//__CHT_CHARACTERS__

			DWORD right = getNextStop(hdc, x0, X, a);		//	start+2 to avoid mistake '\"'
			if(X <= right) {
				swprintf(msg, L"X <= right::%d <= %d", X, right);
				dmsg(msg);
				break;
			}
			width_r_table.addValue(right);
			x0 = right + 0;
		}
	}
	for(DWORD b = 0; b < width_l_table.getCount() && b < width_r_table.getCount(); b++) {
		//	set dx for space between symbols
		const int dx = 1;
		width_table.addValue(dx+width_r_table[b] - width_l_table[b]);
	}
	if(1) {
		wsprintf(msg, L"(L, R) = (%d, %d) => %d", width_l_table.getCount(), width_r_table.getCount(), width_table.getCount());
		dmsg(msg);
		for(DWORD x = 0; true && x < width_table.getCount(); x++) {
			if(100 < width_table[x]) {
				wsprintf(msg, L"width_table[%d] = %d :: (%d, %d)", x, width_table[x], width_l_table[x], width_r_table[x]);
			} else {
				wsprintf(msg, L"width_table[%d] = %d", x, width_table[x]);
			}
			dmsg(msg);
		}
	}
}

void BitmapCapture::makeDataTableAndOffsetTable(HDC hdc, DWORD X, DWORD Y)
{
	if(offset_table) {
		delete [] offset_table;
		offset_table = NULL;
		offset_table_size = 0;
	}
	if(data_table) {
		delete [] data_table;
		data_table = NULL;
		data_table_size = 0;
	}
	//---
	/*		8+1+1
			16+1
			37+1
	*/
	DWORD topMargin = 0;
	DWORD bottomMargin = 0;
	DWORD max_height = 0;
	for(DWORD i = 0; i < height_table.getCount(); i++) {
		DWORD h = height_table[2 * i + 1] - height_table[2 * i];
		if(max_height < h) {
			max_height = h;
		}
	}
#ifdef		__BOLD_NUM_FIXED_WIDTH__
	DWORD max_width = 0;
#endif		//__BOLD_NUM_FIXED_WIDTH__
	DWORD width_sum = 0;
	for(DWORD j = 0; j < width_table.getCount(); j++) {
		width_sum += (DWORD)ceil((double)width_table[j]/8);
#ifdef		__BOLD_NUM_FIXED_WIDTH__
		if(max_width < width_table[j]) {
			max_width = width_table[j];
		}
#endif		//__BOLD_NUM_FIXED_WIDTH__
	}
	if(1) {
		wsprintf(msg, L"(max_height, width_sum) = (%d, %d)", max_height, width_sum);
		dmsg(msg);
	}
	offset_table_size = width_table.getCount()+1;
#ifdef		__BOLD_NUM_FIXED_WIDTH__
	data_table_size = (topMargin + bottomMargin + max_height) * max_width * width_table.getCount();
#else
	data_table_size = (topMargin + bottomMargin + max_height) * width_sum;
#endif		//__BOLD_NUM_FIXED_WIDTH__
	offset_table = new DWORD [offset_table_size];
	data_table = new unsigned char [data_table_size];
	wsprintf(msg, L"data_table_size:%d", data_table_size);
	dmsg(msg);
	//		offset table
	offset_table[0] = 0;
	for(DWORD k = 0; k < width_table.getCount(); k++) {
#ifdef		__BOLD_NUM_FIXED_WIDTH__
		static DWORD maxwidthbytes = (DWORD)ceil((double)max_width/8);
		offset_table[k + 1] = offset_table[k] + (topMargin + bottomMargin + max_height) * maxwidthbytes;
#else
		offset_table[k + 1] = offset_table[k] + (topMargin + bottomMargin + max_height) * (DWORD)ceil((double)width_table[k]/8);
#endif		//__BOLD_NUM_FIXED_WIDTH__
	}
	//		data table
	DWORD x0 = 0;
	DWORD h = 0;
	DWORD ha = height_table[2 * h];
	DWORD hb = height_table[2 * h + 1];
	unsigned char * temp = NULL;

#ifdef		__CHT_CHARACTERS__
	memset(data_table, 0, data_table_size);
	for(DWORD l = 1; l < width_table.getCount(); l++) {
#else	
	for(DWORD l = 0; l < width_table.getCount(); l++) {
#endif		//__CHT_CHARACTERS__

		if(width_l_table[l] < x0) {
			h++;
			ha = height_table[2 * h];
			hb = height_table[2 * h + 1];
		}
		x0 = width_l_table[l];

#ifdef		__BOLD_NUM_FIXED_WIDTH__
		static DWORD tempRowLen = (DWORD)ceil((double)max_width/8);									//	(bytes)
		static DWORD tempSize = 8 * tempRowLen * (topMargin + bottomMargin + max_height);			//	(bits)
#else
		DWORD tempRowLen = (DWORD)ceil((double)width_table[l]/8);									//	(bytes)
		DWORD tempSize = 8 * tempRowLen * (topMargin + bottomMargin + max_height);					//	(bits)
#endif		//__BOLD_NUM_FIXED_WIDTH__
		temp = new unsigned char [tempSize];
		wsprintf(msg, L"tempSize:%d", tempSize);
		//dmsg(msg);
		memset(temp, 0, tempSize);
		for(DWORD y = ha; y < hb; y++) {
			if(ha == y) {
				//	add top margin
				//	do nothing ! since the initialization has set the values 0!
			}

			for(DWORD x = width_l_table[l]; x < width_r_table[l]; x++) {
#ifdef		__BOLD_NUM_FIXED_WIDTH__
				DWORD iPixel = 8 * tempRowLen * (y - ha + topMargin) + x - width_l_table[l] + (max_width - width_table[l]) / 2;
#else
				DWORD iPixel = 8 * tempRowLen * (y - ha + topMargin) + x - width_l_table[l];
#endif		//__BOLD_NUM_FIXED_WIDTH__
				if(0 == GetPixel(hdc, x, y)) {
					temp[iPixel] = 1;
					SetPixel(hdc, x, y, RGB(255,0,0));
				}
				else {
					temp[iPixel] = 0;
				}
			}
			if(hb == y+1) {
				//	add bottom margin
				//	do nothing! since the initialization has set the values 0!
			}
		}
		for(DWORD z = 0; z < tempRowLen * (topMargin + bottomMargin + max_height); z++) {
			data_table[offset_table[l] + z] =	temp[8 * z + 0] << 7 |
												temp[8 * z + 1] << 6 |
												temp[8 * z + 2] << 5 |
												temp[8 * z + 3] << 4 |
												temp[8 * z + 4] << 3 |
												temp[8 * z + 5] << 2 |
												temp[8 * z + 6] << 1 |
												temp[8 * z + 7];
		}
		delete [] temp;
#ifdef		__BOLD_NUM_FIXED_WIDTH__
		width_table.setValue(l, max_width);
#endif		//__BOLD_NUM_FIXED_WIDTH__
	}

	if(0) {
		wsprintf(msg, L"offset table size: %d\r\ndata table size: %d", offset_table_size, data_table_size);
		dmsg(msg);
		for(DWORD x = 0; x < offset_table_size; x++) {
			wsprintf(msg, L"offset_table[%d] = %d", x, offset_table[x]);
			dmsg(msg);
		}
	}
}

/********************************************************************************************
*
*		checkAllWhite, findOneBlack, getNextStart, and getNextStop
*			use checkAllWhite and findOneBlack to build height table
*			use height table in getNextStart and getNextStop to build width table
*
**/
BOOL BitmapCapture::checkAllWhite(HDC hdc, DWORD y, DWORD X)
{
	DWORD i = 0;
	for(i = 0; i < X; i++)
	{
		COLORREF rgb = GetPixel(hdc, i, y);
		if(0 == rgb)
			break;
		//SetPixel(hdc, i, y, RGB(0, 180, 0));
	}
	return X == i;
}

BOOL BitmapCapture::findOneBlack(HDC hdc, DWORD y, DWORD X)
{
	DWORD i = 0;
	for(i = 0; i < X; i++)
	{
		COLORREF rgb = GetPixel(hdc, i, y);
		if(0 == rgb)
			break;
		//SetPixel(hdc, i, y, RGB(0, 0, 180));
	}
	return X > i;
}

DWORD BitmapCapture::getNextStart(HDC hdc, DWORD x, DWORD X, DWORD ln)
{
	DWORD i = 0;
	for(i = x; i < X; i++)
	{
		DWORD j = 0;
		for(j = height_table[2*ln]; j < height_table[2*ln+1]; j++)
		{
			COLORREF rgb = GetPixel(hdc, i, j);
			//SetPixel(hdc, i, j, RGB(0, 0, 255));
			if(0 == rgb)
				break;
		}
		if(j < height_table[2*ln+1])
			break;
	}
	return i;
}

DWORD BitmapCapture::getNextStop(HDC hdc, DWORD x, DWORD X, DWORD ln)
{
	DWORD i = 0;
	for(i = x; i < X; i++)
	{
		DWORD j = 0;
		for(j = height_table[2*ln]; j < height_table[2*ln+1]; j++)
		{
			COLORREF rgb = GetPixel(hdc, i, j);
			//SetPixel(hdc, i, j, RGB(255, 0, 0));
			if(0 == rgb)
				break;
		}
		if(j == height_table[2*ln+1])
			break;
	}
	return i;
}



void BitmapCapture::WriteStringToFile(HANDLE hfile, char * str)
{
	char buffer[409600+1] = {0};
	DWORD w = 0;
	sprintf_s(buffer, 409600, "%s", str);
	WriteFile(hfile, buffer, strlen(buffer), &w, NULL);
}