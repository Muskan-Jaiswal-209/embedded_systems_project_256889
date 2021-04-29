/**
 * @file TemperatureSensorADC.h
 * @author Hemanth A (hemanth.ec17@bmsce.ac.in)
 * @brief A header file for ADC of temperature sensor
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _TEMPERATURESENSORADC_H_
#define _TEMPERATURESENSORADC_H_


#include <avr/io.h>

/**
 * @brief A macro to enable and prescale the analog to digital converter
 * 
 */
#define ADC_ENABLE_PRESCALE ADCSRA=(1<<ADEN)|(7<<ADPS0)

/**
 * @brief A macro to set reference voltage for mux
 * 
 */
#define SET_REFERENCE_VOLTAGE ADMUX=(1<<REFS0)

/**
 * @brief A macro to set ADC interrupt flag
 * 
 */
#define SET_ADC_INTERRUPT_FLAG ADCSRA|=(1<<ADIF)

/**
 * @brief A macro to check if interrupt has not occured
 * 
 */
#define ADC_INTERRUPT_NOT_OCCURED !(ADCSRA & (1<<ADIF))
/**
 * @brief A function to initialise the analog to digital converter
 * 
 */
void Init_ADC();

/**
 * @brief A function to receive temperature sensor inputs from analog pin and output it to a register ADC which has 2 8 bit registers ADCL and ADCH.
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t Read_ADC(uint8_t ch);




#endif