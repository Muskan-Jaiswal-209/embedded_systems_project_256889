/**
 * @file ButtonSensorHeaterLED.c
 * @author Hemanth A (hemanth.ec17@bmsce.ac.in)
 * @brief Activity one of embedded systems
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "heatcontrolsystem.h"
#include <avr/io.h>
#include <util/delay.h>

void PortB_dec()
{
DDRB|=(1<<PB0);
DDRB&=~(1<<PB6); //clear bit 6 of DDR B
PORTB|=(1<<PB6); //Set bit 6 of Port B
DDRB&=~(1<<PB7); //clear bit 7 of DDR B
PORTB|=(1<<PB7);//Set bit 7 of DDR B

}


void ButtonSensorHeater()
{
        if(!(PINB&(1<<PB7))) //Checking if the input bit to 7th bit of pinB is made 0 from 1 by pressing led
        {

            if(!(PINB&(1<<PB6))) //Checking if the input bit to 6th bit of pinB is made 0 from 1 by pressing led
            {
                _delay_ms(20);
                PORTB|=(1<<PB0); //make 0th bit of port B as 1, makes led glow
            }
            else
            {
                _delay_ms(20);
                PORTB&=~(1<<PB0); // make led off
            }
        }
        else
        {
                _delay_ms(20);
                PORTB&=~(1<<PB0); //make led off
        }
}

