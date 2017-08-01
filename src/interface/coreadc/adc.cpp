//
// Created by Sandesh Ghimire on 7/20/17.
//

#include <iostream>
#include "core_adc.hpp"

using namespace std;

ADC::ADC()
{

}
ADC::~ADC()
{

}
int ADC::menu()
{

    return 0;
}
int ADC::test()
{
    this->menu();
    while ((_input != "q") && (_input != "Q"))
    {
        cin >> _input;
        cout << "Core ADC test " << endl;
    }
    system("clear all ");
    cout << "Main Menu " << endl;
    return 0;
}
