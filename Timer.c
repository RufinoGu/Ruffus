#include "Timer.h"
#include "pic18f4550.h"

void InitTimer(void){
    T0CON = 0b00001000;
    BitSet(T0CON,7);
}

void AguardaTimer(void){
    while(!BitTst(INTCON,2));
}

void ResetaTimer(unsigned int tempo){
    unsigned ciclos = tempo * 2;
    ciclos = 65535 - ciclos;
    ciclos -= 14;
    TMR0H = (ciclos >> 8);
    TMR0L = (ciclos & 0x00FF);
    BitClr(INTCON,2);
}

char FimTimer(void){
    return BitTst(INTCON,2);
}
