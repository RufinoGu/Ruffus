#include "pic18f4550.h"
#include "Control.h"
#include "LeituraAD.h"
#include "Scanner"

unsigned char erroline= 150;


void linhabranca(void){
//    if((Adcread(i)<(Smin(i)+erroline))||(Adcread(i)>(Smin(i)-erroline))){
        linha=1;
    }
}

void linhapreta(void){
//    if((Adcread(i)>(Smin(i)+erroline+10))){
        linha=0;
    }
}

void valorsensores(void){
    for(i=0;i<8;i++){
        Sensor[i]=Adcread(i);
    }
}

int posicao (void){
    if((Sensor[0]<(Smax[0]+erroline))||(Sensor[0]>(Smax[0]-erroline))){//sensor 0 esta em braco
        j=-3;
    }
    if((Sensor[1]<(Smax[1]+erroline))||(Sensor[1]>(Smax[1]-erroline))){//sensor 1 esta em braco
        j=-2;
    }
    if((Sensor[2]<(Smax[2]+erroline))||(Sensor[2]>(Smax[2]-erroline))){//sensor 2 esta em braco
        j=-1;
    }
    if(((Sensor[3]<(Smax[3]+erroline))||(Sensor[3]>(Smax[3]-erroline)))||((Sensor[4]<(Smax[4]+erroline))||(Sensor[4]>(Smax[4]-erroline)))){//sensor 3 e 4 esta em braco
        j=0;
    }
    if((Sensor[7]<(Smax[7]+erroline))||(Sensor[7]>(Smax[7]-erroline))){//sensor 5 esta em braco
        j=3;
    }
    if((Sensor[6]<(Smax[6]+erroline))||(Sensor[6]>(Smax[6]-erroline))){//sensor 6 esta em braco
        j=2;
    }
    if((Sensor[5]<(Smax[5]+erroline))||(Sensor[5]>(Smax[5]-erroline))){//sensor 7 esta em braco
        j=1;
    }
    return j;
}