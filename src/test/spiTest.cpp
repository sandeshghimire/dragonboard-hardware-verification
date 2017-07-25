#include <iostream>
#include "../interface/corespi/core_spi.hpp"

using namespace std;

int main(void)
{
    SPI spi("/dev/spidev0.0", SPI_MODE_0, 1000000, 8);
    int i = 20;
    int spiVal = 0;
    int spiChannel = 0;
    unsigned char data[3];

    while (i > 0)
    {
        data[0] = 1;
        data[1] = 0b10000000 | (((spiChannel & 7) << 4));
        data[2] = 0;

        spi.transfer(data, sizeof(data));

        spiVal = 0;
        spiVal = (data[1] << 8) & 0b1100000000;
        spiVal |= (data[2] & 0xff);
        sleep(1);
        cout << "The Result is: " << spiVal << endl;
        i--;
    }
    return 0;
}