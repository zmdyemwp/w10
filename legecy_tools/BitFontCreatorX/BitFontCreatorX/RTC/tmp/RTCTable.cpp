//#include <stdio.h>
//#include <string.h>

#include "Watch.h"
#include "gdi.h"

#include "RTC_AmPm.h"
#include "RTC_Battery.h"
#include "RTC_Date.h"
#include "RTC_Day.h"
#include "RTC_SecondTime.h"
#include "RTC_Time.h"
#include "RTC_YEAR.h"
#include "RTC_MONTH.h"

/*
		AM/PM:			set the value of parameter "type": 0
		Battery:		set the value of parameter "type": 1
		Date:			set the value of parameter "type": 2
		Day:			set the value of parameter "type": 3
		Time:			set the value of parameter "type": 4
		Second Time:	set the value of parameter "type": 5
		Year:			set the value of parameter "type": 6
		Month:			set the value of parameter "type": 7
*/

int GetRtcIndex(unsigned char * buf, int index, int type) {
	int result = 0;
	char c = buf[index];
	if(2 == type || 6 == type) {											//	date & year
		if(c < '0' || c > '9') {
			result = -1;
		} else {
			//	because '0' is placed at the end of the series (by Chris)
			result = (9 + c - '0') % 10;
		}
	} else if(4 == type || 5 == type) {						//	time/second time
		if(':' == c) {
			result = 10;
		} else if(c < '0' || c > '9') {
			result = -1;
		} else {
			//	because '0' is placed at the end of the series (by Chris)
			result = (9 + c - '0') % 10;
		}
	} else if(0 == type) {									//	AM/PM
		if('A' == buf[0] || 'a' == buf[0]) {
			result = 0;
		} else if('P' == buf[0] || 'p' == buf[0]) {
			result = 1;
		} else {
			result = -1;
		}
	} else if(1 == type) {									//	battery
		if('0' > buf[1] || '4' < buf[1]) {
			result = -1;
		}
		if('c' == buf[0]) {
			result = 0 + buf[1] - '0';
		} else if('b' == buf[0]) {
			result = 5 + buf[1] - '0';
		} else {
			result = -1;
		}
	} else if(3 == type) {									//	day
		if(buf[0] == 'S' && buf[1] == 'U' && buf[2] == 'N') {				//	SUN
			result = 0;
		} else if(buf[0] == 'M' && buf[1] == 'O' && buf[2] == 'N') {		//	MON
			result = 1;
		} else if(buf[0] == 'T' && buf[1] == 'U' && buf[2] == 'E') {		//	TUE
			result = 2;
		} else if(buf[0] == 'W' && buf[1] == 'E' && buf[2] == 'D') {		//	WED
			result = 3;
		} else if(buf[0] == 'T' && buf[1] == 'H' && buf[2] == 'U') {		//	THU
			result = 4;
		} else if(buf[0] == 'F' && buf[1] == 'R' && buf[2] == 'I') {		//	FRI
			result = 5;
		} else if(buf[0] == 'S' && buf[1] == 'A' && buf[2] == 'T') {		//	SAT
			result = 6;
		} else {
			result = -1;
		}
	} else if(7 == type) {
		if(buf[0] == 'J' && buf[1] == 'A' && buf[2] == 'N') {				//	JAN
			result = 0;
		} else if(buf[0] == 'F' && buf[1] == 'E' && buf[2] == 'B') {		//	FEB
			result = 1;
		} else if(buf[0] == 'M' && buf[1] == 'A' && buf[2] == 'R') {		//	MAR
			result = 2;
		} else if(buf[0] == 'A' && buf[1] == 'P' && buf[2] == 'R') {		//	APR
			result = 3;
		} else if(buf[0] == 'M' && buf[1] == 'A' && buf[2] == 'Y') {		//	MAY
			result = 4;
		} else if(buf[0] == 'J' && buf[1] == 'U' && buf[2] == 'N') {		//	JUN
			result = 5;
		} else if(buf[0] == 'J' && buf[1] == 'U' && buf[2] == 'L') {		//	JUL
			result = 6;
		} else if(buf[0] == 'A' && buf[1] == 'U' && buf[2] == 'G') {		//	AUG
			result = 7;
		} else if(buf[0] == 'S' && buf[1] == 'E' && buf[2] == 'P') {		//	SEP
			result = 8;
		} else if(buf[0] == 'O' && buf[1] == 'C' && buf[2] == 'T') {		//	OCT
			result = 9;
		} else if(buf[0] == 'N' && buf[1] == 'O' && buf[2] == 'V') {		//	NOV
			result = 10;
		} else if(buf[0] == 'D' && buf[1] == 'E' && buf[2] == 'C') {		//	DEC
			result = 11;
		} else {
			result = -1;
		}
	} else {
		//	unknown type
		result = -1;
	}
	return result;
}

int GetRtcWidth(int type) {
	int result = 0;
	switch(type) {
		case 0:
			result = rtc_am_pm_width;
			break;
		case 1:
			result = rtc_battery_width;
			break;
		case 2:
			result = rtc_date_width;
			break;
		case 3:
			result = rtc_day_width;
			break;
		case 4:
			result = rtc_time_width;
			break;
		case 5:
			result = rtc_second_time_width;
			break;
		case 6:
			result = rtc_year_width;
			break;
		case 7:
			result = rtc_month_width;
			break;
		default:
			break;
	}
	return result;
}

int GetRtcOffset(int index, int type) {
	int result = 0;
	switch(type) {
		case 0:
			result = rtc_am_pm_offset;
			break;
		case 1:
			result = rtc_battery_offset;
			break;
		case 2:
			result = rtc_date_offset;
			break;
		case 3:
			result = rtc_day_offset;
			break;
		case 4:
			result = rtc_time_offset;
			break;
		case 5:
			result = rtc_second_time_offset;
			break;
		case 6:
			result = rtc_year_offset;
			break;
		case 7:
			result = rtc_month_offset;
			break;
		default:
			break;
	}
	return index * result;
}

unsigned char * GetRtcData(int size) {
	unsigned char * result = NULL;
	switch(size) {
		case 0:
			result = (unsigned char*)rtc_am_pm_data;
			break;
		case 1:
			result = (unsigned char*)rtc_battery_data;
			break;
		case 2:
			result = (unsigned char*)rtc_date_data;
			break;
		case 3:
			result = (unsigned char*)rtc_day_data;
			break;
		case 4:
			result = (unsigned char*)rtc_time_data;
			break;
		case 5:
			result = (unsigned char*)rtc_second_time_data;
			break;
		case 6:
			result = (unsigned char*)rtc_year_data;
			break;
		case 7:
			result = (unsigned char*)rtc_month_data;
			break;
		default:
			break;
	}
	return result;
}

int GDI_GetRtcHeight(int type) {
	int result = 0;
	int offset = 0;
	int width = 0;
	offset = GetRtcOffset(1, type);
	width = GetRtcWidth(type);
	if(0 == width || 0 == offset)
		return 0;
	result = (int)( offset / ((7 + width)/8) );
	return result;
}

int GDI_GetRtcWidth(unsigned char * str, int type) {
	int result = 0;
	if(0 == type || 1 == type || 3 == type || 6 == type || 7 == type) {
		result = GetRtcWidth(type);
	} else if(2 == type || 4 == type || 5 == type) {
		result = GetRtcWidth(type) * strlen((char*)str);
	} else {
		result = 0;
	}
	return result;
}


extern void GDI_PaintBuffer(int, int, int, int, unsigned char *, bool);
int GDI_PaintRtc(int x, int y, unsigned char * str, int alignment, int highlight, int type) {
	int wsum = GDI_GetRtcWidth(str, type);
	int X = 0;
	int Y = y;
	size_t i = 0;
	int height = 0;
	int index = 0;
	int len = 0;

	if(0 > alignment) {
		X = x;
	}
	else if(0 == alignment) {
		X = x - wsum/2;
	}
	else {
		X = x - wsum;
	}
	//--------------------------------------------
	if(2 == type || 4 == type || 5 == type) {
		len = strlen((char*)str);
	} else if(0 == type || 1 == type || 3 == type) {
		len = 1;
	}
	for(i = 0; i < len; i++) {
		//index = GetRtcIndex(str[i], type);
		index = GetRtcIndex(str, i, type);
		if(-1 == index) {
			X += GetRtcWidth(type);
			continue;
		}
		else if(0 > index) {
			continue;
		}
		else {
			wsum = GetRtcWidth(type);
		}
		height = GDI_GetRtcHeight(type);
		GDI_PaintBuffer(X, Y, wsum, height, GetRtcData(type) + GetRtcOffset(index, type), highlight);
		X += wsum;
	}
	return wsum;
}
