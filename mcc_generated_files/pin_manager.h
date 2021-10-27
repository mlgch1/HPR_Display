/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F15376
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB0 procedures
#define RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RB0_GetValue()              PORTBbits.RB0
#define RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define RB0_SetPullup()             do { WPUBbits.WPUB0 = 1; } while(0)
#define RB0_ResetPullup()           do { WPUBbits.WPUB0 = 0; } while(0)
#define RB0_SetAnalogMode()         do { ANSELBbits.ANSB0 = 1; } while(0)
#define RB0_SetDigitalMode()        do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()              PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()             do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()           do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode()         do { ANSELBbits.ANSB1 = 1; } while(0)
#define RB1_SetDigitalMode()        do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()              PORTBbits.RB3
#define RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()             do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()           do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode()         do { ANSELBbits.ANSB3 = 1; } while(0)
#define RB3_SetDigitalMode()        do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set LEFT aliases
#define LEFT_TRIS                 TRISBbits.TRISB4
#define LEFT_LAT                  LATBbits.LATB4
#define LEFT_PORT                 PORTBbits.RB4
#define LEFT_WPU                  WPUBbits.WPUB4
#define LEFT_OD                   ODCONBbits.ODCB4
#define LEFT_ANS                  ANSELBbits.ANSB4
#define LEFT_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LEFT_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LEFT_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LEFT_GetValue()           PORTBbits.RB4
#define LEFT_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LEFT_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LEFT_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LEFT_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LEFT_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define LEFT_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define LEFT_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define LEFT_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RIGHT aliases
#define RIGHT_TRIS                 TRISBbits.TRISB5
#define RIGHT_LAT                  LATBbits.LATB5
#define RIGHT_PORT                 PORTBbits.RB5
#define RIGHT_WPU                  WPUBbits.WPUB5
#define RIGHT_OD                   ODCONBbits.ODCB5
#define RIGHT_ANS                  ANSELBbits.ANSB5
#define RIGHT_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RIGHT_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RIGHT_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RIGHT_GetValue()           PORTBbits.RB5
#define RIGHT_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RIGHT_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RIGHT_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define RIGHT_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define RIGHT_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define RIGHT_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define RIGHT_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define RIGHT_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set LATCH aliases
#define LATCH_TRIS                 TRISDbits.TRISD7
#define LATCH_LAT                  LATDbits.LATD7
#define LATCH_PORT                 PORTDbits.RD7
#define LATCH_WPU                  WPUDbits.WPUD7
#define LATCH_OD                   ODCONDbits.ODCD7
#define LATCH_ANS                  ANSELDbits.ANSD7
#define LATCH_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define LATCH_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define LATCH_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define LATCH_GetValue()           PORTDbits.RD7
#define LATCH_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define LATCH_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define LATCH_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define LATCH_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define LATCH_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define LATCH_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define LATCH_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define LATCH_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set LED aliases
#define LED_TRIS                 TRISEbits.TRISE0
#define LED_LAT                  LATEbits.LATE0
#define LED_PORT                 PORTEbits.RE0
#define LED_WPU                  WPUEbits.WPUE0
#define LED_OD                   ODCONEbits.ODCE0
#define LED_ANS                  ANSELEbits.ANSE0
#define LED_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define LED_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define LED_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define LED_GetValue()           PORTEbits.RE0
#define LED_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define LED_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define LED_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/