#include "core_uart.hpp"

CoreUART::CoreUART() : _fileName(uart_0_filename)
{
}
CoreUART::~CoreUART()
{
}
CoreUART::CoreUART(const std::string &_fileName) : _fileName(_fileName)
{

}
unsigned int CoreUART::get_baudeRate() const
{
    return _baudeRate;
}
void CoreUART::set_baudeRate(unsigned int _baudeRate)
{
    CoreUART::_baudeRate = _baudeRate;
}
const std::string &CoreUART::get_fileName() const
{
    return _fileName;
}
void CoreUART::set_fileName(const std::string &_fileName)
{
    CoreUART::_fileName = _fileName;
}
int CoreUART::uartOpen()
{
    //_uartHandle = open(_fileName, O_RDWR | O_NOCTTY);

    return 0;
}
int CoreUART::uartClose()
{
    close(this->_uartHandle);
    return 0;
}
int CoreUART::read(void *message)
{
    return 0;
}
int CoreUART::write(void *message)
{
    return 0;
}
int CoreUART::_init()
{
    return 0;
}
