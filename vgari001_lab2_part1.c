#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {

        DDRA = 0x00; PORTA = 0xFF;
        DDRB = 0xFF; PORTB = 0x00;
        unsigned char PA1 = 0x00;
        unsigned char PA0 =0x00;

        while(1){

                if(PA1 == 0x00 && PA0 == 0x01){

                        PORTB = 0x01;
                }


                else{
                        PORTB=0x00;
                }
        }
return 0;

}