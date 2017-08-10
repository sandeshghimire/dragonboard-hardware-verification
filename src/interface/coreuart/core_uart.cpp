#include "core_uart.hpp"

CoreUART::CoreUART() : _fileName(uart_0_filename)
{
}
CoreUART::~CoreUART()
{
}
int CoreUART::_init()
{
    return 0;
}
CoreUART::CoreUART(const std::string &_fileName) : _fileName(_fileName)
{

}
