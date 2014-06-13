

const unsigned char rtc_year_width = 7;

const unsigned short rtc_year_offset = 10;

const unsigned char rtc_year_data[] = {
	// '1'
0x10, 0x30, 0x70, 0x50, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 

	// '2'
0x70, 0xf8, 0x88, 0x88, 0x10, 0x10, 0x20, 0xc0, 0xf8, 0xf8, 

	// '3'
0x70, 0xf8, 0x88, 0x08, 0x30, 0x08, 0x88, 0xc8, 0x78, 0x70, 

	// '4'
0x10, 0x30, 0x30, 0x70, 0x50, 0x90, 0xf8, 0xf8, 0x10, 0x10, 

	// '5'
0x78, 0x78, 0x40, 0xf0, 0xf8, 0x88, 0x08, 0x88, 0xf8, 0x70, 

	// '6'
0x70, 0x78, 0x88, 0x80, 0xf0, 0xf8, 0x88, 0x88, 0x78, 0x70, 

	// '7'
0xf8, 0xf8, 0x10, 0x10, 0x10, 0x20, 0x20, 0x20, 0x20, 0x20, 

	// '8'
0x70, 0xf8, 0x88, 0x88, 0xf8, 0xf8, 0x88, 0x88, 0xf8, 0x70, 

	// '9'
0x70, 0xf0, 0x88, 0x88, 0xf8, 0x78, 0x08, 0x88, 0xf0, 0x70, 

	// '0'
0x78, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x78, 

};
