/*
 * File:   main.c
 * Author: vladi
 *
 * Created on July 12, 2021, 4:30 PM
 */



#include "config.h"


void main(void) {
    ADCON1=0x0F;
    TRISAbits.RA0=0;
    while(1)
    {
        PORTAbits.RA0=1;
        _delay(500);
        PORTAbits.RA0=0;
        _delay(500);
    }
    return;
}
