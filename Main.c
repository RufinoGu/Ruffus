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
    TRISD = 0;             
    TRISE = 0b00000111;
 
    LED_OFF_FS;
    LED_OFF_1;
    LED_OFF_2;
    LED_OFF_3;  
    LED_OFF_4;
    LED_OFF_5;
    LED_OFF_6;
    LED_OFF_7;
    
    for(;;){
        Valor[0] = sensor0();
        Valor1 = sensor1();
        Valor2 = sensor2();
        Valor3 = sensor3();
        //Valor4 = sensor4();
        //Valor5 = sensor5();
        //Valor6 = sensor6();
        //Valor7 = sensor7(); 
        
        if ((Valor0 > 50)&&(Valor0 < 100)){
            LED_ON_1;
        }else{
            LED_OFF_1;
        }
        
        if ((Valor1 > 50)&&(Valor1 < 100)){
            LED_ON_2;
        }else{
            LED_OFF_2;
        }
        if ((Valor2 > 50)&&(Valor2 < 100)){
            LED_ON_3;
        }else{
            LED_OFF_3;
        }
        if ((Valor3 > 50)&&(Valor3 < 100)){
            LED_ON_4;
        }else{
            LED_OFF_4;
        }
    }
}