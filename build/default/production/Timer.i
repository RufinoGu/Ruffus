# 1 "Timer.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:\\Program Files (x86)\\Microchip\\xc8\\v2.00\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "Timer.c" 2
# 1 "./Timer.h" 1
# 11 "./Timer.h"
void InitTimer(void);
void AguardaTimer(void);
void ResetaTimer(unsigned int timer);
char FimTimer(void);
# 1 "Timer.c" 2

# 1 "./pic18f4550.h" 1
# 2 "Timer.c" 2


void InitTimer(void){
    (*(volatile __near unsigned char*)0xFD5) = 0b00001000;
    (((*(volatile __near unsigned char*)0xFD5)) |= (1<<7));
}

void AguardaTimer(void){
    while(!(((*(volatile __near unsigned char*)0xFF2)) & (1<<2)));
}

void ResetaTimer(unsigned int tempo){
    unsigned ciclos = tempo * 2;
    ciclos = 65535 - ciclos;
    ciclos -= 14;
    (*(volatile __near unsigned char*)0xFD7) = (ciclos >> 8);
    (*(volatile __near unsigned char*)0xFD6) = (ciclos & 0x00FF);
    (((*(volatile __near unsigned char*)0xFF2)) &= ~(1<<2));
}

char FimTimer(void){
    return (((*(volatile __near unsigned char*)0xFF2)) & (1<<2));
}
