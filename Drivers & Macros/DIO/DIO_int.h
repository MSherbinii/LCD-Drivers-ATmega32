#ifndef DIO_INT_H
#define DIO_INT_H


#define DIO_U8_PORTA 0
#define DIO_U8_PORTB 1
#define DIO_U8_PORTC 2
#define DIO_U8_PORTD 3


#define DIO_U8_PIN0 0
#define DIO_U8_PIN1 1
#define DIO_U8_PIN2 2
#define DIO_U8_PIN3 3
#define DIO_U8_PIN4 4
#define DIO_U8_PIN5 5
#define DIO_U8_PIN6 6
#define DIO_U8_PIN7 7


#define DIO_U8_OUTPUT 1
#define DIO_U8_INPUT  0

#define DIO_U8_HIGH  1
#define DIO_U8_LOW  0


void DIO_voidSetPinDir(u8 Copy_u8Port,u8 Copy_u8Pin , u8 Copy_u8Dir);

void DIO_voidSetPinVal(u8 Copy_u8Port,u8 Copy_u8Pin , u8 Copy_u8Val);

u8 DIO_u8GetPinVal(u8 Copy_u8Port,u8 Copy_u8Pin);

void DIO_voidSetPortVal(u8 Copy_u8Port, u8 Copy_u8Val);




#endif