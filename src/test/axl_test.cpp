//
// Created by Sandesh Ghimire on 7/31/17.
//

#include <iostream>
#include "../components/axl/axl.hpp"
#include "../interface/corei2c/core_i2c.hpp"

using namespace std;

int main(int argc, char **argv)
{
    auto axl = std::make_shared<AXLRef>(new AXL());
    auto i2c = std::make_shared<CoreI2CRef>(new CoreI2C(0));
}