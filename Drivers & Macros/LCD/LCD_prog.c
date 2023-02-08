#include "STD_types.h"
#include "DIO_int.h"
#include "LCD_int.h"
#include "LCD_config.h"
#define F_CPU 16000000UL
#include <util/delay.h>

void LCD_voidInit(void)
{
	DIO_voidSetPinDir(LCD_U8_PORT_CONT,LCD_U8_RS,DIO_U8_OUTPUT);
	DIO_voidSetPinDir(LCD_U8_PORT_CONT,LCD_U8_RW,DIO_U8_OUTPUT);
	DIO_voidSetPinDir(LCD_U8_PORT_CONT,LCD_U8_E,DIO_U8_OUTPUT);
	
	DIO_voidSetPinDir(LCD_U8_PORT_DATA,LCD_U8_D4,DIO_U8_OUTPUT);
	DIO_voidSetPinDir(LCD_U8_PORT_DATA,LCD_U8_D5,DIO_U8_OUTPUT);
	DIO_voidSetPinDir(LCD_U8_PORT_DATA,LCD_U8_D6,DIO_U8_OUTPUT);
	DIO_voidSetPinDir(LCD_U8_PORT_DATA,LCD_U8_D7,DIO_U8_OUTPUT);
	
	_delay_ms(35);
	LCD_voidSendCommand(0x33);
	_delay_ms(2);
	LCD_voidSendCommand(0x32);
	_delay_ms(2);
	LCD_voidSendCommand(0x28);
	_delay_ms(2);
	LCD_voidSendCommand(0x0c);
	_delay_ms(2);
	LCD_voidSendCommand(0x06);
	_delay_ms(2);
	LCD_voidSendCommand(0x01);
	_delay_ms(2);
}
void LCD_voidSendData(u8 Copy_u8Data)
{
	DIO_voidSetPinVal(LCD_U8_PORT_CONT,LCD_U8_RW,DIO_U8_LOW);
	DIO_voidSetPinVal(LCD_U8_PORT_CONT,LCD_U8_RS,DIO_U8_HIGH);
	
	/*high nibble*/
	DIO_voidSetPortVal(LCD_U8_PORT_DATA, Copy_u8Data);
	DIO_voidSetPinVal(LCD_U8_PORT_CONT,LCD_U8_E,DIO_U8_HIGH);
	_delay_ms(1);
	DIO_voidSetPinVal(LCD_U8_PORT_CONT,LCD_U8_E,DIO_U8_LOW);
	_delay_ms(1);
	
	/*low nibble*/
	DIO_voidSetPortVal(LCD_U8_PORT_DATA, (Copy_u8Data<<4));
	DIO_voidSetPinVal(LCD_U8_PORT_CONT,LCD_U8_E,DIO_U8_HIGH);
	_delay_ms(1);
	DIO_voidSetPinVal(LCD_U8_PORT_CONT,LCD_U8_E,DIO_U8_LOW);
	_delay_ms(1);
}
void LCD_voidSendCommand(u8 Copy_u8Command)
{
	DIO_voidSetPinVal(LCD_U8_PORT_CONT,LCD_U8_RW,DIO_U8_LOW);
	DIO_voidSetPinVal(LCD_U8_PORT_CONT,LCD_U8_RS,DIO_U8_LOW);
	
	/*high nibble*/
	DIO_voidSetPortVal(LCD_U8_PORT_DATA, Copy_u8Command);
	DIO_voidSetPinVal(LCD_U8_PORT_CONT,LCD_U8_E,DIO_U8_HIGH);
	_delay_ms(1);
	DIO_voidSetPinVal(LCD_U8_PORT_CONT,LCD_U8_E,DIO_U8_LOW);
	_delay_ms(1);
	
	/*low nibble*/
	DIO_voidSetPortVal(LCD_U8_PORT_DATA, (Copy_u8Command<<4));
	DIO_voidSetPinVal(LCD_U8_PORT_CONT,LCD_U8_E,DIO_U8_HIGH);
	_delay_ms(1);
	DIO_voidSetPinVal(LCD_U8_PORT_CONT,LCD_U8_E,DIO_U8_LOW);
	_delay_ms(1);
}
