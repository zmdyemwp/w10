#include "BoldNumTable.h"

const unsigned char bold_num_font_width_table  [] = {
	9,		// '!'
	13,		// '"'
	26,		// '#'
	20,		// '$'
	37,		// '%'
	29,		// '&'
	9,		// '''
	13,		// '('
	13,		// ')'
	20,		// '*'
	25,		// '+'
	10,		// ','
	14,		// '-'
	9,		// '.'
	19,		// '/'
	20,		// '0'
	18,		// '1'
	20,		// '2'
	20,		// '3'
	23,		// '4'
	20,		// '5'
	21,		// '6'
	21,		// '7'
	22,		// '8'
	21,		// '9'
	9,		// ':'
	10,		// ';'
	23,		// '<'
	24,		// '='
	23,		// '>'
	18,		// '?'
};
const unsigned short bold_num_font_offset_table  [] = {
	   0,		// '!'
	  76,		// '"'
	 152,		// '#'
	 304,		// '$'
	 418,		// '%'
	 608,		// '&'
	 760,		// '''
	 836,		// '('
	 912,		// ')'
	 988,		// '*'
	1102,		// '+'
	1254,		// ','
	1330,		// '-'
	1406,		// '.'
	1482,		// '/'
	1596,		// '0'
	1710,		// '1'
	1824,		// '2'
	1938,		// '3'
	2052,		// '4'
	2166,		// '5'
	2280,		// '6'
	2394,		// '7'
	2508,		// '8'
	2622,		// '9'
	2736,		// ':'
	2812,		// ';'
	2888,		// '<'
	3002,		// '='
	3116,		// '>'
	3230,		// '?'
	3344,		// End of Data Buffer
};
const unsigned char bold_num_font_data_table[] = {
	// '!'
0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '"'
0x00, 0x00, 0xf9, 0xf0, 0xf9, 0xf0, 0xf9, 0xf0, 0xf9, 0xf0, 0xf9, 0xf0, 0xf9, 0xf0, 0xf9, 0xf0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '#'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x38, 0x00, 0x00, 0x1c, 0x38, 0x00, 0x00, 0x38, 0x70, 0x00, 0x00, 0x38, 0x70, 0x00, 0x00, 0x38, 0x70, 0x00, 0x00, 0x38, 0x70, 0x00, 0x00, 0x70, 0xe0, 0x00, 0x00, 0x70, 0xe0, 0x00, 0x3f, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff, 0x80, 0x00, 0xe1, 0xc0, 0x00, 0x00, 0xe1, 0xc0, 0x00, 0x00, 0xe1, 0xc0, 0x00, 0x00, 0xe1, 0xc0, 0x00, 0x01, 0xc3, 0x80, 0x00, 0x01, 0xc3, 0x80, 0x00, 0x01, 0xc3, 0x80, 0x00, 0x01, 0xc3, 0x80, 0x00, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x03, 0x87, 0x00, 0x00, 0x03, 0x87, 0x00, 0x00, 0x07, 0x0e, 0x00, 0x00, 0x07, 0x0e, 0x00, 0x00, 0x07, 0x0e, 0x00, 0x00, 0x07, 0x0e, 0x00, 0x00, 0x0e, 0x1c, 0x00, 0x00, 0x0e, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '$'
0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x07, 0xfe, 0x00, 0x1f, 0xff, 0xc0, 0x3f, 0xff, 0xc0, 0x7e, 0xe7, 0xc0, 0xfc, 0xe0, 0xc0, 0xf8, 0xe0, 0x00, 0xf8, 0xe0, 0x00, 0xf8, 0xe0, 0x00, 0xfc, 0xe0, 0x00, 0x7e, 0xe0, 0x00, 0x7f, 0xe0, 0x00, 0x3f, 0xfe, 0x00, 0x07, 0xff, 0x80, 0x00, 0xff, 0xc0, 0x00, 0xef, 0xe0, 0x00, 0xe3, 0xe0, 0x00, 0xe3, 0xe0, 0x00, 0xe3, 0xe0, 0x00, 0xe3, 0xe0, 0xc0, 0xe7, 0xc0, 0xf8, 0xef, 0xc0, 0xff, 0xff, 0x80, 0xff, 0xff, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 

	// '%'
0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x01, 0xe0, 0x00, 0x7f, 0xfc, 0x03, 0xc0, 0x00, 0x7c, 0x7c, 0x03, 0xc0, 0x00, 0xf8, 0x3e, 0x07, 0x80, 0x00, 0xf0, 0x1e, 0x07, 0x80, 0x00, 0xf0, 0x1e, 0x0f, 0x00, 0x00, 0xf0, 0x1e, 0x0f, 0x00, 0x00, 0xf0, 0x1e, 0x1e, 0x00, 0x00, 0xf0, 0x1e, 0x1e, 0x00, 0x00, 0xf0, 0x1e, 0x3c, 0x00, 0x00, 0xf8, 0x3e, 0x3c, 0x00, 0x00, 0x7c, 0x7c, 0x78, 0x00, 0x00, 0x7f, 0xfc, 0x78, 0x7f, 0x00, 0x3f, 0xf8, 0xf1, 0xff, 0xc0, 0x0f, 0xe0, 0xf3, 0xff, 0xe0, 0x00, 0x01, 0xe3, 0xe3, 0xe0, 0x00, 0x01, 0xe7, 0xc1, 0xf0, 0x00, 0x03, 0xc7, 0x80, 0xf0, 0x00, 0x03, 0xc7, 0x80, 0xf0, 0x00, 0x07, 0x87, 0x80, 0xf0, 0x00, 0x07, 0x87, 0x80, 0xf0, 0x00, 0x0f, 0x07, 0x80, 0xf0, 0x00, 0x0f, 0x07, 0x80, 0xf0, 0x00, 0x1e, 0x07, 0xc1, 0xf0, 0x00, 0x1e, 0x03, 0xe3, 0xe0, 0x00, 0x3c, 0x03, 0xff, 0xe0, 0x00, 0x3c, 0x01, 0xff, 0xc0, 0x00, 0x78, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '&'
0x00, 0x00, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x1f, 0x3f, 0x00, 0x00, 0x3e, 0x1f, 0x80, 0x00, 0x7c, 0x0f, 0x80, 0x00, 0x7c, 0x0f, 0x80, 0x00, 0x7c, 0x0f, 0x80, 0x00, 0x7c, 0x0f, 0x80, 0x00, 0x7e, 0x0f, 0x80, 0x00, 0x3e, 0x1f, 0x00, 0x00, 0x3f, 0x3e, 0x00, 0x00, 0x1f, 0xfc, 0x3e, 0x00, 0x07, 0xf0, 0x3e, 0x00, 0x0f, 0xf0, 0x3e, 0x00, 0x3e, 0xf8, 0x3e, 0x00, 0x3c, 0x7c, 0x3e, 0x00, 0x7c, 0x3e, 0x3e, 0x00, 0x78, 0x1f, 0xbc, 0x00, 0xf8, 0x0f, 0xfc, 0x00, 0xf8, 0x07, 0xfc, 0x00, 0xf8, 0x03, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x00, 0xfc, 0x00, 0xfc, 0x01, 0xfe, 0x00, 0x7e, 0x03, 0xff, 0x00, 0x7f, 0x0f, 0xdf, 0x80, 0x3f, 0xff, 0x8f, 0xc0, 0x0f, 0xfe, 0x07, 0xe0, 0x03, 0xf8, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '''
0x00, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '('
0x00, 0x00, 0x03, 0xf0, 0x03, 0xe0, 0x07, 0xc0, 0x0f, 0x80, 0x0f, 0x00, 0x1f, 0x00, 0x1e, 0x00, 0x3e, 0x00, 0x3c, 0x00, 0x7c, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0xf8, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x7c, 0x00, 0x3c, 0x00, 0x3e, 0x00, 0x1e, 0x00, 0x1f, 0x00, 0x0f, 0x00, 0x0f, 0x80, 0x07, 0xc0, 0x03, 0xe0, 0x03, 0xf0, 

	// ')'
0x00, 0x00, 0xfc, 0x00, 0x7c, 0x00, 0x3e, 0x00, 0x1f, 0x00, 0x0f, 0x00, 0x0f, 0x80, 0x07, 0x80, 0x07, 0xc0, 0x03, 0xc0, 0x03, 0xe0, 0x01, 0xe0, 0x01, 0xe0, 0x01, 0xe0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x01, 0xe0, 0x01, 0xe0, 0x01, 0xe0, 0x03, 0xe0, 0x03, 0xc0, 0x07, 0xc0, 0x07, 0x80, 0x0f, 0x80, 0x0f, 0x00, 0x1f, 0x00, 0x3e, 0x00, 0x7c, 0x00, 0xfc, 0x00, 

	// '*'
0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x60, 0xe0, 0xc0, 0xf8, 0xe3, 0xe0, 0x7e, 0xef, 0xc0, 0x1f, 0xff, 0x00, 0x07, 0xfc, 0x00, 0x01, 0xf0, 0x00, 0x07, 0xfc, 0x00, 0x1f, 0xff, 0x00, 0x7e, 0xef, 0xc0, 0xf8, 0xe3, 0xe0, 0x60, 0xe0, 0xc0, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '+'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// ','
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x1f, 0x00, 0x1f, 0x00, 0x3e, 0x00, 0x3e, 0x00, 0x3e, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x78, 0x00, 0x78, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 

	// '-'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0xff, 0xf8, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '.'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '/'
0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x07, 0x80, 0x00, 0x07, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x78, 0x00, 0x00, 0x78, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x01, 0xf0, 0x00, 0x01, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0x80, 0x00, 0x07, 0x80, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x78, 0x00, 0x00, 0x78, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '0'
0x00, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x0f, 0xfe, 0x00, 0x1f, 0xff, 0x00, 0x3f, 0x1f, 0x80, 0x3e, 0x0f, 0x80, 0x7c, 0x07, 0xc0, 0x7c, 0x07, 0xc0, 0x7c, 0x07, 0xc0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0x78, 0x07, 0xc0, 0x7c, 0x07, 0xc0, 0x7c, 0x07, 0xc0, 0x3e, 0x0f, 0x80, 0x3f, 0x1f, 0x80, 0x1f, 0xff, 0x00, 0x0f, 0xfe, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '1'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0xff, 0xe0, 0x00, 0xff, 0xe0, 0x00, 0xff, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0xff, 0xff, 0x80, 0xff, 0xff, 0x80, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '2'
0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x3f, 0xfe, 0x00, 0x7f, 0xff, 0x00, 0x7c, 0x1f, 0x80, 0x70, 0x0f, 0x80, 0x60, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x80, 0x00, 0x3f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x7c, 0x00, 0x00, 0xfc, 0x00, 0x01, 0xf8, 0x00, 0x03, 0xf0, 0x00, 0x07, 0xe0, 0x00, 0x0f, 0xc0, 0x00, 0x1f, 0x80, 0x00, 0x3e, 0x00, 0x00, 0x7c, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '3'
0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x3f, 0xfe, 0x00, 0x7f, 0xff, 0x00, 0x7c, 0x1f, 0x80, 0x70, 0x0f, 0xc0, 0x60, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x3f, 0x00, 0x03, 0xfe, 0x00, 0x03, 0xfc, 0x00, 0x03, 0xff, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x07, 0xc0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0xc0, 0x07, 0xc0, 0xe0, 0x0f, 0xc0, 0xfc, 0x1f, 0x80, 0xff, 0xff, 0x00, 0x7f, 0xfe, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '4'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x1f, 0xc0, 0x00, 0x3f, 0xc0, 0x00, 0x7f, 0xc0, 0x00, 0x7f, 0xc0, 0x00, 0xff, 0xc0, 0x01, 0xf7, 0xc0, 0x03, 0xe7, 0xc0, 0x07, 0xc7, 0xc0, 0x0f, 0x87, 0xc0, 0x0f, 0x07, 0xc0, 0x1f, 0x07, 0xc0, 0x3e, 0x07, 0xc0, 0x7c, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0xf0, 0x07, 0xc0, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '5'
0x00, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x7f, 0xff, 0xe0, 0x7f, 0xff, 0xe0, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x7f, 0xff, 0x00, 0x7f, 0xff, 0x80, 0x70, 0x1f, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x07, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x07, 0xe0, 0xc0, 0x07, 0xc0, 0xe0, 0x0f, 0xc0, 0xfc, 0x1f, 0x80, 0xff, 0xff, 0x00, 0x7f, 0xfe, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '6'
0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x01, 0xff, 0x80, 0x07, 0xff, 0x80, 0x0f, 0xe1, 0x80, 0x1f, 0x80, 0x00, 0x3f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x78, 0x00, 0x00, 0xf9, 0xfe, 0x00, 0xff, 0xff, 0x80, 0xff, 0xff, 0xc0, 0xfe, 0x0f, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xf0, 0xf8, 0x01, 0xf0, 0xf8, 0x01, 0xf0, 0xf8, 0x01, 0xf0, 0xf8, 0x01, 0xf0, 0x78, 0x01, 0xf0, 0x7c, 0x01, 0xf0, 0x7c, 0x03, 0xe0, 0x3e, 0x07, 0xe0, 0x3f, 0x0f, 0xc0, 0x1f, 0xff, 0x80, 0x0f, 0xff, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '7'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xf0, 0x00, 0x01, 0xf0, 0x00, 0x03, 0xf0, 0x00, 0x03, 0xe0, 0x00, 0x07, 0xe0, 0x00, 0x07, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x80, 0x00, 0x1f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x7c, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xf8, 0x00, 0x01, 0xf0, 0x00, 0x01, 0xf0, 0x00, 0x03, 0xe0, 0x00, 0x07, 0xe0, 0x00, 0x07, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x80, 0x00, 0x1f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '8'
0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x0f, 0xff, 0x80, 0x1f, 0xff, 0xc0, 0x3f, 0x07, 0xe0, 0x3e, 0x03, 0xf0, 0x7c, 0x01, 0xf0, 0x7c, 0x01, 0xf0, 0x7c, 0x01, 0xf0, 0x7c, 0x01, 0xf0, 0x7e, 0x01, 0xf0, 0x3f, 0x03, 0xe0, 0x1f, 0xc3, 0xc0, 0x0f, 0xff, 0x80, 0x07, 0xff, 0x00, 0x0f, 0xff, 0x80, 0x3e, 0x1f, 0xe0, 0x7c, 0x07, 0xf0, 0x7c, 0x01, 0xf0, 0xf8, 0x01, 0xf8, 0xf8, 0x00, 0xf8, 0xf8, 0x00, 0xf8, 0xf8, 0x00, 0xf8, 0xf8, 0x00, 0xf8, 0xfc, 0x01, 0xf0, 0x7e, 0x01, 0xf0, 0x3f, 0x07, 0xe0, 0x1f, 0xff, 0xc0, 0x0f, 0xff, 0x80, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '9'
0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x0f, 0xff, 0x00, 0x1f, 0xff, 0x80, 0x3f, 0x0f, 0xc0, 0x7e, 0x07, 0xc0, 0x7c, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x01, 0xe0, 0xf8, 0x01, 0xf0, 0xf8, 0x01, 0xf0, 0xf8, 0x01, 0xf0, 0xf8, 0x01, 0xf0, 0xfc, 0x01, 0xf0, 0x7c, 0x01, 0xf0, 0x7f, 0x07, 0xf0, 0x3f, 0xff, 0xf0, 0x1f, 0xff, 0xf0, 0x07, 0xf9, 0xf0, 0x00, 0x01, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x07, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 0x1f, 0x80, 0x18, 0x3f, 0x00, 0x1f, 0xfe, 0x00, 0x1f, 0xf8, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// ':'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// ';'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x1f, 0x00, 0x1f, 0x00, 0x3e, 0x00, 0x3e, 0x00, 0x3e, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x78, 0x00, 0x78, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 

	// '<'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x3c, 0x00, 0x01, 0xfc, 0x00, 0x07, 0xf8, 0x00, 0x1f, 0xe0, 0x00, 0x7f, 0x80, 0x03, 0xfe, 0x00, 0x0f, 0xf0, 0x00, 0x3f, 0xc0, 0x00, 0xff, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xff, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x0f, 0xf0, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x1f, 0xe0, 0x00, 0x07, 0xf8, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '='
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '>'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x1f, 0xe0, 0x00, 0x07, 0xf8, 0x00, 0x01, 0xff, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x0f, 0xf0, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x7c, 0x00, 0x03, 0xfc, 0x00, 0x0f, 0xf0, 0x00, 0x3f, 0xc0, 0x01, 0xff, 0x00, 0x07, 0xf8, 0x00, 0x1f, 0xe0, 0x00, 0x7f, 0x80, 0x00, 0xfe, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '?'
0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0xff, 0xfc, 0x00, 0xff, 0xfe, 0x00, 0xf8, 0x3f, 0x00, 0xc0, 0x1f, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0xfc, 0x00, 0x01, 0xf8, 0x00, 0x07, 0xf0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0x80, 0x00, 0x07, 0x80, 0x00, 0x07, 0x80, 0x00, 0x07, 0x80, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

};