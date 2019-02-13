# 1 "Control.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:\\Program Files (x86)\\Microchip\\xc8\\v2.00\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "Control.c" 2
# 1 "./pic18f4550.h" 1
# 1 "Control.c" 2

# 1 "./Control.h" 1
# 11 "./Control.h"
unsigned char sensor0(void);
unsigned char sensor1(void);
unsigned char sensor2(void);
unsigned char sensor3(void);
unsigned char sensor4(void);
unsigned char sensor5(void);
unsigned char sensor6(void);
unsigned char sensor7(void);
# 2 "Control.c" 2

# 1 "./LeituraAD.h" 1
# 11 "./LeituraAD.h"
void AdcInit(void);
unsigned char AdcRead(char pin);
# 3 "Control.c" 2


int i;
int Sens0[20];
int Sens1;
int Sens2;
int Sens3;
int Sens4;
int Sens5;
int Sens6;
int Sens7;


unsigned char sensor0(void){
    for(i=0;i<20;i++){
        Sens0[i] = AdcRead(0);
    }
    return Sens0[19];
}

unsigned char sensor1(void){
    Sens1 = AdcRead(1);
    return Sens1;
}

unsigned char sensor2(void){
    Sens2 = AdcRead(2);
    return Sens2;
}

unsigned char sensor3(void){
    Sens3 = AdcRead(3);
    return Sens3;
}

unsigned char sensor4(void){
    Sens4 = AdcRead(4);
    return Sens4;
}

unsigned char sensor5(void){
    Sens5 = AdcRead(5);
    return Sens5;
}

unsigned char sensor6(void){
    Sens6 = AdcRead(6);
    return Sens6;
}

unsigned char sensor7(void){
    Sens7 = AdcRead(7);
    return Sens7;
}
