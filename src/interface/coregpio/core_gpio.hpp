#ifndef _COREGPIO_HPP_
#define _COREGPIO_HPP_

#include <string>
using namespace std;

class GPIO
{
 public:
    GPIO();
    GPIO(string x);
    int Export();
    int Unexport();
    int setDirection(string dir);
    int setValue(string val);
    int getValue(string &val);
    string getNumber();
 private:
    string _gpioNumber;
};

#endif //_COREGPIO_HPP_
