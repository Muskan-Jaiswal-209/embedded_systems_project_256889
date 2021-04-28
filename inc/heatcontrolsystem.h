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



/**
 * @brief A macro to check if the button is pressed or not. If pressed, the input to 7th bit of PINB is 0.
 * 
 */
#define BUTTON_SENSOR_ON !(PINB&(1<<PB7))

/**
 * @brief A macro to check if the heater is pressed or not. If pressed, the input to 6th bit of PINB is 0.
 * 
 */
#define HEATER_ON !(PINB&(1<<PB6))

/**
 * @brief A macro to turn on the LED by setting 0th bit of PORTB
 * 
 */
#define SET_LED PORTB|=(1<<PB0)

/**
 * @brief A macro to turn off the LED by clearing the 0th bit of PORTB
 * 
 */
#define CLEAR_LED PORTB&=~(1<<PB0)

/**
 * @brief A macro to set 0th bit of PORTB as output
 * 
 */
#define SET_LED_AS_OUTPUT DDRB|=(1<<PB0)

/**
 * @brief A macro to set 6th bit of PORTB as input
 * 
 */
#define SET_BUTTON_AS_INPUT DDRB&=~(1<<PB6)

/**
 * @brief A macro to set 7th bit of PORTB as input
 * 
 */
#define SET_HEATER_AS_INPUT DDRB&=~(1<<PB7)

/**
 * @brief A macro to set 6th bit of PORTB
 * 
 */
#define PULLUP_BUTTON PORTB|=(1<<PB6)

/**
 * @brief A macro to set 7th bit of PORTB
 * 
 */
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