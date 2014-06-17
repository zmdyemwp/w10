#ifndef		__BOLDNUMTABLE_H__
#define		__BOLDNUMTABLE_H__

#ifdef  __cplusplus
extern  "C" {
#endif

int GDI_GetBoldNumWidth(char * str);
void GDI_PaintBoldNum(int x, int y, char * str, int alignment, int highlight, int fontsize);


#ifdef  __cplusplus
}
#endif


#endif		//t__BOLDNUMTABLE_H__

