
#pragma once

// R25 = 100 kOhm, beta25 = 4267 K, 4.7 kOhm pull-up
// 100k ParCan thermistor (104GT-2)
// ATC Semitec 104GT-2/104NT-4-R025H42G (Used in ParCan)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
const short temptable_520[][2] PROGMEM = {
  { OV(   1), 713 },
  { OV(  17), 283 }, //283 top rating 300C
  { OV(  20), 274 },//274
  { OV(  23), 265 },//265
  { OV(  27), 256 },//256
  { OV(  31), 247 },//247
  { OV(  37), 240 },//240
  { OV(  43), 230 },//230
  { OV(  51), 221 },//221
  { OV(  61), 212 },//212
  { OV(  73), 203 },//203
  { OV(  87), 194 },//194
  { OV( 106), 184 },//184
  { OV( 128), 175 },//175
  { OV( 155), 165 },//165
  { OV( 189), 155 },//155
  { OV( 230), 144 },//145
  { OV( 278), 135 },//135
  { OV( 336), 126 },//126
  { OV( 402), 116 },//116
  { OV( 476), 107 },//107
  { OV( 554),  96 },//96
  { OV( 635),  86 },//86
  { OV( 713),  76 },//76
  { OV( 784),  66 },//66
  { OV( 846),  57 },//57
  { OV( 897),  48 },//48
  { OV( 937),  37 },//37
  { OV( 966),  27 },//27
  { OV( 986),  17 },//17
  { OV(1000),  8 },//8
  { OV(1010),   0 }
};
