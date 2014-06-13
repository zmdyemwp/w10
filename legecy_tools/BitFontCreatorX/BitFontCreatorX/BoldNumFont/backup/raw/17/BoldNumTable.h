#ifndef		__BOLDNUMTABLE_H__
#define		__BOLDNUMTABLE_H__

#ifdef  __cplusplus
extern  "C" {
#endif

#define SPACE_WIDTH				6

int GDI_GetBoldNumWidth(char * str);
void GDI_PaintBoldNum(int x, int y, char * str, int alignment, int highlight, int fontsize);

extern const unsigned char bold_num_font_width_table [];
extern const unsigned short bold_num_font_offset_table[];
extern const unsigned char bold_num_font_data_table[];


#ifdef  __cplusplus
}
#endif


#endif		//t__BOLDNUMTABLE_H__

