//
// Created by Sandesh Ghimire on 7/20/17.
//

#ifndef _DIGITALAMBIENTLIGHTSENSOR_HPP_
#define _DIGITALAMBIENTLIGHTSENSOR_HPP_

#include <memory>



class DigitalAmbientLightSensor;
typedef std::shared_ptr<DigitalAmbientLightSensor> AXLRef;

class DigitalAmbientLightSensor
{
 public:
    DigitalAmbientLightSensor();
    virtual ~DigitalAmbientLightSensor();
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

 protected:
    const unsigned char kAlsI2cSlaveAddress{0x29};
    const unsigned char kAlsControlAddress{0x80};
    const unsigned char kAlsControlDefaultVaue{0x00};
    const unsigned char kAlsMeasurementRateAddress{0x85};
    const unsigned char kAlsMeasurementRateDefaultValue{0x03};
    const unsigned char kPartIdAddress{0x86};
    const unsigned char kPartIdDefaultValue{0xA0};
    const unsigned char kManufactureIdAddress{0x87};
    const unsigned char kManufactureIdDefaultValue{0x05};
    const unsigned char kAlsDataChannel10Address{0x88};
    const unsigned char kAlsDataChannel10DefaultValue{0x00};
    const unsigned char kAlsDataChannel11Address{0x89};
    const unsigned char kAlsDataChannel11DefaultValue{0x00};
    const unsigned char kAlsDataChannel00Address{0x8a};
    const unsigned char kAlsDataChannel00DefaultValue{0x00};
    const unsigned char kAlsDataChannel01Address{0x8b};
    const unsigned char kAlsDataChannel01DefaultValue{0x00};
    const unsigned char kAlsStatusAddress{0x8c};
    const unsigned char kAlsStatusDefaultValue{0x00};

};

#endif //_DIGITALAMBIENTLIGHTSENSOR_HPP_
