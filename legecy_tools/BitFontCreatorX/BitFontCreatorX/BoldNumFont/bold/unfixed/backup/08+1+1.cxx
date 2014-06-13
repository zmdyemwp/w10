#include "BoldNumTable.h"

const unsigned char bold_num_font_width_table  [] = {
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
	   0,		// '!'
	  10,		// '"'
	  20,		// '#'
	  30,		// '$'
	  40,		// '%'
	  50,		// '&'
	  60,		// '''
	  70,		// '('
	  80,		// ')'
	  90,		// '*'
	 100,		// '+'
	 110,		// ','
	 120,		// '-'
	 130,		// '.'
	 140,		// '/'
	 150,		// '0'
	 160,		// '1'
	 170,		// '2'
	 180,		// '3'
	 190,		// '4'
	 200,		// '5'
	 210,		// '6'
	 220,		// '7'
	 230,		// '8'
	 240,		// '9'
	 250,		// ':'
	 260,		// ';'
	 270,		// '<'
	 280,		// '='
	 290,		// '>'
	 300,		// '?'
	 310,		// End of Data Buffer
};
const unsigned char bold_num_font_data_table[] = {
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
