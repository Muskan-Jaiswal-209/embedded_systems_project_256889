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
 * @brief A macro to check if the data is received into the buffer or not
 * 
 */
#define UART_DATA_NOT_RECEIVED !(UCSR0A & (1<<RXC0))

/**
 * @brief A macro to check if the data is not written into the buffer
 * 
 */
#define UART_DATA_NOT_WRITTEN !(UCSR0A & (1<<UDRE0))

/**
 * @brief A program to initialize the UART serial communication
 * 
 * @param ubrr_value 
 */
void UARTinit(uint16_t ubrr_value);

/**
 * @brief A function to read characters coming from other UART port
 * 
 * @return char 
 */
char UARTreadchar();

/**
 * @brief A function to write characters to send it to other UART port
 * 
 * @param data 
 */
void UARTwritecharacter(char data);


#endif