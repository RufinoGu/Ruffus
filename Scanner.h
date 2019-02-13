/* 
 * File:   Scanner.h
 * Author: luis_
 *
 * Created on 12 de Fevereiro de 2019, 19:33
 */

#ifndef SCANNER_H
#define	SCANNER_H
int Sens[8]; //Vetor dos 8 sensores
char i; //contador para o for
unsigned char Smax[8], Smin[8]; //valores maximo e minimo analogico de cada sensor

void startScanner (void);//inicia o scanner, definindo valores max e min iniciais
void Scanner (void); //descobre o max e o min valor de cada sensor

#endif