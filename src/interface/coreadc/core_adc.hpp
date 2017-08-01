
#ifndef _ADC_HPP_
#define _ADC_HPP_
/*
 * echo 1 > /sys/bus/iio/devices/iio:device0/scan_elements/in_voltage0_en
 * echo 1 > /sys/bus/iio/devices/iio:device0/scan_elements/in_voltage1_en
 * echo 1 > /sys/bus/iio/devices/iio:device0/buffer/enable
 *
 */


#include <string>
class ADC
{
 public:
    ADC();
    virtual ~ADC();

    int menu();
    int test();
 private:
    std::string _input;
};

#endif //_ADC_HPP_
