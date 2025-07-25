#ifndef PORTABLE_WORDSIZES
#ifdef __MW_TARGET_USE_HARDWARE_RESOURCES_H__
#ifndef __MW_TARGET_HARDWARE_RESOURCES_H__
#define __MW_TARGET_HARDWARE_RESOURCES_H__

#define MW_MULTI_TASKING_MODE 1
#include "main.h"
#include "SysTickScheduler.h"
#include "arm_cortex_m_multitasking.h"

#define MW_USECODERTARGET 1
#define MW_TARGETHARDWARE STM32F4xx Based
#define MW_CONNECTIONINFO_SERIAL_BAUDRATE stm32cube.codegen.getConnectivityBaudrate(hCS)
#define MW_CONNECTIONINFO_SERIAL_COMPORT stm32cube.codegen.getConnectivityCOMPort(hCS)
#define MW_CONNECTIONINFO_SERIAL_VERBOSE 1
#define MW_CONNECTIONINFO_TCPIP_IPADDRESS stm32cube.parameters.EthernetConfigIPAddressExternalMode
#define MW_CONNECTIONINFO_TCPIP_PORT 17725
#define MW_CONNECTIONINFO_TCPIP_VERBOSE 1
#define MW_EXTMODE_CONFIGURATION Serial
#define MW_EXTMODE_SIGNALBUFFERSIZE 2048.000000
#define MW_EXTMODE_USEREALTIMESTAMPLOGGING 1
#define MW_EXTMODE_RUNNING on
#define MW_RTOS Baremetal
#define MW_RTOSBASERATETASKPRIORITY 40
#define MW_SCHEDULER_INTERRUPT_SOURCE 0
#define MW_RUNTIME_BUILDACTION 1
#define MW_RUNTIME_RUNTIMELIBRARY 0
#define MW_RUNTIME_DISABLEPARALLELBUILD 0
#define MW_STM32CUBEMX_PROJECTFILEBUTTON 
#define MW_STM32CUBEMX_CREATEPROJECTFILEBUTTON 
#define MW_STM32CUBEMX_LAUNCHPROJECTFILEBUTTON 
#define MW_STM32CUBEMX_PROJECTFILE D:/ME/Career/04.MBD/Projects/hardware/STM32_Nucleo/tut1/blinkLED/blinkLED.ioc
#define MW_STM32CUBEMX_DEVICEID STM32F446R(C-E)Tx
#define MW_STM32CUBEMX_FAMILY STM32F4
#define MW_STM32CUBEMX_CONNECTIVITYMODE 0
#define MW_STM32CUBEMX_CONNECTIONPORT 0
#define MW_STM32CUBEMX_MODE 0
#define MW_STM32CUBEMX_ACCESSPORT 0
#define MW_STM32CUBEMX_RESETMODE 0
#define MW_STM32CUBEMX_AUTODETECTBOARD 1
#define MW_STM32CUBEMX_DEVICELIST -1
#define MW_STM32CUBEMX_DEVICELISTREFRESH 
#define MW_CLOCKING_CPUCLOCKRATEMHZ 84.000000
#define MW_CONNECTION_SERIALMODULE 1
#define MW_CONNECTION_SERIALPORT COM6
#define MW_CONNECTION_ETHERNETPORT 17725.000000
#define MW_USART_USART1CONFIGUREMODULE 48
#define MW_USART_USART1TRANSMITMODE 0
#define MW_USART_USART1RECEIVEMODE 0
#define MW_USART_USART1TRANSMITBUFFERLENGTH 128
#define MW_USART_USART1RECEIVEBUFFERLENGTH 128
#define MW_USART_USART1DISABLEDMAINTERRUPTONERROR 48
#define MW_USART_USART2CONFIGUREMODULE 48
#define MW_USART_USART2TRANSMITMODE 0
#define MW_USART_USART2RECEIVEMODE 0
#define MW_USART_USART2TRANSMITBUFFERLENGTH 128
#define MW_USART_USART2RECEIVEBUFFERLENGTH 128
#define MW_USART_USART2DISABLEDMAINTERRUPTONERROR 48
#define MW_USART_USART3CONFIGUREMODULE 48
#define MW_USART_USART3TRANSMITMODE 0
#define MW_USART_USART3RECEIVEMODE 0
#define MW_USART_USART3TRANSMITBUFFERLENGTH 128
#define MW_USART_USART3RECEIVEBUFFERLENGTH 128
#define MW_USART_USART3DISABLEDMAINTERRUPTONERROR 48
#define MW_USART_UART4CONFIGUREMODULE 48
#define MW_USART_UART4TRANSMITMODE 0
#define MW_USART_UART4RECEIVEMODE 0
#define MW_USART_UART4TRANSMITBUFFERLENGTH 128
#define MW_USART_UART4RECEIVEBUFFERLENGTH 128
#define MW_USART_UART4DISABLEDMAINTERRUPTONERROR 48
#define MW_USART_UART5CONFIGUREMODULE 48
#define MW_USART_UART5TRANSMITMODE 0
#define MW_USART_UART5RECEIVEMODE 0
#define MW_USART_UART5TRANSMITBUFFERLENGTH 128
#define MW_USART_UART5RECEIVEBUFFERLENGTH 128
#define MW_USART_UART5DISABLEDMAINTERRUPTONERROR 48
#define MW_USART_USART6CONFIGUREMODULE 48
#define MW_USART_USART6TRANSMITMODE 0
#define MW_USART_USART6RECEIVEMODE 0
#define MW_USART_USART6TRANSMITBUFFERLENGTH 128
#define MW_USART_USART6RECEIVEBUFFERLENGTH 128
#define MW_USART_USART6DISABLEDMAINTERRUPTONERROR 48
#define MW_USART_UART7CONFIGUREMODULE 48
#define MW_USART_UART7TRANSMITMODE 0
#define MW_USART_UART7RECEIVEMODE 0
#define MW_USART_UART7TRANSMITBUFFERLENGTH 128
#define MW_USART_UART7RECEIVEBUFFERLENGTH 128
#define MW_USART_UART7DISABLEDMAINTERRUPTONERROR 48
#define MW_USART_UART8CONFIGUREMODULE 48
#define MW_USART_UART8TRANSMITMODE 0
#define MW_USART_UART8RECEIVEMODE 0
#define MW_USART_UART8TRANSMITBUFFERLENGTH 128
#define MW_USART_UART8RECEIVEBUFFERLENGTH 128
#define MW_USART_UART8DISABLEDMAINTERRUPTONERROR 48
#define MW_ETHERNET_HOSTNAME STM32F4xx
#define MW_ETHERNET_MACADDR 00:80:E1:00:00:00
#define MW_ETHERNET_DHCPENABLED 1
#define MW_ETHERNET_LOCALIPADDRESS 0.0.0.0
#define MW_ETHERNET_SUBNETMASK 0.0.0.0
#define MW_ETHERNET_GATEWAY 0.0.0.0
#define MW_ADC1_USEDMA 0
#define MW_ADC1_USEWATCHDOG 0
#define MW_ADC1_EOCENABLEINTERRUPT 0
#define MW_ADC1_JEOCENABLEINTERRUPT 48
#define MW_ADC1_OVRENABLEINTERRUPT 48
#define MW_ADC1_PROJECTFILEBUTTON 
#define MW_ADC2_USEDMA 0
#define MW_ADC2_USEWATCHDOG 0
#define MW_ADC2_EOCENABLEINTERRUPT 0
#define MW_ADC2_JEOCENABLEINTERRUPT 48
#define MW_ADC2_OVRENABLEINTERRUPT 48
#define MW_ADC2_PROJECTFILEBUTTON 
#define MW_ADC3_USEDMA 0
#define MW_ADC3_USEWATCHDOG 0
#define MW_ADC3_EOCENABLEINTERRUPT 0
#define MW_ADC3_JEOCENABLEINTERRUPT 48
#define MW_ADC3_OVRENABLEINTERRUPT 48
#define MW_ADC3_PROJECTFILEBUTTON 
#define MW_SPI_SPIMODULESELECT 0
#define MW_SPI_SPI1RXFIFOINTERRUPT 0
#define MW_SPI_SPI1ERRORINTERRUPT 0
#define MW_SPI_SPI2RXFIFOINTERRUPT 0
#define MW_SPI_SPI2ERRORINTERRUPT 0
#define MW_SPI_SPI3RXFIFOINTERRUPT 0
#define MW_SPI_SPI3ERRORINTERRUPT 0
#define MW_SPI_SPI4RXFIFOINTERRUPT 0
#define MW_SPI_SPI4ERRORINTERRUPT 0
#define MW_SPI_SPI5RXFIFOINTERRUPT 0
#define MW_SPI_SPI5ERRORINTERRUPT 0
#define MW_TIMER_TIMERGROUP 0
#define MW_TIMER_TIM1CONFIGUREMODULE 48
#define MW_TIMER_TIM8CONFIGUREMODULE 48
#define MW_TIMER_TIM2CONFIGUREMODULE 48
#define MW_TIMER_TIM3CONFIGUREMODULE 48
#define MW_TIMER_TIM4CONFIGUREMODULE 48
#define MW_TIMER_TIM5CONFIGUREMODULE 48
#define MW_TIMER_TIM6CONFIGUREMODULE 48
#define MW_TIMER_TIM7CONFIGUREMODULE 48
#define MW_TIMER_TIM9CONFIGUREMODULE 48
#define MW_TIMER_TIM10CONFIGUREMODULE 48
#define MW_TIMER_TIM11CONFIGUREMODULE 48
#define MW_TIMER_TIM12CONFIGUREMODULE 48
#define MW_TIMER_TIM13CONFIGUREMODULE 48
#define MW_TIMER_TIM14CONFIGUREMODULE 48
#define MW_TIM1_STARTTIMER 49
#define MW_TIM1_TRIGGERINTERRUPT 48
#define MW_TIM1_CAPTURECOMPARE1INTERRUPT 48
#define MW_TIM1_CAPTURECOMPARE2INTERRUPT 48
#define MW_TIM1_CAPTURECOMPARE3INTERRUPT 48
#define MW_TIM1_CAPTURECOMPARE4INTERRUPT 48
#define MW_TIM1_UPDATEINTERRUPT 48
#define MW_TIM1_BREAKINTERRUPT 48
#define MW_TIM1_COMINTERRUPT 48
#define MW_TIM8_STARTTIMER 49
#define MW_TIM8_TRIGGERINTERRUPT 48
#define MW_TIM8_CAPTURECOMPARE1INTERRUPT 48
#define MW_TIM8_CAPTURECOMPARE2INTERRUPT 48
#define MW_TIM8_CAPTURECOMPARE3INTERRUPT 48
#define MW_TIM8_CAPTURECOMPARE4INTERRUPT 48
#define MW_TIM8_UPDATEINTERRUPT 48
#define MW_TIM8_BREAKINTERRUPT 48
#define MW_TIM8_COMINTERRUPT 48
#define MW_TIM2_STARTTIMER 49
#define MW_TIM2_TRIGGERINTERRUPT 48
#define MW_TIM2_CAPTURECOMPARE1INTERRUPT 48
#define MW_TIM2_CAPTURECOMPARE2INTERRUPT 48
#define MW_TIM2_CAPTURECOMPARE3INTERRUPT 48
#define MW_TIM2_CAPTURECOMPARE4INTERRUPT 48
#define MW_TIM2_UPDATEINTERRUPT 48
#define MW_TIM3_STARTTIMER 49
#define MW_TIM3_TRIGGERINTERRUPT 48
#define MW_TIM3_CAPTURECOMPARE1INTERRUPT 48
#define MW_TIM3_CAPTURECOMPARE2INTERRUPT 48
#define MW_TIM3_CAPTURECOMPARE3INTERRUPT 48
#define MW_TIM3_CAPTURECOMPARE4INTERRUPT 48
#define MW_TIM3_UPDATEINTERRUPT 48
#define MW_TIM4_STARTTIMER 49
#define MW_TIM4_TRIGGERINTERRUPT 48
#define MW_TIM4_CAPTURECOMPARE1INTERRUPT 48
#define MW_TIM4_CAPTURECOMPARE2INTERRUPT 48
#define MW_TIM4_CAPTURECOMPARE3INTERRUPT 48
#define MW_TIM4_CAPTURECOMPARE4INTERRUPT 48
#define MW_TIM4_UPDATEINTERRUPT 48
#define MW_TIM5_STARTTIMER 49
#define MW_TIM5_TRIGGERINTERRUPT 48
#define MW_TIM5_CAPTURECOMPARE1INTERRUPT 48
#define MW_TIM5_CAPTURECOMPARE2INTERRUPT 48
#define MW_TIM5_CAPTURECOMPARE3INTERRUPT 48
#define MW_TIM5_CAPTURECOMPARE4INTERRUPT 48
#define MW_TIM5_UPDATEINTERRUPT 48
#define MW_TIM6_STARTTIMER 49
#define MW_TIM6_UPDATEINTERRUPT 48
#define MW_TIM7_STARTTIMER 49
#define MW_TIM7_UPDATEINTERRUPT 48
#define MW_TIM9_STARTTIMER 49
#define MW_TIM9_TRIGGERINTERRUPT 48
#define MW_TIM9_CAPTURECOMPARE1INTERRUPT 48
#define MW_TIM9_CAPTURECOMPARE2INTERRUPT 48
#define MW_TIM9_UPDATEINTERRUPT 48
#define MW_TIM10_STARTTIMER 49
#define MW_TIM10_CAPTURECOMPARE1INTERRUPT 48
#define MW_TIM10_UPDATEINTERRUPT 48
#define MW_TIM11_STARTTIMER 49
#define MW_TIM11_CAPTURECOMPARE1INTERRUPT 48
#define MW_TIM11_UPDATEINTERRUPT 48
#define MW_TIM12_STARTTIMER 49
#define MW_TIM12_TRIGGERINTERRUPT 48
#define MW_TIM12_CAPTURECOMPARE1INTERRUPT 48
#define MW_TIM12_CAPTURECOMPARE2INTERRUPT 48
#define MW_TIM12_UPDATEINTERRUPT 48
#define MW_TIM13_STARTTIMER 49
#define MW_TIM13_CAPTURECOMPARE1INTERRUPT 48
#define MW_TIM13_UPDATEINTERRUPT 48
#define MW_TIM14_STARTTIMER 49
#define MW_TIM14_CAPTURECOMPARE1INTERRUPT 48
#define MW_TIM14_UPDATEINTERRUPT 48
#define MW_CAN_MODULE 0
#define MW_CAN1_BAUDRATE 1000000
#define MW_CAN1_CONFIGUREINTENRX 0
#define MW_CAN1_CONFIGUREINTFIFO0RX 0
#define MW_CAN1_ENABLEFIFO0MSGPENDINGINTR 0
#define MW_CAN1_ENABLEFIFO0FULLINTR 0
#define MW_CAN1_ENABLEFIFO0OVRINTR 0
#define MW_CAN1_CONFIGUREINTFIFO1RX 0
#define MW_CAN1_ENABLEFIFO1MSGPENDINGINTR 0
#define MW_CAN1_ENABLEFIFO1FULLINTR 0
#define MW_CAN1_ENABLEFIFO1OVRINTR 0
#define MW_CAN1_CONFIGUREINTENTX 0
#define MW_CAN1_ENABLETXMAILBOXEMPTYINTR 0
#define MW_CAN1_CONFIGUREINTENOTHER 0
#define MW_CAN1_ENABLEERRWARNINTR 0
#define MW_CAN1_ENABLEERRPASSIVEINTR 0
#define MW_CAN1_ENABLEBUSOFFINTR 0
#define MW_CAN1_ENABLELASTERRCODEINTR 0
#define MW_CAN1_ENABLEWAKEUPINTR 0
#define MW_CAN1_ENABLESLEEPACKINTR 0
#define MW_CAN1_ACCEPTALLMESSAGES 1
#define MW_CAN1_FILTERBANKNUMBER 0
#define MW_CAN1_ENABLEFILTERBANK00 0
#define MW_CAN1_SCALE00 0
#define MW_CAN1_MODE00 0
#define MW_CAN1_FIFOASSIGNMENT00 0
#define MW_CAN1_IDTYPE00 0
#define MW_CAN1_ID1_00 0
#define MW_CAN1_MASK1_00 0
#define MW_CAN1_ID2_00 0
#define MW_CAN1_MASK2_00 0
#define MW_CAN1_ID3_00 0
#define MW_CAN1_ID4_00 0
#define MW_CAN1_ENABLEFILTERBANK01 0
#define MW_CAN1_SCALE01 0
#define MW_CAN1_MODE01 0
#define MW_CAN1_FIFOASSIGNMENT01 0
#define MW_CAN1_IDTYPE01 0
#define MW_CAN1_ID1_01 0
#define MW_CAN1_MASK1_01 0
#define MW_CAN1_ID2_01 0
#define MW_CAN1_MASK2_01 0
#define MW_CAN1_ID3_01 0
#define MW_CAN1_ID4_01 0
#define MW_CAN1_ENABLEFILTERBANK02 0
#define MW_CAN1_SCALE02 0
#define MW_CAN1_MODE02 0
#define MW_CAN1_FIFOASSIGNMENT02 0
#define MW_CAN1_IDTYPE02 0
#define MW_CAN1_ID1_02 0
#define MW_CAN1_MASK1_02 0
#define MW_CAN1_ID2_02 0
#define MW_CAN1_MASK2_02 0
#define MW_CAN1_ID3_02 0
#define MW_CAN1_ID4_02 0
#define MW_CAN1_ENABLEFILTERBANK03 0
#define MW_CAN1_SCALE03 0
#define MW_CAN1_MODE03 0
#define MW_CAN1_FIFOASSIGNMENT03 0
#define MW_CAN1_IDTYPE03 0
#define MW_CAN1_ID1_03 0
#define MW_CAN1_MASK1_03 0
#define MW_CAN1_ID2_03 0
#define MW_CAN1_MASK2_03 0
#define MW_CAN1_ID3_03 0
#define MW_CAN1_ID4_03 0
#define MW_CAN1_ENABLEFILTERBANK04 0
#define MW_CAN1_SCALE04 0
#define MW_CAN1_MODE04 0
#define MW_CAN1_FIFOASSIGNMENT04 0
#define MW_CAN1_IDTYPE04 0
#define MW_CAN1_ID1_04 0
#define MW_CAN1_MASK1_04 0
#define MW_CAN1_ID2_04 0
#define MW_CAN1_MASK2_04 0
#define MW_CAN1_ID3_04 0
#define MW_CAN1_ID4_04 0
#define MW_CAN1_ENABLEFILTERBANK05 0
#define MW_CAN1_SCALE05 0
#define MW_CAN1_MODE05 0
#define MW_CAN1_FIFOASSIGNMENT05 0
#define MW_CAN1_IDTYPE05 0
#define MW_CAN1_ID1_05 0
#define MW_CAN1_MASK1_05 0
#define MW_CAN1_ID2_05 0
#define MW_CAN1_MASK2_05 0
#define MW_CAN1_ID3_05 0
#define MW_CAN1_ID4_05 0
#define MW_CAN1_ENABLEFILTERBANK06 0
#define MW_CAN1_SCALE06 0
#define MW_CAN1_MODE06 0
#define MW_CAN1_FIFOASSIGNMENT06 0
#define MW_CAN1_IDTYPE06 0
#define MW_CAN1_ID1_06 0
#define MW_CAN1_MASK1_06 0
#define MW_CAN1_ID2_06 0
#define MW_CAN1_MASK2_06 0
#define MW_CAN1_ID3_06 0
#define MW_CAN1_ID4_06 0
#define MW_CAN1_ENABLEFILTERBANK07 0
#define MW_CAN1_SCALE07 0
#define MW_CAN1_MODE07 0
#define MW_CAN1_FIFOASSIGNMENT07 0
#define MW_CAN1_IDTYPE07 0
#define MW_CAN1_ID1_07 0
#define MW_CAN1_MASK1_07 0
#define MW_CAN1_ID2_07 0
#define MW_CAN1_MASK2_07 0
#define MW_CAN1_ID3_07 0
#define MW_CAN1_ID4_07 0
#define MW_CAN1_ENABLEFILTERBANK08 0
#define MW_CAN1_SCALE08 0
#define MW_CAN1_MODE08 0
#define MW_CAN1_FIFOASSIGNMENT08 0
#define MW_CAN1_IDTYPE08 0
#define MW_CAN1_ID1_08 0
#define MW_CAN1_MASK1_08 0
#define MW_CAN1_ID2_08 0
#define MW_CAN1_MASK2_08 0
#define MW_CAN1_ID3_08 0
#define MW_CAN1_ID4_08 0
#define MW_CAN1_ENABLEFILTERBANK09 0
#define MW_CAN1_SCALE09 0
#define MW_CAN1_MODE09 0
#define MW_CAN1_FIFOASSIGNMENT09 0
#define MW_CAN1_IDTYPE09 0
#define MW_CAN1_ID1_09 0
#define MW_CAN1_MASK1_09 0
#define MW_CAN1_ID2_09 0
#define MW_CAN1_MASK2_09 0
#define MW_CAN1_ID3_09 0
#define MW_CAN1_ID4_09 0
#define MW_CAN1_ENABLEFILTERBANK10 0
#define MW_CAN1_SCALE10 0
#define MW_CAN1_MODE10 0
#define MW_CAN1_FIFOASSIGNMENT10 0
#define MW_CAN1_IDTYPE10 0
#define MW_CAN1_ID1_10 0
#define MW_CAN1_MASK1_10 0
#define MW_CAN1_ID2_10 0
#define MW_CAN1_MASK2_10 0
#define MW_CAN1_ID3_10 0
#define MW_CAN1_ID4_10 0
#define MW_CAN1_ENABLEFILTERBANK11 0
#define MW_CAN1_SCALE11 0
#define MW_CAN1_MODE11 0
#define MW_CAN1_FIFOASSIGNMENT11 0
#define MW_CAN1_IDTYPE11 0
#define MW_CAN1_ID1_11 0
#define MW_CAN1_MASK1_11 0
#define MW_CAN1_ID2_11 0
#define MW_CAN1_MASK2_11 0
#define MW_CAN1_ID3_11 0
#define MW_CAN1_ID4_11 0
#define MW_CAN1_ENABLEFILTERBANK12 0
#define MW_CAN1_SCALE12 0
#define MW_CAN1_MODE12 0
#define MW_CAN1_FIFOASSIGNMENT12 0
#define MW_CAN1_IDTYPE12 0
#define MW_CAN1_ID1_12 0
#define MW_CAN1_MASK1_12 0
#define MW_CAN1_ID2_12 0
#define MW_CAN1_MASK2_12 0
#define MW_CAN1_ID3_12 0
#define MW_CAN1_ID4_12 0
#define MW_CAN1_ENABLEFILTERBANK13 0
#define MW_CAN1_SCALE13 0
#define MW_CAN1_MODE13 0
#define MW_CAN1_FIFOASSIGNMENT13 0
#define MW_CAN1_IDTYPE13 0
#define MW_CAN1_ID1_13 0
#define MW_CAN1_MASK1_13 0
#define MW_CAN1_ID2_13 0
#define MW_CAN1_MASK2_13 0
#define MW_CAN1_ID3_13 0
#define MW_CAN1_ID4_13 0
#define MW_CAN2_BAUDRATE 1000000
#define MW_CAN2_CONFIGUREINTENRX 0
#define MW_CAN2_CONFIGUREINTFIFO0RX 0
#define MW_CAN2_ENABLEFIFO0MSGPENDINGINTR 0
#define MW_CAN2_ENABLEFIFO0FULLINTR 0
#define MW_CAN2_ENABLEFIFO0OVRINTR 0
#define MW_CAN2_CONFIGUREINTFIFO1RX 0
#define MW_CAN2_ENABLEFIFO1MSGPENDINGINTR 0
#define MW_CAN2_ENABLEFIFO1FULLINTR 0
#define MW_CAN2_ENABLEFIFO1OVRINTR 0
#define MW_CAN2_CONFIGUREINTENTX 0
#define MW_CAN2_ENABLETXMAILBOXEMPTYINTR 0
#define MW_CAN2_CONFIGUREINTENOTHER 0
#define MW_CAN2_ENABLEERRWARNINTR 0
#define MW_CAN2_ENABLEERRPASSIVEINTR 0
#define MW_CAN2_ENABLEBUSOFFINTR 0
#define MW_CAN2_ENABLELASTERRCODEINTR 0
#define MW_CAN2_ENABLEWAKEUPINTR 0
#define MW_CAN2_ENABLESLEEPACKINTR 0
#define MW_CAN2_ACCEPTALLMESSAGES 1
#define MW_CAN2_FILTERBANKNUMBER 0
#define MW_CAN2_ENABLEFILTERBANK00 0
#define MW_CAN2_SCALE00 0
#define MW_CAN2_MODE00 0
#define MW_CAN2_FIFOASSIGNMENT00 0
#define MW_CAN2_IDTYPE00 0
#define MW_CAN2_ID1_00 0
#define MW_CAN2_MASK1_00 0
#define MW_CAN2_ID2_00 0
#define MW_CAN2_MASK2_00 0
#define MW_CAN2_ID3_00 0
#define MW_CAN2_ID4_00 0
#define MW_CAN2_ENABLEFILTERBANK01 0
#define MW_CAN2_SCALE01 0
#define MW_CAN2_MODE01 0
#define MW_CAN2_FIFOASSIGNMENT01 0
#define MW_CAN2_IDTYPE01 0
#define MW_CAN2_ID1_01 0
#define MW_CAN2_MASK1_01 0
#define MW_CAN2_ID2_01 0
#define MW_CAN2_MASK2_01 0
#define MW_CAN2_ID3_01 0
#define MW_CAN2_ID4_01 0
#define MW_CAN2_ENABLEFILTERBANK02 0
#define MW_CAN2_SCALE02 0
#define MW_CAN2_MODE02 0
#define MW_CAN2_FIFOASSIGNMENT02 0
#define MW_CAN2_IDTYPE02 0
#define MW_CAN2_ID1_02 0
#define MW_CAN2_MASK1_02 0
#define MW_CAN2_ID2_02 0
#define MW_CAN2_MASK2_02 0
#define MW_CAN2_ID3_02 0
#define MW_CAN2_ID4_02 0
#define MW_CAN2_ENABLEFILTERBANK03 0
#define MW_CAN2_SCALE03 0
#define MW_CAN2_MODE03 0
#define MW_CAN2_FIFOASSIGNMENT03 0
#define MW_CAN2_IDTYPE03 0
#define MW_CAN2_ID1_03 0
#define MW_CAN2_MASK1_03 0
#define MW_CAN2_ID2_03 0
#define MW_CAN2_MASK2_03 0
#define MW_CAN2_ID3_03 0
#define MW_CAN2_ID4_03 0
#define MW_CAN2_ENABLEFILTERBANK04 0
#define MW_CAN2_SCALE04 0
#define MW_CAN2_MODE04 0
#define MW_CAN2_FIFOASSIGNMENT04 0
#define MW_CAN2_IDTYPE04 0
#define MW_CAN2_ID1_04 0
#define MW_CAN2_MASK1_04 0
#define MW_CAN2_ID2_04 0
#define MW_CAN2_MASK2_04 0
#define MW_CAN2_ID3_04 0
#define MW_CAN2_ID4_04 0
#define MW_CAN2_ENABLEFILTERBANK05 0
#define MW_CAN2_SCALE05 0
#define MW_CAN2_MODE05 0
#define MW_CAN2_FIFOASSIGNMENT05 0
#define MW_CAN2_IDTYPE05 0
#define MW_CAN2_ID1_05 0
#define MW_CAN2_MASK1_05 0
#define MW_CAN2_ID2_05 0
#define MW_CAN2_MASK2_05 0
#define MW_CAN2_ID3_05 0
#define MW_CAN2_ID4_05 0
#define MW_CAN2_ENABLEFILTERBANK06 0
#define MW_CAN2_SCALE06 0
#define MW_CAN2_MODE06 0
#define MW_CAN2_FIFOASSIGNMENT06 0
#define MW_CAN2_IDTYPE06 0
#define MW_CAN2_ID1_06 0
#define MW_CAN2_MASK1_06 0
#define MW_CAN2_ID2_06 0
#define MW_CAN2_MASK2_06 0
#define MW_CAN2_ID3_06 0
#define MW_CAN2_ID4_06 0
#define MW_CAN2_ENABLEFILTERBANK07 0
#define MW_CAN2_SCALE07 0
#define MW_CAN2_MODE07 0
#define MW_CAN2_FIFOASSIGNMENT07 0
#define MW_CAN2_IDTYPE07 0
#define MW_CAN2_ID1_07 0
#define MW_CAN2_MASK1_07 0
#define MW_CAN2_ID2_07 0
#define MW_CAN2_MASK2_07 0
#define MW_CAN2_ID3_07 0
#define MW_CAN2_ID4_07 0
#define MW_CAN2_ENABLEFILTERBANK08 0
#define MW_CAN2_SCALE08 0
#define MW_CAN2_MODE08 0
#define MW_CAN2_FIFOASSIGNMENT08 0
#define MW_CAN2_IDTYPE08 0
#define MW_CAN2_ID1_08 0
#define MW_CAN2_MASK1_08 0
#define MW_CAN2_ID2_08 0
#define MW_CAN2_MASK2_08 0
#define MW_CAN2_ID3_08 0
#define MW_CAN2_ID4_08 0
#define MW_CAN2_ENABLEFILTERBANK09 0
#define MW_CAN2_SCALE09 0
#define MW_CAN2_MODE09 0
#define MW_CAN2_FIFOASSIGNMENT09 0
#define MW_CAN2_IDTYPE09 0
#define MW_CAN2_ID1_09 0
#define MW_CAN2_MASK1_09 0
#define MW_CAN2_ID2_09 0
#define MW_CAN2_MASK2_09 0
#define MW_CAN2_ID3_09 0
#define MW_CAN2_ID4_09 0
#define MW_CAN2_ENABLEFILTERBANK10 0
#define MW_CAN2_SCALE10 0
#define MW_CAN2_MODE10 0
#define MW_CAN2_FIFOASSIGNMENT10 0
#define MW_CAN2_IDTYPE10 0
#define MW_CAN2_ID1_10 0
#define MW_CAN2_MASK1_10 0
#define MW_CAN2_ID2_10 0
#define MW_CAN2_MASK2_10 0
#define MW_CAN2_ID3_10 0
#define MW_CAN2_ID4_10 0
#define MW_CAN2_ENABLEFILTERBANK11 0
#define MW_CAN2_SCALE11 0
#define MW_CAN2_MODE11 0
#define MW_CAN2_FIFOASSIGNMENT11 0
#define MW_CAN2_IDTYPE11 0
#define MW_CAN2_ID1_11 0
#define MW_CAN2_MASK1_11 0
#define MW_CAN2_ID2_11 0
#define MW_CAN2_MASK2_11 0
#define MW_CAN2_ID3_11 0
#define MW_CAN2_ID4_11 0
#define MW_CAN2_ENABLEFILTERBANK12 0
#define MW_CAN2_SCALE12 0
#define MW_CAN2_MODE12 0
#define MW_CAN2_FIFOASSIGNMENT12 0
#define MW_CAN2_IDTYPE12 0
#define MW_CAN2_ID1_12 0
#define MW_CAN2_MASK1_12 0
#define MW_CAN2_ID2_12 0
#define MW_CAN2_MASK2_12 0
#define MW_CAN2_ID3_12 0
#define MW_CAN2_ID4_12 0
#define MW_CAN2_ENABLEFILTERBANK13 0
#define MW_CAN2_SCALE13 0
#define MW_CAN2_MODE13 0
#define MW_CAN2_FIFOASSIGNMENT13 0
#define MW_CAN2_IDTYPE13 0
#define MW_CAN2_ID1_13 0
#define MW_CAN2_MASK1_13 0
#define MW_CAN2_ID2_13 0
#define MW_CAN2_MASK2_13 0
#define MW_CAN2_ID3_13 0
#define MW_CAN2_ID4_13 0
#define MW_CAN3_BAUDRATE 1000000
#define MW_CAN3_CONFIGUREINTENRX 0
#define MW_CAN3_CONFIGUREINTFIFO0RX 0
#define MW_CAN3_ENABLEFIFO0MSGPENDINGINTR 0
#define MW_CAN3_ENABLEFIFO0FULLINTR 0
#define MW_CAN3_ENABLEFIFO0OVRINTR 0
#define MW_CAN3_CONFIGUREINTFIFO1RX 0
#define MW_CAN3_ENABLEFIFO1MSGPENDINGINTR 0
#define MW_CAN3_ENABLEFIFO1FULLINTR 0
#define MW_CAN3_ENABLEFIFO1OVRINTR 0
#define MW_CAN3_CONFIGUREINTENTX 0
#define MW_CAN3_ENABLETXMAILBOXEMPTYINTR 0
#define MW_CAN3_CONFIGUREINTENOTHER 0
#define MW_CAN3_ENABLEERRWARNINTR 0
#define MW_CAN3_ENABLEERRPASSIVEINTR 0
#define MW_CAN3_ENABLEBUSOFFINTR 0
#define MW_CAN3_ENABLELASTERRCODEINTR 0
#define MW_CAN3_ENABLEWAKEUPINTR 0
#define MW_CAN3_ENABLESLEEPACKINTR 0
#define MW_CAN3_ACCEPTALLMESSAGES 1
#define MW_CAN3_FILTERBANKNUMBER 0
#define MW_CAN3_ENABLEFILTERBANK00 0
#define MW_CAN3_SCALE00 0
#define MW_CAN3_MODE00 0
#define MW_CAN3_FIFOASSIGNMENT00 0
#define MW_CAN3_IDTYPE00 0
#define MW_CAN3_ID1_00 0
#define MW_CAN3_MASK1_00 0
#define MW_CAN3_ID2_00 0
#define MW_CAN3_MASK2_00 0
#define MW_CAN3_ID3_00 0
#define MW_CAN3_ID4_00 0
#define MW_CAN3_ENABLEFILTERBANK01 0
#define MW_CAN3_SCALE01 0
#define MW_CAN3_MODE01 0
#define MW_CAN3_FIFOASSIGNMENT01 0
#define MW_CAN3_IDTYPE01 0
#define MW_CAN3_ID1_01 0
#define MW_CAN3_MASK1_01 0
#define MW_CAN3_ID2_01 0
#define MW_CAN3_MASK2_01 0
#define MW_CAN3_ID3_01 0
#define MW_CAN3_ID4_01 0
#define MW_CAN3_ENABLEFILTERBANK02 0
#define MW_CAN3_SCALE02 0
#define MW_CAN3_MODE02 0
#define MW_CAN3_FIFOASSIGNMENT02 0
#define MW_CAN3_IDTYPE02 0
#define MW_CAN3_ID1_02 0
#define MW_CAN3_MASK1_02 0
#define MW_CAN3_ID2_02 0
#define MW_CAN3_MASK2_02 0
#define MW_CAN3_ID3_02 0
#define MW_CAN3_ID4_02 0
#define MW_CAN3_ENABLEFILTERBANK03 0
#define MW_CAN3_SCALE03 0
#define MW_CAN3_MODE03 0
#define MW_CAN3_FIFOASSIGNMENT03 0
#define MW_CAN3_IDTYPE03 0
#define MW_CAN3_ID1_03 0
#define MW_CAN3_MASK1_03 0
#define MW_CAN3_ID2_03 0
#define MW_CAN3_MASK2_03 0
#define MW_CAN3_ID3_03 0
#define MW_CAN3_ID4_03 0
#define MW_CAN3_ENABLEFILTERBANK04 0
#define MW_CAN3_SCALE04 0
#define MW_CAN3_MODE04 0
#define MW_CAN3_FIFOASSIGNMENT04 0
#define MW_CAN3_IDTYPE04 0
#define MW_CAN3_ID1_04 0
#define MW_CAN3_MASK1_04 0
#define MW_CAN3_ID2_04 0
#define MW_CAN3_MASK2_04 0
#define MW_CAN3_ID3_04 0
#define MW_CAN3_ID4_04 0
#define MW_CAN3_ENABLEFILTERBANK05 0
#define MW_CAN3_SCALE05 0
#define MW_CAN3_MODE05 0
#define MW_CAN3_FIFOASSIGNMENT05 0
#define MW_CAN3_IDTYPE05 0
#define MW_CAN3_ID1_05 0
#define MW_CAN3_MASK1_05 0
#define MW_CAN3_ID2_05 0
#define MW_CAN3_MASK2_05 0
#define MW_CAN3_ID3_05 0
#define MW_CAN3_ID4_05 0
#define MW_CAN3_ENABLEFILTERBANK06 0
#define MW_CAN3_SCALE06 0
#define MW_CAN3_MODE06 0
#define MW_CAN3_FIFOASSIGNMENT06 0
#define MW_CAN3_IDTYPE06 0
#define MW_CAN3_ID1_06 0
#define MW_CAN3_MASK1_06 0
#define MW_CAN3_ID2_06 0
#define MW_CAN3_MASK2_06 0
#define MW_CAN3_ID3_06 0
#define MW_CAN3_ID4_06 0
#define MW_CAN3_ENABLEFILTERBANK07 0
#define MW_CAN3_SCALE07 0
#define MW_CAN3_MODE07 0
#define MW_CAN3_FIFOASSIGNMENT07 0
#define MW_CAN3_IDTYPE07 0
#define MW_CAN3_ID1_07 0
#define MW_CAN3_MASK1_07 0
#define MW_CAN3_ID2_07 0
#define MW_CAN3_MASK2_07 0
#define MW_CAN3_ID3_07 0
#define MW_CAN3_ID4_07 0
#define MW_CAN3_ENABLEFILTERBANK08 0
#define MW_CAN3_SCALE08 0
#define MW_CAN3_MODE08 0
#define MW_CAN3_FIFOASSIGNMENT08 0
#define MW_CAN3_IDTYPE08 0
#define MW_CAN3_ID1_08 0
#define MW_CAN3_MASK1_08 0
#define MW_CAN3_ID2_08 0
#define MW_CAN3_MASK2_08 0
#define MW_CAN3_ID3_08 0
#define MW_CAN3_ID4_08 0
#define MW_CAN3_ENABLEFILTERBANK09 0
#define MW_CAN3_SCALE09 0
#define MW_CAN3_MODE09 0
#define MW_CAN3_FIFOASSIGNMENT09 0
#define MW_CAN3_IDTYPE09 0
#define MW_CAN3_ID1_09 0
#define MW_CAN3_MASK1_09 0
#define MW_CAN3_ID2_09 0
#define MW_CAN3_MASK2_09 0
#define MW_CAN3_ID3_09 0
#define MW_CAN3_ID4_09 0
#define MW_CAN3_ENABLEFILTERBANK10 0
#define MW_CAN3_SCALE10 0
#define MW_CAN3_MODE10 0
#define MW_CAN3_FIFOASSIGNMENT10 0
#define MW_CAN3_IDTYPE10 0
#define MW_CAN3_ID1_10 0
#define MW_CAN3_MASK1_10 0
#define MW_CAN3_ID2_10 0
#define MW_CAN3_MASK2_10 0
#define MW_CAN3_ID3_10 0
#define MW_CAN3_ID4_10 0
#define MW_CAN3_ENABLEFILTERBANK11 0
#define MW_CAN3_SCALE11 0
#define MW_CAN3_MODE11 0
#define MW_CAN3_FIFOASSIGNMENT11 0
#define MW_CAN3_IDTYPE11 0
#define MW_CAN3_ID1_11 0
#define MW_CAN3_MASK1_11 0
#define MW_CAN3_ID2_11 0
#define MW_CAN3_MASK2_11 0
#define MW_CAN3_ID3_11 0
#define MW_CAN3_ID4_11 0
#define MW_CAN3_ENABLEFILTERBANK12 0
#define MW_CAN3_SCALE12 0
#define MW_CAN3_MODE12 0
#define MW_CAN3_FIFOASSIGNMENT12 0
#define MW_CAN3_IDTYPE12 0
#define MW_CAN3_ID1_12 0
#define MW_CAN3_MASK1_12 0
#define MW_CAN3_ID2_12 0
#define MW_CAN3_MASK2_12 0
#define MW_CAN3_ID3_12 0
#define MW_CAN3_ID4_12 0
#define MW_CAN3_ENABLEFILTERBANK13 0
#define MW_CAN3_SCALE13 0
#define MW_CAN3_MODE13 0
#define MW_CAN3_FIFOASSIGNMENT13 0
#define MW_CAN3_IDTYPE13 0
#define MW_CAN3_ID1_13 0
#define MW_CAN3_MASK1_13 0
#define MW_CAN3_ID2_13 0
#define MW_CAN3_MASK2_13 0
#define MW_CAN3_ID3_13 0
#define MW_CAN3_ID4_13 0
#define MW_PIL_INTERFACE 0
#define MW_I2S_I2SPDMFILTERCUBEMXCONFIGUREMODULE 0
#define MW_I2S_I2S1PDMCONFIGUREMODULE 0
#define MW_I2S_I2S1PDM_CHANNELS_1 1
#define MW_I2S_I2S1PDM_CHANNELS_2 2
#define MW_I2S_I2S2PDMCONFIGUREMODULE 0
#define MW_I2S_I2S2PDM_CHANNELS_1 1
#define MW_I2S_I2S2PDM_CHANNELS_2 2
#define MW_I2S_I2S3PDMCONFIGUREMODULE 0
#define MW_I2S_I2S3PDM_CHANNELS_1 1
#define MW_I2S_I2S3PDM_CHANNELS_2 2
#define MW_DATAVERSION 2016.02

#endif /* __MW_TARGET_HARDWARE_RESOURCES_H__ */

#endif

#endif
