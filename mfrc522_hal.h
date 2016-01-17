/*
 * mfrc522_hal.h
 *
 *  Created on: 19 дек. 2015 г.
 *      Author: krayu
 */

#ifndef mfrc522_hal_h
#define mfrc522_hal_h

#include "MFRC522.h"

void setSPIConfig(void);
byte SPI_transfer(byte c);
byte pgm_read_byte(const byte* addr);
void digitalWrite(byte pin, byte value);
byte digitalRead(byte pin);
void pinMode(byte pin, Pin_Mode mode);
void delay(word t);
void Serial_print(__FlashStringHelper *str);
void Serial_print2(byte value, SerialPrintFormat format);
void Serial_println (__FlashStringHelper *str);
void Serial_println1();
void MFRC522_1();

#endif
