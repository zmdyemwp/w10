#include "BoldNumTable.h"

const unsigned char bold_num_font_width_table  [] = {
	8,		// '!'
	7,		// '"'
	7,		// '#'
	28,		// '$'
	24,		// '%'
	43,		// '&'
	14,		// '''
	7,		// '('
	15,		// ')'
	15,		// '*'
	21,		// '+'
	26,		// ','
	12,		// '-'
	15,		// '.'
	8,		// '/'
	25,		// '0'
	25,		// '1'
	25,		// '2'
	25,		// '3'
	25,		// '4'
	25,		// '5'
	25,		// '6'
	25,		// '7'
	25,		// '8'
	25,		// '9'
	24,		// ':'
	8,		// ';'
	12,		// '<'
	26,		// '='
	25,		// '>'
	26,		// '?'
	19,		// '@'
	21,		// 'A'
};
const unsigned short bold_num_font_offset_table  [] = {
	   0,		// '!'
	  38,		// '"'
	  76,		// '#'
	 114,		// '$'
	 266,		// '%'
	 380,		// '&'
	 608,		// '''
	 684,		// '('
	 722,		// ')'
	 798,		// '*'
	 874,		// '+'
	 988,		// ','
	1140,		// '-'
	1216,		// '.'
	1292,		// '/'
	1330,		// '0'
	1428,		// '1'
	1634,		// '2'
	1786,		// '3'
	1938,		// '4'
	2090,		// '5'
	2242,		// '6'
	2394,		// '7'
	2546,		// '8'
	2698,		// '9'
	2850,		// ':'
	2964,		// ';'
	3002,		// '<'
	3078,		// '='
	3230,		// '>'
	3382,		// '?'
	3534,		// '@'
	3648,		// 'A'
	3762,		// End of Data Buffer
};
const unsigned char bold_num_font_data_table[] = {
	// '!'
0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '"'
0x00, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '#'
0x00, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '$'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x0f, 0x00, 0x00, 0x3c, 0x0f, 0x00, 0x00, 0x7c, 0x1e, 0x00, 0x00, 0x78, 0x1e, 0x00, 0x00, 0x78, 0x1e, 0x00, 0x00, 0x78, 0x1e, 0x00, 0x3f, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xe0, 0x01, 0xe0, 0x78, 0x00, 0x01, 0xe0, 0x78, 0x00, 0x01, 0xe0, 0x78, 0x00, 0x01, 0xe0, 0x78, 0x00, 0x03, 0xc0, 0xf0, 0x00, 0x03, 0xc0, 0xf0, 0x00, 0x03, 0xc0, 0xf0, 0x00, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0x07, 0x81, 0xe0, 0x00, 0x0f, 0x83, 0xc0, 0x00, 0x0f, 0x03, 0xc0, 0x00, 0x0f, 0x03, 0xc0, 0x00, 0x0f, 0x03, 0xc0, 0x00, 0x1e, 0x07, 0x80, 0x00, 0x1e, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '%'
0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x01, 0xff, 0x80, 0x0f, 0xff, 0xf8, 0x1f, 0xff, 0xf8, 0x7f, 0xff, 0xf8, 0x7f, 0xff, 0xf8, 0xff, 0x38, 0xf8, 0xfe, 0x38, 0x18, 0xfe, 0x38, 0x00, 0xff, 0x38, 0x00, 0xff, 0xf8, 0x00, 0x7f, 0xff, 0x80, 0x7f, 0xff, 0xf0, 0x1f, 0xff, 0xf8, 0x0f, 0xff, 0xfc, 0x00, 0xff, 0xfe, 0x00, 0x3f, 0xfe, 0x00, 0x38, 0xfe, 0x00, 0x38, 0xfe, 0xc0, 0x38, 0xfe, 0xfc, 0x39, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xc0, 0x07, 0xff, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 

	// '&'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x00, 0x3e, 0x00, 0x00, 0x3f, 0xfe, 0x00, 0x3c, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x1f, 0x00, 0x78, 0x00, 0x00, 0xfc, 0x1f, 0x80, 0xf8, 0x00, 0x00, 0xf8, 0x0f, 0x80, 0xf0, 0x00, 0x00, 0xf8, 0x0f, 0x81, 0xf0, 0x00, 0x00, 0xf8, 0x0f, 0x81, 0xe0, 0x00, 0x00, 0xf8, 0x0f, 0x83, 0xe0, 0x00, 0x00, 0xf8, 0x0f, 0x83, 0xc0, 0x00, 0x00, 0xf8, 0x0f, 0x87, 0xc3, 0xf8, 0x00, 0xfc, 0x1f, 0x87, 0x8f, 0xfe, 0x00, 0x7c, 0x1f, 0x0f, 0x1f, 0xff, 0x00, 0x7f, 0xff, 0x0f, 0x3f, 0xff, 0x80, 0x3f, 0xfe, 0x1e, 0x3e, 0x0f, 0x80, 0x1f, 0xfc, 0x1e, 0x7e, 0x0f, 0xc0, 0x07, 0xf0, 0x3c, 0x7c, 0x07, 0xc0, 0x00, 0x00, 0x7c, 0x7c, 0x07, 0xc0, 0x00, 0x00, 0x78, 0x7c, 0x07, 0xc0, 0x00, 0x00, 0xf8, 0x7c, 0x07, 0xc0, 0x00, 0x00, 0xf0, 0x7c, 0x07, 0xc0, 0x00, 0x01, 0xf0, 0x7c, 0x07, 0xc0, 0x00, 0x01, 0xe0, 0x7e, 0x0f, 0xc0, 0x00, 0x03, 0xe0, 0x3e, 0x0f, 0x80, 0x00, 0x03, 0xc0, 0x3f, 0xff, 0x80, 0x00, 0x07, 0xc0, 0x1f, 0xff, 0x00, 0x00, 0x07, 0x80, 0x0f, 0xfe, 0x00, 0x00, 0x0f, 0x80, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '''
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '('
0x00, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// ')'
0x00, 0x00, 0x01, 0xfc, 0x03, 0xf8, 0x07, 0xf0, 0x0f, 0xe0, 0x0f, 0xc0, 0x1f, 0xc0, 0x1f, 0x80, 0x3f, 0x80, 0x3f, 0x00, 0x7f, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0xfe, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x7f, 0x00, 0x3f, 0x00, 0x3f, 0x80, 0x1f, 0x80, 0x1f, 0xc0, 0x0f, 0xc0, 0x0f, 0xe0, 0x07, 0xf0, 0x03, 0xf8, 0x01, 0xfc, 

	// '*'
0x00, 0x00, 0xfe, 0x00, 0x7f, 0x00, 0x3f, 0x80, 0x1f, 0xc0, 0x0f, 0xc0, 0x0f, 0xe0, 0x07, 0xe0, 0x07, 0xf0, 0x03, 0xf0, 0x03, 0xf8, 0x01, 0xf8, 0x01, 0xf8, 0x01, 0xf8, 0x01, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x01, 0xf8, 0x01, 0xf8, 0x01, 0xf8, 0x03, 0xf8, 0x03, 0xf0, 0x07, 0xf0, 0x07, 0xe0, 0x0f, 0xe0, 0x0f, 0xc0, 0x1f, 0xc0, 0x3f, 0x80, 0x7f, 0x00, 0xfe, 0x00, 

	// '+'
0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x20, 0xf0, 0x40, 0x70, 0xf0, 0xe0, 0xfc, 0xf3, 0xf0, 0x7e, 0xf7, 0xe0, 0x3f, 0xff, 0xc0, 0x0f, 0xff, 0x00, 0x03, 0xfc, 0x00, 0x03, 0xfc, 0x00, 0x0f, 0xff, 0x00, 0x3f, 0xff, 0xc0, 0x7f, 0xf7, 0xe0, 0xfc, 0xf3, 0xf0, 0x70, 0xf0, 0xe0, 0x20, 0xf0, 0x40, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// ','
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '-'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0xc0, 0x1f, 0xc0, 0x1f, 0x80, 0x1f, 0x80, 0x3f, 0x00, 0x3f, 0x00, 0x3e, 0x00, 0x7e, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x78, 0x00, 0xf8, 0x00, 0xf0, 0x00, 0x00, 0x00, 

	// '.'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0xff, 0xfc, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '/'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '0'
0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x3f, 0x83, 0xf8, 0x00, 0x7f, 0x01, 0xfc, 0x00, 0x7f, 0x01, 0xfc, 0x00, 0x7f, 0x01, 0xfc, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0x7f, 0x01, 0xfc, 0x00, 0x7f, 0x01, 0xfc, 0x00, 0x7f, 0x01, 0xfc, 0x00, 0x3f, 0xc7, 0xf8, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '1'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x3f, 0xfe, 0x00, 0x00, 0x3f, 0xfe, 0x00, 0x00, 0x3f, 0xfe, 0x00, 0x00, 0x3f, 0xfe, 0x00, 0x00, 0x3f, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '2'
0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x1f, 0xff, 0xc0, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x3f, 0xff, 0xf0, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x3e, 0x07, 0xf8, 0x00, 0x38, 0x03, 0xfc, 0x00, 0x20, 0x01, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0xff, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '3'
0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x1f, 0xff, 0xc0, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x3f, 0xff, 0xf0, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x3e, 0x07, 0xf8, 0x00, 0x38, 0x03, 0xf8, 0x00, 0x20, 0x03, 0xf8, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x01, 0xff, 0x80, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x01, 0xff, 0xf8, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x40, 0x01, 0xfc, 0x00, 0x70, 0x03, 0xfc, 0x00, 0x7c, 0x07, 0xf8, 0x00, 0x7f, 0xff, 0xf8, 0x00, 0x7f, 0xff, 0xf0, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x3f, 0xff, 0x80, 0x00, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '4'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x01, 0xf7, 0xf0, 0x00, 0x01, 0xf7, 0xf0, 0x00, 0x03, 0xe7, 0xf0, 0x00, 0x07, 0xc7, 0xf0, 0x00, 0x0f, 0x87, 0xf0, 0x00, 0x1f, 0x87, 0xf0, 0x00, 0x1f, 0x07, 0xf0, 0x00, 0x3e, 0x07, 0xf0, 0x00, 0x7c, 0x07, 0xf0, 0x00, 0xf8, 0x07, 0xf0, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '5'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x38, 0x07, 0xfe, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x60, 0x00, 0xfe, 0x00, 0x70, 0x01, 0xfc, 0x00, 0x7e, 0x07, 0xfc, 0x00, 0x7f, 0xff, 0xf8, 0x00, 0x7f, 0xff, 0xf8, 0x00, 0x7f, 0xff, 0xf0, 0x00, 0x3f, 0xff, 0xc0, 0x00, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '6'
0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x03, 0xff, 0xf8, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x1f, 0xf0, 0x18, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x7e, 0x3f, 0x80, 0x00, 0xfe, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xf8, 0x00, 0xff, 0xff, 0xf8, 0x00, 0xff, 0xff, 0xfc, 0x00, 0xfe, 0x03, 0xfc, 0x00, 0xfe, 0x01, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0x7f, 0x00, 0xfe, 0x00, 0x7f, 0x01, 0xfc, 0x00, 0x3f, 0xc3, 0xfc, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '7'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '8'
0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x7f, 0x83, 0xfc, 0x00, 0x7f, 0x01, 0xfc, 0x00, 0x7f, 0x01, 0xfc, 0x00, 0x7f, 0x01, 0xfc, 0x00, 0x7f, 0x81, 0xf8, 0x00, 0x3f, 0xe1, 0xf8, 0x00, 0x3f, 0xff, 0xf0, 0x00, 0x1f, 0xff, 0xe0, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x3f, 0x1f, 0xfc, 0x00, 0x7f, 0x07, 0xfc, 0x00, 0xfe, 0x01, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xff, 0x01, 0xfe, 0x00, 0xff, 0x83, 0xfc, 0x00, 0x7f, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '9'
0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x1f, 0xff, 0xe0, 0x00, 0x3f, 0xff, 0xf0, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x7f, 0x87, 0xfc, 0x00, 0x7f, 0x01, 0xfc, 0x00, 0xfe, 0x01, 0xfc, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xff, 0x00, 0xfe, 0x00, 0x7f, 0x80, 0xfe, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x0f, 0xfe, 0xfe, 0x00, 0x03, 0xf8, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x30, 0x1f, 0xf0, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x3f, 0xff, 0xc0, 0x00, 0x3f, 0xff, 0x80, 0x00, 0x3f, 0xfe, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// ':'
0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x07, 0xff, 0xc0, 0x1f, 0xff, 0xe0, 0x3f, 0xff, 0xf0, 0x3f, 0xff, 0xf8, 0x7f, 0x87, 0xfc, 0x7f, 0x01, 0xfc, 0xfe, 0x01, 0xfc, 0xfe, 0x00, 0xfe, 0xfe, 0x00, 0xfe, 0xfe, 0x00, 0xfe, 0xfe, 0x00, 0xfe, 0xff, 0x00, 0xfe, 0x7f, 0x80, 0xfe, 0x7f, 0xff, 0xfe, 0x3f, 0xff, 0xfe, 0x3f, 0xff, 0xfe, 0x0f, 0xfe, 0xfe, 0x03, 0xf8, 0xfc, 0x00, 0x01, 0xfc, 0x00, 0x01, 0xfc, 0x00, 0x03, 0xf8, 0x00, 0x07, 0xf8, 0x30, 0x1f, 0xf0, 0x3f, 0xff, 0xe0, 0x3f, 0xff, 0xc0, 0x3f, 0xff, 0x80, 0x3f, 0xfe, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// ';'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '<'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x1f, 0xc0, 0x1f, 0xc0, 0x1f, 0xc0, 0x1f, 0xc0, 0x1f, 0xc0, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0xc0, 0x1f, 0xc0, 0x1f, 0x80, 0x1f, 0x80, 0x3f, 0x00, 0x3f, 0x00, 0x3e, 0x00, 0x7e, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x78, 0x00, 0xf8, 0x00, 0xf0, 0x00, 0x00, 0x00, 

	// '='
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x03, 0xff, 0x80, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x7f, 0xfc, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x07, 0xff, 0x80, 0x00, 0x3f, 0xfe, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xfe, 0x00, 0x00, 0x07, 0xff, 0x80, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '>'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '?'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x3f, 0xfe, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x01, 0xff, 0x80, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x3f, 0xfe, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x1f, 0xff, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '@'
0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0xff, 0xfe, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x80, 0xff, 0xff, 0x80, 0xf0, 0x7f, 0xc0, 0xc0, 0x3f, 0xc0, 0x00, 0x1f, 0xc0, 0x00, 0x1f, 0xc0, 0x00, 0x1f, 0xc0, 0x00, 0x1f, 0xc0, 0x00, 0x3f, 0x80, 0x00, 0x7f, 0x00, 0x01, 0xff, 0x00, 0x07, 0xfc, 0x00, 0x0f, 0xf8, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'A'
0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x07, 0xe0, 0x00, 0x07, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf0, 0x00, 0x03, 0xf0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x07, 0xe0, 0x00, 0x07, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

};
