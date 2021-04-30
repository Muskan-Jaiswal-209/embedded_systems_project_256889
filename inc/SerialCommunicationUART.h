/**
 * @file SerialCommunicationUART.h
 * @author Hemanth A (hemanth.ec17@bmsce.ac.in)
 * @brief A header file for serial communication based on UART protocol
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _SERIALCOMMUNICATIONUART_H_
#define _SERIALCOMMUNICATIONUART_H_


#include <avr/io.h>
#include <util/delay.h>


/**
 * @brief A macro to check if the data is not written into the buffer
 * 
 */
#define UART_DATA_NOT_WRITTEN !(UCSR0A & (1<<UDRE0))

/**
 * @brief A macro to enable the uart and uart interrupts
 * 
 */
#define UART_ENABLED UCSR0B|=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0)
/**
 * @brief A macro to define uart character size
 * 
 */
#define UART_CHARACTER_SIZE UCSR0C|=(1<<UCSZ00)|(1<<UCSZ01)
/**
 * @brief A program to initialize the UART serial communication
 * 
 * @param ubrr_value 
 */
void UARTinit(uint16_t ubrr_value);


/**
 * @brief A function to write characters to send it to other UART port
 * 
 * @param data 
 */
void UARTwritecharacter(char data);


#endif