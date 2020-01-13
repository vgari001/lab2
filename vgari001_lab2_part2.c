/*	Partner(s): Victoria Albezer
 *	Lab Section: 022
 *	Assignment: Lab #  Exercise # 
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */

#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void){

                DDRA =0x00; PORTA = 0xFF;
                DDRC = 0xFF; PORTC = 0x00;
                unsigned char cntavail;

        while(1){

                if((PORTA == 0x01))||(PORTA == 0x02)||(PORTA==0x04||(PORTA == 0x08)){
                cntavail =0x03;
                PORTC = cntavail;
        }
                else if((PORTA == 0x03))||(PORTA == 0x05)||(PORTA==0X06)||(PORTA ==0x09)||(PORTA==0x0A)||(PORTA==0x0C)){

                        cntavail = 0x02;
                        PORTC = cntavail;
        }


                else if((PORTA == 0x07) || (PORTA == 0x0B) || (PORTA == 0x0D) || (PORTA == 0x0E) ){

                        cntavail = 0x01;
                        PORTC = cntavail;
        }

        else if(PORTA == 0x0F){

                cntavail = 0x04;
                PORTC = cntavail;
        }

        else{
                cntavail = 0x00;
                PORTC = cntavail;
        }
}
return 0;

}
