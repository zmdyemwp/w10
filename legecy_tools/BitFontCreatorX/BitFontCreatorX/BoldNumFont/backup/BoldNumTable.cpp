#include "BoldNumTable.h"

const unsigned char bold_num_font_width_table  [] = {
	//		font height: 10+1
	3,		// '!'
	5,		// '"'
	7,		// '#'
	7,		// '$'
	9,		// '%'
	4,		// '&'
	3,		// '''
	4,		// '('
	4,		// ')'
	4,		// '*'
	7,		// '+'
	4,		// ','
	6,		// '-'
	3,		// '.'
	4,		// '/'
	7,		// '0'
	5,		// '1'
	7,		// '2'
	7,		// '3'
	7,		// '4'
	7,		// '5'
	7,		// '6'
	7,		// '7'
	7,		// '8'
	7,		// '9'
	3,		// ':'
	3,		// ';'
	6,		// '<'
	6,		// '='
	6,		// '>'
	7,		// '?'
	//		font height: 16+1
	4,		// '!'
	7,		// '"'
	13,		// '#'
	11,		// '$'
	19,		// '%'
	7,		// '&'
	4,		// '''
	7,		// '('
	7,		// ')'
	10,		// '*'
	13,		// '+'
	5,		// ','
	8,		// '-'
	5,		// '.'
	10,		// '/'
	12,		// '0'
	9,		// '1'
	11,		// '2'
	10,		// '3'
	12,		// '4'
	11,		// '5'
	12,		// '6'
	11,		// '7'
	12,		// '8'
	12,		// '9'
	5,		// ':'
	6,		// ';'
	12,		// '<'
	13,		// '='
	13,		// '>'
	9,		// '?'
	//		font height: 34
	8,		// '!'
	13,		// '"'
	24,		// '#'
	19,		// '$'
	35,		// '%'
	13,		// '&'
	8,		// '''
	13,		// '('
	13,		// ')'
	19,		// '*'
	24,		// '+'
	9,		// ','
	13,		// '-'
	8,		// '.'
	17,		// '/'
	19,		// '0'
	16,		// '1'
	19,		// '2'
	19,		// '3'
	21,		// '4'
	19,		// '5'
	20,		// '6'
	20,		// '7'
	21,		// '8'
	20,		// '9'
	8,		// ':'
	10,		// ';'
	22,		// '<'
	23,		// '='
	22,		// '>'
	17,		// '?'
	//		font height: 8+1+1
	3,		// '!'
	4,		// '"'
	6,		// '#'
	4,		// '$'
	5,		// '%'
	3,		// '&'
	3,		// '''
	3,		// '('
	3,		// ')'
	3,		// '*'
	4,		// '+'
	3,		// ','
	3,		// '-'
	3,		// '.'
	3,		// '/'
	5,		// '0'
	3,		// '1'
	5,		// '2'
	5,		// '3'
	5,		// '4'
	4,		// '5'
	5,		// '6'
	4,		// '7'
	5,		// '8'
	5,		// '9'
	3,		// ':'
	3,		// ';'
	4,		// '<'
	4,		// '='
	4,		// '>'
	5,		// '?'
};
const unsigned short bold_num_font_offset_table  [] = {

//    font height: 10 + 1
0,// '!',
11,// '"',
22,// '#',
33,// '$',
44,// '%',
66,// '&',
77,// ''',
88,// '(',
99,// ')',
110,// '*',
121,// '+',
132,// ',',
143,// '-',
154,// '.',
165,// '/',
176,// '0',
187,// '1',
198,// '2',
209,// '3',
220,// '4',
231,// '5',
242,// '6',
253,// '7',
264,// '8',
275,// '9',
286,// ':',
297,// ';',
308,// '<',
319,// '=',
330,// '>',
341,// '?',
//    font height: 16+1
352,// '!',
369,// '"',
386,// '#',
420,// '$',
454,// '%',
505,// '&',
522,// ''',
539,// '(',
556,// ')',
573,// '*',
607,// '+',
641,// ',',
658,// '-',
675,// '.',
692,// '/',
726,// '0',
760,// '1',
794,// '2',
828,// '3',
862,// '4',
896,// '5',
930,// '6',
964,// '7',
998,// '8',
1032,// '9',
1066,// ':',
1083,// ';',
1100,// '<',
1134,// '=',
1168,// '>',
1202,// '?',
//    font height: 34,,
1236,// '!',
1270,// '"',
1338,// '#',
1440,// '$',
1542,// '%',
1712,// '&',
1780,// ''',
1814,// '(',
1882,// ')',
1950,// '*',
2052,// '+',
2154,// ',',
2222,// '-',
2290,// '.',
2324,// '/',
2426,// '0',
2528,// '1',
2596,// '2',
2698,// '3',
2800,// '4',
2902,// '5',
3004,// '6',
3106,// '7',
3208,// '8',
3310,// '9',
3412,// ':',
3446,// ';',
3514,// '<',
3616,// '=',
3718,// '>',
3820,// '?',
//    font height: 8 + 1 + 1,,
3922,// '!',
3932,// '"',
3942,// '#',
3952,// '$',
3962,// '%',
3972,// '&',
3982,// ''',
3992,// '(',
4002,// ')',
4012,// '*',
4022,// '+',
4032,// ',',
4042,// '-',
4052,// '.',
4062,// '/',
4072,// '0',
4082,// '1',
4092,// '2',
4102,// '3',
4112,// '4',
4122,// '5',
4132,// '6',
4142,// '7',
4152,// '8',
4162,// '9',
4172,// ':',
4182,// ';',
4192,// '<',
4202,// '=',
4212,// '>',
4222,// '?',
4232,// End of Data Buffer,

};
const unsigned char bold_num_font_data_table[] = {
	//		font height: 10 + 1
		// '!'
	0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x00, 
	
		// '"'
	0x00, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '#'
	0x00, 0x78, 0x78, 0xfc, 0x78, 0xfc, 0x78, 0x78, 0x00, 0x00, 0x00, 
	
		// '$'
	0x00, 0x30, 0x78, 0xfc, 0x70, 0x38, 0xfc, 0x78, 0x30, 0x00, 0x00, 
	
		// '%'
	0x00, 0x00, 0x00, 0x00, 0xe3, 0x00, 0xe6, 0x00, 0x0c, 0x00, 0x18, 0x00, 0x30, 0x00, 0x67, 0x00, 0xc7, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '&'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 
	
		// '''
	0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '('
	0x00, 0x60, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x60, 0x00, 
	
		// ')'
	0x00, 0xc0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0xc0, 0x00, 
	
		// '*'
	0x00, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '+'
	0x00, 0x00, 0x00, 0x30, 0x30, 0xfc, 0x30, 0x30, 0x00, 0x00, 0x00, 
	
		// ','
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xc0, 0x00, 
	
		// '-'
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '.'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 
	
		// '/'
	0x00, 0x60, 0x60, 0x60, 0x60, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 
	
		// '0'
	0x00, 0x78, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x78, 0x00, 0x00, 
	
		// '1'
	0x00, 0x30, 0xf0, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 
	
		// '2'
	0x00, 0x78, 0xcc, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0xfc, 0x00, 0x00, 
	
		// '3'
	0x00, 0x78, 0xcc, 0x0c, 0x38, 0x0c, 0x0c, 0xcc, 0x78, 0x00, 0x00, 
	
		// '4'
	0x00, 0x18, 0x38, 0x78, 0xd8, 0xd8, 0xfc, 0x18, 0x18, 0x00, 0x00, 
	
		// '5'
	0x00, 0xfc, 0xc0, 0xc0, 0xf8, 0x0c, 0x0c, 0xcc, 0x78, 0x00, 0x00, 
	
		// '6'
	0x00, 0x78, 0xcc, 0xc0, 0xf8, 0xcc, 0xcc, 0xcc, 0x78, 0x00, 0x00, 
	
		// '7'
	0x00, 0xfc, 0x0c, 0x18, 0x18, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 
	
		// '8'
	0x00, 0x78, 0xcc, 0xcc, 0x78, 0xcc, 0xcc, 0xcc, 0x78, 0x00, 0x00, 
	
		// '9'
	0x00, 0x78, 0xcc, 0xcc, 0x7c, 0x0c, 0x0c, 0xcc, 0x78, 0x00, 0x00, 
	
		// ':'
	0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 
	
		// ';'
	0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 
	
		// '<'
	0x00, 0x00, 0x18, 0x30, 0x60, 0xc0, 0x60, 0x30, 0x18, 0x00, 0x00, 
	
		// '='
	0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 
	
		// '>'
	0x00, 0x00, 0xc0, 0x60, 0x30, 0x18, 0x30, 0x60, 0xc0, 0x00, 0x00, 
	
		// '?'
	0x00, 0x78, 0xcc, 0x0c, 0x18, 0x30, 0x30, 0x00, 0x30, 0x00, 0x00, 

	//		font height: 16+1
		// '!'
	0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0xe0, 0xe0, 0x00, 0x00, 0x00, 
	
		// '"'
	0x00, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '#'
	0x00, 0x00, 0x00, 0x00, 0x0e, 0xc0, 0x0e, 0xc0, 0x0d, 0xc0, 0x7f, 0xf0, 0x1d, 0x80, 0x1d, 0x80, 0x1b, 0x80, 0x1b, 0x80, 0xff, 0xe0, 0x3f, 0x00, 0x37, 0x00, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '$'
	0x00, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x7f, 0x80, 0xff, 0x80, 0xfc, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0x7f, 0x00, 0x1f, 0x80, 0x1f, 0xc0, 0x1f, 0x80, 0xdf, 0x80, 0xff, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 
	
		// '%'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x18, 0x00, 0x77, 0x38, 0x00, 0x77, 0x70, 0x00, 0xe7, 0x70, 0x00, 0x77, 0xe0, 0x00, 0x77, 0xff, 0x00, 0x3f, 0xfb, 0x80, 0x01, 0xfb, 0x80, 0x03, 0xb9, 0xc0, 0x03, 0xbb, 0x80, 0x07, 0x3b, 0x80, 0x07, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '&'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 
	
		// '''
	0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '('
	0x00, 0x3c, 0x38, 0x70, 0x70, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x70, 0x70, 0x38, 0x3c, 
	
		// ')'
	0x00, 0xe0, 0x70, 0x38, 0x38, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x38, 0x38, 0x70, 0xe0, 
	
		// '*'
	0x00, 0x00, 0x1c, 0x00, 0xdd, 0x80, 0xff, 0x80, 0x3e, 0x00, 0x3e, 0x00, 0xff, 0x80, 0xdd, 0x80, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '+'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0xff, 0xf0, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// ','
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0xe0, 0xe0, 0xc0, 
	
		// '-'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '.'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0x00, 
	
		// '/'
	0x00, 0x00, 0x03, 0x80, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0xe0, 0x00, 
	
		// '0'
	0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x7b, 0xc0, 0x71, 0xc0, 0x71, 0xc0, 0xf1, 0xe0, 0xf1, 0xe0, 0xf1, 0xe0, 0xf1, 0xe0, 0x71, 0xc0, 0x71, 0xc0, 0x7b, 0xc0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '1'
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x38, 0x00, 0xf8, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '2'
	0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0xe7, 0x80, 0xc3, 0x80, 0x03, 0x80, 0x03, 0x80, 0x07, 0x80, 0x0f, 0x00, 0x1e, 0x00, 0x3c, 0x00, 0x78, 0x00, 0xe0, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '3'
	0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0xe7, 0x80, 0xc3, 0x80, 0x03, 0x80, 0x07, 0x00, 0x1e, 0x00, 0x07, 0x80, 0x03, 0x80, 0x03, 0x80, 0xc3, 0x80, 0xe7, 0x80, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '4'
	0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x07, 0x80, 0x0f, 0x80, 0x1f, 0x80, 0x3b, 0x80, 0x73, 0x80, 0xf3, 0x80, 0xe3, 0x80, 0xff, 0xe0, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '5'
	0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xff, 0x00, 0x07, 0x80, 0x03, 0x80, 0x03, 0xc0, 0x03, 0x80, 0x03, 0x80, 0xc7, 0x80, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '6'
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x3c, 0x00, 0x70, 0x00, 0x70, 0x00, 0x7f, 0x80, 0xf1, 0xc0, 0xf1, 0xe0, 0xf0, 0xe0, 0x70, 0xe0, 0x71, 0xc0, 0x79, 0xc0, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '7'
	0x00, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x03, 0x80, 0x03, 0x80, 0x07, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x1e, 0x00, 0x1c, 0x00, 0x3c, 0x00, 0x38, 0x00, 0x78, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '8'
	0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x71, 0xc0, 0x71, 0xc0, 0x71, 0xc0, 0x79, 0xc0, 0x3f, 0x80, 0x73, 0xc0, 0xf1, 0xe0, 0xe1, 0xe0, 0xf1, 0xe0, 0x79, 0xc0, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '9'
	0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x73, 0xc0, 0x71, 0xc0, 0xe1, 0xc0, 0xe1, 0xe0, 0xf1, 0xe0, 0x71, 0xe0, 0x3f, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x07, 0x80, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// ':'
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0x00, 
	
		// ';'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x78, 0x70, 0x70, 0xe0, 
	
		// '<'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x03, 0xc0, 0x0f, 0x00, 0x3c, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x3c, 0x00, 0x0f, 0x00, 0x03, 0xc0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '='
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '>'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x3c, 0x00, 0x0f, 0x00, 0x03, 0xc0, 0x00, 0xf0, 0x00, 0xf0, 0x03, 0xc0, 0x0f, 0x00, 0x3c, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '?'
	0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0xce, 0x00, 0x07, 0x00, 0x07, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x3c, 0x00, 0x38, 0x00, 0x38, 0x00, 0x00, 0x00, 0x78, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	//		font height: 34
	// '!'
	0x00, 0x00, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '"'
	0xf9, 0xf0, 0xf9, 0xf0, 0xf9, 0xf0, 0xf9, 0xf0, 0xf9, 0xf0, 0x79, 0xe0, 0x79, 0xe0, 0x79, 0xe0, 0x79, 0xe0, 0x79, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '#'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xf0, 0x00, 0x70, 0xe0, 0x00, 0x70, 0xe0, 0x00, 0xf1, 0xe0, 0x00, 0xf1, 0xe0, 0x00, 0xe1, 0xc0, 0x00, 0xe1, 0xc0, 0x3f, 0xff, 0xfe, 0x3f, 0xff, 0xfe, 0x01, 0xc3, 0x80, 0x01, 0xc3, 0x80, 0x03, 0xc7, 0x80, 0x03, 0xc7, 0x80, 0x03, 0x87, 0x00, 0x03, 0x87, 0x00, 0x07, 0x8f, 0x00, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xf8, 0x07, 0x1e, 0x00, 0x0f, 0x1e, 0x00, 0x0f, 0x1e, 0x00, 0x0e, 0x1c, 0x00, 0x0e, 0x3c, 0x00, 0x1e, 0x3c, 0x00, 0x1e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '$'
	0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x07, 0xfe, 0x00, 0x1f, 0xff, 0xc0, 0x7f, 0xff, 0xc0, 0x7f, 0xe7, 0xc0, 0xf9, 0xe1, 0xc0, 0xf9, 0xe0, 0x00, 0xf9, 0xe0, 0x00, 0xf9, 0xe0, 0x00, 0xfd, 0xe0, 0x00, 0x7f, 0xe0, 0x00, 0x3f, 0xfc, 0x00, 0x0f, 0xff, 0x00, 0x01, 0xff, 0x80, 0x01, 0xef, 0xc0, 0x01, 0xe7, 0xc0, 0x01, 0xe3, 0xc0, 0x01, 0xe3, 0xc0, 0xe1, 0xe7, 0xc0, 0xf9, 0xef, 0xc0, 0xff, 0xff, 0x80, 0xff, 0xfe, 0x00, 0x1f, 0xf8, 0x00, 0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 
	
		// '%'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x07, 0xc0, 0x00, 0x7c, 0xf8, 0x07, 0x80, 0x00, 0xf8, 0x78, 0x0f, 0x80, 0x00, 0xf8, 0x7c, 0x0f, 0x00, 0x00, 0xf8, 0x7c, 0x1e, 0x00, 0x00, 0xf0, 0x7c, 0x1e, 0x00, 0x00, 0xf0, 0x7c, 0x3c, 0x00, 0x00, 0xf0, 0x7c, 0x3c, 0x00, 0x00, 0xf8, 0x7c, 0x78, 0x00, 0x00, 0xf8, 0x7c, 0xf8, 0x00, 0x00, 0xf8, 0x78, 0xf0, 0xfe, 0x00, 0x7c, 0xf9, 0xf3, 0xff, 0x00, 0x3f, 0xf1, 0xe7, 0xcf, 0x80, 0x1f, 0xc3, 0xe7, 0x87, 0xc0, 0x00, 0x03, 0xcf, 0x87, 0xc0, 0x00, 0x07, 0xcf, 0x83, 0xc0, 0x00, 0x07, 0x8f, 0x83, 0xc0, 0x00, 0x0f, 0x8f, 0x83, 0xc0, 0x00, 0x0f, 0x0f, 0x83, 0xc0, 0x00, 0x1e, 0x0f, 0x83, 0xc0, 0x00, 0x1e, 0x0f, 0x87, 0xc0, 0x00, 0x3c, 0x07, 0x87, 0xc0, 0x00, 0x7c, 0x07, 0xcf, 0x80, 0x00, 0x78, 0x03, 0xff, 0x00, 0x00, 0xf8, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '&'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '''
	0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '('
	0x03, 0xf0, 0x03, 0xe0, 0x07, 0xc0, 0x0f, 0x80, 0x0f, 0x80, 0x1f, 0x00, 0x1f, 0x00, 0x3e, 0x00, 0x3e, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x3e, 0x00, 0x3e, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x0f, 0x80, 0x0f, 0x80, 0x07, 0xc0, 0x03, 0xe0, 0x03, 0xf0, 
	
		// ')'
	0xfc, 0x00, 0x7c, 0x00, 0x3e, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x0f, 0x80, 0x0f, 0x80, 0x07, 0xc0, 0x07, 0xc0, 0x03, 0xc0, 0x03, 0xe0, 0x03, 0xe0, 0x01, 0xe0, 0x01, 0xe0, 0x01, 0xe0, 0x01, 0xe0, 0x01, 0xf0, 0x01, 0xf0, 0x01, 0xe0, 0x01, 0xe0, 0x01, 0xe0, 0x01, 0xe0, 0x03, 0xe0, 0x03, 0xe0, 0x03, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x0f, 0x80, 0x0f, 0x80, 0x1f, 0x00, 0x1f, 0x00, 0x3e, 0x00, 0x7c, 0x00, 0xfc, 0x00, 
	
		// '*'
	0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x61, 0xe1, 0x80, 0xf9, 0xe7, 0xc0, 0x7d, 0xef, 0x80, 0x3f, 0xff, 0x00, 0x0f, 0xfc, 0x00, 0x03, 0xf0, 0x00, 0x03, 0xf8, 0x00, 0x0f, 0xfe, 0x00, 0x3f, 0xff, 0x80, 0xf9, 0xe7, 0xc0, 0x71, 0xe1, 0x80, 0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '+'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfe, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// ','
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x3f, 0x00, 0x3e, 0x00, 0x3e, 0x00, 0x3e, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x78, 0x00, 0xf8, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 
	
		// '-'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0xff, 0xf0, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '.'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '/'
	0x00, 0x0f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x78, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x01, 0xf0, 0x00, 0x01, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0x80, 0x00, 0x07, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x78, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '0'
	0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x1f, 0xfe, 0x00, 0x3f, 0xff, 0x00, 0x7e, 0x1f, 0x80, 0x7c, 0x0f, 0x80, 0x7c, 0x0f, 0x80, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xc0, 0x7c, 0x0f, 0x80, 0x7c, 0x0f, 0x80, 0x7e, 0x1f, 0x80, 0x3f, 0xff, 0x00, 0x1f, 0xfe, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '1'
	0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x07, 0xc0, 0x1f, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0x07, 0xc0, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '2'
	0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x7f, 0xfe, 0x00, 0x7f, 0xff, 0x00, 0x7c, 0x3f, 0x80, 0x60, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x7c, 0x00, 0x00, 0xf8, 0x00, 0x01, 0xf0, 0x00, 0x03, 0xe0, 0x00, 0x0f, 0xc0, 0x00, 0x1f, 0x80, 0x00, 0x3f, 0x00, 0x00, 0x7e, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '3'
	0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x7f, 0xfe, 0x00, 0x7f, 0xff, 0x00, 0x7c, 0x1f, 0x80, 0x60, 0x0f, 0x80, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x3f, 0x00, 0x03, 0xfc, 0x00, 0x03, 0xf8, 0x00, 0x03, 0xff, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x0f, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0xe0, 0x0f, 0xc0, 0xfc, 0x3f, 0x80, 0xff, 0xff, 0x00, 0xff, 0xfe, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '4'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x7f, 0x00, 0x00, 0xff, 0x00, 0x01, 0xff, 0x00, 0x03, 0xef, 0x00, 0x07, 0xcf, 0x00, 0x0f, 0x8f, 0x00, 0x0f, 0x0f, 0x00, 0x1f, 0x0f, 0x00, 0x3e, 0x0f, 0x00, 0x7c, 0x0f, 0x00, 0xf8, 0x0f, 0x00, 0xf0, 0x0f, 0x00, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '5'
	0x00, 0x00, 0x00, 0x3f, 0xff, 0xc0, 0x3f, 0xff, 0xc0, 0x3f, 0xff, 0xc0, 0x3c, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x3f, 0xfe, 0x00, 0x3f, 0xff, 0x80, 0x38, 0x3f, 0x80, 0x00, 0x0f, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0xe0, 0x0f, 0x80, 0xfc, 0x3f, 0x80, 0xff, 0xff, 0x00, 0xff, 0xfe, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '6'
	0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x03, 0xff, 0x80, 0x0f, 0xff, 0x80, 0x1f, 0xc3, 0x80, 0x3f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x78, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xfb, 0xfc, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x80, 0xfe, 0x1f, 0xc0, 0xf8, 0x07, 0xc0, 0xf8, 0x07, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0x7c, 0x07, 0xc0, 0x7c, 0x07, 0xc0, 0x3f, 0x1f, 0x80, 0x3f, 0xff, 0x00, 0x0f, 0xfe, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '7'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0xf8, 0x00, 0x01, 0xf0, 0x00, 0x01, 0xf0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '8'
	0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x0f, 0xff, 0x00, 0x1f, 0xff, 0xc0, 0x3f, 0x0f, 0xc0, 0x7e, 0x07, 0xe0, 0x7c, 0x03, 0xe0, 0x7c, 0x03, 0xe0, 0x7c, 0x03, 0xe0, 0x7e, 0x03, 0xe0, 0x3f, 0x07, 0xc0, 0x1f, 0xcf, 0x80, 0x0f, 0xff, 0x00, 0x0f, 0xfe, 0x00, 0x1f, 0x7f, 0x80, 0x3e, 0x1f, 0xc0, 0x7c, 0x07, 0xe0, 0x78, 0x03, 0xe0, 0xf8, 0x01, 0xf0, 0xf8, 0x01, 0xf0, 0xf8, 0x01, 0xf0, 0x7c, 0x03, 0xe0, 0x7e, 0x03, 0xe0, 0x7f, 0x0f, 0xc0, 0x3f, 0xff, 0xc0, 0x1f, 0xff, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '9'
	0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x0f, 0xff, 0x00, 0x3f, 0xff, 0x80, 0x3f, 0x1f, 0xc0, 0x7c, 0x07, 0xc0, 0x7c, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xe0, 0xf8, 0x01, 0xe0, 0xfc, 0x01, 0xe0, 0x7c, 0x01, 0xe0, 0x7f, 0x07, 0xe0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xe0, 0x07, 0xfb, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x07, 0xc0, 0x00, 0x07, 0xc0, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x80, 0x18, 0x7f, 0x00, 0x1f, 0xfe, 0x00, 0x1f, 0xfc, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// ':'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// ';'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x3f, 0x00, 0x3f, 0x00, 0x3f, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x1f, 0x00, 0x1f, 0x00, 0x3f, 0x00, 0x3e, 0x00, 0x3e, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x78, 0x00, 0x78, 0x00, 0xf0, 0x00, 0x00, 0x00, 
	
		// '<'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0xf8, 0x00, 0x03, 0xf8, 0x00, 0x0f, 0xf0, 0x00, 0x7f, 0xc0, 0x01, 0xfe, 0x00, 0x07, 0xf8, 0x00, 0x1f, 0xe0, 0x00, 0x7f, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x07, 0xf8, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x0f, 0xf0, 0x00, 0x03, 0xf8, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '='
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '>'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x1f, 0xe0, 0x00, 0x07, 0xf8, 0x00, 0x00, 0xff, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x0f, 0xf0, 0x00, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x0f, 0xf0, 0x00, 0x3f, 0xc0, 0x00, 0xff, 0x00, 0x07, 0xf8, 0x00, 0x1f, 0xe0, 0x00, 0x7f, 0x80, 0x00, 0xfe, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '?'
	0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xfc, 0x00, 0xf8, 0x7e, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x7e, 0x00, 0x00, 0xfc, 0x00, 0x01, 0xf8, 0x00, 0x07, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	//		font height: 8 + 1 + 1
		// '!'
	0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 
	
		// '"'
	0x00, 0xa0, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '#'
	0x00, 0x50, 0xf8, 0x50, 0x50, 0xf8, 0x50, 0x00, 0x00, 0x00, 
	
		// '$'
	0x00, 0x40, 0xe0, 0xc0, 0x40, 0x60, 0xe0, 0x40, 0x00, 0x00, 
	
		// '%'
	0x00, 0xc0, 0xd0, 0x20, 0x40, 0xb0, 0x30, 0x00, 0x00, 0x00, 
	
		// '&'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 
	
		// '''
	0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '('
	0x00, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x00, 
	
		// ')'
	0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 
	
		// '*'
	0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '+'
	0x00, 0x00, 0x00, 0x40, 0xe0, 0x40, 0x00, 0x00, 0x00, 0x00, 
	
		// ','
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 
	
		// '-'
	0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
		// '.'
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
	
		// '/'
	0x00, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
	
		// '0'
	0x00, 0x60, 0x90, 0x90, 0x90, 0x90, 0x60, 0x00, 0x00, 0x00, 
	
		// '1'
	0x00, 0x40, 0xc0, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 
	
		// '2'
	0x00, 0x60, 0x90, 0x10, 0x60, 0x80, 0xf0, 0x00, 0x00, 0x00, 
	
		// '3'
	0x00, 0x60, 0x90, 0x20, 0x10, 0x90, 0x60, 0x00, 0x00, 0x00, 
	
		// '4'
	0x00, 0x20, 0x60, 0x60, 0xa0, 0xf0, 0x20, 0x00, 0x00, 0x00, 
	
		// '5'
	0x00, 0xe0, 0x80, 0xc0, 0x20, 0x20, 0xc0, 0x00, 0x00, 0x00, 
	
		// '6'
	0x00, 0x60, 0x80, 0xe0, 0x90, 0x90, 0x60, 0x00, 0x00, 0x00, 
	
		// '7'
	0x00, 0xe0, 0x20, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 
	
		// '8'
	0x00, 0x60, 0x90, 0x60, 0x90, 0x90, 0x60, 0x00, 0x00, 0x00, 
	
		// '9'
	0x00, 0x60, 0x90, 0x70, 0x10, 0x90, 0x60, 0x00, 0x00, 0x00, 
	
		// ':'
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
	
		// ';'
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 
	
		// '<'
	0x00, 0x00, 0x20, 0x40, 0x80, 0x40, 0x20, 0x00, 0x00, 0x00, 
	
		// '='
	0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
	
		// '>'
	0x00, 0x00, 0x80, 0x40, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 
	
		// '?'
	0x00, 0x60, 0x90, 0x20, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 

};
