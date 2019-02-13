#include "Timer.h"
#include "pic18f4550.h"

void InitTimer(void){
    T0CON = 0b00001000; //sem pre escael
    BitSet(T0CON,7); //habilita o timer
}

void AguardaTimer(void){
    while(!BitTst(INTCON,2));
}

void ResetaTimer(unsigned int tempo){ //Tempo em nano segundos
    unsigned ciclos = tempo * 5; // (20Mhz/4)=5Mhz Periodo de 0,2 [ns]
    ciclos = 65535 - ciclos;
    ciclos -= 14;
    TMR0H = (ciclos >> 8);
    TMR0L = (ciclos & 0x00FF);
    BitClr(INTCON,2);
}

char FimTimer(void){
    return BitTst(INTCON,2);
}
