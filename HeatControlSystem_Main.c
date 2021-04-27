#include "heatcontrolsystem.h"
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    PortB_dec();
    Init_ADC();
    uint16_t temp;

    while(1)
    {
        ButtonSensorHeater();
        temp = Read_ADC(0);
        _delay_ms(200);
    }



 return 0;   
}