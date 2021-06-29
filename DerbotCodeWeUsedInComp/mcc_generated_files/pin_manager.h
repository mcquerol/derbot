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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC18F25K22
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.30 and above
        MPLAB 	          :  MPLAB X 5.40	
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

// get/set RIGHT_MTR_EN aliases
#define RIGHT_MTR_EN_TRIS                 TRISAbits.TRISA2
#define RIGHT_MTR_EN_LAT                  LATAbits.LATA2
#define RIGHT_MTR_EN_PORT                 PORTAbits.RA2
#define RIGHT_MTR_EN_ANS                  ANSELAbits.ANSA2
#define RIGHT_MTR_EN_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RIGHT_MTR_EN_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RIGHT_MTR_EN_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RIGHT_MTR_EN_GetValue()           PORTAbits.RA2
#define RIGHT_MTR_EN_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RIGHT_MTR_EN_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RIGHT_MTR_EN_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define RIGHT_MTR_EN_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LDR_ARM aliases
#define LDR_ARM_TRIS                 TRISAbits.TRISA3
#define LDR_ARM_LAT                  LATAbits.LATA3
#define LDR_ARM_PORT                 PORTAbits.RA3
#define LDR_ARM_ANS                  ANSELAbits.ANSA3
#define LDR_ARM_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LDR_ARM_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LDR_ARM_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LDR_ARM_GetValue()           PORTAbits.RA3
#define LDR_ARM_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LDR_ARM_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LDR_ARM_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define LDR_ARM_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set LEFT_MTR_EN aliases
#define LEFT_MTR_EN_TRIS                 TRISAbits.TRISA5
#define LEFT_MTR_EN_LAT                  LATAbits.LATA5
#define LEFT_MTR_EN_PORT                 PORTAbits.RA5
#define LEFT_MTR_EN_ANS                  ANSELAbits.ANSA5
#define LEFT_MTR_EN_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LEFT_MTR_EN_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LEFT_MTR_EN_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LEFT_MTR_EN_GetValue()           PORTAbits.RA5
#define LEFT_MTR_EN_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LEFT_MTR_EN_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LEFT_MTR_EN_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define LEFT_MTR_EN_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set OPTO_FAR_RIGHT aliases
#define OPTO_FAR_RIGHT_TRIS                 TRISBbits.TRISB0
#define OPTO_FAR_RIGHT_LAT                  LATBbits.LATB0
#define OPTO_FAR_RIGHT_PORT                 PORTBbits.RB0
#define OPTO_FAR_RIGHT_WPU                  WPUBbits.WPUB0
#define OPTO_FAR_RIGHT_ANS                  ANSELBbits.ANSB0
#define OPTO_FAR_RIGHT_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define OPTO_FAR_RIGHT_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define OPTO_FAR_RIGHT_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define OPTO_FAR_RIGHT_GetValue()           PORTBbits.RB0
#define OPTO_FAR_RIGHT_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define OPTO_FAR_RIGHT_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define OPTO_FAR_RIGHT_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define OPTO_FAR_RIGHT_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define OPTO_FAR_RIGHT_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define OPTO_FAR_RIGHT_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set OPTO_RIGHT aliases
#define OPTO_RIGHT_TRIS                 TRISBbits.TRISB1
#define OPTO_RIGHT_LAT                  LATBbits.LATB1
#define OPTO_RIGHT_PORT                 PORTBbits.RB1
#define OPTO_RIGHT_WPU                  WPUBbits.WPUB1
#define OPTO_RIGHT_ANS                  ANSELBbits.ANSB1
#define OPTO_RIGHT_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define OPTO_RIGHT_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define OPTO_RIGHT_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define OPTO_RIGHT_GetValue()           PORTBbits.RB1
#define OPTO_RIGHT_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define OPTO_RIGHT_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define OPTO_RIGHT_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define OPTO_RIGHT_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define OPTO_RIGHT_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define OPTO_RIGHT_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set OPTO_LEFT aliases
#define OPTO_LEFT_TRIS                 TRISBbits.TRISB2
#define OPTO_LEFT_LAT                  LATBbits.LATB2
#define OPTO_LEFT_PORT                 PORTBbits.RB2
#define OPTO_LEFT_WPU                  WPUBbits.WPUB2
#define OPTO_LEFT_ANS                  ANSELBbits.ANSB2
#define OPTO_LEFT_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define OPTO_LEFT_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define OPTO_LEFT_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define OPTO_LEFT_GetValue()           PORTBbits.RB2
#define OPTO_LEFT_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define OPTO_LEFT_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define OPTO_LEFT_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define OPTO_LEFT_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define OPTO_LEFT_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define OPTO_LEFT_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set SERVO_PWM aliases
#define SERVO_PWM_TRIS                 TRISBbits.TRISB3
#define SERVO_PWM_LAT                  LATBbits.LATB3
#define SERVO_PWM_PORT                 PORTBbits.RB3
#define SERVO_PWM_WPU                  WPUBbits.WPUB3
#define SERVO_PWM_ANS                  ANSELBbits.ANSB3
#define SERVO_PWM_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define SERVO_PWM_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define SERVO_PWM_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define SERVO_PWM_GetValue()           PORTBbits.RB3
#define SERVO_PWM_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define SERVO_PWM_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define SERVO_PWM_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define SERVO_PWM_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define SERVO_PWM_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define SERVO_PWM_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set BUMPER_LEFT aliases
#define BUMPER_LEFT_TRIS                 TRISBbits.TRISB4
#define BUMPER_LEFT_LAT                  LATBbits.LATB4
#define BUMPER_LEFT_PORT                 PORTBbits.RB4
#define BUMPER_LEFT_WPU                  WPUBbits.WPUB4
#define BUMPER_LEFT_ANS                  ANSELBbits.ANSB4
#define BUMPER_LEFT_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define BUMPER_LEFT_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define BUMPER_LEFT_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define BUMPER_LEFT_GetValue()           PORTBbits.RB4
#define BUMPER_LEFT_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define BUMPER_LEFT_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define BUMPER_LEFT_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define BUMPER_LEFT_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define BUMPER_LEFT_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define BUMPER_LEFT_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set BUMPER_RIGHT aliases
#define BUMPER_RIGHT_TRIS                 TRISBbits.TRISB5
#define BUMPER_RIGHT_LAT                  LATBbits.LATB5
#define BUMPER_RIGHT_PORT                 PORTBbits.RB5
#define BUMPER_RIGHT_WPU                  WPUBbits.WPUB5
#define BUMPER_RIGHT_ANS                  ANSELBbits.ANSB5
#define BUMPER_RIGHT_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define BUMPER_RIGHT_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define BUMPER_RIGHT_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define BUMPER_RIGHT_GetValue()           PORTBbits.RB5
#define BUMPER_RIGHT_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define BUMPER_RIGHT_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define BUMPER_RIGHT_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define BUMPER_RIGHT_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define BUMPER_RIGHT_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define BUMPER_RIGHT_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set LED_LEFT aliases
#define LED_LEFT_TRIS                 TRISCbits.TRISC5
#define LED_LEFT_LAT                  LATCbits.LATC5
#define LED_LEFT_PORT                 PORTCbits.RC5
#define LED_LEFT_ANS                  ANSELCbits.ANSC5
#define LED_LEFT_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_LEFT_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_LEFT_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_LEFT_GetValue()           PORTCbits.RC5
#define LED_LEFT_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_LEFT_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_LEFT_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define LED_LEFT_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set LED_RIGHT aliases
#define LED_RIGHT_TRIS                 TRISCbits.TRISC6
#define LED_RIGHT_LAT                  LATCbits.LATC6
#define LED_RIGHT_PORT                 PORTCbits.RC6
#define LED_RIGHT_ANS                  ANSELCbits.ANSC6
#define LED_RIGHT_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LED_RIGHT_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LED_RIGHT_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LED_RIGHT_GetValue()           PORTCbits.RC6
#define LED_RIGHT_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LED_RIGHT_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LED_RIGHT_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define LED_RIGHT_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

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