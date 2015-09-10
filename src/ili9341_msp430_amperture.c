/*
 * ===========================================================================
 *
 *       Filename:  ili9341_msp430_amperture.c
 *
 *    Description:  Driver package to control a 240x320 TFT screen with an
 *                      ILI9341 interface chip.
 *
 *        Version:  0.1
 *        Created:  09/09/2015 09:43:29 PM
 *       Revision:  none
 *       Compiler:  msp430-gcc
 *
 *         Author:  W. Alex Best (mn), theamp@gmail.com
 *        Company:  Amperture Engineering
 *
 * ===========================================================================
 */

#include <msp430.h>
#include <spi.h>

/* MSP430G2553 to ILI9341 Pinmap 
 *
 *      MSP430  ||   ILI9341
 *              ||
 *       P1_6   ||  SDO(MOSI)
 *       3.3V   ||     LED
 *       P1_5   ||     SCK
 *       P1_7   ||  SDI(MISO)
 *       P1_0   ||     D/C
 *       P1_3   ||    RESET
 *       P1_4   ||     CS
 *       GND    ||     GND
 *       3.3V   ||     VCC
 */

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
