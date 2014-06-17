#include "FontTable.h"

const unsigned char normal_font_width_table [] = {
	5,		// '!'
	7,		// '"'
	11,		// '#'
	8,		// '$'
	16,		// '%'
	6,		// '&'
	5,		// '''
	5,		// '('
	5,		// ')'
	6,		// '*'
	9,		// '+'
	5,		// ','
	6,		// '-'
	5,		// '.'
	6,		// '/'
	9,		// '0'
	6,		// '1'
	9,		// '2'
	9,		// '3'
	9,		// '4'
	9,		// '5'
	9,		// '6'
	9,		// '7'
	9,		// '8'
	9,		// '9'
	5,		// ':'
	5,		// ';'
	9,		// '<'
	10,		// '='
	9,		// '>'
	9,		// '?'
	17,		// '@'
	12,		// 'A'
	11,		// 'B'
	11,		// 'C'
	11,		// 'D'
	10,		// 'E'
	9,		// 'F'
	12,		// 'G'
	11,		// 'H'
	5,		// 'I'
	9,		// 'J'
	11,		// 'K'
	9,		// 'L'
	12,		// 'M'
	11,		// 'N'
	12,		// 'O'
	10,		// 'P'
	12,		// 'Q'
	12,		// 'R'
	10,		// 'S'
	11,		// 'T'
	11,		// 'U'
	12,		// 'V'
	18,		// 'W'
	10,		// 'X'
	11,		// 'Y'
	10,		// 'Z'
	5,		// '['
	6,		// '\'
	5,		// ']'
	9,		// '^'
	10,		// '_'
	5,		// '`'
	9,		// 'a'
	9,		// 'b'
	8,		// 'c'
	9,		// 'd'
	8,		// 'e'
	7,		// 'f'
	9,		// 'g'
	9,		// 'h'
	5,		// 'i'
	5,		// 'j'
	8,		// 'k'
	5,		// 'l'
	13,		// 'm'
	9,		// 'n'
	9,		// 'o'
	9,		// 'p'
	9,		// 'q'
	7,		// 'r'
	8,		// 's'
	6,		// 't'
	9,		// 'u'
	8,		// 'v'
	14,		// 'w'
	8,		// 'x'
	10,		// 'y'
	8,		// 'z'
	7,		// '{'
	5,		// '|'
	7,		// '}'
	10,		// '~'
};
const unsigned short normal_font_offset_table [] = {
	   0,		// '!'
	  16,		// '"'
	  32,		// '#'
	  64,		// '$'
	  80,		// '%'
	 112,		// '&'
	 128,		// '''
	 144,		// '('
	 160,		// ')'
	 176,		// '*'
	 192,		// '+'
	 224,		// ','
	 240,		// '-'
	 256,		// '.'
	 272,		// '/'
	 288,		// '0'
	 320,		// '1'
	 336,		// '2'
	 368,		// '3'
	 400,		// '4'
	 432,		// '5'
	 464,		// '6'
	 496,		// '7'
	 528,		// '8'
	 560,		// '9'
	 592,		// ':'
	 608,		// ';'
	 624,		// '<'
	 656,		// '='
	 688,		// '>'
	 720,		// '?'
	 752,		// '@'
	 800,		// 'A'
	 832,		// 'B'
	 864,		// 'C'
	 896,		// 'D'
	 928,		// 'E'
	 960,		// 'F'
	 992,		// 'G'
	1024,		// 'H'
	1056,		// 'I'
	1072,		// 'J'
	1104,		// 'K'
	1136,		// 'L'
	1168,		// 'M'
	1200,		// 'N'
	1232,		// 'O'
	1264,		// 'P'
	1296,		// 'Q'
	1328,		// 'R'
	1360,		// 'S'
	1392,		// 'T'
	1424,		// 'U'
	1456,		// 'V'
	1488,		// 'W'
	1536,		// 'X'
	1568,		// 'Y'
	1600,		// 'Z'
	1632,		// '['
	1648,		// '\'
	1664,		// ']'
	1680,		// '^'
	1712,		// '_'
	1744,		// '`'
	1760,		// 'a'
	1792,		// 'b'
	1824,		// 'c'
	1840,		// 'd'
	1872,		// 'e'
	1888,		// 'f'
	1904,		// 'g'
	1936,		// 'h'
	1968,		// 'i'
	1984,		// 'j'
	2000,		// 'k'
	2016,		// 'l'
	2032,		// 'm'
	2064,		// 'n'
	2096,		// 'o'
	2128,		// 'p'
	2160,		// 'q'
	2192,		// 'r'
	2208,		// 's'
	2224,		// 't'
	2240,		// 'u'
	2272,		// 'v'
	2288,		// 'w'
	2320,		// 'x'
	2336,		// 'y'
	2368,		// 'z'
	2384,		// '{'
	2400,		// '|'
	2416,		// '}'
	2432,		// '~'
	2464,		// End of Data Buffer
};
const unsigned char normal_font_data_table[] = {
	// '!'
0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 

	// '"'
0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '#'
0x00, 0x00, 0x0d, 0x80, 0x0d, 0x80, 0x1b, 0x00, 0xff, 0xc0, 0xff, 0xc0, 0x1b, 0x00, 0x36, 0x00, 0xff, 0xc0, 0xff, 0xc0, 0x36, 0x00, 0x6c, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '$'
0x10, 0x38, 0x7c, 0xd6, 0xd0, 0xf0, 0x78, 0x3c, 0x1e, 0xd6, 0xd6, 0x7c, 0x38, 0x10, 0x10, 0x00, 

	// '%'
0x00, 0x00, 0x78, 0x30, 0xcc, 0x60, 0xcc, 0x60, 0xcc, 0xc0, 0xcd, 0x80, 0x79, 0x80, 0x03, 0x3c, 0x03, 0x66, 0x06, 0x66, 0x06, 0x66, 0x0c, 0x66, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '&'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 

	// '''
0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '('
0x00, 0x30, 0x60, 0x60, 0x60, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x60, 0x60, 0x60, 0x30, 

	// ')'
0x00, 0xc0, 0x60, 0x60, 0x60, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x60, 0x60, 0x60, 0xc0, 

	// '*'
0x00, 0x20, 0xf8, 0x20, 0x50, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '+'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0xff, 0x00, 0xff, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// ','
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x40, 0x40, 0x80, 

	// '-'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '.'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 

	// '/'
0x00, 0x18, 0x18, 0x30, 0x30, 0x30, 0x30, 0x60, 0x60, 0x60, 0x60, 0xc0, 0xc0, 0x00, 0x00, 0x00, 

	// '0'
0x3c, 0x00, 0x7e, 0x00, 0xe7, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xe7, 0x00, 0x7e, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '1'
0x18, 0x38, 0x78, 0xd8, 0x98, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 

	// '2'
0x3c, 0x00, 0x7e, 0x00, 0xe3, 0x00, 0xc3, 0x00, 0x03, 0x00, 0x06, 0x00, 0x0e, 0x00, 0x1c, 0x00, 0x38, 0x00, 0x60, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '3'
0x3e, 0x00, 0x7f, 0x00, 0xe3, 0x00, 0x03, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x07, 0x00, 0x03, 0x00, 0xc3, 0x00, 0xe7, 0x00, 0x7e, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '4'
0x06, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x1e, 0x00, 0x36, 0x00, 0x36, 0x00, 0x66, 0x00, 0xc6, 0x00, 0xff, 0x00, 0xff, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '5'
0x7e, 0x00, 0x7e, 0x00, 0x60, 0x00, 0xc0, 0x00, 0xfc, 0x00, 0xfe, 0x00, 0xc7, 0x00, 0x03, 0x00, 0xc3, 0x00, 0xe7, 0x00, 0x7e, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '6'
0x3e, 0x00, 0x7f, 0x00, 0x63, 0x00, 0xc0, 0x00, 0xdc, 0x00, 0xfe, 0x00, 0xe7, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0x63, 0x00, 0x7e, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '7'
0xff, 0x00, 0xff, 0x00, 0x06, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x38, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '8'
0x3c, 0x00, 0x7e, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0x7e, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '9'
0x3c, 0x00, 0x7e, 0x00, 0xc6, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xe7, 0x00, 0x7f, 0x00, 0x3b, 0x00, 0x03, 0x00, 0xc6, 0x00, 0xfe, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// ':'
0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 

	// ';'
0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x40, 0x40, 0x80, 0x00, 

	// '<'
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x1e, 0x00, 0x78, 0x00, 0xe0, 0x00, 0x78, 0x00, 0x1e, 0x00, 0x07, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '='
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '>'
0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xe0, 0x00, 0x78, 0x00, 0x1e, 0x00, 0x07, 0x00, 0x1e, 0x00, 0x78, 0x00, 0xe0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '?'
0x3c, 0x00, 0x7e, 0x00, 0xe3, 0x00, 0xc3, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x18, 0x00, 0x00, 0x00, 0x18, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '@'
0x07, 0xe0, 0x00, 0x1f, 0xf8, 0x00, 0x38, 0x1c, 0x00, 0x77, 0x6c, 0x00, 0x6f, 0xe6, 0x00, 0xec, 0xe6, 0x00, 0xd8, 0xe6, 0x00, 0xd8, 0xc6, 0x00, 0xd8, 0xce, 0x00, 0xd9, 0xdc, 0x00, 0xdf, 0xf8, 0x00, 0x6e, 0xf0, 0x00, 0x70, 0x07, 0x00, 0x38, 0x1e, 0x00, 0x1f, 0xfc, 0x00, 0x07, 0xf0, 0x00, 

	// 'A'
0x0e, 0x00, 0x0e, 0x00, 0x1b, 0x00, 0x1b, 0x00, 0x1b, 0x00, 0x31, 0x80, 0x31, 0x80, 0x3f, 0x80, 0x7f, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0xc0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'B'
0xff, 0x00, 0xff, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xff, 0x00, 0xff, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0x80, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'C'
0x1f, 0x00, 0x7f, 0x80, 0x61, 0xc0, 0xe0, 0x80, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xe0, 0x80, 0x61, 0xc0, 0x7f, 0x80, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'D'
0xfe, 0x00, 0xff, 0x80, 0xc1, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc1, 0x80, 0xff, 0x80, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'E'
0xff, 0x80, 0xff, 0x80, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xff, 0x80, 0xff, 0x80, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xff, 0x80, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'F'
0xff, 0x00, 0xff, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'G'
0x1f, 0x80, 0x7f, 0xc0, 0x60, 0xe0, 0xe0, 0x40, 0xc0, 0x00, 0xc0, 0x00, 0xc3, 0xe0, 0xc3, 0xe0, 0xe0, 0x60, 0x60, 0xe0, 0x7f, 0xe0, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'H'
0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'I'
0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 

	// 'J'
0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0xc3, 0x00, 0xe7, 0x00, 0x7e, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'K'
0xc0, 0xc0, 0xc1, 0x80, 0xc3, 0x00, 0xc6, 0x00, 0xcc, 0x00, 0xde, 0x00, 0xf6, 0x00, 0xe3, 0x00, 0xc3, 0x80, 0xc1, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'L'
0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'M'
0xe0, 0xe0, 0xe0, 0xe0, 0xf1, 0xe0, 0xf1, 0xe0, 0xd1, 0x60, 0xdb, 0x60, 0xdb, 0x60, 0xdb, 0x60, 0xce, 0x60, 0xce, 0x60, 0xce, 0x60, 0xc4, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'N'
0xc0, 0xc0, 0xe0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xd8, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xc6, 0xc0, 0xc3, 0xc0, 0xc3, 0xc0, 0xc1, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'O'
0x1f, 0x00, 0x7f, 0xc0, 0x60, 0xc0, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0x60, 0xc0, 0x7f, 0xc0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'P'
0xfe, 0x00, 0xff, 0x00, 0xc3, 0x80, 0xc1, 0x80, 0xc3, 0x80, 0xff, 0x00, 0xfe, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'Q'
0x1f, 0x00, 0x7f, 0xc0, 0x60, 0xc0, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc6, 0xe0, 0x63, 0xc0, 0x7f, 0xc0, 0x1e, 0xc0, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'R'
0xff, 0x00, 0xff, 0x80, 0xc1, 0xc0, 0xc0, 0xc0, 0xc1, 0xc0, 0xff, 0x80, 0xfe, 0x00, 0xc7, 0x00, 0xc3, 0x80, 0xc1, 0x80, 0xc1, 0xc0, 0xc0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'S'
0x3e, 0x00, 0x7f, 0x00, 0xe3, 0x80, 0xc1, 0x80, 0xf0, 0x00, 0x7e, 0x00, 0x1f, 0x00, 0x03, 0x80, 0xc1, 0x80, 0xe3, 0x80, 0x7f, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'T'
0xff, 0xc0, 0xff, 0xc0, 0x0c, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'U'
0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe1, 0xc0, 0x7f, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'V'
0xc0, 0x60, 0x60, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x31, 0x80, 0x31, 0x80, 0x3b, 0x80, 0x1b, 0x00, 0x1b, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'W'
0xc1, 0xc1, 0x80, 0xe1, 0xc1, 0x80, 0x63, 0xe3, 0x00, 0x63, 0x63, 0x00, 0x63, 0x63, 0x00, 0x37, 0x76, 0x00, 0x36, 0x36, 0x00, 0x36, 0x36, 0x00, 0x1e, 0x3e, 0x00, 0x1c, 0x1c, 0x00, 0x1c, 0x1c, 0x00, 0x1c, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'X'
0xc1, 0x80, 0xe3, 0x80, 0x63, 0x00, 0x36, 0x00, 0x3e, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x3e, 0x00, 0x36, 0x00, 0x63, 0x00, 0xe3, 0x80, 0xc1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'Y'
0xc0, 0xc0, 0xe1, 0xc0, 0x61, 0x80, 0x33, 0x00, 0x33, 0x00, 0x1e, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'Z'
0x7f, 0x80, 0x7f, 0x80, 0x03, 0x00, 0x06, 0x00, 0x0e, 0x00, 0x0c, 0x00, 0x18, 0x00, 0x38, 0x00, 0x30, 0x00, 0x60, 0x00, 0xff, 0x80, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '['
0xf0, 0xf0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xf0, 0xf0, 0x00, 

	// '\'
0xc0, 0xc0, 0x60, 0x60, 0x60, 0x60, 0x30, 0x30, 0x30, 0x30, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 

	// ']'
0xf0, 0xf0, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0xf0, 0xf0, 0x00, 

	// '^'
0x18, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x66, 0x00, 0x66, 0x00, 0x66, 0x00, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// '_'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0xff, 0x80, 0x00, 0x00, 

	// '`'
0xc0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'a'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0xfe, 0x00, 0xc6, 0x00, 0x1e, 0x00, 0x7e, 0x00, 0xe6, 0x00, 0xc6, 0x00, 0xfe, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'b'
0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xdc, 0x00, 0xfe, 0x00, 0xe7, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xe7, 0x00, 0xfe, 0x00, 0xdc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'c'
0x00, 0x00, 0x00, 0x3c, 0x7e, 0xe6, 0xc0, 0xc0, 0xc0, 0xe6, 0x7e, 0x3c, 0x00, 0x00, 0x00, 0x00, 

	// 'd'
0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x3b, 0x00, 0x7f, 0x00, 0xe7, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xe7, 0x00, 0x7f, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'e'
0x00, 0x00, 0x00, 0x38, 0x7c, 0xc6, 0xfe, 0xfe, 0xc0, 0xe6, 0x7c, 0x38, 0x00, 0x00, 0x00, 0x00, 

	// 'f'
0x3c, 0x7c, 0x60, 0xf8, 0xf8, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 

	// 'g'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x7f, 0x00, 0xe7, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xe7, 0x00, 0x7f, 0x00, 0x3b, 0x00, 0xc3, 0x00, 0xff, 0x00, 0x7e, 0x00, 0x00, 0x00, 

	// 'h'
0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xde, 0x00, 0xff, 0x00, 0xe3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'i'
0xc0, 0xc0, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 

	// 'j'
0x30, 0x30, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0xf0, 0xe0, 0x00, 

	// 'k'
0xc0, 0xc0, 0xc0, 0xc6, 0xcc, 0xd8, 0xf8, 0xfc, 0xec, 0xcc, 0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00, 

	// 'l'
0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 

	// 'm'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdc, 0xe0, 0xff, 0xf0, 0xe7, 0x30, 0xc6, 0x30, 0xc6, 0x30, 0xc6, 0x30, 0xc6, 0x30, 0xc6, 0x30, 0xc6, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'n'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xde, 0x00, 0xff, 0x00, 0xe3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'o'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x7e, 0x00, 0xe7, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xe7, 0x00, 0x7e, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'p'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdc, 0x00, 0xfe, 0x00, 0xe7, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xe7, 0x00, 0xfe, 0x00, 0xdc, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x00, 

	// 'q'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x7f, 0x00, 0xe7, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xe7, 0x00, 0x7f, 0x00, 0x3b, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 

	// 'r'
0x00, 0x00, 0x00, 0xdc, 0xfc, 0xe0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 

	// 's'
0x00, 0x00, 0x00, 0x7c, 0xfe, 0xc6, 0xf0, 0x7c, 0x0e, 0xc6, 0xfe, 0x7c, 0x00, 0x00, 0x00, 0x00, 

	// 't'
0x20, 0x60, 0x60, 0xf8, 0xf8, 0x60, 0x60, 0x60, 0x60, 0x60, 0x78, 0x38, 0x00, 0x00, 0x00, 0x00, 

	// 'u'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 0xc7, 0x00, 0xff, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'v'
0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0x6c, 0x6c, 0x6c, 0x38, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 

	// 'w'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x18, 0xc7, 0x18, 0x67, 0x30, 0x6d, 0xb0, 0x6d, 0xb0, 0x6d, 0xb0, 0x38, 0xe0, 0x38, 0xe0, 0x38, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	// 'x'
0x00, 0x00, 0x00, 0xc6, 0xee, 0x6c, 0x38, 0x38, 0x38, 0x6c, 0xee, 0xc6, 0x00, 0x00, 0x00, 0x00, 

	// 'y'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x80, 0xc1, 0x80, 0x63, 0x00, 0x63, 0x00, 0x36, 0x00, 0x36, 0x00, 0x3e, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x78, 0x00, 0x70, 0x00, 0x00, 0x00, 

	// 'z'
0x00, 0x00, 0x00, 0xfe, 0xfe, 0x0c, 0x1c, 0x38, 0x70, 0x60, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 

	// '{'
0x1c, 0x3c, 0x30, 0x30, 0x30, 0x30, 0xe0, 0xe0, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3c, 0x1c, 0x00, 

	// '|'
0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 

	// '}'
0xe0, 0xf0, 0x30, 0x30, 0x30, 0x30, 0x1c, 0x1c, 0x30, 0x30, 0x30, 0x30, 0x30, 0xf0, 0xe0, 0x00, 

	// '~'
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x80, 0xff, 0x80, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

};