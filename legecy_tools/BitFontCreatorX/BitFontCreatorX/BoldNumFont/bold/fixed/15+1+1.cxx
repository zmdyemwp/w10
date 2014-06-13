

const unsigned char bold_num_font_width_table  [] = {
	13,		// '0'
	13,		// '1'
	13,		// '2'
	13,		// '3'
	13,		// '4'
	13,		// '5'
	13,		// '6'
	13,		// '7'
	13,		// '8'
	13,		// '9'
};
const unsigned short bold_num_font_offset_table  [] = {
	   0,		// '0'
	  34,		// '1'
	  68,		// '2'
	 102,		// '3'
	 136,		// '4'
	 170,		// '5'
	 204,		// '6'
	 238,		// '7'
	 272,		// '8'
	 306,		// '9'
	 340,		// End of Data Buffer
};
const unsigned char bold_num_font_data_table[] = {
	// '0'
0x00, 0x00, 0x1f, 0x80, 0x3f, 0xc0, 0x7f, 0xe0, 0x79, 0xe0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x79, 0xe0, 0x7f, 0xe0, 0x3f, 0xc0, 0x1f, 0x80, 0x00, 0x00, 

	// '1'
0x00, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x7f, 0x00, 0x7f, 0x00, 0x7f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x7f, 0xe0, 0x7f, 0xe0, 0x7f, 0xe0, 0x00, 0x00, 

	// '2'
0x00, 0x00, 0x7f, 0x00, 0xff, 0x80, 0xff, 0xc0, 0x87, 0xc0, 0x03, 0xc0, 0x03, 0xc0, 0x03, 0xc0, 0x07, 0x80, 0x0f, 0x00, 0x1e, 0x00, 0x3c, 0x00, 0x78, 0x00, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0x00, 0x00, 

	// '3'
0x00, 0x00, 0x7f, 0x80, 0xff, 0xe0, 0xff, 0xf0, 0xc0, 0xf0, 0x00, 0xf0, 0x00, 0xe0, 0x0f, 0xe0, 0x0f, 0x80, 0x0f, 0xe0, 0x00, 0xf0, 0x00, 0xf0, 0xc1, 0xf0, 0xff, 0xe0, 0xff, 0xe0, 0x7f, 0x80, 0x00, 0x00, 

	// '4'
0x00, 0x00, 0x07, 0xc0, 0x07, 0xc0, 0x0f, 0xc0, 0x1f, 0xc0, 0x1b, 0xc0, 0x3b, 0xc0, 0x33, 0xc0, 0x63, 0xc0, 0xe3, 0xc0, 0xff, 0xf0, 0xff, 0xf0, 0xff, 0xf0, 0x03, 0xc0, 0x03, 0xc0, 0x03, 0xc0, 0x00, 0x00, 

	// '5'
0x00, 0x00, 0x7f, 0xe0, 0x7f, 0xe0, 0x7f, 0xe0, 0x78, 0x00, 0x78, 0x00, 0x7f, 0x80, 0x7f, 0xc0, 0x7f, 0xe0, 0x03, 0xe0, 0x01, 0xe0, 0x01, 0xe0, 0xc3, 0xe0, 0xff, 0xc0, 0xff, 0x80, 0x7f, 0x00, 0x00, 0x00, 

	// '6'
0x00, 0x00, 0x07, 0xe0, 0x1f, 0xe0, 0x3f, 0xe0, 0x7c, 0x00, 0x78, 0x00, 0xf7, 0xc0, 0xff, 0xe0, 0xff, 0xf0, 0xf1, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x79, 0xf0, 0x7f, 0xe0, 0x3f, 0xc0, 0x1f, 0x80, 0x00, 0x00, 

	// '7'
0x00, 0x00, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0x03, 0xe0, 0x03, 0xc0, 0x03, 0xc0, 0x07, 0x80, 0x07, 0x80, 0x0f, 0x80, 0x0f, 0x00, 0x1f, 0x00, 0x1e, 0x00, 0x3e, 0x00, 0x3c, 0x00, 0x7c, 0x00, 0x00, 0x00, 

	// '8'
0x00, 0x00, 0x1f, 0x80, 0x7f, 0xe0, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xfc, 0xe0, 0x7f, 0xc0, 0x3f, 0xc0, 0x77, 0xe0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf8, 0xf0, 0xff, 0xf0, 0x7f, 0xe0, 0x1f, 0x80, 0x00, 0x00, 

	// '9'
0x00, 0x00, 0x1f, 0x80, 0x3f, 0xc0, 0x7f, 0xe0, 0xf9, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf8, 0xf0, 0xff, 0xf0, 0x7f, 0xf0, 0x3e, 0xf0, 0x01, 0xe0, 0x03, 0xe0, 0x7f, 0xc0, 0x7f, 0x80, 0x7e, 0x00, 0x00, 0x00, 

};
