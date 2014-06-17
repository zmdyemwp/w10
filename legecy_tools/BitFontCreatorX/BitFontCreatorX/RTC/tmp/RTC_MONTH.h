

const unsigned char rtc_month_width = 22;

const unsigned short rtc_month_offset = 30;

const unsigned char rtc_month_data[] = {
	// 'JAN'
0x08, 0x42, 0x20, 0x08, 0x43, 0x20, 0x08, 0xa3, 0x20, 0x08, 0xa3, 0x20, 0x08, 0xa2, 0xa0, 0x09, 0x12, 0xa0, 0x49, 0xf2, 0xa0, 0x49, 0xf2, 0x60, 0x7a, 0x0a, 0x60, 0x32, 0x0a, 0x20, 

	// 'FEB'
0x79, 0xf3, 0xe0, 0x79, 0xf3, 0xe0, 0x41, 0x02, 0x20, 0x41, 0x02, 0x20, 0x79, 0xf3, 0xe0, 0x79, 0xf3, 0xe0, 0x41, 0x02, 0x20, 0x41, 0x02, 0x20, 0x41, 0xf3, 0xe0, 0x41, 0xf3, 0xe0, 

	// 'MAR'
0x82, 0x10, 0xf0, 0xc6, 0x10, 0xf8, 0xc6, 0x28, 0x88, 0xc6, 0x28, 0x88, 0xaa, 0x28, 0xf8, 0xaa, 0x44, 0xf0, 0xaa, 0x7c, 0xb0, 0xba, 0x7c, 0x90, 0x92, 0x82, 0x90, 0x92, 0x82, 0x88, 

	// 'APR'
0x10, 0xf1, 0xe0, 0x10, 0xf9, 0xf0, 0x28, 0x89, 0x10, 0x28, 0x89, 0x10, 0x28, 0xf9, 0xf0, 0x44, 0xf1, 0xe0, 0x7c, 0x81, 0x60, 0x7c, 0x81, 0x20, 0x82, 0x81, 0x20, 0x82, 0x81, 0x10, 

	// 'MAY'
0x82, 0x10, 0x88, 0xc6, 0x10, 0x88, 0xc6, 0x28, 0x50, 0xc6, 0x28, 0x50, 0xaa, 0x28, 0x50, 0xaa, 0x44, 0x20, 0xaa, 0x7c, 0x20, 0xba, 0x7c, 0x20, 0x92, 0x82, 0x20, 0x92, 0x82, 0x20, 

	// 'JUN'
0x09, 0x12, 0x20, 0x09, 0x13, 0x20, 0x09, 0x13, 0x20, 0x09, 0x13, 0x20, 0x09, 0x12, 0xa0, 0x09, 0x12, 0xa0, 0x49, 0x12, 0xa0, 0x49, 0x12, 0x60, 0x79, 0xf2, 0x60, 0x30, 0xe2, 0x20, 

	// 'JUL'
0x04, 0x89, 0x00, 0x04, 0x89, 0x00, 0x04, 0x89, 0x00, 0x04, 0x89, 0x00, 0x04, 0x89, 0x00, 0x04, 0x89, 0x00, 0x24, 0x89, 0x00, 0x24, 0x89, 0x00, 0x3c, 0xf9, 0xe0, 0x18, 0x71, 0xe0, 

	// 'AUG'
0x10, 0x88, 0x70, 0x10, 0x88, 0xf8, 0x28, 0x89, 0x18, 0x28, 0x89, 0x08, 0x28, 0x89, 0x00, 0x44, 0x89, 0x38, 0x7c, 0x89, 0x38, 0x7c, 0x89, 0x08, 0x82, 0xf8, 0xf8, 0x82, 0x70, 0x70, 

	// 'SEP'
0x38, 0xf9, 0xe0, 0x7c, 0xf9, 0xf0, 0x44, 0x81, 0x10, 0x40, 0x81, 0x10, 0x78, 0xf9, 0xf0, 0x3c, 0xf9, 0xe0, 0x04, 0x81, 0x00, 0x44, 0x81, 0x00, 0x7c, 0xf9, 0x00, 0x38, 0xf9, 0x00, 

	// 'OCT'
0x38, 0x39, 0xf0, 0x3c, 0x3d, 0xf0, 0x66, 0x64, 0x40, 0x42, 0x44, 0x40, 0x42, 0x40, 0x40, 0x42, 0x40, 0x40, 0x42, 0x44, 0x40, 0x66, 0x6c, 0x40, 0x3c, 0x3c, 0x40, 0x18, 0x38, 0x40, 

	// 'NOV'
0x88, 0xe2, 0x08, 0xc8, 0xf1, 0x10, 0xc9, 0x99, 0x10, 0xc9, 0x09, 0x10, 0xa9, 0x08, 0xa0, 0xa9, 0x08, 0xa0, 0xa9, 0x08, 0xa0, 0x99, 0x98, 0x40, 0x98, 0xf0, 0x40, 0x88, 0x60, 0x40, 

	// DEC'
0x78, 0xf8, 0xe0, 0x7c, 0xf8, 0xf0, 0x44, 0x81, 0x90, 0x44, 0x81, 0x10, 0x44, 0xf9, 0x00, 0x44, 0xf9, 0x00, 0x44, 0x81, 0x10, 0x44, 0x81, 0xb0, 0x7c, 0xf8, 0xf0, 0x78, 0xf8, 0xe0, 

};