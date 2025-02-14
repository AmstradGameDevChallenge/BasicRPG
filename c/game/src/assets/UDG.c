
#include <assets/UDG.h>

char const sprites[] = {
   // Top 2 sectors
   234, 15, 2, 8, 236, 15, 3, 8, 238, 15, 1, 240, 15, 2, 8, 242, 15, 3, 8, 244,
   // Bottom 2 sectors
   /*20*/
   15, 1, 10, 8, 8, 235, 15, 2, 8, 237, 15, 2, 8, 239, 15, 1, 241, 15, 2, 8, 243, 0,
   /*42*/
   15, 2, 232, 15, 2, 8, 233, 0,
   /*50*/
   32, 0,
   15, 1, 236, 15, 2, 8, 237, 0,
   15, 3, 8, 238, 
   15, 1, 8, 10, 245, 15, 2, 8, 247, 15, 3, 8, 249, 11, 0
};

u8 const UDG[] = { 
   /*232*/  0x7E,0x83,0x83,0x83,0x83,0x83,0xFF,0x7E
   /*233*/ ,0x00,0x3C,0x60,0x40,0x40,0x44,0x00,0x00
   /*234*/ ,0x03,0x07,0x07,0x07,0x03,0x01,0x00,0x00
   /*235*/ ,0x00,0x00,0x03,0x03,0x02,0x1E,0x00,0x00
   /*236*/ ,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x06
   /*237*/ ,0x0F,0x07,0x00,0x00,0x00,0x20,0x20,0x00
   /*238*/ ,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01
   /*239*/ ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
   /*240*/ ,0x80,0xC0,0x20,0xE0,0xE0,0xE0,0x00,0x40
   /*241*/ ,0x70,0x00,0x80,0xE0,0x30,0x10,0x10,0x00
   /*242*/ ,0x00,0x00,0x00,0x00,0x00,0x01,0x42,0x14
   /*243*/ ,0x88,0x94,0x00,0x00,0x00,0x00,0x00,0x18
   /*244*/ ,0x00,0x00,0xC0,0x00,0x00,0x00,0x80,0x80
   /*245*/ ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

 };
