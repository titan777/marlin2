
#pragma once

// R25 = 100 kOhm, beta25 = 4267 K, 4.7 kOhm pull-up
// 100k ParCan thermistor (104GT-2)
// ATC Semitec 104GT-2/104NT-4-R025H42G (Used in ParCan)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
const short temptable_5t[][2] PROGMEM = {
  { OV(   1), 713 },
  { OV(  17), 290 }, // top rating 300C
  { OV(  20), 280 },
  { OV(  23), 270 },
  { OV(  27), 260 },
  { OV(  31), 250 },
  { OV(  37), 240 },
  { OV(  43), 230 },
  { OV(  51), 220 },
  { OV(  61), 210 },
  { OV(  73), 200 },
  { OV(  87), 190 },
  { OV( 106), 180 },
  { OV( 128), 170 },
  { OV( 155), 160 },
  { OV( 189), 150 },
  { OV( 230), 140 },
  { OV( 278), 130 },
  { OV( 336), 120 },
  { OV( 402), 110 },
  { OV( 476), 100 },
  { OV( 554),  90 },
  { OV( 635),  80 },
  { OV( 713),  70 },
  { OV( 784),  60 },
  { OV( 846),  55 },
  { OV( 897),  50 },
  { OV( 937),  40 },
  { OV( 966),  30 },
  { OV( 986),  20 },
  { OV(1000),  10 },
  { OV(1010),   0 }
};
