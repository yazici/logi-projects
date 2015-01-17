#define QVGA_CONF_SIZE sizeof(qvga_conf)
char qvga_conf [][2]= 
{
	{0x12 , 0x80},
	{0x11 , 0x01}, // OV: clock scale {30 fps} // 15fps with 0x03
	{0x3a , 0x04}, // OV
	{0x12 , 0x10}, // QVGA
	{0x8C , 0x00}, // 
	{0x17 , 0x15}, // HSTART
	{0x18 , 0x03}, // HSTOP
	{0x32 , 0xA4}, // HREF
	{0x19 , 0x03}, // VSTART
	{0x1A , 0x7b}, // VSTOP
	{0x03 , 0x0a}, // VREF
	{0x0C , 0x00}, // COM13
	{0x3E , 0x00}, // COM14
	{0x70 , 0x3a}, // MISTERY SCALLING NUMBER
	{0x71 , 0x35}, 
	{0x72 , 0x11}, 
	{0x73 , 0xf0}, 
	{0xa2 , 0x02},
	{0x15 , 0x00}, // END OF MISTERY SCALLING NUMBER
	{0x7a , 0x20}, //GAMMA CURVES VALUES
	{0x7b , 0x10}, 
	{0x7c , 0x1e}, 
	{0x7d , 0x35}, 
	{0x7e , 0x5a}, 
	{0x7f , 0x69}, 
	{0x80 , 0x76}, 
	{0x81 , 0x80}, 
	{0x82 , 0x88}, 
	{0x83 , 0x8f}, 
	{0x84 , 0x96}, 
	{0x85 , 0xa3}, 
	{0x86 , 0xaf}, 
	{0x87 , 0xc4}, 
	{0x88 , 0xd7}, 
	{0x89 , 0xe8}, // END OF GAMMA CURVES VALUES
	{0x13 , (0x80 | 0x40 | 0x20)}, //COM8
	{0x00 , 0x00}, // GAIN
	{0x10 , 0x00}, // AECH
	{0x0D , 0x40}, // COM4
	{0x14 , 0x18}, // COM9
	{0xa5 , 0x05}, //BD50MAX
	{0xab , 0x07}, //BD60MAX
	{0x24 , 0x95}, // AEW
	{0x25 , 0x33}, // AEB
	{0x26 , 0xe3}, // VPT
	{0x9f , 0x78}, // HAECC1
	{0xA0 , 0x68}, // HAECC2
	{0xa1 , 0x03}, // MAGIC NUMBER
	{0xA6 , 0xd8}, // HAECC3
	{0xA7 , 0xd8}, // HAECC4
	{0xA8 , 0xf0}, // HAECC5
	{0xA9 , 0x90}, // HAECC6
	{0xAA , 0x94}, // HAECC7
	{0x13 , (0x80 | 0x40 | 0x20 | 0x04| 0x01)}, //COM8
	{0x0E , 0x61}, // COM5
	{0x0F , 0x4b}, // COM6
	{0x16 , 0x02},
	{0x1E , 0x07}, // MVFP
	{0x21 , 0x02}, 
	{0x22 , 0x91}, 
	{0x29 , 0x07}, 
	{0x33 , 0x0b}, 
	{0x35 , 0x0b}, 
	{0x37 , 0x1d}, 
	{0x38 , 0x71}, 
	{0x39 , 0x2a}, 
	{0x3C , 0x78}, // COM12
	{0x4d , 0x40},
	{0x4e , 0x20}, 
	{0x69 , 0x00}, // GFIX
	{0x6b , 0x4a}, 
	{0x74 , 0x10}, 
	{0x8d , 0x4f}, 
	{0x8e , 0x00}, 
	{0x8f , 0x00}, 
	{0x90 , 0x00}, 
	{0x91 , 0x00}, 
	{0x96 , 0x00}, 
	{0x9a , 0x00}, 
	{0xb0 , 0x84}, 
	{0xb1 , 0x0c}, 
	{0xb2 , 0x0e}, 
	{0xb3 , 0x82}, 
	{0xb8 , 0x0a},
	{0x43 , 0x0a}, // MAGIC NUMBERS
	{0x44 , 0xf0}, 
	{0x45 , 0x34}, 
	{0x46 , 0x58}, 
	{0x47 , 0x28}, 
	{0x48 , 0x3a}, 
	{0x59 , 0x88}, 
	{0x5a , 0x88}, 
	{0x5b , 0x44}, 
	{0x5c , 0x67}, 
	{0x5d , 0x49}, 
	{0x5e , 0x0e}, 
	{0x6c , 0x0a}, 
	{0x6d , 0x55}, 
	{0x6e , 0x11}, 
	{0x6f , 0x9E}, // 9E F| ADVANCE AWB
	{0x6a , 0x40}, 
	{0x01 , 0x40}, // REG BLUE
	{0x02 , 0x60}, // REG_RED
	{0x13 , (0x80 | 0x40 | 0x20 | 0x04 | 0x01 | 0x02)}, // COM8 AWB AGC AEC
	//{0x13 , {0x80 | 0x40 | 0x20 | 0x04 | 0x01}}, // COM8 AGC AEC
	//{0x13 , {0x80 | 0x40 | 0x20 | 0x04}}, // COM8 AGC
	//{0x13 , {0x80 | 0x40 | 0x20 }}, // COM8
	//{0x13 , {0x80 | 0x40 | 0x20 | 0x01 }}, // COM8 AEC {BEST CONFIG F| LINE DETECTION}
	{0x4f , 0x80}, //matrix coefficient 1 
	{0x50 , 0x80}, // matrix coefficient 2 
	{0x51 , 0x00}, // vb 
	{0x52 , 0x22}, // matrix coefficient 4 
	{0x53 , 0x5e}, // matrix coefficient 5 
	{0x54 , 0x80}, // matrix coefficient 6 
	{0x58 , 0x9e},
	{0x41 , 0x08}, // COM16
	{0x3F , 0x00}, // EDGE
	{0x75 , 0x05}, 
	{0x76 , 0xe1}, 
	{0x4c , 0x00}, 
	{0x77 , 0x01}, 
//	{0x3D , {0x80| 0x40 | 0x03}}, //COM13 
	{0x3D , (0x80| 0x40)},
	{0xc9 , 0x60}, 
	{0x41 , 0x38}, // COM16
	{0x56 , 0x40},
	{0x34 , 0x11}, 
	{0x3B , (0x02| 0x10)}, // COM11
	{0xa4 , 0x88},
	{0x96 , 0x00}, 
	{0x97 , 0x30}, 
	{0x98 , 0x20}, 
	{0x99 , 0x30}, 
	{0x9a , 0x84}, 
	{0x9b , 0x29}, 
	{0x9c , 0x03}, 
	{0x9d , 0x4c}, 
	{0x9e , 0x3f}, 
	{0x78 , 0x04},
	{0x79 , 0x01}, 
	{0xc8 , 0xf0}, 
	{0x79 , 0x0f}, 
	{0xc8 , 0x00}, 
	{0x79 , 0x10}, 
	{0xc8 , 0x7e}, 
	{0x79 , 0x0a}, 
	{0xc8 , 0x80}, 
	{0x79 , 0x0b}, 
	{0xc8 , 0x01}, 
	{0x79 , 0x0c}, 
	{0xc8 , 0x0f}, 
	{0x79 , 0x0d}, 
	{0xc8 , 0x20}, 
	{0x79 , 0x09}, 
	{0xc8 , 0x80}, 
	{0x79 , 0x02}, 
	{0xc8 , 0xc0}, 
	{0x79 , 0x03}, 
	{0xc8 , 0x40}, 
	{0x79 , 0x05}, 
	{0xc8 , 0x30}, 
	{0x79 , 0x26},
	{0x04 , 0x00}, // COM1
	{0x40 , 0xC0}, // COM15	
	{0xFF , 0xFF}
};


#define VGA_CONF_SIZE sizeof(vga_conf)
char vga_conf [][2]= 
{
	{0x12 , 0x80},
	{0x11 , 0x03}, // OV: clock scale {30 fps} // 15fps with 0x03
	{0x3a , 0x04}, // OV
	{0x12 , 0x00}, // VGA
	{0x8C , 0x00}, // 
	{0x17 , 0x14}, // HSTART
	{0x18 , 0x02}, // HSTOP
	{0x32 , 0xA4}, // HREF
	{0x19 , 0x03}, // VSTART
	{0x1A , 0x7b}, // VSTOP
	{0x03 , 0x0a}, // VREF
	{0x0C , 0x00}, // COM13
	{0x3E , 0x00}, // COM14
	{0x70 , 0x3a}, // MISTERY SCALLING NUMBER
	{0x71 , 0x35}, 
	{0x72 , 0x11}, 
	{0x73 , 0xf0}, 
	{0xa2 , 0x02},
	{0x15 , 0x00}, // END OF MISTERY SCALLING NUMBER
	{0x7a , 0x20}, //GAMMA CURVES VALUES
	{0x7b , 0x10}, 
	{0x7c , 0x1e}, 
	{0x7d , 0x35}, 
	{0x7e , 0x5a}, 
	{0x7f , 0x69}, 
	{0x80 , 0x76}, 
	{0x81 , 0x80}, 
	{0x82 , 0x88}, 
	{0x83 , 0x8f}, 
	{0x84 , 0x96}, 
	{0x85 , 0xa3}, 
	{0x86 , 0xaf}, 
	{0x87 , 0xc4}, 
	{0x88 , 0xd7}, 
	{0x89 , 0xe8}, // END OF GAMMA CURVES VALUES
	{0x13 , (0x80 | 0x40 | 0x20)}, //COM8
	{0x00 , 0x00}, // GAIN
	{0x10 , 0x00}, // AECH
	{0x0D , 0x40}, // COM4
	{0x14 , 0x18}, // COM9
	{0xa5 , 0x05}, //BD50MAX
	{0xab , 0x07}, //BD60MAX
	{0x24 , 0x95}, // AEW
	{0x25 , 0x33}, // AEB
	{0x26 , 0xe3}, // VPT
	{0x9f , 0x78}, // HAECC1
	{0xA0 , 0x68}, // HAECC2
	{0xa1 , 0x03}, // MAGIC NUMBER
	{0xA6 , 0xd8}, // HAECC3
	{0xA7 , 0xd8}, // HAECC4
	{0xA8 , 0xf0}, // HAECC5
	{0xA9 , 0x90}, // HAECC6
	{0xAA , 0x94}, // HAECC7
	{0x13 , (0x80 | 0x40 | 0x20 | 0x04| 0x01)}, //COM8
	{0x0E , 0x61}, // COM5
	{0x0F , 0x4b}, // COM6
	{0x16 , 0x02},
	{0x1E , 0x07}, // MVFP
	{0x21 , 0x02}, 
	{0x22 , 0x91}, 
	{0x29 , 0x07}, 
	{0x33 , 0x0b}, 
	{0x35 , 0x0b}, 
	{0x37 , 0x1d}, 
	{0x38 , 0x71}, 
	{0x39 , 0x2a}, 
	{0x3C , 0x78}, // COM12
	{0x4d , 0x40},
	{0x4e , 0x20}, 
	{0x69 , 0x00}, // GFIX
	{0x6b , 0x4a}, 
	{0x74 , 0x10}, 
	{0x8d , 0x4f}, 
	{0x8e , 0x00}, 
	{0x8f , 0x00}, 
	{0x90 , 0x00}, 
	{0x91 , 0x00}, 
	{0x96 , 0x00}, 
	{0x9a , 0x00}, 
	{0xb0 , 0x84}, 
	{0xb1 , 0x0c}, 
	{0xb2 , 0x0e}, 
	{0xb3 , 0x82}, 
	{0xb8 , 0x0a},
	{0x43 , 0x0a}, // MAGIC NUMBERS
	{0x44 , 0xf0}, 
	{0x45 , 0x34}, 
	{0x46 , 0x58}, 
	{0x47 , 0x28}, 
	{0x48 , 0x3a}, 
	{0x59 , 0x88}, 
	{0x5a , 0x88}, 
	{0x5b , 0x44}, 
	{0x5c , 0x67}, 
	{0x5d , 0x49}, 
	{0x5e , 0x0e}, 
	{0x6c , 0x0a}, 
	{0x6d , 0x55}, 
	{0x6e , 0x11}, 
	{0x6f , 0x9E}, // 9E F| ADVANCE AWB
	{0x6a , 0x40}, 
	{0x01 , 0x40}, // REG BLUE
	{0x02 , 0x60}, // REG_RED
	{0x13 , (0x80 | 0x40 | 0x20 | 0x04 | 0x01 | 0x02)}, // COM8 AWB AGC AEC
	//{0x13 , {0x80 | 0x40 | 0x20 | 0x04 | 0x01}}, // COM8 AGC AEC
	//{0x13 , {0x80 | 0x40 | 0x20 | 0x04}}, // COM8 AGC
	//{0x13 , {0x80 | 0x40 | 0x20 }}, // COM8
	//{0x13 , {0x80 | 0x40 | 0x20 | 0x01 }}, // COM8 AEC {BEST CONFIG F| LINE DETECTION}
	{0x4f , 0x80}, //matrix coefficient 1 
	{0x50 , 0x80}, // matrix coefficient 2 
	{0x51 , 0x00}, // vb 
	{0x52 , 0x22}, // matrix coefficient 4 
	{0x53 , 0x5e}, // matrix coefficient 5 
	{0x54 , 0x80}, // matrix coefficient 6 
	{0x58 , 0x9e},
	{0x41 , 0x08}, // COM16
	{0x3F , 0x00}, // EDGE
	{0x75 , 0x05}, 
	{0x76 , 0xe1}, 
	{0x4c , 0x00}, 
	{0x77 , 0x01}, 
//	{0x3D , {0x80| 0x40 | 0x03}}, //COM13 
	{0x3D , (0x80| 0x40)},
	{0xc9 , 0x60}, 
	{0x41 , 0x38}, // COM16
	{0x56 , 0x40},
	{0x34 , 0x11}, 
	{0x3B , (0x02| 0x10)}, // COM11
	{0xa4 , 0x88},
	{0x96 , 0x00}, 
	{0x97 , 0x30}, 
	{0x98 , 0x20}, 
	{0x99 , 0x30}, 
	{0x9a , 0x84}, 
	{0x9b , 0x29}, 
	{0x9c , 0x03}, 
	{0x9d , 0x4c}, 
	{0x9e , 0x3f}, 
	{0x78 , 0x04},
	{0x79 , 0x01}, 
	{0xc8 , 0xf0}, 
	{0x79 , 0x0f}, 
	{0xc8 , 0x00}, 
	{0x79 , 0x10}, 
	{0xc8 , 0x7e}, 
	{0x79 , 0x0a}, 
	{0xc8 , 0x80}, 
	{0x79 , 0x0b}, 
	{0xc8 , 0x01}, 
	{0x79 , 0x0c}, 
	{0xc8 , 0x0f}, 
	{0x79 , 0x0d}, 
	{0xc8 , 0x20}, 
	{0x79 , 0x09}, 
	{0xc8 , 0x80}, 
	{0x79 , 0x02}, 
	{0xc8 , 0xc0}, 
	{0x79 , 0x03}, 
	{0xc8 , 0x40}, 
	{0x79 , 0x05}, 
	{0xc8 , 0x30}, 
	{0x79 , 0x26},
	{0x04 , 0x00}, // COM1
	{0x40 , 0xC0}, // COM15	
	{0xFF , 0xFF}
};
