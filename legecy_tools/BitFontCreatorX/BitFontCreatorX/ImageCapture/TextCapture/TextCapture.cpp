#include "..\..\EnvSettings.h"
#include "..\..\stdafx.h"
#include <stdio.h>
#include <math.h>

#include "TextCapture.h"

extern TCHAR charSet[];

static TCHAR msg[2048+1];

void TxtCapture::CreateCSourceFiles(void)
{
	char charset[2048] = "";
#ifdef		__CHT_CHARACTERS__
	sprintf(charset, 
#if 0
	//#ifdef		__CHS_CHARACTERS__
"  一二三四五六七八九十百千万亿兆零断公里尺寸对区和最消天未电详细总年月日时分秒星期快慢方向校温度上下暂依北完背光是否大中小\
多料有无加振你他显为机距离间重量终点制错误变更运动模式跑散步自定义行车游泳其室内外类执训练设定带卷程计目标控制清除记录忆体\
状况传输全部警示表路线虚拟竞赛停止开启关闭罗盘始导航卫星位置址管理员系统用户信息链接休息关于卡路心跳频率搜寻找正常节约\
省单删末圈编辑伙伴配速性别划水高低起已文字语言声音响热隐藏版本储存加载前往直到蓝芽成功失败按态每次等待闹钟踏轮地图落差健\
身返回复值平均键气压力数传感器闵男女比升降恒亮暗反效果海拔沅圣科技司陈泰元初之作保留充繁池源冷与主题新角剩余耗后空格化环\
境选项乘般静段智能慧聪明放弃需要求简估算活备第套减我手脚指腰胸口缓取摇系页歇栏改器龄级权所覆少注过隔出敏归扫描道代东南西\
再双增被赢满型确才拍的网坡矮胖瘦表昨今明左右获得现在译历史英厘哩码呎吋吨斤克磅组子了扣划请不足列固提醒复合没包含括转换束\
处档案超锁暖铃");
	//#else
#endif
"  一二三四五六七八九十百千萬億兆零斷公里尺寸對區和最消天未電詳細總年月日時分秒星期快慢方向校溫度上下暫依北完背光是否大中小\
多料有無加振你他顯為機距離間重量終點制錯誤變更運動模式跑散步自訂行車游泳其室內外類執訓練設定帶捲程計目標控制清除記錄憶體\
狀況傳輸全部警示表路線虛擬競賽停止開啟關閉羅盤始導航衛星位置址管理員系統使用者資訊連結休息關於卡路心跳頻率搜尋找正常節約\
省單刪末圈編輯夥伴配速性別划水高低起已文字語言聲音響熱隱藏版本儲存載入前往直到藍芽成功失敗按態每次等待鬧鐘踏輪地圖落差健\
身返回復值平均鍵氣壓力數感應器閔男女比升降恆亮暗反效果海拔沅聖科技司陳泰元初之作保留充繁池源冷與主題新角剩餘耗後空格化環\
境選項乘般靜段智能慧聰明放棄需要求簡估算活備第套減我手腳指腰胸口緩取搖繫頁歇欄改器齡級權所覆少註過隔出敏歸掃描道代東南西\
再雙增被贏滿型確才拍的網坡矮胖瘦錶昨今明左右獲得現在譯歷史英厘哩碼呎吋噸斤克磅組子了扣劃請不足列固提醒複合沒包含括轉換束\
處檔案超鎖暖鈴解來據舊副長寬垂浬趟針");
#if 0
	//#endif		//__CHS_CHARACTERS__
#endif
#endif		//__CHT_CHARACTERS__

	if(NULL == data_table || NULL == offset_table || 0 == data_table_size || 0 == offset_table_size)
		return;
	//		Write Header File
	GetCurrentDirectory(2048, msg);
	dmsg(msg, 1);
#ifdef		__FULL_SET_CHARACTERS__
	wcscat_s(msg, 2048, L"\\FontTable.hxx");
#else
	wcscat_s(msg, 2048, L"\\BoldNumTable.hxx");
#endif		//__FULL_SET_CHARACTERS__
	HANDLE hfile = CreateFile(msg, GENERIC_READ | GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	WriteStringToFile(hfile,
#ifdef		__FULL_SET_CHARACTERS__
"\
#ifndef\t\t__W10_FONT_TABLE_H__\r\n\
#define\t\t__W10_FONT_TABLE_H__\r\n\r\n\
#ifdef  __cplusplus\r\n\
extern  \"C\" {\r\n\
#endif\r\n\r\n\
int GDI_GetStringWidth(char * str);\r\n\
void GDI_PrintString(int x, int y, char * str, int alignment, bool highlight);\r\n\r\n\
extern const unsigned char normal_font_width_table [];\r\n\
extern const unsigned short normal_font_offset_table[];\r\n\
extern const unsigned char normal_font_data_table[];\r\n\
"
#else
"\
#ifndef\t\t__BOLDNUMTABLE_H__\r\n\
#define\t\t__BOLDNUMTABLE_H__\r\n\r\n\
#ifdef  __cplusplus\r\n\
extern  \"C\" {\r\n\
#endif\r\n\r\n\
#define SPACE_WIDTH				6\r\n\r\n\
int GDI_GetBoldNumWidth(char * str);\r\n\
void GDI_PaintBoldNum(int x, int y, char * str, int alignment, int highlight, int fontsize);\r\n\r\n\
extern const unsigned char bold_num_font_width_table [];\r\n\
extern const unsigned short bold_num_font_offset_table[];\r\n\
extern const unsigned char bold_num_font_data_table[];\r\n\
"
#endif		//__FULL_SET_CHARACTERS__
	);
	WriteStringToFile(hfile,
#ifdef		__FULL_SET_CHARACTERS__
"\
\r\n\r\n\
#ifdef  __cplusplus\r\n\
}\r\n\
#endif\r\n\r\n\r\n#endif\t\t//__W10_FONT_TABLE_H__\r\n\r\n"
#else
"\
\r\n\r\n\
#ifdef  __cplusplus\r\n\
}\r\n\
#endif\r\n\r\n\r\n#endif\t\t//t__BOLDNUMTABLE_H__\r\n\r\n"
#endif		//__FULL_SET_CHARACTERS__
	);
	CloseHandle(hfile);
	
	/**********************************************************************************************/
	//		Write Source File
	GetCurrentDirectory(2048, msg);
#ifdef		__FULL_SET_CHARACTERS__
	wcscat_s(msg, 2048, L"\\FontUtil.cxx");
#else
	wcscat_s(msg, 2048, L"\\BoldNumUtil.cxx");
#endif
	hfile = CreateFile(msg, GENERIC_READ | GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	
	WriteStringToFile(hfile,
#ifdef		__FULL_SET_CHARACTERS__
"\r\n\
#include <stdio.h>\r\n\
#include <string.h>\r\n\
#include <math.h>\r\n\
#include \"FontTable.h\"\r\n\r\n\
const static int space_width = 4;\r\n\r\n\
int GetIndex(char c) {\r\n\
	if(0x20 > c || 0x7f < c) {\r\n\
		return -2;\r\n\
	}\r\n\
	else if(0x20 == c) {\r\n\
		return -1;\r\n\
	}\r\n\
	else {\r\n\
		return c - 0x21;\r\n\
	}\r\n\
}\r\n\r\n\
int GDI_GetStringWidth(char * str) {\r\n\
	int result = 0;\r\n\
	size_t i = 0;\r\n\
	for(i = 0; i < strlen(str); i++) {\r\n\
		int index = GetIndex(str[i]);\r\n\
		if(-1 == index) {\r\n\
			result += space_width;\r\n\
		}\r\n\
		if(0 <= index) {\r\n\
			result += normal_font_width_table[index];\r\n\
		}\r\n\
		else {\r\n\
			continue;\r\n\
		}\r\n\
	}\r\n\
	return result;\r\n\
}\r\n\r\n\
"
#else
"\r\n\
#include <stdio.h>\r\n\
#include <string.h>\r\n\
#include <math.h>\r\n\
#include \"BoldNumTable.h\"\r\n\r\n\
const static int space_width = 6;\r\n\r\n\
/*\r\n\
\t\tFor the bold numbers with height 10: set the value of parameter \"size\": 0\r\n\
\t\tFor the bold numbers with height 17: set the value of parameter \"size\": 1\r\n\
\t\tFor the bold numbers with height 34: set the value of parameter \"size\": 2\r\n\
\t\tFor the bold numbers with height 08: set the value of parameter \"size\": 3\r\n\
*/\r\n\r\n\
int GetBoldNumIndex(char c, int size) {\r\n\
	if(0x20 > c || 0x40 < c) {\r\n\
		return -2;\r\n\
	}\r\n\
	else if(0x20 == c) {\r\n\
		return -1;\r\n\
	}\r\n\
	else {\r\n\
		return c - 0x21;\r\n\
	}\r\n\
}\r\n\r\n\
int GDI_GetBoldNumWidth(char * str, int size) {\r\n\
	int index = 0;\r\n\
	int result = 0;\r\n\
	size_t i = 0;\r\n\
	for(i = 0; i < strlen(str); i++) {\r\n\
		index = GetBoldNumIndex(str[i], size);\r\n\
		if(-1 == index) {\r\n\
			result += space_width;\r\n\
		}\r\n\
		if(0 <= index) {\r\n\
			result += bold_num_font_width_table[index];\r\n\
		}\r\n\
		else {\r\n\
			continue;\r\n\
		}\r\n\
	}\r\n\
	return result;\r\n\
}\r\n\r\n\
"
#endif		//__FULL_SET_CHARACTERS__
);

	WriteStringToFile(hfile,
#ifdef		__FULL_SET_CHARACTERS__
"\r\n\
extern void GDI_PaintBuffer(int, int, int, int, unsigned char *, bool);\r\n\
void GDI_PrintString(int x, int y, char * str, int alignment, bool highlight) {\r\n\
	int wsum = GDI_GetStringWidth(str);\r\n\
	int X = 0;\r\n\
	int Y = y;\r\n\
	size_t i = 0;\r\n\
	int height = 0;\r\n\
	if(0 > alignment) {\r\n\
		X = x;\r\n\
	}\r\n\
	else if(0 == alignment) {\r\n\
		X = x - wsum/2;\r\n\
	}\r\n\
	else {\r\n\
		X = x - wsum;\r\n\
	}\r\n\
	for(i = 0; i < strlen(str); i++) {\r\n\
		int index = GetIndex(str[i]);\r\n\
		if(-1 == index) {\r\n\
			X += space_width;\r\n\
			continue;\r\n\
		}\r\n\
		else if(0 > index) {\r\n\
			continue;\r\n\
		}\r\n\
		else {\r\n\
			wsum = normal_font_width_table[index];\r\n\
		}\r\n\
		height = (int)((normal_font_offset_table[index+1] - normal_font_offset_table[index])/ceil((double)wsum/8));\r\n\
		GDI_PaintBuffer(X, Y, wsum, height, (unsigned char *)normal_font_data_table + normal_font_offset_table[index], highlight);\r\n\
		X += wsum;\r\n\
	}\r\n\
}\r\n\
"
#else
"\r\n\
extern void GDI_PaintBuffer(int, int, int, int, unsigned char *, bool);\r\n\
void GDI_PaintBoldNum(int x, int y, char * str, int alignment, int highlight, int fontsize) {\r\n\
	int wsum = GDI_GetBoldNumWidth(str, fontsize);\r\n\
	int X = 0;\r\n\
	int Y = y;\r\n\
	size_t i = 0;\r\n\
	int height = 0;\r\n\
	int index = 0;\r\n\
	if(0 > alignment) {\r\n\
		X = x;\r\n\
	}\r\n\
	else if(0 == alignment) {\r\n\
		X = x - wsum/2;\r\n\
	}\r\n\
	else {\r\n\
		X = x - wsum;\r\n\
	}\r\n\
	for(i = 0; i < strlen(str); i++) {\r\n\
		index = GetBoldNumIndex(str[i], fontsize);\r\n\
		if(-1 == index) {\r\n\
			X += space_width;\r\n\
			continue;\r\n\
		}\r\n\
		else if(0 > index) {\r\n\
			continue;\r\n\
		}\r\n\
		else {\r\n\
			wsum = bold_num_font_width_table[index];\r\n\
		}\r\n\
		height = (int)((bold_num_font_offset_table[index+1] - bold_num_font_offset_table[index])/ceil((double)wsum/8));\r\n\
		GDI_PaintBuffer(X, Y, wsum, height, (unsigned char *)bold_num_font_data_table + bold_num_font_offset_table[index], highlight);\r\n\
		X += wsum;\r\n\
	}\r\n\
}\r\n\
"
#endif		//__FULL_SET_CHARACTERS__
	);
	CloseHandle(hfile);
	//	Write Tables
	GetCurrentDirectory(2048, msg);
	//dmsg(msg);
#ifdef		__FULL_SET_CHARACTERS__
	wcscat_s(msg, 2048, L"\\FontTable.cxx");
#else
	wcscat_s(msg, 2048, L"\\BoldNumTable.cxx");
#endif		//__FULL_SET_CHARACTERS__
	hfile = CreateFile(msg, GENERIC_READ | GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
#ifdef		__FULL_SET_CHARACTERS__
	WriteStringToFile(hfile, "#include \"FontTable.h\"\r\n\r\n");
#else
	WriteStringToFile(hfile, "#include \"BoldNumTable.h\"\r\n\r\n");
#endif		//__FULL_SET_CHARACTERS__

	char buffer[4096+1] = {0};
	//		Width Table
#ifdef		__FULL_SET_CHARACTERS__
	WriteStringToFile(hfile, "const unsigned char normal_font_width_table [] = {\r\n");
#else
	WriteStringToFile(hfile, "const unsigned char bold_num_font_width_table  [] = {\r\n");
#endif		//__FULL_SET_CHARACTERS__
	{
		strcpy_s(buffer, 4096, "");
		for(DWORD i = 0; i < width_table.getCount(); i++)
		{
#ifdef		__CHT_CHARACTERS__
			sprintf_s(buffer+strlen(buffer), 4096, "\t%d,\t\t// \'%c%c\'\r\n", width_table[i], charset[2*i], charset[2*i+1]);//(0x30+i));
#else
	#ifndef		__BOLD_NUM_FIXED_WIDTH__
				sprintf_s(buffer+strlen(buffer), 4096, "\t%d,\t\t// \'%c\'\r\n", width_table[i], (0x30+i));
	#else
				sprintf_s(buffer+strlen(buffer), 4096, "\t%d,\t\t// \'%c\'\r\n", width_table[i], (0x21+i));
	#endif
#endif		//__CHT_CHARACTERS__
			if(0 == (1+i)%10) {
				//sprintf_s(buffer+strlen(buffer), 2048, "\r\n");
				WriteStringToFile(hfile, buffer);
				sprintf_s(buffer, 4096, "");
			}
		}
	}
	WriteStringToFile(hfile, buffer);
	WriteStringToFile(hfile, "};\r\n");
	//		Offset Table
#ifdef		__FULL_SET_CHARACTERS__
	WriteStringToFile(hfile, "const unsigned short normal_font_offset_table [] = {\r\n");
#else
	WriteStringToFile(hfile, "const unsigned short bold_num_font_offset_table  [] = {\r\n");
#endif		//__FULL_SET_CHARACTERS__
	{
		strcpy_s(buffer, 4096, "");
		for(DWORD i = 0; i < offset_table_size; i++)
		{
			if(offset_table_size == 1+i){
				sprintf_s(buffer+strlen(buffer), 4096, "\t%4d,\t\t// End of Data Buffer\r\n", offset_table[i], charset[i]);//(0x21+i));
			}
			else {
#ifdef		__CHT_CHARACTERS__
			sprintf_s(buffer+strlen(buffer), 4096, "\t%d,\t\t// \'%c%c\'\r\n", offset_table[i], charset[2*i], charset[2*i+1]);//(0x30+i));
#else
	#ifndef		__BOLD_NUM_FIXED_WIDTH__
					sprintf_s(buffer+strlen(buffer), 4096, "\t%d,\t\t// \'%c\'\r\n", offset_table[i], (0x30+i));
	#else
					sprintf_s(buffer+strlen(buffer), 4096, "\t%4d,\t\t// \'%c\'\r\n", offset_table[i], (0x30+i));
	#endif
#endif		//__CHT_CHARACTERS__
			}
			if(0 == (1+i)%10) {
				//sprintf_s(buffer+strlen(buffer), 2048, "\r\n");
				WriteStringToFile(hfile, buffer);
				sprintf_s(buffer, 4096, "");
			}
		}
	}
	WriteStringToFile(hfile, buffer);
	WriteStringToFile(hfile, "};\r\n");
	//		Data Table
#ifdef		__FULL_SET_CHARACTERS__
	WriteStringToFile(hfile, "const unsigned char normal_font_data_table[] = {\r\n");
#else
	WriteStringToFile(hfile, "const unsigned char bold_num_font_data_table[] = {\r\n");
#endif		//__FULL_SET_CHARACTERS__
	if(0)
	{
		//wsprintf(msg, L"DataTableSize: %d", DataTableSize);
		//dmsg(msg);
		strcpy_s(buffer, 4096, "");
		for(double i = 0; i < ceil((double)data_table_size/300); i++)
		{
			DWORD j = 0;
			strcpy_s(buffer, 4096, "");
			for(j = 0; j < 300; j++)
			{
				DWORD index = 300*(DWORD)i+j;
				if(data_table_size == index)
					break;
				//---
				sprintf_s(buffer+strlen(buffer), 4096, "0x%02x, ", data_table[index]);
				if(0 == (1+(DWORD)j)%10)
					sprintf_s(buffer+strlen(buffer), 4096, "\r\n");
			}
			WriteStringToFile(hfile, buffer);
			if(300 > j)
				break;
		}
	} else {
		char bigBuffer[409600] = {0};
		for(DWORD i = 0; i < width_table.getCount(); i++) {

#ifdef		__CHT_CHARACTERS__
			sprintf_s(bigBuffer, "\t// \'%c%c\'\r\n", charset[2*i], charset[2*i+1]);
#else
	#ifndef		__BOLD_NUM_FIXED_WIDTH__
				sprintf_s(bigBuffer, "\t// \'%c\'\r\n", (0x30 + i));
	#else
				sprintf_s(bigBuffer, "\t// \'%c\'\r\n", (0x30 + i));
	#endif
#endif		//__CHT_CHARACTERS__

			for(DWORD j = offset_table[i]; j < offset_table[i + 1]; j++) {
				sprintf_s(bigBuffer + strlen(bigBuffer), 409600, "0x%02x, ", data_table[j]);
				if(0 == (1+j-offset_table[i])%11) {
					strcat_s(bigBuffer, 409600, "\r\n");
				}
			}
			strcat_s(bigBuffer, 409600, "\r\n");
			WriteStringToFile(hfile, bigBuffer);
		}
				
	}
	WriteStringToFile(hfile, "};\r\n");
	CloseHandle(hfile);
}

