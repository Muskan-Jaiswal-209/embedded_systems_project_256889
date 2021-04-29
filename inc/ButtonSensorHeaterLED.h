/**
 * @file ButtonSensorHeaterLED.h
 * @author Hemanth A (hemanth.ec17@bmsce.ac.in)
 * @brief A header file for button sensor and heater functions
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _BUTTONSENSORHEATERLED_H_
#define _BUTTONSENSORHEATERLED_H_

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

#endif 