/*
 * mfrc522_hal_stm32.c
 *
 *  Created on: 19 дек. 2015 г.
 *      Author: krayu
 */

#include "mfrc522_hal.h"
#include <stdio.h>
#include <stm32f1xx_hal.h>

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
	GPIO_InitTypeDef gpio;
	gpio.Pull = GPIO_NOPULL;
	gpio.Speed = GPIO_SPEED_MEDIUM;
	if (pin == _resetPowerDownPin)
	{
		gpio.Pin = GPIO_PIN_3;
	} else {
		gpio.Pin = GPIO_PIN_4;
	}

	if (mode == OUTPUT)
	{
		// OUTPUT
		gpio.Mode = GPIO_MODE_OUTPUT_PP;
	} else {
		// INPUT
		gpio.Mode = GPIO_MODE_INPUT;
	}
	HAL_GPIO_Init(GPIOA, &gpio);

}

/**
 * Constructor.
 */
void MFRC522_1() {
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_SPI1_CLK_ENABLE();
	SPI_InitTypeDef spi;
	SPI_HandleTypeDef spih;
	spih.Instance = SPI1;

	spih.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_32;
	spih.Init.CLKPhase = SPI_PHASE_1EDGE;
	spih.Init.CLKPolarity = SPI_POLARITY_LOW;
	spih.Init.DataSize = SPI_DATASIZE_8BIT;
	spih.Init.Direction = SPI_DIRECTION_2LINES;
	spih.Init.FirstBit = SPI_FIRSTBIT_MSB;
	spih.Init.Mode = SPI_MODE_MASTER;
	spih.Init.NSS = SPI_NSS_SOFT;
	spih.Init.TIMode = SPI_TIMODE_DISABLE;
	HAL_SPI_Init(&spih);

} // End constructor


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
