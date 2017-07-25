//
// Created by Sandesh Ghimire on 7/20/17.
//

#ifndef _ADC_HPP_
#define _ADC_HPP_

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
