#include <fstream>
#include <iostream>
#include "core_gpio.hpp"

using namespace std;

GPIO::GPIO()
{
    this->_gpioNumber = "4";
}

GPIO::GPIO(string gnum)
{
    this->_gpioNumber = gnum;
}

int GPIO::Export()
{
    string export_str = "/sys/class/gpio/Export";
    ofstream exportgpio(export_str.c_str());
    if (!exportgpio.is_open())
    {
        cout << " OPERATION FAILED: Unable to Export GPIO" << this->_gpioNumber << " ." << endl;
        return -1;
    }

    exportgpio << this->_gpioNumber;
    exportgpio.close();
    return 0;
}

int GPIO::Unexport()
{
    string unexport_str = "/sys/class/gpio/Unexport";
    ofstream unexportgpio(unexport_str.c_str());
    if (!unexportgpio.is_open())
    {
        cout << " OPERATION FAILED: Unable to Unexport GPIO" << this->_gpioNumber << " ." << endl;
        return -1;
    }

    unexportgpio << this->_gpioNumber; //write GPIO number to Unexport
    unexportgpio.close(); //Uartclose Unexport file
    return 0;
}

int GPIO::setDirection(string dir)
{

    string setdir_str = "/sys/class/gpio/gpio" + this->_gpioNumber + "/direction";
    ofstream setdirgpio(setdir_str.c_str());
    if (!setdirgpio.is_open())
    {
        cout << " OPERATION FAILED: Unable to set direction of GPIO" << this->_gpioNumber << " ." << endl;
        return -1;
    }

    setdirgpio << dir;
    setdirgpio.close();
    return 0;
}

int GPIO::setValue(string val)
{

    string setval_str = "/sys/class/gpio/gpio" + this->_gpioNumber + "/value";
    ofstream setvalgpio(setval_str.c_str());
    if (!setvalgpio.is_open())
    {
        cout << " OPERATION FAILED: Unable to set the value of GPIO" << this->_gpioNumber << " ." << endl;
        return -1;
    }

    setvalgpio << val;
    setvalgpio.close();
    return 0;
}

int GPIO::getValue(string &val)
{

    string getval_str = "/sys/class/gpio/gpio" + this->_gpioNumber + "/value";
    ifstream getvalgpio(getval_str.c_str());
    if (!getvalgpio.is_open())
    {
        cout << " OPERATION FAILED: Unable to get value of GPIO" << this->_gpioNumber << " ." << endl;
        return -1;
    }

    getvalgpio >> val;

    if (val != "0")
        val = "1";
    else
        val = "0";

    getvalgpio.close();
    return 0;
}

string GPIO::getNumber()
{

    return this->_gpioNumber;

}

