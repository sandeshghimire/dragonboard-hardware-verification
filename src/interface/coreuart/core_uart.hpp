//
// Created by Sandesh Ghimire on 8/9/17.
//

#ifndef HARDWAREVERIFICATION_COREUART_HPP
#define HARDWAREVERIFICATION_COREUART_HPP

#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>

const std::string uart_0_filename("/dev/ttyMSM0");

enum BaudeRate : unsigned int
{
    BAUD_110 = 110,
    BAUD_150 = 150,
    BAUD_300 = 300,
    BAUD_1200 = 1200,
    BAUD_2400 = 2400,
    BAUD_4800 = 4800,
    BAUD_9600 = 9600,
    BAUD_19200 = 19200,
    BAUD_38400 = 38400,
    BAUD_57600 = 57600,
    BAUD_115200 = 115200,
    BAUD_230400 = 230400,
    BAUD_460800 = 460800,
    BAUD_921600 = 921600
};

class CoreUART
{
 public:
    CoreUART();
    virtual ~CoreUART();
    CoreUART(const std::string &_fileName);
    unsigned int get_baudeRate() const;
    void set_baudeRate(unsigned int _baudeRate);
    int open();
    int close();
    int read(void * message);
    int write(void * message);
    const std::string &get_fileName() const;
    void set_fileName(const std::string &_fileName);
 private:
    std::string _fileName;
    unsigned int _baudeRate;

};

#endif //HARDWAREVERIFICATION_COREUART_HPP
