
#ifndef _HEATCONTROLSYSTEM_H_
#define _HEATCONTROLSYSTEM_H_

#include <avr/io.h>

void PortB_dec();

void ButtonSensorHeater();

void Init_ADC();

uint16_t Read_ADC(uint8_t ch);



#endif //_HEATCONTROLSYSTEM_H_