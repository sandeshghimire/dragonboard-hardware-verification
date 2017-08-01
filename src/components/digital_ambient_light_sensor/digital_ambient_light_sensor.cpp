#include "digital_ambient_light_sensor.hpp"

DigitalAmbientLightSensor::DigitalAmbientLightSensor()
{
    _iicSlaveAddress = kAlsI2cSlaveAddress;
    _controlAddress = kAlsControlAddress;
    _controlDefaultValue = kAlsControlDefaultVaue;
    _measurementRateAddress = kAlsMeasurementRateAddress;
    _measurementRateValue = kAlsMeasurementRateDefaultValue;
    _partIdAddress = kPartIdAddress;
    _partIdValue = kPartIdDefaultValue;
    _measurementFactoryIdAddress = kManufactureIdAddress;
    _measurementFactoryIdDefaultValue = kManufactureIdDefaultValue;
    _dataChannel10Address = kAlsDataChannel10Address;
    _dataChannel10DefaultValue = kAlsDataChannel10DefaultValue;
    _dataChannel11Address = kAlsDataChannel11Address;
    _dataChannel11DefaultValue = kAlsDataChannel11DefaultValue;
    _dataChnnel00Address = kAlsDataChannel00Address;
    _dataChannel00DefaultValue = kAlsDataChannel00DefaultValue;
    _dataChannel01Address = kAlsDataChannel01Address;
    _dataChannel01DefaultValue = kAlsDataChannel01DefaultValue;
    _statusAddress = kAlsStatusAddress;
    _statusDefaultValue = kAlsStatusDefaultValue;

}
DigitalAmbientLightSensor::~DigitalAmbientLightSensor()
{

}
unsigned char DigitalAmbientLightSensor::get_controlAddress() const
{
    return _controlAddress;
}
void DigitalAmbientLightSensor::set_controlAddress(unsigned char _controlAddress)
{
    DigitalAmbientLightSensor::_controlAddress = _controlAddress;
}
unsigned char DigitalAmbientLightSensor::get_controlDefaultValue() const
{
    return _controlDefaultValue;
}
void DigitalAmbientLightSensor::set_controlDefaultValue(unsigned char _controlDefaultValue)
{
    DigitalAmbientLightSensor::_controlDefaultValue = _controlDefaultValue;
}
unsigned char DigitalAmbientLightSensor::get_measurementRateAddress() const
{
    return _measurementRateAddress;
}
void DigitalAmbientLightSensor::set_measurementRateAddress(unsigned char _measurementRateAddress)
{
    DigitalAmbientLightSensor::_measurementRateAddress = _measurementRateAddress;
}
unsigned char DigitalAmbientLightSensor::get_measurementRateValue() const
{
    return _measurementRateValue;
}
void DigitalAmbientLightSensor::set_measurementRateValue(unsigned char _measurementRateValue)
{
    DigitalAmbientLightSensor::_measurementRateValue = _measurementRateValue;
}
unsigned char DigitalAmbientLightSensor::get_partIdAddress() const
{
    return _partIdAddress;
}
void DigitalAmbientLightSensor::set_partIdAddress(unsigned char _partIdAddress)
{
    DigitalAmbientLightSensor::_partIdAddress = _partIdAddress;
}
unsigned char DigitalAmbientLightSensor::get_partIdValue() const
{
    return _partIdValue;
}
void DigitalAmbientLightSensor::set_partIdValue(unsigned char _partIdValue)
{
    DigitalAmbientLightSensor::_partIdValue = _partIdValue;
}
unsigned char DigitalAmbientLightSensor::get_measurementFactoryIdAddress() const
{
    return _measurementFactoryIdAddress;
}
void DigitalAmbientLightSensor::set_measurementFactoryIdAddress(unsigned char _measurementFactoryIdAddress)
{
    DigitalAmbientLightSensor::_measurementFactoryIdAddress = _measurementFactoryIdAddress;
}
unsigned char DigitalAmbientLightSensor::get_measurementFactoryIdDefaultValue() const
{
    return _measurementFactoryIdDefaultValue;
}
void DigitalAmbientLightSensor::set_measurementFactoryIdDefaultValue(unsigned char _measurementFactoryIdDefaultValue)
{
    DigitalAmbientLightSensor::_measurementFactoryIdDefaultValue = _measurementFactoryIdDefaultValue;
}
unsigned char DigitalAmbientLightSensor::get_dataChannel10Address() const
{
    return _dataChannel10Address;
}
void DigitalAmbientLightSensor::set_dataChannel10Address(unsigned char _dataChannel10Address)
{
    DigitalAmbientLightSensor::_dataChannel10Address = _dataChannel10Address;
}
unsigned char DigitalAmbientLightSensor::get_dataChannel10DefaultValue() const
{
    return _dataChannel10DefaultValue;
}
void DigitalAmbientLightSensor::set_dataChannel10DefaultValue(unsigned char _dataChannel10DefaultValue)
{
    DigitalAmbientLightSensor::_dataChannel10DefaultValue = _dataChannel10DefaultValue;
}
unsigned char DigitalAmbientLightSensor::get_dataChannel11Address() const
{
    return _dataChannel11Address;
}
void DigitalAmbientLightSensor::set_dataChannel11Address(unsigned char _dataChannel11Address)
{
    DigitalAmbientLightSensor::_dataChannel11Address = _dataChannel11Address;
}
unsigned char DigitalAmbientLightSensor::get_dataChannel11DefaultValue() const
{
    return _dataChannel11DefaultValue;
}
void DigitalAmbientLightSensor::set_dataChannel11DefaultValue(unsigned char _dataChannel11DefaultValue)
{
    DigitalAmbientLightSensor::_dataChannel11DefaultValue = _dataChannel11DefaultValue;
}
unsigned char DigitalAmbientLightSensor::get_dataChnnel00Address() const
{
    return _dataChnnel00Address;
}
void DigitalAmbientLightSensor::set_dataChnnel00Address(unsigned char _dataChnnel00Address)
{
    DigitalAmbientLightSensor::_dataChnnel00Address = _dataChnnel00Address;
}
unsigned char DigitalAmbientLightSensor::get_dataChannel00DefaultValue() const
{
    return _dataChannel00DefaultValue;
}
void DigitalAmbientLightSensor::set_dataChannel00DefaultValue(unsigned char _dataChannel00DefaultValue)
{
    DigitalAmbientLightSensor::_dataChannel00DefaultValue = _dataChannel00DefaultValue;
}
unsigned char DigitalAmbientLightSensor::get_dataChannel01Address() const
{
    return _dataChannel01Address;
}
void DigitalAmbientLightSensor::set_dataChannel01Address(unsigned char _dataChannel01Address)
{
    DigitalAmbientLightSensor::_dataChannel01Address = _dataChannel01Address;
}
unsigned char DigitalAmbientLightSensor::get_dataChannel01DefaultValue() const
{
    return _dataChannel01DefaultValue;
}
void DigitalAmbientLightSensor::set_dataChannel01DefaultValue(unsigned char _dataChannel01DefaultValue)
{
    DigitalAmbientLightSensor::_dataChannel01DefaultValue = _dataChannel01DefaultValue;
}
unsigned char DigitalAmbientLightSensor::get_statusAddress() const
{
    return _statusAddress;
}
void DigitalAmbientLightSensor::set_statusAddress(unsigned char _statusAddress)
{
    DigitalAmbientLightSensor::_statusAddress = _statusAddress;
}
unsigned char DigitalAmbientLightSensor::get_statusDefaultValue() const
{
    return _statusDefaultValue;
}
void DigitalAmbientLightSensor::set_statusDefaultValue(unsigned char _statusDefaultValue)
{
    DigitalAmbientLightSensor::_statusDefaultValue = _statusDefaultValue;
}
unsigned char DigitalAmbientLightSensor::get_iicSlaveAddress() const
{
    return _iicSlaveAddress;
}


