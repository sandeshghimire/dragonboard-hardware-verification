//
// Created by Sandesh Ghimire on 8/9/17.
//

#ifndef HARDWAREVERIFICATION_COREUART_HPP
#define HARDWAREVERIFICATION_COREUART_HPP


#include <string>

const std::string  uart_0_filename  ("/dev/ttyMSM0");

class CoreUART
{
 public:
    CoreUART();
    virtual ~CoreUART();
 private:
    int _init();


};

#endif //HARDWAREVERIFICATION_COREUART_HPP
