//
// Created by Sandesh Ghimire on 7/20/17.
//

#ifndef HARDWAREVERIFICATION_MENU_HPP
#define HARDWAREVERIFICATION_MENU_HPP

class Menu
{
 public:
    int intro();
    int mainMenu();
    int clearScreen();
 private:
    unsigned int _menu_width  {30};
};

#endif //HARDWAREVERIFICATION_MENU_HPP
