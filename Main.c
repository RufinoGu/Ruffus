/* 
 * File:   Main.c
 * Author: Massa
 *
 * Created on 11 de Janeiro de 2019, 15:47
 */

#include <xc.h>
#include "pic18f4550.h"
#include "FurmConfig.h"
#include "LeituraAD.h"
#include "Control.h"
#include "Timer.h"
 
#define _XTAL_FREQ 20000000         // Definição do clock do sistema
 
void main(void) {
    
    int i;                          // Cria variável de contagem
    unsigned char 
    unsigned char Valor0 = 0;
    unsigned char Valor1 = 0;
    unsigned char Valor2 = 0;
    unsigned char Valor3 = 0;
    unsigned char Valor4 = 0;
    unsigned char Valor5 = 0;
    unsigned char Valor6 = 0;
    unsigned char Valor7 = 0;
    
    AdcInit();
    
    TRISA = 0b00111111;
    TRISB = 0b11111100;
    TRISC = 0b10000000;
    TRISD = 0x00;             
    TRISE = 0b00000111;
 
    LED_OFF_FS;
    LED_OFF_1;
    LED_OFF_2;
    LED_OFF_3;  
    LED_OFF_4;
    LED_OFF_5;
    LED_OFF_6;
    LED_OFF_7;
    
    
}