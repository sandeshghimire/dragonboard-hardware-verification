//
// Created by Sandesh Ghimire on 7/20/17.
//

#ifndef _AXL_HPP_
#define _AXL_HPP_

#include <memory>

#define ALS_12C_SLAVE_ADDR 0x29

#define ALS_CONTROL_ADDR 0x80
#define ALS_CONTROL_RST 0x00

#define ALS_MEAS_RATE_ADDR 0x85
#define ALS_MEAS_RATE_RST 0x03

#define PART_ID_ADDR 0x86
#define PART_ID_RST 0xA0

#define MANUFAC_ID_ADDR 0x87
#define MANUFAC_ID_RST 0x05

#define ALS_DATA_CH1_0_ADDR 0x88
#define ALS_DATA_CH1_0_RST 0x00

#define ALS_DATA_CH1_1_ADDR 0x89
#define ALS_DATA_CH1_1_RST 0x00

#define ALS_DATA_CH0_0_ADDR 0x8A
#define ALS_DATA_CH0_0_RST 0x00

#define ALS_DATA_CH0_1_ADDR  0x8B
#define ALS_DATA_CH0_1_RST 0x00

#define ALS_STATUS_ADDR 0x8C
#define ALS_STATUS_RST 0x00

class AXL;
typedef std::shared_ptr<AXL> AXLRef;

class AXL
{
 public:
    AXL();
    virtual ~AXL();
    unsigned char get_controlAddress() const;
    void set_controlAddress(unsigned char _controlAddress);
    unsigned char get_controlDefaultValue() const;
    void set_controlDefaultValue(unsigned char _controlDefaultValue);
    unsigned char get_measurementRateAddress() const;
    void set_measurementRateAddress(unsigned char _measurementRateAddress);
    unsigned char get_measurementRateValue() const;
    void set_measurementRateValue(unsigned char _measurementRateValue);
    unsigned char get_partIdAddress() const;
    void set_partIdAddress(unsigned char _partIdAddress);
    unsigned char get_partIdValue() const;
    void set_partIdValue(unsigned char _partIdValue);
    unsigned char get_measurementFactoryIdAddress() const;
    void set_measurementFactoryIdAddress(unsigned char _measurementFactoryIdAddress);
    unsigned char get_measurementFactoryIdDefaultValue() const;
    void set_measurementFactoryIdDefaultValue(unsigned char _measurementFactoryIdDefaultValue);
    unsigned char get_dataChannel10Address() const;
    void set_dataChannel10Address(unsigned char _dataChannel10Address);
    unsigned char get_dataChannel10DefaultValue() const;
    void set_dataChannel10DefaultValue(unsigned char _dataChannel10DefaultValue);
    unsigned char get_dataChannel11Address() const;
    void set_dataChannel11Address(unsigned char _dataChannel11Address);
    unsigned char get_dataChannel11DefaultValue() const;
    void set_dataChannel11DefaultValue(unsigned char _dataChannel11DefaultValue);
    unsigned char get_dataChnnel00Address() const;
    void set_dataChnnel00Address(unsigned char _dataChnnel00Address);
    unsigned char get_dataChannel00DefaultValue() const;
    void set_dataChannel00DefaultValue(unsigned char _dataChannel00DefaultValue);
    unsigned char get_dataChannel01Address() const;
    void set_dataChannel01Address(unsigned char _dataChannel01Address);
    unsigned char get_dataChannel01DefaultValue() const;
    void set_dataChannel01DefaultValue(unsigned char _dataChannel01DefaultValue);
    unsigned char get_statusAddress() const;
    void set_statusAddress(unsigned char _statusAddress);
    unsigned char get_statusDefaultValue() const;
    void set_statusDefaultValue(unsigned char _statusDefaultValue);
    unsigned char get_iicSlaveAddress() const;

 private:
    unsigned char _iicSlaveAddress;

    unsigned char _controlAddress;
    unsigned char _controlDefaultValue;

    unsigned char _measurementRateAddress;
    unsigned char _measurementRateValue;
    unsigned char _partIdAddress;
    unsigned char _partIdValue;

    unsigned char _measurementFactoryIdAddress;
    unsigned char _measurementFactoryIdDefaultValue;

    unsigned char _dataChannel10Address;
    unsigned char _dataChannel10DefaultValue;
    unsigned char _dataChannel11Address;
    unsigned char _dataChannel11DefaultValue;

    unsigned char _dataChnnel00Address;
    unsigned char _dataChannel00DefaultValue;

    unsigned char _dataChannel01Address;
    unsigned char _dataChannel01DefaultValue;

    unsigned char _statusAddress;
    unsigned char _statusDefaultValue;

};

#endif //_AXL_HPP_
