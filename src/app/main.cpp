#include <iostream>
#include "../ui/menu/Menu.hpp"
#include "../interface/coreadc/core_adc.hpp"

using namespace std;

int main(int argc, char **argv)
{
    string input;

    Menu menu;
    ADC adc;
    menu.intro();
    menu.mainMenu();

    while ((input != "Q") && (input != "q"))
    {
        cin >> input;

        if (input == "1")
        {
            adc.test();
            cout << "Type h for help " << endl;

        } else if ((input == "h") || (input == "H"))
        {
            menu.mainMenu();
        } else
        {
            menu.clearScreen();
            cout << "Invalid command " << endl << "Type h for help " << endl;
        }

    }
    cout << "\nGood Bye " << endl;
    return 0;
}