/*
 * mfrc522_hal_stm32.c
 *
 *  Created on: 19 дек. 2015 г.
 *      Author: krayu
 */

#include "mfrc522_hal.h"
#include <stdio.h>


/**
 * Set SPI bus to work with MFRC522 chip.
 * Please call this function if you have changed the SPI config since the MFRC522 constructor was run.
 */
void setSPIConfig(void) {
	// todo
} // End setSPIConfig()



byte SPI_transfer(byte c)
{
	return 0;
}

byte pgm_read_byte(const byte* addr)
{
return *addr;
}

void digitalWrite(byte pin, byte value)
{

}

byte digitalRead(byte pin)
{
	return 0;
}

void pinMode(byte pin, Pin_Mode mode)
{

}

void delay(word t)
{

}

void Serial_print(__FlashStringHelper *str)
{
	printf("%s", str);
}

void Serial_print2(byte value, SerialPrintFormat format)
{
	if (format == DEC)
	{
		printf("%u", value);
	}
	else if (format == HEX) {
		printf("%X", value);
	}
}

void Serial_println (__FlashStringHelper *str)
{
	printf("%s\r\n", str);
}
void Serial_println1()
{
	printf("\r\n");
}
