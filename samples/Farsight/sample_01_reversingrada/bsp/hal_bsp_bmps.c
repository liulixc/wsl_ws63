#include "hal_bsp_bmps.h"
#include "hal_bsp_ssd1306.h"
// width: 16,  height: 32 数字
unsigned char bmp_16X32_number[10][64] = {
    {0xF0, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x1F, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0x00, 0x00,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
     0x0F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0xF8, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x00, 0x00}, /* "0", 0 */

    {0x00, 0x00, 0x00, 0x00, 0xF8, 0xFC, 0x7E, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00}, /* "1", 1 */

    {0xE0, 0xF8, 0xFE, 0xFE, 0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0x00,
     0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0xC0, 0xF8, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x03, 0x00,
     0x00, 0x00, 0x00, 0xC0, 0xF0, 0xFC, 0xFF, 0xFF, 0x7F, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00,
     0xE0, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x00}, /* "2", 2 */

    {0xC0, 0xF8, 0xFE, 0xFE, 0xFF, 0xFF, 0x0F, 0x0F, 0x1F, 0xFF, 0xFF, 0xFE, 0xFE, 0xF8, 0x00, 0x00,
     0x01, 0x01, 0x01, 0x01, 0x01, 0xE1, 0xE0, 0xE0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00,
     0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x01, 0x01, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00,
     0x0F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x07, 0x00}, /* "3", 3 */

    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0xFF, 0xFF, 0xFF, 0x7F, 0x0F, 0x01, 0x00, 0x00,
     0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x80, 0xF0, 0xFE, 0xFF, 0xFF, 0xFF, 0x9F, 0x87, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x80,
     0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x07}, /* "4", 4 */

    {0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x00,
     0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x78, 0x78, 0x78, 0xF8, 0xF8, 0xF8, 0xF0, 0xE0, 0x00,
     0x00, 0x87, 0x87, 0x87, 0x87, 0x87, 0x01, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC,
     0x00, 0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFC, 0xE0, 0xF0, 0xF0, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x00}, /* "5", 5 */

    {0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFE, 0xFF, 0xFF, 0x7F, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00,
     0x00, 0xE0, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xF0, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00,
     0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00,
     0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x07, 0x00}, /* "6", 6 */

    {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x01, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0xF0, 0xFE, 0xFF, 0xFF, 0xFF, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x80, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* "7", 7 */

    {0x00, 0x00, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0x00,
     0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 0x1F, 0x00,
     0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x03, 0x01, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xE0,
     0x00, 0x07, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x03}, /* "8", 8 */

    {0xE0, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 0x00,
     0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00,
     0x00, 0x03, 0x07, 0x07, 0x0F, 0x0F, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x07, 0x00, 0x00,
     0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFE, 0xFF, 0xFF, 0x7F, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, /* "9", 9 */
};

unsigned char bmp_8X16_number[10][16] = {
    {0xFC, 0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0x7F},
    {0x00, 0x0E, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00},
    {0x1F, 0x1F, 0x1F, 0xE3, 0xFF, 0xFF, 0xFF, 0x1C, 0xF0, 0xFC, 0xFF, 0xFF, 0xCF, 0xC3, 0xC0, 0xC0},
    {0x00, 0x1F, 0x1F, 0xDF, 0xC3, 0xFF, 0xFF, 0x7E, 0x38, 0xF8, 0xF8, 0xF9, 0xC1, 0xFF, 0xFF, 0x7F},
    {0x00, 0x80, 0xF0, 0xFC, 0xFF, 0x7F, 0x0F, 0x01, 0x3C, 0x3F, 0x3F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF},
    {0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 0xE3, 0xE3, 0xC3, 0x3B, 0xFB, 0xFB, 0xFB, 0xC0, 0xFF, 0xFF, 0x7F},
    {0x00, 0xE0, 0xF8, 0xFF, 0xFF, 0xCF, 0xC3, 0x80, 0x1E, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0x7F},
    {0x0F, 0x0F, 0x0F, 0xCF, 0xFB, 0xFF, 0xFF, 0x0F, 0x00, 0xE0, 0xFC, 0xFF, 0x7F, 0x0F, 0x00, 0x00},
    {0x7E, 0xFF, 0xFF, 0xC3, 0xFF, 0xFF, 0x7F, 0x1C, 0x7F, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0x7F, 0x3E},
    {0x78, 0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xC3, 0xFB, 0xFF, 0xFF, 0x1F, 0x07}};

// width: 16,  height: 16 图标 .
unsigned char bmp_16X16_dian[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                    0x00, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; /* ".", 0 */

#if (smartTemp)
// width: 16,  height: 16 图标 摄氏度
unsigned char bmp_16X16_sheShiDu[32] = {0x06, 0x09, 0x09, 0xE6, 0xF8, 0x0C, 0x04, 0x02, 0x02, 0x02, 0x02,
                                        0x02, 0x04, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x30,
                                        0x20, 0x40, 0x40, 0x40, 0x40, 0x40, 0x20, 0x10, 0x00, 0x00}; /* "℃", 0 */

// width: 16,  height: 16 图标 %
unsigned char bmp_16X16_baifenhao[32] = {0x00, 0x00, 0x30, 0x78, 0x6C, 0x7C, 0x78, 0x80, 0xC0, 0xE0, 0x70,
                                         0x38, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1C, 0x0E,
                                         0x07, 0x03, 0x01, 0x1E, 0x36, 0x36, 0x1E, 0x08, 0x00, 0x00}; /* "%", 0 */

// width: 48,  height: 48 眯眼笑
unsigned char bmp_48X48_1_mi_yan_xiao[288] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF8,
    0x78, 0x78, 0x78, 0x78, 0x3C, 0x3C, 0x3C, 0x3C, 0x78, 0x78, 0x78, 0x78, 0xF8, 0xF0, 0xF0, 0xE0, 0xE0, 0xC0,
    0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0,
    0xF8, 0xFC, 0xFE, 0x3F, 0x0F, 0x07, 0x83, 0x83, 0x81, 0x81, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x81, 0x81, 0x83, 0x07, 0x0F, 0x1F, 0x3F, 0xFE, 0xFC, 0xF8,
    0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFE, 0xFF, 0xFF, 0x3F, 0x03, 0x00, 0x1C, 0x3E, 0x1F,
    0x0F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0F, 0x1F, 0x3E, 0x1C, 0x00, 0x00, 0x00, 0x18, 0x3E, 0x3F, 0x1F, 0x0F,
    0x07, 0x07, 0x07, 0x07, 0x0F, 0x1F, 0x3E, 0x3C, 0x18, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x7F, 0xFF, 0xFF, 0xFC, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x7E, 0xFE, 0xFC, 0xF0, 0xC0,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF8, 0xFE, 0xFE, 0x7E, 0x0E,
    0x00, 0x00, 0x00, 0x80, 0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07,
    0x1F, 0x3F, 0x7F, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x83, 0x03, 0x07, 0x0F, 0x0F, 0x0F, 0x1E, 0x1E, 0x1E,
    0x1E, 0x1E, 0x1E, 0x0F, 0x0F, 0x0F, 0x07, 0x83, 0x81, 0xC0, 0xC0, 0xE0, 0xF0, 0xF8, 0x7E, 0x3F, 0x1F, 0x0F,
    0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03,
    0x03, 0x07, 0x07, 0x0F, 0x0F, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F,
    0x0F, 0x0F, 0x0F, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

// width: 48,  height: 48  微笑
unsigned char bmp_48X48_2_wei_xiao[288] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF8, 0xF8,
    0x78, 0x78, 0x78, 0x78, 0x3C, 0x3C, 0x3C, 0x3C, 0x78, 0x78, 0x78, 0x78, 0xF8, 0xF0, 0xF0, 0xF0, 0xE0, 0xC0,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0,
    0xF8, 0xFC, 0x7E, 0x3F, 0x0F, 0x07, 0x03, 0x03, 0x81, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x81, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3E, 0xFC, 0xF8, 0xF0,
    0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x06, 0x0F, 0x1F, 0x1F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F,
    0x1F, 0x1F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0F, 0x7F, 0xFF, 0xFF, 0xF0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x7F, 0xFF, 0xFE, 0xF0, 0xC0,
    0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF8, 0xFE, 0xFF, 0x3E, 0x04,
    0x00, 0x00, 0x00, 0x80, 0xF0, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07,
    0x1F, 0x3F, 0x7F, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x81, 0x03, 0x07, 0x0F, 0x0F, 0x0F, 0x1F, 0x1E, 0x1E,
    0x1E, 0x1F, 0x0F, 0x0F, 0x0F, 0x07, 0x07, 0x83, 0x81, 0xC0, 0xC0, 0xE0, 0xF0, 0xF8, 0x7E, 0x3F, 0x1F, 0x0F,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03,
    0x03, 0x07, 0x07, 0x0F, 0x0F, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F,
    0x0F, 0x0F, 0x0F, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

// width: 48,  height: 48  无表情
unsigned char bmp_48X48_3_wu_biao_qing[288] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF8, 0xF8,
    0x78, 0x78, 0x78, 0x78, 0x3C, 0x3C, 0x3C, 0x3C, 0x78, 0x78, 0x78, 0x78, 0xF8, 0xF0, 0xF0, 0xF0, 0xE0, 0xC0,
    0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0,
    0xF8, 0xFC, 0x7E, 0x3F, 0x0F, 0x07, 0x83, 0xC3, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0xC1, 0x83, 0x87, 0x0F, 0x1F, 0x3F, 0xFE, 0xFC, 0xF8,
    0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0x0F, 0x03, 0x00, 0x00, 0x30, 0x78,
    0x7B, 0x7F, 0x7F, 0x7F, 0x7E, 0x7C, 0x78, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x78, 0x7C,
    0x7E, 0x7F, 0x7F, 0x7F, 0x7B, 0x79, 0x78, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x7F, 0xFF, 0xFF, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
    0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x80, 0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07,
    0x1F, 0x3F, 0x7F, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xF0, 0xF8, 0x7E, 0x3F, 0x1F, 0x0F,
    0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03,
    0x03, 0x07, 0x07, 0x0F, 0x0F, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F,
    0x0F, 0x0F, 0x0F, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

// width: 48,  height: 48  难过
unsigned char bmp_48X48_4_nan_guo[288] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF8,
    0x78, 0x78, 0x78, 0x78, 0x3C, 0x3C, 0x3C, 0x3C, 0x78, 0x78, 0x78, 0x78, 0xF8, 0xF0, 0xF0, 0xE0, 0xE0, 0xC0,
    0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0,
    0xF8, 0xFC, 0x7E, 0x3F, 0x0F, 0x07, 0x03, 0x03, 0x81, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x81, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0xFE, 0xFC, 0xF8,
    0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFE, 0xFF, 0xFF, 0x3F, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x06, 0x0F, 0x1F, 0x1F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F,
    0x1F, 0x1F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x7F, 0xFF, 0xFF, 0xFC, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF8, 0x7C,
    0x3C, 0x3E, 0x1E, 0x1E, 0x0E, 0x0F, 0x0F, 0x0E, 0x1E, 0x1E, 0x3E, 0x7C, 0xF8, 0xF8, 0xF0, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x80, 0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07,
    0x1F, 0x3F, 0x7F, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x81, 0xC0, 0xC0, 0xE0, 0xF0, 0xF8, 0x7E, 0x3F, 0x1F, 0x0F,
    0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03,
    0x03, 0x07, 0x07, 0x0F, 0x0F, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F,
    0x0F, 0x0F, 0x0F, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

// width: 48,  height: 48 哭泣
unsigned char bmp_48X48_5_ku_qi[288] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF8,
    0x78, 0x78, 0x78, 0x78, 0x3C, 0x3C, 0x3C, 0x3C, 0x78, 0x78, 0x78, 0x78, 0xF8, 0xF0, 0xF0, 0xE0, 0xE0, 0xC0,
    0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0,
    0xF8, 0xFC, 0x7E, 0x3F, 0x8F, 0x87, 0x83, 0x83, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x83, 0x87, 0x8F, 0x9F, 0x3F, 0xFE, 0xFC, 0xF8,
    0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFE, 0xFF, 0xFF, 0x0F, 0x03, 0x00, 0x03, 0x83, 0xE3,
    0xFB, 0xFF, 0x7F, 0x3F, 0x0F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03,
    0x07, 0x1F, 0x3F, 0xFF, 0xFB, 0xF3, 0xC3, 0x03, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x7F, 0xFF, 0xFF, 0xF0, 0xF0, 0x7C, 0x7E, 0x3F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x70,
    0x78, 0x7C, 0x3E, 0x1E, 0x1F, 0x0F, 0x1F, 0x1F, 0x3E, 0x3E, 0x7C, 0x78, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F,
    0x1F, 0x3F, 0x7E, 0xB8, 0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07,
    0x1F, 0x3F, 0x7F, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xF0, 0xF8, 0x7E, 0x3F, 0x1F, 0x0F,
    0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03,
    0x03, 0x07, 0x07, 0x0F, 0x0F, 0x0F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F,
    0x0F, 0x0F, 0x0F, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#endif

#if (smartDistance || ReversingRadar)
unsigned char bmp_32X32_cm[128] = {
    0x00, 0xC0, 0xF0, 0xFC, 0x7E, 0x3E, 0x1F, 0x1F, 0x1F, 0x1E, 0x7E, 0xFC, 0xF8, 0xC0, 0x00, 0x00, 0xFE, 0xFE, 0xFE,
    0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFE, 0xBE, 0xFE, 0xFE, 0xFC, 0xFF, 0xFF, 0x1F, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
    0x00, 0xFC, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0,
    0xF0, 0xE0, 0x20, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xF8, 0xC0, 0xFF, 0xFF, 0x07, 0x00, 0xFF, 0xFF,
    0xFF, 0x00, 0x01, 0x0F, 0x3F, 0x7E, 0xFC, 0xF8, 0xF8, 0xF8, 0x7C, 0x7E, 0x3F, 0x1F, 0x07, 0x00, 0x00, 0x7F, 0x7F,
    0x7F, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0x7F, 0x7F, 0x01, 0x00, 0x00, 0x7F, 0x7F, 0x7F};
#endif

#if (smartSecurityDefense)
unsigned char bmp_32X32_BaoJing[128] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF8, 0xFE, 0xFF, 0xFF, 0x3F, 0x3F, 0xFF, 0xFF,
    0xFE, 0xF8, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
    0xF0, 0xFC, 0xFF, 0xFF, 0xFF, 0x3F, 0x0F, 0x03, 0xF0, 0xF0, 0xF0, 0xF0, 0x03, 0x0F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFC,
    0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xFC, 0xFF, 0xFF, 0x7F, 0x1F, 0x07, 0x01, 0x00, 0x00,
    0x00, 0x00, 0xCF, 0xCF, 0xCF, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x7F, 0xFF, 0xFF, 0xFC, 0xF0, 0xC0,
    0x00, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xF1, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF3, 0xF3, 0xF3, 0xF3,
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF1, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F,
};

unsigned char bmp_32X32_No_BaoJing[128] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF, 0x7F, 0xFE, 0xFC, 0xF8, 0xF0, 0xE0,
    0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x8C, 0x9E, 0x3F, 0xFF,
    0xFF, 0xFF, 0xFF, 0xF7, 0xE3, 0xC1, 0x87, 0x07, 0x07, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFE, 0xFC, 0xF8,
    0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x0F, 0x1F,
    0x3F, 0x7F, 0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0xE0, 0xF0, 0xF8, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x06,
    0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07,
    0x0F, 0x1F, 0x1F, 0x0F, 0x07, 0x07, 0x0F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00};

unsigned char bmp_32X32_Body[128] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x7C, 0xFC, 0xFC, 0xF8, 0xC0, 0xC0, 0x80,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0x7F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0xFE, 0xFC, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x80,
    0xE0, 0xF8, 0xFF, 0xFF, 0x7F, 0x3F, 0xFF, 0xFF, 0xFF, 0xF1, 0xC1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0x3F, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x03, 0x0F, 0x1F, 0x3F, 0x3E, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

unsigned char bmp_32X32_No_Body[128] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xBF, 0xFF, 0xFF, 0xE1, 0xE1, 0xE1, 0xE1, 0xFF, 0xFF, 0xBF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFE, 0x3F, 0x07, 0x03,
    0x03, 0x01, 0x01, 0x01, 0x01, 0xF1, 0xB9, 0xCF, 0xCF, 0xC7, 0xCE, 0xCE, 0xB8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x03, 0x06, 0x06, 0x04, 0x06, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

unsigned char bmp_16X16_baifenhao[32] = {0x00, 0x00, 0x30, 0x78, 0x6C, 0x7C, 0x78, 0x80, 0xC0, 0xE0, 0x70,
                                         0x38, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1C, 0x0E,
                                         0x07, 0x03, 0x01, 0x1E, 0x36, 0x36, 0x1E, 0x08, 0x00, 0x00}; /* "%", 0 */
#endif

#if (smartFarm)
unsigned char bmp_48X48_fan_gif[4][288] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFE, 0xFC, 0xF8, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
     0x01, 0x03, 0x07, 0x0F, 0x0F, 0x87, 0xC7, 0xE3, 0xE3, 0xE3, 0xE3, 0xC7, 0x81, 0x00, 0x00, 0x00, 0x80, 0x80,
     0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF0, 0xF8, 0xF8, 0xFC, 0xFC, 0xF0, 0xC0, 0x80, 0x8F,
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x0F, 0x07, 0xC0, 0xE0, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0xE0, 0xF8, 0xFE, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x0F, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
     0x0F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x1F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

    {0x80, 0xE0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0xF8, 0xF0, 0xE0, 0xC0,
     0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
     0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3C, 0x30, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
     0x03, 0x03, 0x07, 0x07, 0x03, 0x00, 0x00, 0x7C, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x78, 0x00, 0x01, 0x87,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x0F, 0x07,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE,
     0xFC, 0xF8, 0xF8, 0xF9, 0xF1, 0xF1, 0xF1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
     0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFE, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
     0x0F, 0x1F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x0F, 0x07, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0xF8, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0xF0,
     0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xF0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0x7F, 0x1F, 0x07, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x07, 0x03, 0xE0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8,
     0xF1, 0x01, 0x03, 0x0F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x07, 0x07, 0x03, 0x03, 0x01,
     0x01, 0x01, 0x00, 0x00, 0x00, 0x81, 0xE3, 0xC7, 0xC7, 0xC7, 0xC7, 0xE3, 0xE1, 0xF0, 0xF0, 0xE0, 0xC0, 0x80,
     0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x3F, 0x7F, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0xE0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0xF0,
     0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x7F, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,
     0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x8F, 0x8F, 0x8F, 0x9F, 0x1F, 0x1F, 0x3F,
     0x7F, 0x7F, 0x3F, 0x1F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0xE0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xE1, 0x80, 0x00, 0x1E, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3E, 0x00, 0x00, 0xC0, 0xE0, 0xE0, 0xC0, 0xC0,
     0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x0C, 0x3C, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
     0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
     0x03, 0x07, 0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x0F, 0x07, 0x01}};

unsigned char bmp_16X16_baifenhao[32] = {0x00, 0x00, 0x30, 0x78, 0x6C, 0x7C, 0x78, 0x80, 0xC0, 0xE0, 0x70,
                                         0x38, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1C, 0x0E,
                                         0x07, 0x03, 0x01, 0x1E, 0x36, 0x36, 0x1E, 0x08, 0x00, 0x00}; /* "%", 0 */
#endif

#define COEFFICIENT_10 10
#define COEFFICIENT_100 100
#define COEFFICIENT_1000 1000
typedef struct {
    int top;   // 上边距
    int left;  // 下边距
    int hight; // 高
    int width; // 宽
} margin_t;    // 边距类型

margin_t bmp_number_1 = {.top = 16 + 8, .left = 8, .hight = 32, .width = 16};  // 数字-百位
margin_t bmp_number_2 = {.top = 16 + 8, .left = 24, .hight = 32, .width = 16}; // 数字-十位
margin_t bmp_number_3 = {.top = 16 + 8, .left = 40, .hight = 32, .width = 16}; // 数字-个位
margin_t bmp_dian = {.top = 32 + 8, .left = 56, .hight = 16, .width = 16};     // 小数点
margin_t bmp_number_4 = {.top = 32 + 8, .left = 72, .hight = 16, .width = 8};  // 数字-小数位
margin_t bmp_danwei = {.top = 16 + 8, .left = 88, .hight = 32, .width = 32};   // 单位

/**
 * @brief  显示页面
 * @note
 * @param  val:
 * @retval None
 */
void show_page(uint16_t val)
{
    SSD1306_ShowStr(OLED_TEXT16_COLUMN_0, OLED_TEXT16_LINE_0, " Smart Distance", TEXT_SIZE_16);

    // 显示数字
    uint8_t x = val / COEFFICIENT_1000; // 显示数字的千位
    SSD1306_DrawBMP(bmp_number_1.left, bmp_number_1.top, bmp_number_1.width, bmp_number_1.hight, bmp_16X32_number[x]);

    x = val / COEFFICIENT_100 % COEFFICIENT_10; // 显示数字的百位
    SSD1306_DrawBMP(bmp_number_2.left, bmp_number_2.top, bmp_number_2.width, bmp_number_2.hight, bmp_16X32_number[x]);

    x = val / COEFFICIENT_10 % COEFFICIENT_10; // 显示数字的十位
    SSD1306_DrawBMP(bmp_number_3.left, bmp_number_3.top, bmp_number_3.width, bmp_number_3.hight, bmp_16X32_number[x]);

    x = val % COEFFICIENT_10; // 显示数字的个位
    SSD1306_DrawBMP(bmp_number_4.left, bmp_number_4.top, bmp_number_4.width, bmp_number_4.hight, bmp_8X16_number[x]);

    // 显示小数点
    SSD1306_DrawBMP(bmp_dian.left, bmp_dian.top, bmp_dian.width, bmp_dian.hight, bmp_16X16_dian);
    // 显示cm
    SSD1306_DrawBMP(bmp_danwei.left, bmp_danwei.top, bmp_danwei.width, bmp_danwei.hight, bmp_32X32_cm);
}