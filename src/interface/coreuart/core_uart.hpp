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

const std::string  uart_0_filename  ("/dev/ttyMSM0");

class CoreUART
{
 public:
    CoreUART();
    virtual ~CoreUART();
 private:
    int _init();
 public:
    CoreUART(const std::string &_fileName);
 private:
    std::string _fileName;


};

#endif //HARDWAREVERIFICATION_COREUART_HPP
