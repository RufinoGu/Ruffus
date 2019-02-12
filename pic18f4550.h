/* 
 * File:   pic18f4550.h
 * Author: Massa
 *
 * Created on 11 de Janeiro de 2019, 17:41
 */

#ifndef PIC18F4550_H
#define	PIC18F4550_H

//funções de bit 
#define BitSet(arg,bit) ((arg) |= (1<<bit))
#define BitClr(arg,bit) ((arg) &= ~(1<<bit)) 
#define BitFlp(arg,bit) ((arg) ^= (1<<bit)) 
#define BitTst(arg,bit) ((arg) & (1<<bit))

#define LED_ON_1    BitSet(PORTC,1) //Liga LED 1
#define LED_OFF_1   BitClr(PORTC,1) //Desliga LED 1
#define LED_ON_2    BitSet(PORTC,2) //Liga LED 2
#define LED_OFF_2   BitClr(PORTC,2) //Desliga LED 2
#define LED_ON_3    BitSet(PORTD,4) //Liga LED 3
#define LED_OFF_3   BitClr(PORTD,4) //Desliga LED 3
#define LED_ON_4    BitSet(PORTD,5) //Liga LED 4
#define LED_OFF_4   BitClr(PORTD,5) //Desliga LED 4
#define LED_ON_5    BitSet(PORTD,6) //Liga LED 5
#define LED_OFF_5   BitClr(PORTD,6) //Desliga LED 5
#define LED_ON_6    BitSet(PORTD,7) //Liga LED 6
#define LED_OFF_6   BitClr(PORTD,7) //Desliga LED 6
#define LED_ON_7    BitSet(PORTB,0) //Liga LED 7
#define LED_OFF_7   BitClr(PORTB,0) //Desliga LED 7
#define LED_ON_FS   BitSet(PORTC,0) //Liga LED FS
#define LED_OFF_FS  BitClr(PORTC,0) //Desliga LED FS 

#define PORTA	(*(volatile __near unsigned char*)0xF80)
#define PORTB	(*(volatile __near unsigned char*)0xF81)
#define PORTC	(*(volatile __near unsigned char*)0xF82)
#define PORTD	(*(volatile __near unsigned char*)0xF83)
#define PORTE	(*(volatile __near unsigned char*)0xF84)

#define TRISA	(*(volatile __near unsigned char*)0xF92)
#define TRISB	(*(volatile __near unsigned char*)0xF93)
#define TRISC	(*(volatile __near unsigned char*)0xF94)
#define TRISD	(*(volatile __near unsigned char*)0xF95)
#define TRISE	(*(volatile __near unsigned char*)0xF96)


#define INTCON	(*(volatile __near unsigned char*)0xFF2)
#define INTCON2	(*(volatile __near unsigned char*)0xFF1)

#define PIE1	(*(volatile __near unsigned char*)0xF9D)
#define PIR1	(*(volatile __near unsigned char*)0xF9E)
#define PIR2	(*(volatile __near unsigned char*)0xFA1)

#define TMR0L	(*(volatile __near unsigned char*)0xFD6)
#define TMR0H	(*(volatile __near unsigned char*)0xFD7)
#define T0CON	(*(volatile __near unsigned char*)0xFD5)

#ifdef PIC18F4550

#define SPPCON	(*(volatile __near unsigned char*)0xF65)
#define SPPCFG	(*(volatile __near unsigned char*)0xF63)

#endif

#define ADCON2	(*(volatile __near unsigned char*)0xFC0)
#define ADCON1	(*(volatile __near unsigned char*)0xFC1)
#define ADCON0	(*(volatile __near unsigned char*)0xFC2)
#define ADRESL	(*(volatile __near unsigned char*)0xFC3)
#define ADRESH	(*(volatile __near unsigned char*)0xFC4)

#define RCSTA	(*(volatile __near unsigned char*)0xFAB)
#define TXSTA	(*(volatile __near unsigned char*)0xFAC)
#define TXREG	(*(volatile __near unsigned char*)0xFAD)
#define RCREG	(*(volatile __near unsigned char*)0xFAE)

#define SPBRG	(*(volatile __near unsigned char*)0xFAF)
#define SPBRGH	(*(volatile __near unsigned char*)0xFB0)

#define BAUDCON	(*(volatile __near unsigned char*)0xFB8)

#define RCON	(*(volatile __near unsigned char*)0xFD0)
#define WDTCON	(*(volatile __near unsigned char*)0xFD1)

#define T2CON	(*(volatile __near unsigned char*)0xFCA)
#define PR2	(*(volatile __near unsigned char*)0xFCB)

#define CCP2CON	(*(volatile __near unsigned char*)0xFBA)
#define CCPR2L	(*(volatile __near unsigned char*)0xFBB)
#define CCP1CON	(*(volatile __near unsigned char*)0xFBD)
#define CCPR1L	(*(volatile __near unsigned char*)0xFBE)

#endif	/* PIC18F4550_H */

