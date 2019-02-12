/* 
 * File:   LeituraAD.h
 * Author: Massa
 *
 * Created on 13 de Janeiro de 2019, 19:05
 */

#include "pic18f4550.h"
#include "LeituraAD.h"

void AdcInit(void){
    ADCON0 = 0b00000001; //Habilita o conversor (Bit0)
    ADCON1 = 0b00000100; //Determina quais pinos vao ser analogicos (AN0 ate o AN10)
    ADCON2 = 0b10111010; //Configuração de Tempo de aquisição e Clock do conversor
}

unsigned char AdcRead(char pin){
    
    unsigned int ADvalor; //Variavel destinada para o valor AD

    ADCON0 |= (pin<<2); //seta 
    
    BitSet(ADCON0,1); //processa o valor AD
    
    ADvalor = ADRESH; //Gravando os 8 bits significativos na variavel AD
    ADvalor <<= 8; // Rotacionando os 8 bits a esquerda 
    ADvalor += ADRESL; // Anexando os 8 bits menos significativos na variavel AD
    
    return ADvalor; //Retornando o ValorAD
}
