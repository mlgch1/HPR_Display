/*
                         UART.c
 */

#include "config.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mcc_generated_files/eusart1.h"
#include "mcc_generated_files/mcc.h"


int rec_char_posn = 0;
int rec_chars_recv = 0;
int i = 0;

char temp;

char lane = 'l'; // Left Lane - Replace with switch.

void display(char input_arr[]);

bool EUSART1_is_rx_ready(void);

void UART1_Command_INT(void) {
    if (EUSART1_DataReady) {

        temp = EUSART1_Read(); // read a byte for RX

        switch (rec_char_posn) {
            case 0:
                if (temp == 'H') {
                    rec_char_posn++;
                } else {
                    rec_char_posn = 0;
                }
                break;
            case 1:
                if (temp == 'P') {
                    rec_char_posn++;
                } else {
                    rec_char_posn = 0;
                }
                break;
            case 2:
                if (temp == 'R') {
                    rec_char_posn++;
                } else {
                    rec_char_posn = 0;
                }
                break;
            case 3:
                if (temp == 'l') {
                    rec_char_posn++;
                    
                    SPI2_Open(SPI2_DEFAULT);
                } else {
                    rec_char_posn = 0;
                }
                break;
            case 4:
                rec_chars_recv++;

                switch (temp) {
                    case '0':
                        temp = 0b00111111;
                        break;

                    case '1':
                        temp = 0b00000110;
                        break;

                    case '2':
                        temp = 0b01011011;
                        break;

                    case '3':
                        temp = 0b01001111;
                        break;

                    case '4':
                        temp = 0b01100110;
                        break;

                    case '5':
                        temp = 0b01101101;
                        break;

                    case '6':
                        temp = 0b01111100;
                        break;

                    case '7':
                        temp = 0b00000111;
                        break;

                    case '8':
                        temp = 0b01111111;
                        break;

                    case '9':
                        temp = 0b01100111;
                        break;

                    case 'H':
                        temp = 0b01110110;
                        break;

                    case 'P':
                        temp = 0b01110011;
                        break;

                    case 'R':
                        temp = 0b00110001;
                        break;

                    case '-':
                        temp = 0b011000000;
                        break;
                    default:
                        temp = 0b00000000;
                        break;
                }

                SPI2_ExchangeByte(temp);

                if (rec_chars_recv == TOTAL_DIGITS) {

                    LATCH_SetLow();
                    __delay_ms(.01);
                    LATCH_SetHigh();

                    SPI2_Close();

                    LED_SetLow();
                    __delay_ms(100);
                    LED_SetHigh();

                    rec_chars_recv = 0;
                    rec_char_posn = 0;
                }
        }
    }
}
