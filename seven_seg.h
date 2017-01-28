#ifndef SEVEN_SEG_H
#define SEVEN_SEG_H

#define SEG_A 0x01
#define SEG_B 0x02
#define SEG_C 0x04
#define SEG_D 0x08
#define SEG_E 0x10
#define SEG_F 0x20
#define SEG_G 0x40

#define DIG_0 0x3F
#define DIG_1 0x06
#define DIG_2 0x5B
#define DIG_3 0x4F
#define DIG_4 0x66
#define DIG_5 0x6D
#define DIG_6 0x7D
#define DIG_7 0x07
#define DIG_8 0x7F
#define DIG_9 0x6F
#define DIG_A 0x77
#define DIG_B 0x7C
#define DIG_C 0x39
#define DIG_D 0x5E
#define DIG_E 0x79
#define DIG_F 0x71

void seven_segment_display(const char a);
void print_char(unsigned int dig_code);

#endif
