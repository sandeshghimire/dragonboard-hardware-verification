#include <iostream>
#include <unistd.h>
#include "../interface/coregpio/core_gpio.hpp"

using namespace std;

int main(void)
{

    string inputstate;
    GPIO *gpio4 = new GPIO("4");
    GPIO *gpio17 = new GPIO("17");

    gpio4->Export();
    gpio17->Export();

    cout << " GPIO pins exported" << endl;

    gpio17->setDirection("in");
    gpio4->setDirection("out");

    cout << " Set GPIO pin directions" << endl;

    while (1)
    {
        usleep(500000);
        gpio17->getValue(inputstate);
        cout << "Current input pin state is " << inputstate << endl;
        if (inputstate == "0")
        {
            cout << "input pin state is Pressed n Will check input pin state again in 20ms " << endl;
            usleep(20000);
            cout << "Checking again ....." << endl;
            gpio17->getValue(inputstate);
            if (inputstate == "0")
            {
                cout << "input pin state is definitely  Turning LED ON" << endl;
                gpio4->setValue("1");

                cout << " Waiting until pin is unpressed....." << endl;
                while (inputstate == "0")
                {
                    gpio17->getValue(inputstate);
                };
                cout << "pin is unpressed" << endl;

            } else
                cout << "input pin state is definitely  That was just noise." << endl;

        }
        gpio4->setValue("0");

    }
    cout << "Exiting....." << endl;
    return 0;
}