/*
 * =====================================================================================
 *
 *       Filename:  ili9341_msp430_amperture.h
 *
 *        Version:  0.1
 *        Created:  09/09/2015 11:36:11 PM
 *       Revision:  none
 *       Compiler:  msp430-gcc
 *
 *         Author:  W. Alex Best (mn), theamp@gmail.com
 *        Company:  Amperture Engineering
 *
 * =====================================================================================
 */

#ifndef ILI9341_AMP_H
#define ILI9341_AMP_H

#include <msp430.h>
#include <stdint.h>

// Port & Pin Definitions
#define ILI9341_CS_PORT P1OUT
#define ILI9341_CS_PIN  BIT4

#define ILI9341_RESET_PORT P1OUT
#define ILI9341_RESET_PIN BIT3

#define ILI9341_DC_PORT P1OUT
#define ILI9341_DC_PIN BIT0

// Data/Command Macros
#define LCD_ENABLE_DATA ILI9341_DC_PORT |= ILI9341_DC_PIN 
#define LCD_ENABLE_COMMAND ILI9341_DC_PORT &= ~ILI9341_DC_PIN 

// Chip Select Macro
#define LCD_CHIP_SELECT ILI9341_CS_PORT |= ILI9341_CS_PIN  
#define LCD_CHIP_DESELECT ILI9341_CS_PORT &= ~ILI9341_CS_PIN  

// Function Prototypes
void lcdSendCommand(uint8_t);
void lcdSendData(uint8_t);


#endif // ILI9341_AMP_H

/* The MIT License (MIT)
 *
 * Copyright (c) 2015 Amperture Engineering
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to 
 * deal in the Software without restriction, including without limitation the 
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
 * sell copies of the Software, and to permit persons to whom the Software is 
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
 * DEALINGS IN THE SOFTWARE.
 */
