#ifndef		__W10_FONT_TABLE_H__
#define		__W10_FONT_TABLE_H__

#ifdef  __cplusplus
extern  "C" {
#endif

int GDI_GetStringWidth(char * str);
void GDI_PrintString(int x, int y, char * str, int alignment, bool highlight);

extern const unsigned char normal_font_width_table [];
extern const unsigned short normal_font_offset_table[];
extern const unsigned char normal_font_data_table[];


#ifdef  __cplusplus
}
#endif


#endif		//__W10_FONT_TABLE_H__

