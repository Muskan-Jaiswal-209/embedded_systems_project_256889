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
 * @brief A function to operate the button and heater sensor
 * 
 */
void PortB_dec();

/**
 * @brief A function to operate an LED based on the inputs provided by a button sensor and a heater input
 * 
 */
void ButtonSensorHeater();


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