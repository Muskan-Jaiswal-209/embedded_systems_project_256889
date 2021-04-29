/**
 * @file TemperatureSensorADC.c
 * @author Hemanth A (hemanth.ec17@bmsce.ac.in)
 * @brief A file where the ADC functions are implemented for temperature sensor
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "TemperatureSensorADC.h"

/**
 * @brief A function to initialise the analog to digital converter
 * 
 */
void Init_ADC(){
    SET_REFERENCE_VOLTAGE;
    ADC_ENABLE_PRESCALE;

}

/**
 * @brief A funciton to receive temperature sensor inputs from analog pin and output it to a register ADC which has 2 8 bit registers ADCL and ADCH.
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t Read_ADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch = ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);

    while(ADC_INTERRUPT_NOT_OCCURED);
    SET_ADC_INTERRUPT_FLAG;
    return(ADC);

}