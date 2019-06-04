/*
 * SPI_Master_H_file.h
 *
 * http://www.electronicwings.com
 */ 
#ifndef SPI_MASTER_H_FILE_H_
#define SPI_MASTER_H_FILE_H_

#include <avr/io.h>

#define PORT_LCD PORTB
#define DDR_LCD DDRB

#define SCK  PORTB7//CLk
#define MOSI PORTB5//DIN
#define DC   PORTB1//DC
#define SS   PORTB4//CE
#define RST  PORTB0

#define MISO PORTB6

// #define LCD_CLK PORTD0
// #define LCD_DIN PORTD1
// #define LCD_DC PORTD2
// #define LCD_SCE PORTD3
// #define LCD_RST PORTD4

void SPI_SS_Enable();
void SPI_SS_Disable();
void SPI_Init();
void SPI_Write(char write_data);
char SPI_Read();

#endif /* SPI_MASTER_H_FILE_H_ */