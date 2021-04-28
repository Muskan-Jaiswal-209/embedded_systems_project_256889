/**
 * @file HeatControlSystem_Main.c
 * @author Hemanth A (hemanth.ec17@bmsce.ac.in)
 * @brief The main program to execute the heat control system of a seat inside a car
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "heatcontrolsystem.h"
#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief Main function
 * 
 * @return int 
 */
int main(void)
{
    Buttons_LED_Init();
    Init_ADC();
    uint16_t temp;

    /**
     * @brief Infinite loop to run the microcontroller
     * 
     */
    while(1)
    {
       if(BUTTON_SENSOR_ON) //Checking if the input bit to 7th bit of pinB is made 0 from 1 by pressing led
        {

            if(HEATER_ON) //Checking if the input bit to 6th bit of pinB is made 0 from 1 by pressing led
            {
                _delay_ms(20);
                SET_LED; //make 0th bit of port B as 1, makes led glow
                temp = Read_ADC(0);
                _delay_ms(200);
                
            }
            else
            {
                _delay_ms(20);
                CLEAR_LED; // make led off
            }
        }
        else
        {
                _delay_ms(20);
                CLEAR_LED; //make led off
        }
    }

 return 0;   
}