#ifndef __FONT_H
#define __FONT_H
const uint8_t font_data_example[][96] = {
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x0C,0x0C,0x30,0x0C,0x0C,0x30,0x0C,0x7F,0xFF,0x0C,0x7F,0xFF,0x0C,0x0C,
0x30,0xFF,0x8C,0x30,0xFF,0xBF,0xFE,0x0C,0x3F,0xFE,0x1C,0x30,0x06,0x1C,0x3F,0xFE,
0x3F,0x3F,0xFE,0x3D,0xB0,0x06,0x6C,0xF0,0x06,0x6C,0x7F,0xFE,0xCC,0x3F,0xFE,0xCC,
0x01,0x80,0x0C,0x7F,0xFF,0x0C,0x7F,0xFF,0x0C,0x01,0xC0,0x0C,0x07,0x20,0x0C,0x1E,
0x1C,0x0C,0xF8,0x0F,0x0C,0x60,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"模",0*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x03,0x30,0x00,0x03,0x18,0x00,0x03,0x0C,0x00,0x03,0x04,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,
0x7F,0xF9,0x80,0x7F,0xF9,0x80,0x03,0x01,0x80,0x03,0x01,0x80,0x03,0x01,0x80,0x03,
0x01,0xC0,0x03,0x00,0xC1,0x03,0x00,0xC1,0x03,0x3C,0xE1,0x1F,0xFC,0x73,0xFF,0x80,
0x3F,0xE0,0x00,0x3F,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"式",1*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x10,0x01,0x80,0x38,0x31,0x80,0x1C,0x31,0x80,0x0C,0x61,0x80,0x0E,0x7F,
0xFE,0x04,0x7F,0xFE,0x00,0x61,0x80,0x00,0xC1,0x80,0x7C,0x41,0x80,0x7C,0x01,0x80,
0x0D,0xFF,0xFF,0x0D,0xFF,0xFF,0x0C,0x18,0x60,0x0C,0x18,0x62,0x0C,0x18,0x63,0x0C,
0x38,0x63,0x0C,0x70,0x63,0x0D,0xE0,0x7E,0x1C,0x80,0x3E,0x3E,0x00,0x00,0x77,0x00,
0x00,0x63,0xFF,0xFF,0x00,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"选",2*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x0C,0x00,0x00,0x0C,0x7F,0xFE,0x0C,0x7F,0xFE,0x0C,0x18,0x0E,0x7F,0x0C,
0x0C,0x7F,0x0E,0x38,0x0C,0x07,0x70,0x0C,0x03,0xE0,0x0C,0x1F,0xF8,0x0C,0xFE,0x3F,
0x0C,0x61,0x87,0x0D,0x01,0x80,0x1F,0x01,0x80,0x7E,0x7F,0xFF,0x6C,0x7F,0xFF,0x0C,
0x01,0x80,0x0C,0x01,0x80,0x0C,0xFF,0xFF,0x0C,0xFF,0xFF,0x0C,0x01,0x80,0x0C,0x01,
0x80,0x7C,0x01,0x80,0x78,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"择",3*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,
0x00,0x00,0x07,0x00,0x00,0x06,0x3F,0xFF,0x0C,0x3F,0xFF,0x0C,0x00,0xC0,0x18,0x80,
0xC0,0x31,0xC0,0xC0,0x23,0x80,0xC0,0x7F,0x00,0xC0,0x7F,0x00,0xC0,0x0E,0x00,0xC0,
0x0C,0x00,0xC0,0x18,0x00,0xC0,0x38,0x00,0xC0,0x77,0xC0,0xC0,0x7F,0xC0,0xC0,0x78,
0x00,0xC0,0x00,0x00,0xC0,0x01,0xC0,0xC0,0x1F,0xC0,0xC0,0x7E,0x00,0xC0,0x60,0x7F,
0xFF,0x00,0x7F,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"红",4*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x03,0x00,0xC0,0x03,0x00,0xC0,0x06,0x00,0xC0,0x06,0x00,0xC0,0x07,0xFC,
0xC0,0x0F,0xFC,0xC0,0x0C,0x0C,0xC0,0x1C,0x0C,0xD0,0x18,0x0C,0xF8,0x18,0x18,0xDC,
0x36,0x18,0xCE,0x73,0x18,0xC7,0x61,0xB0,0xC3,0x00,0xF0,0xC1,0x00,0x70,0xC0,0x00,
0x60,0xC0,0x00,0xC0,0xC0,0x01,0xC0,0xC0,0x03,0x80,0xC0,0x07,0x00,0xC0,0x1E,0x00,
0xC0,0x3C,0x00,0xC0,0x10,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"外",5*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,
0x00,0x00,0x18,0x00,0x00,0x1F,0xF3,0xFE,0x3F,0xF3,0xFE,0x23,0x03,0x06,0x63,0x03,
0x06,0xFF,0xFB,0x06,0xFF,0xFB,0x06,0x06,0x03,0x06,0x07,0x83,0xFE,0x1C,0xE3,0xFE,
0x38,0x33,0x06,0xF0,0x18,0x00,0x4F,0xFF,0xF8,0x0F,0xFF,0xF8,0x0C,0x00,0x18,0x0C,
0x00,0x18,0x0F,0xFF,0xF8,0x0F,0xFF,0xF8,0x0C,0x00,0x18,0x0C,0x00,0x18,0x0F,0xFF,
0xF8,0x0F,0xFF,0xF8,0x0C,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"智",6*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,
0x01,0x00,0x0C,0x03,0x80,0x0C,0x01,0xC0,0x0C,0x00,0xC0,0x0C,0x7F,0xFF,0x7F,0x7F,
0xFF,0x7F,0x60,0x03,0x0C,0x60,0x03,0x0C,0x61,0x33,0x0C,0x03,0x38,0x0C,0x0E,0x0E,
0x0C,0xD8,0x07,0x0F,0xF0,0x02,0x3F,0x00,0x00,0x7C,0x1F,0xFE,0x4C,0x1F,0xFE,0x0C,
0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0xFF,
0xFF,0x7C,0xFF,0xFF,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"控",7*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x04,0x00,0x00,0x0E,0x00,0x7F,0x0C,0xFF,0xFF,0x18,0xFF,0xC0,0x38,0xC0,
0xC0,0x30,0xC0,0xC0,0x60,0xFF,0xFF,0xC4,0xFF,0xFF,0x0E,0xC0,0xC0,0x0C,0xC0,0xC0,
0x18,0xDF,0xFE,0x38,0xDF,0xFE,0x78,0xD8,0x06,0x78,0xDF,0xFE,0xD8,0xDF,0xFE,0x18,
0xD8,0x06,0x19,0xDF,0xFE,0x19,0x9F,0xFE,0x19,0x98,0x06,0x1B,0x98,0x06,0x1B,0x1F,
0xFE,0x1F,0x1F,0xFE,0x1A,0x18,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"循",8*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,
0x01,0x00,0x70,0x03,0x80,0x30,0x01,0xC0,0x38,0x00,0x80,0x19,0xFF,0xFF,0x1D,0xFF,
0xFF,0x08,0x0C,0x30,0x00,0x0C,0x30,0x00,0x0C,0x30,0xF8,0x6C,0x34,0xF8,0xEC,0x3E,
0x18,0xCC,0x36,0x19,0xCC,0x37,0x19,0x8C,0x33,0x1B,0x9C,0x33,0x19,0x18,0x31,0x18,
0x18,0x30,0x18,0x30,0x30,0x18,0x70,0x30,0x18,0xE7,0xF0,0x3C,0x47,0xE0,0x6F,0x00,
0x00,0xC3,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"迹",9*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x20,0x41,0xFE,0x30,0x61,0xFE,0x30,0x31,0x86,0xFF,0x19,0x86,0xFF,0x09,0x86,
0x00,0x01,0x86,0x82,0x01,0xFE,0x86,0x01,0xFE,0x44,0xF9,0x86,0x48,0xF9,0x80,0xFF,
0x19,0xFE,0xFF,0x1B,0xFE,0x18,0x1B,0xC6,0x18,0x1A,0xC6,0x18,0x1A,0xC6,0xFF,0x1E,
0xC6,0xFF,0x1E,0xC6,0x18,0x18,0xFE,0x18,0x38,0xFE,0x18,0x7C,0xC6,0x18,0xEF,0x00,
0x00,0xC7,0xFF,0xFF,0x01,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"避",10*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x01,0x80,0x7F,0x00,0xC0,0x7F,0x7F,0xFF,0x63,0x08,0x10,0x66,0x0C,
0x18,0x66,0x06,0x30,0x66,0xFF,0xFF,0x6C,0x00,0x00,0x6C,0x00,0x00,0x6C,0x3F,0xFE,
0x66,0x30,0x06,0x66,0x30,0x06,0x63,0x3F,0xFE,0x63,0x30,0x06,0x63,0x30,0x06,0x63,
0x3F,0xFE,0x7F,0x31,0x86,0x7E,0x01,0x80,0x60,0xFF,0xFF,0x60,0x01,0x80,0x60,0x01,
0x80,0x60,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"障",11*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x39,
0xC0,0x00,0x39,0xC0,0x00,0x1C,0xE0,0x00,0x1C,0xE0,0x00,0x0E,0x70,0x00,0x0E,0x38,
0x00,0x07,0x38,0x00,0x03,0x9C,0x00,0x03,0x9C,0x00,0x01,0xCE,0x00,0x01,0xCE,0x00,
0x00,0xE7,0x00,0x01,0xCE,0x00,0x01,0xCE,0x00,0x03,0x9C,0x00,0x03,0x9C,0x00,0x07,
0x38,0x00,0x0E,0x38,0x00,0x0E,0x70,0x00,0x1C,0xE0,0x00,0x1C,0xE0,0x00,0x39,0xC0,
0x00,0x39,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"》",12*/
 // 其他汉字的点阵数据...
};
const uint8_t font16x32[][32] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*" ",0*/
    {0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
     0x18, 0x18, 0x18, 0x10, 0x10, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"!",1*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*""",2*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x22, 0x24, 0x24, 0x24, 0x24, 0xFF, 0xFF, 0x24, 0x24,
     0x24, 0x24, 0x24, 0xFF, 0xFF, 0xFF, 0x24, 0x44, 0x48, 0x48, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"#",3*/
    {0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x3C, 0x3C, 0x74, 0x56, 0x56, 0x56, 0x70, 0x70, 0x30, 0x38,
     0x18, 0x1C, 0x14, 0x16, 0x56, 0x56, 0x56, 0x56, 0x76, 0x7C, 0x3C, 0x18, 0x10, 0x10, 0x10, 0x00}, /*"$",4*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x64, 0xA4, 0xA4, 0xA4, 0xA8, 0xA8, 0xA8, 0x68, 0x70,
     0x70, 0x16, 0x16, 0x1A, 0x2A, 0x2A, 0x2A, 0x2A, 0x4A, 0x46, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"%",5*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x2C, 0x2C, 0x6C, 0x2C, 0x28, 0x28, 0x38, 0x30,
     0x30, 0x70, 0x52, 0x5A, 0xCA, 0xCE, 0xCE, 0xC6, 0x46, 0x7E, 0x3A, 0x10, 0x00, 0x00, 0x00, 0x00}, /*"&",6*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"'",7*/
    {0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x04, 0x04, 0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
     0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0C, 0x04, 0x04, 0x06, 0x02, 0x02, 0x00, 0x00}, /*"(",8*/
    {0x00, 0x00, 0x00, 0x00, 0xC0, 0x40, 0x60, 0x20, 0x20, 0x20, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
     0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x20, 0x20, 0x20, 0x40, 0x40, 0x00, 0x00, 0x00}, /*")",9*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x5A, 0xFF, 0x7E, 0x3C, 0x18, 0x3C, 0x7E,
     0xFF, 0x5A, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"*",10*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xFF,
     0xFF, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"+",11*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x20, 0x20, 0x20, 0x40, 0x40}, /*",",12*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE,
     0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"-",13*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00}, /*".",14*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x08, 0x08, 0x08, 0x08,
     0x10, 0x10, 0x10, 0x10, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00}, /*"/",15*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x3C, 0x64, 0x66, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42,
     0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x66, 0x64, 0x3C, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"0",16*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x18, 0x38, 0x38, 0x78, 0x58, 0x18, 0x18, 0x18,
     0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"1",17*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x66, 0x46, 0x42, 0x42, 0x02, 0x06, 0x06, 0x04,
     0x04, 0x0C, 0x08, 0x18, 0x10, 0x10, 0x30, 0x20, 0x60, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"2",18*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x66, 0x46, 0x42, 0x42, 0x02, 0x06, 0x04, 0x1C,
     0x1C, 0x0C, 0x06, 0x02, 0x02, 0x02, 0x42, 0x46, 0x66, 0x7C, 0x3C, 0x10, 0x00, 0x00, 0x00, 0x00}, /*"3",19*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x0C, 0x0C, 0x0C, 0x1C, 0x14, 0x14, 0x34, 0x24,
     0x24, 0x64, 0x44, 0xC4, 0xFF, 0xFF, 0xFF, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"4",20*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x60, 0x60, 0x40, 0x40, 0x40, 0x78, 0x7C, 0x6C,
     0x46, 0x02, 0x02, 0x02, 0x02, 0x02, 0xC2, 0xC6, 0x46, 0x7C, 0x3C, 0x10, 0x00, 0x00, 0x00, 0x00}, /*"5",21*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x08, 0x18, 0x18, 0x10, 0x10, 0x30, 0x20, 0x3C, 0x7E,
     0x66, 0x42, 0x43, 0x43, 0x43, 0x43, 0x42, 0x42, 0x66, 0x7E, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"6",22*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x02, 0x02, 0x06, 0x04, 0x04, 0x04, 0x0C, 0x08,
     0x08, 0x08, 0x08, 0x18, 0x10, 0x10, 0x10, 0x10, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"7",23*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x3C, 0x66, 0x46, 0x42, 0x42, 0x46, 0x46, 0x64, 0x3C,
     0x3C, 0x6E, 0x46, 0x42, 0xC2, 0xC2, 0xC2, 0x42, 0x46, 0x7C, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"8",24*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x7C, 0x66, 0x46, 0xC2, 0xC2, 0xC2, 0xC2, 0xC6, 0xC6,
     0x44, 0x7C, 0x3C, 0x0C, 0x08, 0x08, 0x18, 0x18, 0x10, 0x10, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00}, /*"9",25*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
     0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00}, /*":",26*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
     0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x18, 0x18, 0x08, 0x10, 0x10, 0x20}, /*";",27*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x04, 0x0C, 0x08, 0x18, 0x10, 0x30, 0x20, 0x40,
     0x40, 0x40, 0x60, 0x20, 0x10, 0x10, 0x08, 0x0C, 0x04, 0x06, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00}, /*"<",28*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0x00, 0x00,
     0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"=",29*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x40, 0x20, 0x20, 0x10, 0x18, 0x08, 0x0C, 0x04, 0x06,
     0x02, 0x02, 0x04, 0x04, 0x08, 0x18, 0x10, 0x30, 0x20, 0x60, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00}, /*">",30*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x66, 0x66, 0x46, 0x46, 0x46, 0x06, 0x04, 0x0C,
     0x08, 0x18, 0x18, 0x10, 0x10, 0x00, 0x00, 0x00, 0x10, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"?",31*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x24, 0x42, 0x42, 0x4E, 0x9E, 0x96, 0xA6, 0xA6, 0xA6,
     0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xB6, 0x94, 0x40, 0x40, 0x44, 0x34, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"@",32*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x38, 0x3C, 0x3C, 0x2C, 0x24,
     0x24, 0x24, 0x7C, 0x7E, 0x7E, 0x46, 0x42, 0x42, 0x42, 0xC2, 0xC3, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"A",33*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x7C, 0x46, 0x46, 0x42, 0x42, 0x42, 0x46, 0x46, 0x7C,
     0x7C, 0x4E, 0x46, 0x42, 0x42, 0x42, 0x42, 0x42, 0x46, 0x7E, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"B",34*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x3C, 0x26, 0x62, 0x62, 0x42, 0x42, 0x42, 0x40, 0x40,
     0x40, 0x40, 0x40, 0x42, 0x42, 0x42, 0x42, 0x62, 0x66, 0x3C, 0x3C, 0x08, 0x00, 0x00, 0x00, 0x00}, /*"C",35*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x7C, 0x4C, 0x46, 0x46, 0x46, 0x42, 0x42, 0x42, 0x42,
     0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x46, 0x46, 0x4C, 0x7C, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"D",36*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7E,
     0x7E, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"E",37*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7C,
     0x7C, 0x7C, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"F",38*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x3C, 0x26, 0x66, 0x42, 0x42, 0x42, 0x40, 0x40, 0x40,
     0x40, 0x4E, 0x4E, 0x42, 0x42, 0x42, 0x42, 0x62, 0x66, 0x3E, 0x3E, 0x1A, 0x00, 0x00, 0x00, 0x00}, /*"G",39*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7E,
     0x7E, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"H",40*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
     0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"I",41*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
     0x02, 0x02, 0x02, 0x42, 0x42, 0x42, 0x46, 0x66, 0x66, 0x7C, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"J",42*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x46, 0x44, 0x4C, 0x4C, 0x48, 0x58, 0x50, 0x70, 0x70,
     0x78, 0x78, 0x48, 0x48, 0x4C, 0x4C, 0x44, 0x46, 0x46, 0x46, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"K",43*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
     0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"L",44*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x6E,
     0x7E, 0x7A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"M",45*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x62, 0x62, 0x62, 0x62, 0x62, 0x72, 0x72, 0x52, 0x52,
     0x5A, 0x5A, 0x4A, 0x4A, 0x4A, 0x4E, 0x4E, 0x46, 0x46, 0x46, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"N",46*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x66, 0x66, 0x42, 0x42, 0x42, 0x42, 0xC2, 0xC2,
     0xC2, 0xC2, 0xC2, 0x42, 0x42, 0x42, 0x42, 0x66, 0x66, 0x3C, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"O",47*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x44, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x44,
     0x78, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"P",48*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x66, 0x66, 0x42, 0x42, 0x42, 0x42, 0xC2, 0xC2,
     0xC2, 0xC2, 0xC2, 0x4A, 0x4A, 0x4A, 0x4E, 0x66, 0x66, 0x3E, 0x3E, 0x1A, 0x00, 0x00, 0x00, 0x00}, /*"Q",49*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x7C, 0x4E, 0x46, 0x42, 0x42, 0x42, 0x42, 0x46, 0x46,
     0x7C, 0x7C, 0x48, 0x4C, 0x4C, 0x44, 0x44, 0x46, 0x46, 0x42, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"R",50*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x66, 0x42, 0x42, 0x40, 0x40, 0x40, 0x60, 0x30, 0x38,
     0x18, 0x0C, 0x04, 0x02, 0x02, 0x02, 0x42, 0x42, 0x42, 0x64, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"S",51*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
     0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"T",52*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42,
     0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x66, 0x7E, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"U",53*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0xC2, 0xC2, 0x42, 0x42, 0x46, 0x46, 0x66, 0x64, 0x64,
     0x24, 0x24, 0x2C, 0x2C, 0x3C, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"V",54*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9B, 0xDB, 0xDB, 0xDA, 0xDA, 0xDA, 0xDA, 0x5A, 0x5A, 0x5A,
     0x6A, 0x6A, 0x6A, 0x6A, 0x66, 0x66, 0x66, 0x66, 0x66, 0x64, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00}, /*"W",55*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x46, 0x66, 0x64, 0x24, 0x2C, 0x3C, 0x18, 0x18, 0x18,
     0x18, 0x18, 0x18, 0x38, 0x2C, 0x24, 0x24, 0x64, 0x46, 0x42, 0xC2, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"X",56*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x42, 0x42, 0x66, 0x64, 0x24, 0x24, 0x2C, 0x38, 0x18,
     0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"Y",57*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x02, 0x06, 0x04, 0x04, 0x0C, 0x0C, 0x08, 0x18,
     0x18, 0x10, 0x10, 0x30, 0x20, 0x20, 0x60, 0x40, 0x40, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"Z",58*/
    {0x00, 0x00, 0x00, 0x1E, 0x1E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
     0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1E, 0x1E, 0x00}, /*"[",59*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x08, 0x08, 0x08, 0x08,
     0x10, 0x10, 0x10, 0x10, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00}, /*"/",60*/
    {0x00, 0x00, 0x00, 0x78, 0x78, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
     0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x78, 0x78, 0x00}, /*"]",61*/
    {0x00, 0x00, 0x18, 0x18, 0x3C, 0x24, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"^",62*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF}, /*"_",63*/
    {0x00, 0x00, 0x30, 0x10, 0x18, 0x18, 0x08, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"`",64*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x64,
     0x66, 0x46, 0x06, 0x1E, 0x7E, 0x66, 0x46, 0x46, 0x46, 0x7E, 0x7E, 0x30, 0x00, 0x00, 0x00, 0x00}, /*"a",65*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x58, 0x7C, 0x64,
     0x66, 0x46, 0x42, 0x42, 0x42, 0x42, 0x42, 0x46, 0x66, 0x7C, 0x7C, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"b",66*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x6E,
     0x66, 0x42, 0x40, 0x40, 0x40, 0x40, 0x42, 0x42, 0x66, 0x7C, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"c",67*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x3A, 0x3A, 0x6E,
     0x46, 0x46, 0x42, 0x42, 0x42, 0x42, 0x46, 0x46, 0x66, 0x7E, 0x3A, 0x10, 0x00, 0x00, 0x00, 0x00}, /*"d",68*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x64,
     0x66, 0x42, 0x7E, 0x7E, 0x40, 0x40, 0x40, 0x42, 0x66, 0x3E, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"e",69*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x1E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7E, 0x7E, 0x10,
     0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"f",70*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x3E, 0x2C,
     0x64, 0x44, 0x44, 0x64, 0x2C, 0x38, 0x58, 0x40, 0x60, 0x7C, 0x7E, 0x42, 0x42, 0x42, 0x7E, 0x3C}, /*"g",71*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x4C, 0x5C, 0x76,
     0x62, 0x62, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"h",72*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18,
     0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"i",73*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x0C,
     0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x4C, 0x78, 0x30}, /*"j",74*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x46, 0x44, 0x4C,
     0x48, 0x58, 0x58, 0x78, 0x68, 0x68, 0x4C, 0x44, 0x44, 0x46, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"k",75*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
     0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"l",76*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF6, 0xF6, 0xFF,
     0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"m",77*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4C, 0x5C, 0x76,
     0x62, 0x62, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"n",78*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x6C,
     0x66, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x66, 0x3C, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"o",79*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x7C, 0x6C,
     0x66, 0x46, 0x42, 0x42, 0x42, 0x42, 0x42, 0x46, 0x66, 0x7C, 0x7C, 0x58, 0x40, 0x40, 0x40, 0x40}, /*"p",80*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x3A, 0x6E,
     0x46, 0x46, 0x42, 0x42, 0x42, 0x42, 0x46, 0x46, 0x66, 0x7E, 0x3A, 0x12, 0x02, 0x02, 0x02, 0x02}, /*"q",81*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x2C, 0x3C,
     0x30, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"r",82*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x64,
     0x66, 0x60, 0x60, 0x38, 0x3C, 0x0E, 0x06, 0x42, 0x46, 0x7E, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"s",83*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0xFC, 0xFC, 0x10,
     0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1E, 0x1E, 0x0C, 0x00, 0x00, 0x00, 0x00}, /*"t",84*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x42,
     0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x46, 0x46, 0x46, 0x6A, 0x7A, 0x30, 0x00, 0x00, 0x00, 0x00}, /*"u",85*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x46,
     0x46, 0x64, 0x24, 0x24, 0x24, 0x2C, 0x3C, 0x38, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"v",86*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9B, 0x9B, 0xDA,
     0xDA, 0x5A, 0x5A, 0x5A, 0x6A, 0x6A, 0x6A, 0x66, 0x64, 0x64, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00}, /*"w",87*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x66, 0x64,
     0x24, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x38, 0x2C, 0x24, 0x66, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"x",88*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x42,
     0x46, 0x64, 0x64, 0x24, 0x24, 0x2C, 0x3C, 0x38, 0x18, 0x18, 0x18, 0x18, 0x10, 0x50, 0x70, 0x60}, /*"y",89*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x06,
     0x04, 0x0C, 0x08, 0x18, 0x10, 0x10, 0x30, 0x20, 0x60, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"z",90*/

};
#endif

