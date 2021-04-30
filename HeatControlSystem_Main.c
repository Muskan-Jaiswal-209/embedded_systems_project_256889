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
#include <avr/io.h>
#include <util/delay.h>
#include "ButtonSensorHeaterLED.h"
#include "TemperatureSensorADC.h"
#include "ADC_PWMoutput.h"
#include "SerialCommunicationUART.h"


/**
 * @brief A structure for the variables used inside the main function 
 * 
 */
typedef struct{

    uint16_t temp;
    const char* tempvalue;

}variables;

variables var;

/**
 * @brief Main function
 * 
 * @return int 
 */
int main(void)
{
    Buttons_LED_Init(); //Initialise the button input registers
    Init_ADC(); //Initialise the ADC
    TimerWaveGenMode(); //Initialise the registers for TIMER1 as fast PWM
    UARTinit(103); //Initialise UART registers
    
    int i;

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
                var.temp = Read_ADC(0);
                var.tempvalue = outputbyPWM(var.temp);
                for(i=0;i<=5;i++){
                UARTwritecharacter(var.tempvalue[i]);

                }
                _delay_ms(20);
                
            }
            else
            {
                _delay_ms(20);
                OCR1A = 0; //make PWM output 0 if switch is off
                CLEAR_LED; // make led off
            }
        }
        else
        {
                
                CLEAR_LED; //make led off
                OCR1A = 0; //make PWM output 0 if both switches are off
                _delay_ms(20);
        }
    }

 return 0;   
}