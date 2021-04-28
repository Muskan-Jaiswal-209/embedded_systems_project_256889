/**
 * @file heatcontrolsystem.h
 * @author Hemanth A (hemanth.ec17@bmsce.ac.in)
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _HEATCONTROLSYSTEM_H_
#define _HEATCONTROLSYSTEM_H_

#include <avr/io.h>




#define BUTTON_SENSOR_ON !(PINB&(1<<PB7))

#define HEATER_ON !(PINB&(1<<PB6))

#define SET_LED PORTB|=(1<<PB0)

#define CLEAR_LED PORTB&=~(1<<PB0)

#define SET_LED_AS_OUTPUT DDRB|=(1<<PB0)

#define SET_BUTTON_AS_INPUT DDRB&=~(1<<PB6)

#define SET_HEATER_AS_INPUT DDRB&=~(1<<PB7)

#define PULLUP_BUTTON PORTB|=(1<<PB6)

#define PULLUP_HEATER PORTB|=(1<<PB7)

/**
 * @brief A function to operate the button and heater sensor
 * 
 */
void Buttons_LED_Init();

/**
 * @brief A function to initialise the analog to digital converter
 * 
 */
void Init_ADC();

/**
 * @brief A funciton to receive temperature sensor inputs from analog pin and output it to a register ADC which has 2 8 bit registers ADCL and ADCH.
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t Read_ADC(uint8_t ch);



#endif //_HEATCONTROLSYSTEM_H_