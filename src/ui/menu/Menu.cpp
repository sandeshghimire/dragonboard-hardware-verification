//
// Created by Sandesh Ghimire on 7/20/17.
//

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "Menu.hpp"

using std::cout;
using std::endl;
using std::setw;

int Menu::intro()
{
    system("clear all ");
    cout << "Bowers and Wilkins L-RCU test app" << endl;
    return 0;
}
int Menu::mainMenu()
{
    this->intro();

    cout << "1" << setw(_menu_width) << "CoreADC  test " << endl;
    cout << "2" << setw(_menu_width) << "GPIO test " << endl;
    cout << "3" << setw(_menu_width) << "I2C  test " << endl;
    cout << "4" << setw(_menu_width) << "I2S  test " << endl;
    cout << "5" << setw(_menu_width) << "SPI  test " << endl;
    cout << "6" << setw(_menu_width) << "MIPI test " << endl;
    cout << endl;
    cout << "7" << setw(_menu_width) << "ALS  test " << endl;
    cout << "8" << setw(_menu_width) << "AXL  test " << endl;
    cout << endl;
    cout << "7" << setw(_menu_width) << "ALS  test " << endl;
    cout << "8" << setw(_menu_width) << "AXL  test " << endl;
    cout << endl;
    cout << "B" << setw(_menu_width) << "Go Back  " << endl;
    cout << "M" << setw(_menu_width) << "Menu " << endl;
    cout << "Q" << setw(_menu_width) << "Quit " << endl;

    return 0;
}
int Menu::clearScreen()
{
    system("clear all ");
    return 0;
}
