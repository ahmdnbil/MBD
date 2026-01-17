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
#include "./Include/Simulink/blinkLED.h"
#include "./Include/Simulink/blinkLEDFucn.h"

void main()
{
    DIO_InitPin(PORTA,PIN0,PIN_OUTPUT,PIN_LOW);
    while (1)
    {
        rtY.firstLamp_B = blinkLEDFucn(&rtDW.blinkLEDFucn_d);
        DIO_WritePin(PORTA, PIN0, rtY.firstLamp_B);
    }
}
