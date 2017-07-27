//
// Created by Sandesh Ghimire on 7/20/17.
//

#ifndef _ADC_HPP_
#define _ADC_HPP_

#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/spi/spidev.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string>
#include <iostream>

class SPI{

 public:
    SPI();
    SPI(std::string dev, unsigned char mode, unsigned int speed, unsigned char bits_per_word);
    ~SPI();
    int transfer(unsigned char *data, int length);

 private:
    unsigned char _mode;
    unsigned char _bitsPerWord;
    unsigned int _speed;
    int _spifd;

 private:
    int _open(std::string devspi);
    int _close();

};

#endif //_ADC_HPP_
