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
    PortB_dec();
    Init_ADC();
    uint16_t temp;
    /**
     * @brief Infinite loop to run the microcontroller
     * 
     */
    while(1)
    {
        ButtonSensorHeater();
        temp = Read_ADC(0);
        _delay_ms(200);
    }



 return 0;   
}