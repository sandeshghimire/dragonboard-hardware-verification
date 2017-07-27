#include "core_spi.hpp"
using namespace std;

int SPI::_open(std::string devspi)
{
    int statusVal = -1;
    _spifd = open(devspi.c_str(), O_RDWR);
    if (_spifd < 0)
    {
        perror("could not open SPI device");
        exit(1);
    }

    statusVal = ioctl(_spifd, SPI_IOC_WR_MODE, &(_mode));
    if (statusVal < 0)
    {
        perror("Could not set SPIMode (WR)...ioctl fail");
        exit(1);
    }

    statusVal = ioctl(_spifd, SPI_IOC_RD_MODE, &(_mode));
    if (statusVal < 0)
    {
        perror("Could not set SPIMode (RD)...ioctl fail");
        exit(1);
    }

    statusVal = ioctl(_spifd, SPI_IOC_WR_BITS_PER_WORD, &(_bitsPerWord));
    if (statusVal < 0)
    {
        perror("Could not set SPI _bitsPerWord (WR)...ioctl fail");
        exit(1);
    }

    statusVal = ioctl(_spifd, SPI_IOC_RD_BITS_PER_WORD, &(_bitsPerWord));
    if (statusVal < 0)
    {
        perror("Could not set SPI _bitsPerWord(RD)...ioctl fail");
        exit(1);
    }

    statusVal = ioctl(_spifd, SPI_IOC_WR_MAX_SPEED_HZ, &(_speed));
    if (statusVal < 0)
    {
        perror("Could not set SPI speed (WR)...ioctl fail");
        exit(1);
    }

    statusVal = ioctl(_spifd, SPI_IOC_RD_MAX_SPEED_HZ, &(_speed));
    if (statusVal < 0)
    {
        perror("Could not set SPI speed (RD)...ioctl fail");
        exit(1);
    }
    return statusVal;
}
int SPI::_close()
{
    int statusVal = -1;
    statusVal = close(_spifd);
    if (statusVal < 0)
    {
        perror("Could not close SPI device");
        exit(1);
    }
    return statusVal;
}

int SPI::transfer(unsigned char *data, int length)
{

    struct spi_ioc_transfer spi[length];
    int i = 0;
    int retVal = -1;

    for (i = 0; i < length; i++)
    {

        spi[i].tx_buf = (unsigned long) (data + i);
        spi[i].rx_buf = (unsigned long) (data + i);
        spi[i].len = sizeof(*(data + i));
        spi[i].delay_usecs = 0;
        spi[i].speed_hz = _speed;
        spi[i].bits_per_word = _bitsPerWord;
        spi[i].cs_change = 0;
    }

    retVal = ioctl(_spifd, SPI_IOC_MESSAGE(length), &spi);

    if (retVal < 0)
    {
        perror("Problem transmitting spi data..ioctl");
        exit(1);
    }

    return retVal;

}

SPI::SPI()
{
    _mode = SPI_MODE_0;
    _bitsPerWord = 8;
    _speed = 1000000;
    _spifd = -1;

    _open(std::string("/dev/spidev0.0"));

}

SPI::SPI(std::string dev, unsigned char mode, unsigned int speed, unsigned char bits_per_word)
{
    _mode = mode;
    _bitsPerWord = bits_per_word;
    _speed = speed;
    _spifd = -1;

    _open(dev);

}

SPI::~SPI()
{
    _close();
}