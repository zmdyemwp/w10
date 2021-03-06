
//

#include "EnvSettings.h"

#include "stdafx.h"
#include "BitFontCreatorX.h"
#include "RTC_TABLE.h"

#include "WatchBackground.h"

#ifdef		__FULL_SET_CHARACTERS__
#include "FontTable.h"
extern void GDI_PrintfString(int x, int y, char * str, int alignment, bool highlight);
#else
//#include "BoldNumTable.h"
extern int GDI_GetBoldNumHeight(int size);
extern int GDI_GetBoldNumWidth(char * str, int size);
extern void GDI_PaintBoldNum(int x, int y, char * str, int alignment, int highlight, int fontsize);

#endif		//__FULL_SET_CHARACTERS__

//#include "ImageCapture\BitmapCapture.h"
#include "ImageCapture\TextCapture\TextCapture.h"

#include <stdio.h>
#include <math.h>

#define MAX_LOADSTRING 100

#define	dim(x) sizeof(x)/sizeof(x[0])

TCHAR temp[2048+1] = {0};

HINSTANCE hInst;
TCHAR szTitle[MAX_LOADSTRING]; 
TCHAR szWindowClass[MAX_LOADSTRING]; 

ATOM				MyRegisterClass(HINSTANCE hInstance);
BOOL				InitInstance(HINSTANCE, int);
LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);

TCHAR charSet[1024] = {0};

int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{

#ifdef		__CHT_CHARACTERS__
	
	#ifdef		__CHS_CHARACTERS__
		wsprintf(charSet,
L"一 二 三 四 五 六 七 八 九 十 百 千 万 亿 兆 零 断 公 里 尺 寸 对 区 和 最 消 天 未 电 详 细 总 年 月 日 时 分 秒 星 期 快 慢 方 向 校 温 度 上 下 暂 依 北 完 背 光 是 否 大 中 小\r\n\
多 料 有 无 加 振 你 他 显 为 机 距 离 间 重 量 终 点 制 错 误 变 更 运 动 模 式 跑 散 步 自 订 行 车 游 泳 其 室 内 外 类 执 训 练 设 定 带 卷 程 计 目 标 控 制 清 除 记 录 忆 体\r\n\
状 况 传 输 全 部 警 示 表 路 线 虚 拟 竞 赛 停 止 开 启 关 闭 罗 盘 始 导 航 卫 星 位 置 址 管 理 员 系 统 使 用 者 资 讯 连 结 休 息 关 于 卡 路 心 跳 频 率 搜 寻 找 正 常 节 约\r\n\
省 单 删 末 圈 编 辑 伙 伴 配 速 性 别 划 水 高 低 起 已 文 字 语 言 声 音 响 热 隐 藏 版 本 储 存 载 入 前 往 直 到 蓝 芽 成 功 失 败 按 态 每 次 等 待 闹 钟 踏 轮 地 图 落 差 健\r\n\
身 返 回 复 值 平 均 键 气 压 力 数 感 应 器 闵 男 女 比 升 降 恒 亮 暗 反 效 果 海 拔 沅 圣 科 技 司 陈 泰 元 初 之 作 保 留 充 繁 池 源 冷 与 主 题 新 角 剩 余 耗 后 空 格 化 环\r\n\
境 选 项 乘 般 静 段 智 能 慧 聪 明 放 弃 需 要 求 简 估 算 活 备 第 套 减 我 手 脚 指 腰 胸 口 缓 取 摇 系 页 歇 栏 改 器 龄 级 权 所 覆 少 注 过 隔 出 敏 归 扫 描 道 代 东 南 西\r\n\
再 双 增 被 赢 满 型 确 才 拍 的 网 坡 矮 胖 瘦 表 昨 今 明 左 右 获 得 现 在 译 历 史 英 厘 哩 码 呎 吋 吨 斤 克 磅 组 子 了 扣 划 请 不 足 列 固 提 醒 复 合 没 包 含 括 转 换 束\r\n\
处 档 案 超 锁 暖 铃 解 来 据 旧 副 长 宽 垂 里 趟 针");
	#else
	wsprintf(charSet,
L"一 二 三 四 五 六 七 八 九 十 百 千 萬 億 兆 零 斷 公 里 尺 寸 對 區 和 最 消 天 未 電 詳 細 總 年 月 日 時 分 秒 星 期 快 慢 方 向 校 溫 度 上 下 暫 依 北 完 背 光 是 否 大 中 小\r\n\
多 料 有 無 加 振 你 他 顯 為 機 距 離 間 重 量 終 點 制 錯 誤 變 更 運 動 模 式 跑 散 步 自 訂 行 車 游 泳 其 室 內 外 類 執 訓 練 設 定 帶 捲 程 計 目 標 控 制 清 除 記 錄 憶 體\r\n\
狀 況 傳 輸 全 部 警 示 表 路 線 虛 擬 競 賽 停 止 開 啟 關 閉 羅 盤 始 導 航 衛 星 位 置 址 管 理 員 系 統 使 用 者 資 訊 連 結 休 息 關 於 卡 路 心 跳 頻 率 搜 尋 找 正 常 節 約\r\n\
省 單 刪 末 圈 編 輯 夥 伴 配 速 性 別 划 水 高 低 起 已 文 字 語 言 聲 音 響 熱 隱 藏 版 本 儲 存 載 入 前 往 直 到 藍 芽 成 功 失 敗 按 態 每 次 等 待 鬧 鐘 踏 輪 地 圖 落 差 健\r\n\
身 返 回 復 值 平 均 鍵 氣 壓 力 數 感 應 器 閔 男 女 比 升 降 恆 亮 暗 反 效 果 海 拔 沅 聖 科 技 司 陳 泰 元 初 之 作 保 留 充 繁 池 源 冷 與 主 題 新 角 剩 餘 耗 後 空 格 化 環\r\n\
境 選 項 乘 般 靜 段 智 能 慧 聰 明 放 棄 需 要 求 簡 估 算 活 備 第 套 減 我 手 腳 指 腰 胸 口 緩 取 搖 繫 頁 歇 欄 改 器 齡 級 權 所 覆 少 註 過 隔 出 敏 歸 掃 描 道 代 東 南 西\r\n\
再 雙 增 被 贏 滿 型 確 才 拍 的 網 坡 矮 胖 瘦 錶 昨 今 明 左 右 獲 得 現 在 譯 歷 史 英 厘 哩 碼 呎 吋 噸 斤 克 磅 組 子 了 扣 劃 請 不 足 列 固 提 醒 複 合 沒 包 含 括 轉 換 束\r\n\
處 檔 案 超 鎖 暖 鈴 解 來 據 舊 副 長 寬 垂 浬 趟 針");
	#endif		//__CHS_CHARACTERS__

#else

	#ifdef __FULL_SET_CHARACTERS__
		//	char from 0x21 to 0x7f
	
		for(char c = 0x21; c < 0x30; c++) {
			wsprintf(charSet + wcslen(charSet), L"%c  ", c);
		}	wcscat_s(charSet, 1024, L"\r\n");
		for(char c = 0x30; c < 0x41; c++) {
			wsprintf(charSet + wcslen(charSet), L"%c  ", c);
		}	wcscat_s(charSet, 1024, L"\r\n");
		for(char c = 0x41; c < 0x7b; c++) {
			wsprintf(charSet + wcslen(charSet), L"%c  ", c);
		}	wcscat_s(charSet, 1024, L"\r\n");
		for(char c = 0x7b; c < 0x7f; c++) {
			wsprintf(charSet + wcslen(charSet), L"%c  ", c);
		}	wcscat_s(charSet, 1024, L"\r\n");
	
	#else
		//	numeric symbols
		#ifndef 	__SO_BIG_NUM__
		
				#ifndef		__BOLD_NUM_FIXED_WIDTH__
						for(char c = 0x21; c < 0x40; c++) {
							wsprintf(charSet + wcslen(charSet), L"%c  ", c);
						}
				#else
						for(char c = 0x30; c < 0x3a; c++) {
							wsprintf(charSet + wcslen(charSet), L"%c  ", c);
						}
				#endif		//__BOLD_NUM_FIXED_WIDTH__
		
		#else
		
				#ifdef		__BOLD_NUM_FIXED_WIDTH__
						wcscpy(charSet, L"0123456789");
				#else
						wcscpy(charSet, L"!\"#$%&&\'()*+,-./0123456789:;<=>?");
				#endif
		
		#endif		//__SO_BIG_NUM__
		wcscat_s(charSet, 1024, L"\r\n");

	#endif

#endif		//__CHT_CHARACTERS__


	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

 	
	MSG msg;
	HACCEL hAccelTable;


	LoadString(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadString(hInstance, IDC_BITFONTCREATORX, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);


	if (!InitInstance (hInstance, nCmdShow))
	{
		return FALSE;
	}

	hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_BITFONTCREATORX));


	while (GetMessage(&msg, NULL, 0, 0))
	{
		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

	return (int) msg.wParam;
}




ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style			= CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc	= WndProc;
	wcex.cbClsExtra		= 0;
	wcex.cbWndExtra		= 0;
	wcex.hInstance		= hInstance;
	wcex.hIcon			= LoadIcon(hInstance, MAKEINTRESOURCE(IDI_BITFONTCREATORX));
	wcex.hCursor		= LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground	= (HBRUSH)(COLOR_WINDOW+1);
	wcex.lpszMenuName	= MAKEINTRESOURCE(IDC_BITFONTCREATORX);
	wcex.lpszClassName	= szWindowClass;
	wcex.hIconSm		= LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

	return RegisterClassEx(&wcex);
}


HWND	g_hwnd;
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   HWND hWnd;

   hInst = hInstance;

   g_hwnd = hWnd = CreateWindowEx(0/*WS_EX_TOPMOST*/, szWindowClass, szTitle, WS_OVERLAPPEDWINDOW | WS_MAXIMIZE,
      0, 0, CW_USEDEFAULT, 0, NULL, NULL, hInstance, NULL);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

#include "CHT_CHS/CHS_11.h"
#include "CHT_CHS/CHT_11.h"
#include "CHT_CHS/CHS_16.h"
#include "CHT_CHS/CHT_16.h"
#include "iconBT_MESSAGE.h"

static bool bgray = true;
void gray(HDC hdc, DWORD X, DWORD Y);
void PrintString(HWND hwnd, HDC hdc, char * str, DWORD x, DWORD y, int a, bool highlight);
extern int GDI_GetBoldNumHeight(int size);

extern int GDI_GetRtcHeight(int type);
extern int GDI_GetRtcWidth(unsigned char * str, int type);
extern int GDI_PaintRtc(int x, int y, unsigned char * str, int alignment, int highlight, int type);

extern unsigned char GDI_GetIconHeight(unsigned char * buf);
extern unsigned char GDI_GetIconWidth(unsigned char * buf);
extern int GDI_PaintIcon(int x, int y, unsigned char * buf, int alignment, int highlight, int type);

void GDI_PaintBuffer(int x, int y, int w, int h, unsigned char * buffer, bool highlight);

static DWORD TXT_X = 0;
static DWORD TXT_Y = 0;
void theThread(void) {
	if(bgray)
	{
		HDC hdc = GetDC(g_hwnd);
		gray(hdc, TXT_X, TXT_Y);
		bgray = false;
		ReleaseDC(g_hwnd, hdc);
	}
	if( ! IsWindow(g_hwnd))
		return;
	TxtCapture * p = new TxtCapture();
	if(1) {
		p->Analyse(g_hwnd, TXT_X, TXT_Y);
	}
	else {
		p->Analyse(g_hwnd);
	}
	p->CreateCSourceFiles();
	delete p;
	MessageBox(NULL, L"OK", NULL, 0);
}

#include "Goldtek_Openning.h"
#include "ShoU_Openning.h"
#include "testOpenning.h"

#include "big_sail.h"
#include "big_swim.h"
#include "small_sail.h"
#include "small_swim.h"
#include "mh_up.h"

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	int wmId, wmEvent;
	PAINTSTRUCT ps;
	HDC hdc;
	static DWORD windowwidth;

	switch (message)
	{
	case WM_COMMAND:
		wmId    = LOWORD(wParam);
		wmEvent = HIWORD(wParam);

		switch (wmId)
		{
		case IDM_EXPORT:
			break;
		case IDM_TEST:
			{
				HANDLE h = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)theThread, NULL, 0, 0);
				CloseHandle(h);
			}
			break;
		case IDM_ABOUT:
			DialogBox(hInst, MAKEINTRESOURCE(IDD_RTC_TABLE), hWnd, RTCProc);
			break;
		case IDM_EXIT:
			DestroyWindow(hWnd);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
		break;
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);
		{
			RECT rc;
			GetClientRect(hWnd, &rc);
			windowwidth = rc.right;
			FillRect(hdc, &rc, (HBRUSH)GetStockObject(WHITE_BRUSH));
			rc.top = rc.bottom/2;
			HBRUSH hb = CreateSolidBrush(RGB(10,10,10));
			FillRect(hdc, &rc, hb);
			DeleteObject(hb);
			rc.top = 0;
			SetTextColor(hdc, RGB(0,0,0));
			//	17, 4, Tahoma
			//	MS Sans Serif, Terminal
			//	System, Courier, Small Fonts
			//	PMingLiU
			//	AliceNotes, Segoe UI Symbol, Verdana for bold number
			/*	Verdana 	74, 93 for height	60,		58+1+1;			47+7+6
							59, 72 for height	47,		45+1+1;			37+5+5
							46, 58 for height	37+1,	36+1+1;			29+5+4
							42, 50 for height	34,		31+2+1;			26+4+4
							20, 25 for height	16+1,	15+1+1;			12+3+2
							13, 15 for height	11,		8+1+1;			08+2+1
							FW_BOLD FW_SEMIBOLD FW_EXTRABOLD
							FW_NORMAL FW_BLACK
				Small Fonts	10 for height 8+1+1
				CHT & CHS	16 for height 16
							12 for height 11
			*/
			HFONT font = CreateFont(12, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, ANSI_CHARSET,
				OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, FF_DONTCARE, L"Small Fonts");
			HFONT hfont = (HFONT) SelectObject(hdc, font);

			DrawText(hdc, charSet, -1, &rc, DT_LEFT | DT_TOP);
			DrawText(hdc, charSet, -1, &rc, DT_CALCRECT);
			TXT_X = rc.right+20;
			TXT_Y = rc.bottom+20;
			DeleteObject(font);
			/*
			if(bgray)
			{
				gray(hdc, TXT_X, TXT_Y);
				bgray = false;
			}
			*/
		}
		EndPaint(hWnd, &ps);


		if(1) {
			GDI_PaintBuffer(10, 10, 15, 11, (unsigned char *)small_swim_buffer, -1);
			GDI_PaintBuffer(10, 24, 13, 11, (unsigned char *)small_sail_buffer, -1);
			GDI_PaintBuffer(10, 36, 30, 22, (unsigned char *)big_swim_buffer, -1);
			GDI_PaintBuffer(10, 60, 26, 22, (unsigned char *)big_sail_buffer, -1);
			GDI_PaintBuffer(10, 88, 11, 12, (unsigned char *)mh_up_buffer, -1);
		} else if(0) {

			const unsigned char icon_list_gps_off[] = {
				0x03, 0x00, 0x07, 0x80, 0x0f, 0xc0, 0x1c, 0xe0, 0x38, 0x70, 0x70, 0x38, 0xe7, 0x9c, 0x67, 0x98, 0x27, 0x90, 0x27, 0x90, 0x3f, 0xf0, 
			};
			GDI_PaintBuffer(10, 10, 14, 11, (unsigned char *)icon_list_gps_off, -1);
			
			const unsigned char icon_list_heart_beat[] = {
				0x31, 0x80, 0x7b, 0xc0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0x7f, 0xc0, 0x7f, 0xc0, 0x3f, 0x80, 0x1f, 0x00, 0x0e, 0x00, 0x04, 0x00, 
			};
			GDI_PaintBuffer(25, 10, 11, 11, (unsigned char *)icon_list_heart_beat, -1);
			
			const unsigned char icon_list_timer[] = {
				0x0e, 0x00, 0x44, 0x40, 0x3f, 0x80, 0x64, 0xc0, 0xc0, 0x60, 0x84, 0x20, 0xc7, 0x60, 0x80, 0x20, 0xc0, 0x60, 0x64, 0xc0, 0x1f, 0x00, 
			};
			GDI_PaintBuffer(37, 10, 11, 11, (unsigned char *)icon_list_timer, -1);
			
			const unsigned char icon_list_compound[] = {
				0x06, 0x00, 0x09, 0x00, 0x09, 0x00, 0x10, 0x80, 0x30, 0xc0, 0x20, 0x40, 0x60, 0x60, 0x40, 0x20, 0x80, 0x10, 0x80, 0x10, 0xff, 0xf0, 
			};
			GDI_PaintBuffer(49, 10, 12, 11, (unsigned char *)icon_list_compound, -1);
			
			const unsigned char icon_list_step_count[] = {
				0x40, 0x00, 0x00, 0x77, 0x80, 0x00, 0xe4, 0xc0, 0x00, 0xc0, 0x70, 0x00, 0xc0, 0x5c, 0x00, 0xc0, 0x15, 0x80, 0xc0, 0x04, 0x80, 0x80, 
				0x00, 0xc0, 0xee, 0x1f, 0x80, 0x7f, 0xff, 0x00, 0x01, 0xf0, 0x00, 
			};
			GDI_PaintBuffer(62, 10, 18, 11, (unsigned char *)icon_list_step_count, -1);
			
			const unsigned char icon_list_step_rate[] = {
				0xf0, 0x00, 0x39, 0x80, 0x0c, 0x40, 0x06, 0x20, 0x2f, 0x20, 0x28, 0xa0, 0x27, 0xa0, 0x23, 0x00, 0x11, 0x80, 0x0c, 0xe0, 0x00, 0x78, 
			};
			GDI_PaintBuffer(81, 10, 13, 11, (unsigned char *)icon_list_step_rate, -1);


		} else if(0) {

			unsigned char height = 16;
#ifndef		__CHS_CHARACTERS__
			unsigned char* pwidth = (unsigned char*)cht_16_width_table;
			unsigned short* poffset = (unsigned short*)cht_16_offset_table;
			unsigned char* pdata = (unsigned char*)cht_16_data_table;
#else
			unsigned char* pwidth = (unsigned char*)chs_16_width_table;
			unsigned short* poffset = (unsigned short*)chs_16_offset_table;
			unsigned char* pdata = (unsigned char*)chs_16_data_table;
#endif		//__CHS_CHARACTERS__
			for(int i = 1; i <= 60; i++) {
				GDI_PaintBuffer(10+20*i, 20, pwidth[i], height, (unsigned char*)pdata + poffset[i], -1);
			}
			for(int i = 61; i <= 120; i++) {
				GDI_PaintBuffer(10+20*(i-60), 40, pwidth[i], height, (unsigned char*)pdata + poffset[i], -1);
			}
			for(int i = 121; i <= 180; i++) {
				GDI_PaintBuffer(10+20*(i-120), 60, pwidth[i], height, (unsigned char*)pdata + poffset[i], -1);
			}
			for(int i = 181; i <= 240; i++) {
				GDI_PaintBuffer(10+20*(i-180), 80, pwidth[i], height, (unsigned char*)pdata + poffset[i], -1);
			}
			for(int i = 241; i <= 300; i++) {
				GDI_PaintBuffer(10+20*(i-240), 100, pwidth[i], height, (unsigned char*)pdata + poffset[i], -1);
			}
			for(int i = 301; i <= 360; i++) {
				GDI_PaintBuffer(10+20*(i-300), 120, pwidth[i], height, (unsigned char*)pdata + poffset[i], -1);
			}
			for(int i = 361; i <= 420; i++) {
				GDI_PaintBuffer(10+20*(i-360), 140, pwidth[i], height, (unsigned char*)pdata + poffset[i], -1);
			}
			for(int i = 421; i <= 424; i++) {
				GDI_PaintBuffer(10+20*(i-420), 160, pwidth[i], height, (unsigned char*)pdata + poffset[i], -1);
			}

		} else if(0) {
			GDI_PaintBuffer(100, 100, 160, 100, (unsigned char*)watch_background_data_table, 0);
		} else if(0) {
			DWORD x0 = 0;
			DWORD y0 = 0;
			unsigned char buf[8] = {0};
			strcpy_s((char*)buf, 8, "r"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "s"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "d"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "f"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "F"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "b"); GDI_PaintIcon(x0, y0, buf, 1,0,0);
			x0 = 0; y0 += GDI_GetIconHeight(buf);
			strcpy_s((char*)buf, 8, "S"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "D"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "B"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "R"); GDI_PaintIcon(x0, y0, buf, 1,0,0);
			x0 = 0; y0 += GDI_GetIconHeight(buf);
			strcpy_s((char*)buf, 8, "bpm"); GDI_PaintIcon(x0, y0, buf, 1,0,0);
			x0 = 0; y0 += GDI_GetIconHeight(buf);
			strcpy_s((char*)buf, 8, "kCol"); GDI_PaintIcon(x0, y0, buf, 1,0,0);
			x0 = 0; y0 += GDI_GetIconHeight(buf);
			strcpy_s((char*)buf, 8, "kh"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "km"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "kg"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "mm"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "cm"); GDI_PaintIcon(x0, y0, buf, 1,0,0);
			x0 = 0; y0 += GDI_GetIconHeight(buf);
			strcpy_s((char*)buf, 8, "g"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "m"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "%"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			x0 = 0; y0 += GDI_GetIconHeight(buf);
			strcpy_s((char*)buf, 8, "u"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "w"); GDI_PaintIcon(x0, y0, buf, 1,0,0);
			x0 = 0; y0 += GDI_GetIconHeight(buf);
			strcpy_s((char*)buf, 8, "U"); GDI_PaintIcon(x0, y0, buf, 1,0,0); x0 += GDI_GetIconWidth(buf);
			strcpy_s((char*)buf, 8, "W"); GDI_PaintIcon(x0, y0, buf, 1,0,0);
			x0 = 0; y0 += GDI_GetIconHeight(buf);
			strcpy_s((char*)buf, 8, "D"); GDI_PaintIcon(x0, y0, buf, 1,0,0);

		} else if(0) {
			char charset[1024] = "";
#ifdef		__FULL_SET_CHARACTERS__
			for(int i = 0x21; i < 0x7f; i++) {
				sprintf_s(charset + strlen(charset), sizeof(charset) - strlen(charset), "%c", i);
			}
			GDI_PrintString(windowwidth/2, 100, charset, 0, true);
#else
				if(1) {
					DWORD x0 = 0;
					DWORD y0 = 0;
					GDI_PaintRtc(x0 , y0, (unsigned char*)"A", -1, 0, 0);	x0 += GDI_GetRtcWidth(NULL, 0);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"P", -1, 0, 0);	x0 = 0; y0 += GDI_GetRtcHeight(0)+1;
					GDI_PaintRtc(x0 , y0, (unsigned char*)"c0", -1, 0, 1);	x0 += GDI_GetRtcWidth(NULL, 1);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"c1", -1, 0, 1);	x0 += GDI_GetRtcWidth(NULL, 1);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"c2", -1, 0, 1);	x0 += GDI_GetRtcWidth(NULL, 1);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"c3", -1, 0, 1);	x0 += GDI_GetRtcWidth(NULL, 1);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"c4", -1, 0, 1);	x0 = 0; y0 += GDI_GetRtcHeight(1)+1;
					GDI_PaintRtc(x0 , y0, (unsigned char*)"b0", -1, 0, 1);	x0 += GDI_GetRtcWidth(NULL, 1);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"b1", -1, 0, 1);	x0 += GDI_GetRtcWidth(NULL, 1);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"b2", -1, 0, 1);	x0 += GDI_GetRtcWidth(NULL, 1);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"b3", -1, 0, 1);	x0 += GDI_GetRtcWidth(NULL, 1);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"b4", -1, 0, 1);	x0 = 0; y0 += GDI_GetRtcHeight(1)+1;
					GDI_PaintRtc(x0 , y0, (unsigned char*)"0123456789", -1, 0, 2); y0 += GDI_GetRtcHeight(2);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"SUN", -1, 0, 3); x0 += GDI_GetRtcWidth(NULL, 3);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"MON", -1, 0, 3); x0 += GDI_GetRtcWidth(NULL, 3);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"TUE", -1, 0, 3); x0 += GDI_GetRtcWidth(NULL, 3);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"WED", -1, 0, 3); x0 += GDI_GetRtcWidth(NULL, 3);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"THU", -1, 0, 3); x0 += GDI_GetRtcWidth(NULL, 3);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"FRI", -1, 0, 3); x0 += GDI_GetRtcWidth(NULL, 3);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"SAT", -1, 0, 3); x0 = 0; y0 += GDI_GetRtcHeight(2);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"0123456789:", -1, 0, 4); y0 += GDI_GetRtcHeight(4);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"0123456789:", -1, 0, 5); y0 += GDI_GetRtcHeight(5);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"0123456789:", -1, 0, 6); y0 += GDI_GetRtcHeight(6);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"JAN", -1, 0, 7); y0 += GDI_GetRtcHeight(7);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"FEB", -1, 0, 7); y0 += GDI_GetRtcHeight(7);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"MAR", -1, 0, 7); y0 += GDI_GetRtcHeight(7);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"APR", -1, 0, 7); y0 += GDI_GetRtcHeight(7);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"MAY", -1, 0, 7); y0 += GDI_GetRtcHeight(7);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"JUN", -1, 0, 7); y0 += GDI_GetRtcHeight(7);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"JUL", -1, 0, 7); y0 += GDI_GetRtcHeight(7);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"AUG", -1, 0, 7); y0 += GDI_GetRtcHeight(7);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"SEP", -1, 0, 7); y0 += GDI_GetRtcHeight(7);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"OCT", -1, 0, 7); y0 += GDI_GetRtcHeight(7);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"NOV", -1, 0, 7); y0 += GDI_GetRtcHeight(7);
					GDI_PaintRtc(x0 , y0, (unsigned char*)"DEC", -1, 0, 7); y0 += GDI_GetRtcHeight(7);
				} else if(1) {
					for(int i = 0x21; i < 0x40; i++) {
						sprintf_s(charset + strlen(charset), sizeof(charset) - strlen(charset), "%c", i);
					}
					DWORD y0 = 0;
					GDI_PaintBoldNum(windowwidth/2, y0, charset, 0, 0,  0);		y0 += GDI_GetBoldNumHeight(0);
					GDI_PaintBoldNum(windowwidth/2, y0, charset, 0, 0,  1);		y0 += GDI_GetBoldNumHeight(1);
					GDI_PaintBoldNum(windowwidth/2, y0, charset, 0, 0,  2);		y0 += GDI_GetBoldNumHeight(2);
					GDI_PaintBoldNum(windowwidth/2, y0, charset, 0, 0,  3);		y0 += GDI_GetBoldNumHeight(3);
					GDI_PaintBoldNum(windowwidth/2, y0, charset, 0, 0,  4);
				} else if(1) {
					for(int i = 0x21; i < 0x40; i++) {
						sprintf_s(charset + strlen(charset), sizeof(charset) - strlen(charset), "%c", i);
					}
					DWORD y0 = 0;
					GDI_PaintBoldNum(windowwidth/2, y0, charset, 0, 0, 4);
					y0 += GDI_GetBoldNumHeight(4);
					GDI_PaintBoldNum(windowwidth/2, y0, charset, 0, 0, 5);
					y0 += GDI_GetBoldNumHeight(5);
					GDI_PaintBoldNum(windowwidth/2, y0, charset, 0, 0, 6);
				}
#endif
		}
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}


void dmsg(TCHAR * msg, DWORD x)
{
	if(0 == x)
		return;

	TCHAR buffer[1024] = {0};
	wsprintf(buffer, L"[BitFontCreator]\t%s\r\n", msg);

	OutputDebugString(buffer);
	return;

	HWND hDlg = FindWindow(NULL, L"DebugMsg");
	if(IsWindow(hDlg))
	{
		//SetDlgItemText(hDlg, 10101, buffer);
		SendDlgItemMessage(hDlg, 10101, EM_REPLACESEL, 0, (LPARAM)buffer);
	}
	else
		MessageBox(NULL, L"Window NOT Found", NULL, 0);
}



/**************************************************************************************************************************
*
*
*
**/
void Print(HWND hwnd, HDC hdc, DWORD & x, DWORD & y, DWORD & w, DWORD & h, unsigned char * buffer, bool highlight);
void GDI_PaintBuffer(int x, int y, int w, int h, unsigned char * buffer, bool highlight)
{
	DWORD X = x;
	DWORD Y = y;
	DWORD W = w;
	DWORD H = h;
	if(0) {
		wsprintf(temp, L"GDI_PaintBuffer():: %d, %d, %d, %d", X, Y, W, H);
		dmsg(temp);
	}
	HDC hdc = GetDC(g_hwnd);
	Print(g_hwnd, hdc, X, Y, W, H, buffer, highlight);
	ReleaseDC(g_hwnd, hdc);
}
void Print(HWND hwnd, HDC hdc, DWORD & x, DWORD & y, DWORD & ww, DWORD & hh, unsigned char * buffer, bool highlight)
{
	RECT rc;
	GetClientRect(hwnd, &rc);
	rc.top = rc.bottom/2;
	DWORD width = (DWORD)ceil((double)ww/8);

	if(0) {
		wsprintf(temp, L"\r\n");
		for(DWORD a = 0; a < hh; a++) {
			for(DWORD b = 0; b < width; b++) {
				wsprintf(temp + wcslen(temp), L"%02x\t", buffer[width * a + b]);
			}
			wsprintf(temp + wcslen(temp), L"\r\n");
		}
		dmsg(temp);
	}

	for(DWORD i = 0; i < hh; i++)
	{
		for(DWORD j = 0; j < width; j++)
		{
			for(DWORD k = 0; k <8; k++) 
			{
				unsigned char mask = 1<<(7-k);
				if(mask & buffer[width * i + j])
				{
					DWORD xx = x + 8*j+k;
					DWORD yy = rc.bottom/2 + y + i;
					//wsprintf(temp, L"(%d, %d)", xx, yy);
					//dmsg(temp);
					if(highlight)
						SetPixel(hdc, xx, yy, RGB(255,120,120));
					else
						SetPixel(hdc, xx, yy, RGB(255,255,255));
						
				}
			}
		}
	}
	ValidateRect(hwnd, &rc);
}

void gray(HDC hdc, DWORD X, DWORD Y)
{
	for(DWORD i = 0; i < X; i++)
	{
		for(DWORD j = 0; j < Y; j++)
		{
			COLORREF rgb = GetPixel(hdc, i, j);
			DWORD grayValue = (DWORD)(0.299 * GetRValue(rgb)+ 0.587 * GetGValue(rgb) + 0.114 * GetBValue(rgb));
			/*
			if(grayValue > 254)
				SetPixel(hdc, i, j, RGB(255,255,255));
			else
				SetPixel(hdc, i, j, RGB(0,0,0));
			*/
			DWORD threshold = 255;
			if(grayValue < threshold)
				SetPixel(hdc, i, j, RGB(0,0,0));
		}
	}
}