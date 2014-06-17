

const unsigned char bluetooth_connected_width = 14;
const unsigned short bluetooth_connected_offset = 22;
const unsigned char bluetooth_connected_data[] = {
0x3c, 0x00, 0x6e, 0x18, 0xa7, 0x30, 0xcb, 0x60, 0xe7, 0x00, 0xef,
0x78, 0xe7, 0x00, 0xcb, 0x60, 0xa7, 0x30, 0x6e, 0x18, 0x3c, 0x00,
};


const unsigned char bluetooth_disconnected_width = 9;
const unsigned short bluetooth_disconnected_offset = 22;
const unsigned char bluetooth_disconnected_data[] = {
0x3c, 0x00, 0x6e, 0x00, 0xa7, 0x00, 0xcb, 0x00, 0xe7, 0x00, 0xef, 0x00, 0xe7, 0x00, 0xcb, 0x00, 
0xa7, 0x00, 0x6e, 0x00, 0x3c, 0x00, 
};

const unsigned char degree_c_width = 14;
const unsigned short degree_c_offset = 36;
const unsigned char degree_c_data[] = {
0x70, 0x00, 0xf8, 0x00, 0xd8, 0x00, 0xf8, 0x00, 0x70, 0x00, 0x07, 0xe0, 0x1f, 0xf0, 0x1f, 0xf8, 
0x3c, 0x78, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, 0x38, 0x00, 0x38, 0x38, 0x3c, 0x78, 0x1f, 0xf8, 
0x1f, 0xf0, 0x07, 0xe0, 
};

const unsigned char hpa_width = 9;
const unsigned short hap_offset = 62;
const unsigned char hpa_data[] = {
0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xde, 0x00, 0xff, 0x00, 0xe3, 0x00, 0xc3, 0x00, 0xc3, 0x00, 
0xc3, 0x00, 0xc3, 0x00, 0x00, 0x00, 0xfe, 0x00, 0xff, 0x00, 0xc3, 0x00, 0xc1, 0x00, 0xc3, 0x00, 
0xff, 0x00, 0xfe, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x7c, 0x00, 0xfe, 0x00, 
0xc6, 0x00, 0x1e, 0x00, 0x7e, 0x00, 0xe6, 0x00, 0xc6, 0x00, 0xfe, 0x00, 0x7b, 0x00, 
};