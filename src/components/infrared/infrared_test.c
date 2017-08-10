//
// Created by Sandesh Ghimire on 8/10/17.
//

#include <stdio.h>
#include <stdlib.h>
#include "eva_ir_hw_max610.h"

#define IR_MESSAGE_REQUEST_LENGTH 10
#define IR_MESSAGE_RESPONSE_LENGTH 10
#define IR_MESSAGE_STATUS_LENGTH 2

unsigned char message[IR_MESSAGE_REQUEST_LENGTH];
unsigned char response[IR_MESSAGE_RESPONSE_LENGTH];
unsigned char status[IR_MESSAGE_STATUS_LENGTH];
int main(int argc, char **argv)
{
    int length;

    if (-1 == eva_ir_open())
    {
        printf("Failed to open serial port \n" );
    }

    message[0] = 0x01;
    message[0] = 0x01;
    message[0] = 0x01;
    message[0] = 0x01;
    response[0] = 0x01;
    response[0] = 0x01;

    eva_ir_write(message, length, response);

    eva_ir_read_status(status);

    eva_ir_close();

    return 0;
}