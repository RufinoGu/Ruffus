#include "pic18f4550.h"
#include "Timer.h"
#include "LeituraAD.h"

void startScanner(){
    for (i = 0; i < 8; i++) {
        Smax[i] = AdcRead(i);//valor max inicial é igual o valor analogico inicial
        Smin[i] = AdcRead(i);//valor min inicial é igual o valor analogico inicial
    }
}
void Scanner(void) {

    for (i = 0; i < 8; i++) {
        Sens[i] = AdcRead(i);//valor analogico do sensor i
        

        if (Sens[i] > Smax[i]) { //se o valor do sensor i é maior que o max medido do mesmo sensor
            Smax[i] = Sens[i];//salva o novo max valor
        }

        if (Sens[i] < Smin[i]) {//se o valor do sensor i é menor que o min medido do mesmo sensor
            Smin[i] = Sens[i];//salva o novo min valor
        }
    }
    
}