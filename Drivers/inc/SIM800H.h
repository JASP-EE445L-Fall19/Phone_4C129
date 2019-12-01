//  SIM800H.h
//      Header for GSM Module drivers for Lab 11 in EE 445L
//      GSM Module uses the SIM800H chip from SimCom
//
//  Hardware:
//      
//
//  Created: 11/04/2019 - 06:35PM
//  Last Updated: 10/22/2019 - 06:35PM
//
//  Developers:
//      Joshua Iwe
//      Paulina Vasquez-Pena
//      Arjun Ramesh
//      Sihyung Woo
//


#include <stdint.h>
#include <stdio.h>
#include "UART2.h"
#include "SysTick.h"
#include "Fifo.h"




/**     SIM800H_Init Function
 *  @brief      Initializes UART2 and GSM module
 *  @details    Pins Used:
 *                  PD0 - Rst
 *                  PD1 - PS
 *                  PD2 - Key
 *                  PD3 - RI
 *                  PD4 - UART2_Rx
 *                  PD5 - UART2_Tx
 *                  PD7 - NS
 *  @note       Might have the baudrate as the input parameter
 *                  but the module automatically tunes baudrate when
 *                  you send first commands to it.
 */
void SIM800H_Init(void);



void SIM800H_SimCardNumber(void);



void SIM800H_CheckSignalStrength(void);



void SIM800H_CheckBattery(void);



void SIM800H_SendText(char phone[], char message[]);



void SIM800H_EnableBuzzer(void);



void SIM800H_PickUpPhone(void);



void SIM800H_HangUpPhone(void);



void SIM800H_CallPhone(char number[]) ;


