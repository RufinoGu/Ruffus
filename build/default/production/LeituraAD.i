# 1 "LeituraAD.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:\\Program Files (x86)\\Microchip\\xc8\\v2.00\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "LeituraAD.c" 2







# 1 "./pic18f4550.h" 1
# 8 "LeituraAD.c" 2

# 1 "./LeituraAD.h" 1
# 11 "./LeituraAD.h"
void AdcInit(void);
unsigned char AdcRead(char pin);
# 9 "LeituraAD.c" 2


void AdcInit(void){
    (*(volatile __near unsigned char*)0xFC2) = 0b00000001;
    (*(volatile __near unsigned char*)0xFC1) = 0b00000100;
    (*(volatile __near unsigned char*)0xFC0) = 0b10111010;
}

unsigned char AdcRead(char pin){

    unsigned int ADvalor;

    (*(volatile __near unsigned char*)0xFC2) |= (pin<<2);

    (((*(volatile __near unsigned char*)0xFC2)) |= (1<<1));

    ADvalor = (*(volatile __near unsigned char*)0xFC4);
    ADvalor <<= 8;
    ADvalor += (*(volatile __near unsigned char*)0xFC3);

    return ADvalor;
}
