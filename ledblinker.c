/*
 * File:   ledblinker.c
 * Author: Anokhautomation
 * anokhramesh@gmail.com
 * Created on June 6, 2022, 12:44 PM
 */
#include<stdio.h>
#include<stdlib.h>
#include <xc.h>
#define _XTAL_FREQ 2000000

__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_OFF & LVP_ON & CPD_OFF & WRT_OFF & CP_OFF);

void main() {
    TRISB = 0x00;//set port B as an out put
    while(1){
        PORTB =0xff;// turn High all pins in PORT B
        __delay_ms(500);// Delay 500 milli second
        PORTB =0x00;// turn Low all pins in Port B
        __delay_ms(500);//delay 500 milli second
    }
}
