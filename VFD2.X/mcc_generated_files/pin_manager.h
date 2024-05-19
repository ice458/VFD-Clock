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
        Device            :  PIC18F26Q84
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

// get/set Seg_C aliases
#define Seg_C_TRIS                 TRISAbits.TRISA0
#define Seg_C_LAT                  LATAbits.LATA0
#define Seg_C_PORT                 PORTAbits.RA0
#define Seg_C_WPU                  WPUAbits.WPUA0
#define Seg_C_OD                   ODCONAbits.ODCA0
#define Seg_C_ANS                  ANSELAbits.ANSELA0
#define Seg_C_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define Seg_C_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define Seg_C_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define Seg_C_GetValue()           PORTAbits.RA0
#define Seg_C_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define Seg_C_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define Seg_C_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define Seg_C_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define Seg_C_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define Seg_C_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define Seg_C_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define Seg_C_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set Seg_D aliases
#define Seg_D_TRIS                 TRISAbits.TRISA1
#define Seg_D_LAT                  LATAbits.LATA1
#define Seg_D_PORT                 PORTAbits.RA1
#define Seg_D_WPU                  WPUAbits.WPUA1
#define Seg_D_OD                   ODCONAbits.ODCA1
#define Seg_D_ANS                  ANSELAbits.ANSELA1
#define Seg_D_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define Seg_D_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define Seg_D_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define Seg_D_GetValue()           PORTAbits.RA1
#define Seg_D_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define Seg_D_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define Seg_D_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define Seg_D_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define Seg_D_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define Seg_D_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define Seg_D_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define Seg_D_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set Seg_E aliases
#define Seg_E_TRIS                 TRISAbits.TRISA2
#define Seg_E_LAT                  LATAbits.LATA2
#define Seg_E_PORT                 PORTAbits.RA2
#define Seg_E_WPU                  WPUAbits.WPUA2
#define Seg_E_OD                   ODCONAbits.ODCA2
#define Seg_E_ANS                  ANSELAbits.ANSELA2
#define Seg_E_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define Seg_E_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define Seg_E_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define Seg_E_GetValue()           PORTAbits.RA2
#define Seg_E_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define Seg_E_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define Seg_E_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define Seg_E_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define Seg_E_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define Seg_E_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define Seg_E_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define Seg_E_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set Seg_F aliases
#define Seg_F_TRIS                 TRISAbits.TRISA3
#define Seg_F_LAT                  LATAbits.LATA3
#define Seg_F_PORT                 PORTAbits.RA3
#define Seg_F_WPU                  WPUAbits.WPUA3
#define Seg_F_OD                   ODCONAbits.ODCA3
#define Seg_F_ANS                  ANSELAbits.ANSELA3
#define Seg_F_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define Seg_F_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define Seg_F_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define Seg_F_GetValue()           PORTAbits.RA3
#define Seg_F_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define Seg_F_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define Seg_F_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define Seg_F_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define Seg_F_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define Seg_F_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define Seg_F_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define Seg_F_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set Seg_G aliases
#define Seg_G_TRIS                 TRISAbits.TRISA4
#define Seg_G_LAT                  LATAbits.LATA4
#define Seg_G_PORT                 PORTAbits.RA4
#define Seg_G_WPU                  WPUAbits.WPUA4
#define Seg_G_OD                   ODCONAbits.ODCA4
#define Seg_G_ANS                  ANSELAbits.ANSELA4
#define Seg_G_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define Seg_G_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define Seg_G_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define Seg_G_GetValue()           PORTAbits.RA4
#define Seg_G_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define Seg_G_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define Seg_G_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define Seg_G_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define Seg_G_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define Seg_G_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define Seg_G_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define Seg_G_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set Seg_DP aliases
#define Seg_DP_TRIS                 TRISAbits.TRISA5
#define Seg_DP_LAT                  LATAbits.LATA5
#define Seg_DP_PORT                 PORTAbits.RA5
#define Seg_DP_WPU                  WPUAbits.WPUA5
#define Seg_DP_OD                   ODCONAbits.ODCA5
#define Seg_DP_ANS                  ANSELAbits.ANSELA5
#define Seg_DP_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define Seg_DP_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define Seg_DP_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define Seg_DP_GetValue()           PORTAbits.RA5
#define Seg_DP_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define Seg_DP_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define Seg_DP_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define Seg_DP_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define Seg_DP_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define Seg_DP_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define Seg_DP_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define Seg_DP_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set Seg_Bar aliases
#define Seg_Bar_TRIS                 TRISAbits.TRISA6
#define Seg_Bar_LAT                  LATAbits.LATA6
#define Seg_Bar_PORT                 PORTAbits.RA6
#define Seg_Bar_WPU                  WPUAbits.WPUA6
#define Seg_Bar_OD                   ODCONAbits.ODCA6
#define Seg_Bar_ANS                  ANSELAbits.ANSELA6
#define Seg_Bar_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define Seg_Bar_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define Seg_Bar_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define Seg_Bar_GetValue()           PORTAbits.RA6
#define Seg_Bar_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define Seg_Bar_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define Seg_Bar_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define Seg_Bar_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define Seg_Bar_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define Seg_Bar_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define Seg_Bar_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define Seg_Bar_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set BTN_Hour aliases
#define BTN_Hour_TRIS                 TRISAbits.TRISA7
#define BTN_Hour_LAT                  LATAbits.LATA7
#define BTN_Hour_PORT                 PORTAbits.RA7
#define BTN_Hour_WPU                  WPUAbits.WPUA7
#define BTN_Hour_OD                   ODCONAbits.ODCA7
#define BTN_Hour_ANS                  ANSELAbits.ANSELA7
#define BTN_Hour_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define BTN_Hour_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define BTN_Hour_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define BTN_Hour_GetValue()           PORTAbits.RA7
#define BTN_Hour_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define BTN_Hour_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define BTN_Hour_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define BTN_Hour_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define BTN_Hour_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define BTN_Hour_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define BTN_Hour_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define BTN_Hour_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set Seg_A aliases
#define Seg_A_TRIS                 TRISBbits.TRISB0
#define Seg_A_LAT                  LATBbits.LATB0
#define Seg_A_PORT                 PORTBbits.RB0
#define Seg_A_WPU                  WPUBbits.WPUB0
#define Seg_A_OD                   ODCONBbits.ODCB0
#define Seg_A_ANS                  ANSELBbits.ANSELB0
#define Seg_A_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Seg_A_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Seg_A_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Seg_A_GetValue()           PORTBbits.RB0
#define Seg_A_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Seg_A_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Seg_A_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define Seg_A_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define Seg_A_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define Seg_A_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define Seg_A_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define Seg_A_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set Seg_B aliases
#define Seg_B_TRIS                 TRISBbits.TRISB1
#define Seg_B_LAT                  LATBbits.LATB1
#define Seg_B_PORT                 PORTBbits.RB1
#define Seg_B_WPU                  WPUBbits.WPUB1
#define Seg_B_OD                   ODCONBbits.ODCB1
#define Seg_B_ANS                  ANSELBbits.ANSELB1
#define Seg_B_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define Seg_B_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define Seg_B_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define Seg_B_GetValue()           PORTBbits.RB1
#define Seg_B_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define Seg_B_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define Seg_B_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define Seg_B_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define Seg_B_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define Seg_B_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define Seg_B_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define Seg_B_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set Col_5 aliases
#define Col_5_TRIS                 TRISBbits.TRISB2
#define Col_5_LAT                  LATBbits.LATB2
#define Col_5_PORT                 PORTBbits.RB2
#define Col_5_WPU                  WPUBbits.WPUB2
#define Col_5_OD                   ODCONBbits.ODCB2
#define Col_5_ANS                  ANSELBbits.ANSELB2
#define Col_5_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define Col_5_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define Col_5_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define Col_5_GetValue()           PORTBbits.RB2
#define Col_5_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define Col_5_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define Col_5_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define Col_5_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define Col_5_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define Col_5_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define Col_5_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define Col_5_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set Col_4 aliases
#define Col_4_TRIS                 TRISBbits.TRISB3
#define Col_4_LAT                  LATBbits.LATB3
#define Col_4_PORT                 PORTBbits.RB3
#define Col_4_WPU                  WPUBbits.WPUB3
#define Col_4_OD                   ODCONBbits.ODCB3
#define Col_4_ANS                  ANSELBbits.ANSELB3
#define Col_4_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define Col_4_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define Col_4_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define Col_4_GetValue()           PORTBbits.RB3
#define Col_4_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define Col_4_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define Col_4_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define Col_4_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define Col_4_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define Col_4_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define Col_4_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define Col_4_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set Col_3 aliases
#define Col_3_TRIS                 TRISBbits.TRISB4
#define Col_3_LAT                  LATBbits.LATB4
#define Col_3_PORT                 PORTBbits.RB4
#define Col_3_WPU                  WPUBbits.WPUB4
#define Col_3_OD                   ODCONBbits.ODCB4
#define Col_3_ANS                  ANSELBbits.ANSELB4
#define Col_3_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define Col_3_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define Col_3_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define Col_3_GetValue()           PORTBbits.RB4
#define Col_3_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define Col_3_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define Col_3_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define Col_3_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define Col_3_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define Col_3_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define Col_3_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define Col_3_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set Col_2 aliases
#define Col_2_TRIS                 TRISBbits.TRISB5
#define Col_2_LAT                  LATBbits.LATB5
#define Col_2_PORT                 PORTBbits.RB5
#define Col_2_WPU                  WPUBbits.WPUB5
#define Col_2_OD                   ODCONBbits.ODCB5
#define Col_2_ANS                  ANSELBbits.ANSELB5
#define Col_2_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define Col_2_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define Col_2_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define Col_2_GetValue()           PORTBbits.RB5
#define Col_2_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define Col_2_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define Col_2_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define Col_2_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define Col_2_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define Col_2_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define Col_2_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define Col_2_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set Col_1 aliases
#define Col_1_TRIS                 TRISBbits.TRISB6
#define Col_1_LAT                  LATBbits.LATB6
#define Col_1_PORT                 PORTBbits.RB6
#define Col_1_WPU                  WPUBbits.WPUB6
#define Col_1_OD                   ODCONBbits.ODCB6
#define Col_1_ANS                  ANSELBbits.ANSELB6
#define Col_1_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define Col_1_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define Col_1_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define Col_1_GetValue()           PORTBbits.RB6
#define Col_1_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define Col_1_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define Col_1_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define Col_1_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define Col_1_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define Col_1_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define Col_1_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define Col_1_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set Col_0 aliases
#define Col_0_TRIS                 TRISBbits.TRISB7
#define Col_0_LAT                  LATBbits.LATB7
#define Col_0_PORT                 PORTBbits.RB7
#define Col_0_WPU                  WPUBbits.WPUB7
#define Col_0_OD                   ODCONBbits.ODCB7
#define Col_0_ANS                  ANSELBbits.ANSELB7
#define Col_0_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define Col_0_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define Col_0_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define Col_0_GetValue()           PORTBbits.RB7
#define Col_0_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define Col_0_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define Col_0_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define Col_0_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define Col_0_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define Col_0_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define Col_0_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define Col_0_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set BTN_Minute aliases
#define BTN_Minute_TRIS                 TRISCbits.TRISC0
#define BTN_Minute_LAT                  LATCbits.LATC0
#define BTN_Minute_PORT                 PORTCbits.RC0
#define BTN_Minute_WPU                  WPUCbits.WPUC0
#define BTN_Minute_OD                   ODCONCbits.ODCC0
#define BTN_Minute_ANS                  ANSELCbits.ANSELC0
#define BTN_Minute_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define BTN_Minute_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define BTN_Minute_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define BTN_Minute_GetValue()           PORTCbits.RC0
#define BTN_Minute_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define BTN_Minute_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define BTN_Minute_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define BTN_Minute_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define BTN_Minute_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define BTN_Minute_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define BTN_Minute_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define BTN_Minute_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set BTN_Reset aliases
#define BTN_Reset_TRIS                 TRISCbits.TRISC1
#define BTN_Reset_LAT                  LATCbits.LATC1
#define BTN_Reset_PORT                 PORTCbits.RC1
#define BTN_Reset_WPU                  WPUCbits.WPUC1
#define BTN_Reset_OD                   ODCONCbits.ODCC1
#define BTN_Reset_ANS                  ANSELCbits.ANSELC1
#define BTN_Reset_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define BTN_Reset_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define BTN_Reset_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define BTN_Reset_GetValue()           PORTCbits.RC1
#define BTN_Reset_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define BTN_Reset_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define BTN_Reset_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define BTN_Reset_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define BTN_Reset_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define BTN_Reset_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define BTN_Reset_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define BTN_Reset_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set SW_Timer aliases
#define SW_Timer_TRIS                 TRISCbits.TRISC2
#define SW_Timer_LAT                  LATCbits.LATC2
#define SW_Timer_PORT                 PORTCbits.RC2
#define SW_Timer_WPU                  WPUCbits.WPUC2
#define SW_Timer_OD                   ODCONCbits.ODCC2
#define SW_Timer_ANS                  ANSELCbits.ANSELC2
#define SW_Timer_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define SW_Timer_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define SW_Timer_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define SW_Timer_GetValue()           PORTCbits.RC2
#define SW_Timer_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define SW_Timer_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define SW_Timer_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define SW_Timer_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define SW_Timer_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define SW_Timer_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define SW_Timer_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define SW_Timer_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSELC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSELC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RTC_1Hz aliases
#define RTC_1Hz_TRIS                 TRISCbits.TRISC6
#define RTC_1Hz_LAT                  LATCbits.LATC6
#define RTC_1Hz_PORT                 PORTCbits.RC6
#define RTC_1Hz_WPU                  WPUCbits.WPUC6
#define RTC_1Hz_OD                   ODCONCbits.ODCC6
#define RTC_1Hz_ANS                  ANSELCbits.ANSELC6
#define RTC_1Hz_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RTC_1Hz_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RTC_1Hz_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RTC_1Hz_GetValue()           PORTCbits.RC6
#define RTC_1Hz_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RTC_1Hz_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RTC_1Hz_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define RTC_1Hz_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define RTC_1Hz_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define RTC_1Hz_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define RTC_1Hz_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define RTC_1Hz_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set SW_Dimmer aliases
#define SW_Dimmer_TRIS                 TRISCbits.TRISC7
#define SW_Dimmer_LAT                  LATCbits.LATC7
#define SW_Dimmer_PORT                 PORTCbits.RC7
#define SW_Dimmer_WPU                  WPUCbits.WPUC7
#define SW_Dimmer_OD                   ODCONCbits.ODCC7
#define SW_Dimmer_ANS                  ANSELCbits.ANSELC7
#define SW_Dimmer_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define SW_Dimmer_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define SW_Dimmer_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define SW_Dimmer_GetValue()           PORTCbits.RC7
#define SW_Dimmer_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define SW_Dimmer_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define SW_Dimmer_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define SW_Dimmer_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define SW_Dimmer_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define SW_Dimmer_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define SW_Dimmer_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define SW_Dimmer_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

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


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF6 pin functionality
 * @Example
    IOCCF6_ISR();
 */
void IOCCF6_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF6 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF6 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF6_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF6_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF6 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF6_SetInterruptHandler() method.
    This handler is called every time the IOCCF6 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF6_SetInterruptHandler(IOCCF6_InterruptHandler);

*/
extern void (*IOCCF6_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF6 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF6_SetInterruptHandler() method.
    This handler is called every time the IOCCF6 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF6_SetInterruptHandler(IOCCF6_DefaultInterruptHandler);

*/
void IOCCF6_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/