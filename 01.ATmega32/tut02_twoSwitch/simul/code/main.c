#define F_CPU 8000000UL
#include <util/delay.h>

// Libraries
#include "./Include/LIB/BIT_MATH.h"
#include "./Include/LIB/STD_TYPES.h"

// MCAL
#include "./Include/MCAL/DIO/DIO.h"
#include "./Include/MCAL/EXTI/EXTI.h"
#include "./Include/MCAL/ADC/ADC.h"
#include "./Include/MCAL/TIMER0/TIMER0.h"
#include "./Include/MCAL/TIMER1/TIMER1.h"
#include "./Include/MCAL/TIMER2/TIMER2.h"
#include "./Include/MCAL/WDT/WDT.h"
#include "./Include/MCAL/UART/UART.h"
#include "./Include/MCAL/SPI/SPI.h"
#include "./Include/MCAL/TWI/TWI.h"

// HAL
#include "./Include/HAL/SSD/SSD.h"
#include "./Include/HAL/LCD/LCD.h"
#include "./Include/HAL/KEYPAD/KEYPAD.h"
#include "./Include/HAL/SERVO/SERVO.h"
#include "./Include/HAL/ULTRASONIC/ULTRASONIC.h"
#include "./Include/HAL/RTC/RTC.h"
#include "./Include/HAL/ExEEPROM/ExEEPROM.h"

// services
#include "./Include/SERVICES/TIMERs/Timers.h"
#include "./Include/SERVICES/UART/UART_serv.h"

//simulink
#include "./Include/Simulink/DLCI.h"
#include "./Include/Simulink/lampAlgo.h"

void main()
{
    DIO_InitPin(PORTA,PIN0,PIN_OUTPUT,PIN_LOW);
    DIO_InitPin(PORTA,PIN1,PIN_INPUT,PIN_FLOATING);
    DIO_InitPin(PORTA,PIN2,PIN_OUTPUT,PIN_LOW);
    DIO_InitPin(PORTA,PIN3,PIN_INPUT,PIN_FLOATING);
    while (1)
    {
        DLCI_U.rightSW_B= DIO_ReadPin(PORTA,PIN1);
        DLCI_U.leftSW_B= DIO_ReadPin(PORTA,PIN3);
            DLCI_lampAlgo(DLCI_U.rightSW_B, DLCI_U.leftSW_B, &DLCI_Y.rightLamp_B,
                          &DLCI_Y.leftLamp_B);
            DIO_WritePin(PORTA, PIN0, DLCI_Y.rightLamp_B);
            DIO_WritePin(PORTA, PIN2, DLCI_Y.leftLamp_B);
    }
}
