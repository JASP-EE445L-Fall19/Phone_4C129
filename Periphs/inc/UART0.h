//  UART0.h
//      Header for UART drivers for Lab 11 in EE 445L
//      General Purpose UART
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



#ifndef __UART0_H
#define __UART0_H



#include <stdint.h>



/**     UART0_Init Function
 *  @brief      Initializes UART0. Used to retarget printf and scanf
 *  @details    Pins Used:
 *                  PA0 - UART0 Rx
 *                  PA1 - UART0 Tx
 *  @param[in]  baudrate    Baudrate for UART0 
 * 
 */
void UART0_Init(int baudrate);



#endif

