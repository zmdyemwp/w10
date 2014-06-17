
#ifndef		__BITMAP_CAPTURE_MAX_CLASS_H__
#define		__BITMAP_CAPTURE_MAX_CLASS_H__

#include "LinkedList.h"

class BitmapCapture {
	public:
		BitmapCapture(){
			offset_table = NULL;
			data_table = NULL;
			offset_table_size = 0;
			data_table_size = 0;
		}
		~BitmapCapture();
		BOOL Analyse(HWND,DWORD=0,DWORD=0);
	private:	//	private functions
		BOOL checkAllWhite(HDC,DWORD,DWORD);
		BOOL findOneBlack(HDC,DWORD,DWORD);
		DWORD getNextStart(HDC, DWORD, DWORD, DWORD);
		DWORD getNextStop(HDC, DWORD, DWORD, DWORD);
		void makeHeightTable(HDC hdc, DWORD X, DWORD Y);
		void makeWidthTable(HDC hdc, DWORD X, DWORD Y);
		void makeDataTableAndOffsetTable(HDC hdc, DWORD X, DWORD Y);
	protected:	//	private data
		void WriteStringToFile(HANDLE hfile, char * str);
		HWND hwnd;
		DataList height_table;
		DataList width_table;
		DataList width_l_table;
		DataList width_r_table;
		DWORD offset_table_size;
		DWORD data_table_size;
		DWORD * offset_table;
		unsigned char * data_table;
};



#endif		//__BITMAP_CAPTURE_MAX_CLASS_H__

