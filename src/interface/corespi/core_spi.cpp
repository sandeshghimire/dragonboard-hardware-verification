#include "core_spi.hpp"
using namespace std;

int SPI::_open(std::string devspi)
{
    int statusVal = -1;
    this->spifd = open(devspi.c_str(), O_RDWR);
    if (this->spifd < 0)
    {
        perror("could not open SPI device");
        exit(1);
    }

    statusVal = ioctl(this->spifd, SPI_IOC_WR_MODE, &(this->_mode));
    if (statusVal < 0)
    {
        perror("Could not set SPIMode (WR)...ioctl fail");
        exit(1);
    }

    statusVal = ioctl(this->spifd, SPI_IOC_RD_MODE, &(this->_mode));
    if (statusVal < 0)
    {
        perror("Could not set SPIMode (RD)...ioctl fail");
        exit(1);
    }

    statusVal = ioctl(this->spifd, SPI_IOC_WR_BITS_PER_WORD, &(this->_bitsPerWord));
    if (statusVal < 0)
    {
        perror("Could not set SPI _bitsPerWord (WR)...ioctl fail");
        exit(1);
    }

    statusVal = ioctl(this->spifd, SPI_IOC_RD_BITS_PER_WORD, &(this->_bitsPerWord));
    if (statusVal < 0)
    {
        perror("Could not set SPI _bitsPerWord(RD)...ioctl fail");
        exit(1);
    }

    statusVal = ioctl(this->spifd, SPI_IOC_WR_MAX_SPEED_HZ, &(this->_speed));
    if (statusVal < 0)
    {
        perror("Could not set SPI speed (WR)...ioctl fail");
        exit(1);
    }

    statusVal = ioctl(this->spifd, SPI_IOC_RD_MAX_SPEED_HZ, &(this->_speed));
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
    statusVal = close(this->spifd);
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
        spi[i].speed_hz = this->_speed;
        spi[i].bits_per_word = this->_bitsPerWord;
        spi[i].cs_change = 0;
    }

    retVal = ioctl(this->spifd, SPI_IOC_MESSAGE(length), &spi);

    if (retVal < 0)
    {
        perror("Problem transmitting spi data..ioctl");
        exit(1);
    }

    return retVal;

}

SPI::SPI()
{
    this->_mode = SPI_MODE_0;
    this->_bitsPerWord = 8;
    this->_speed = 1000000;
    this->spifd = -1;

    this->_open(std::string("/dev/spidev0.0"));

}

SPI::SPI(std::string dev, unsigned char mode, unsigned int speed, unsigned char bits_per_word)
{
    this->_mode = mode;
    this->_bitsPerWord = bits_per_word;
    this->_speed = speed;
    this->spifd = -1;

    this->_open(dev);

}

SPI::~SPI()
{
    this->_close();
}