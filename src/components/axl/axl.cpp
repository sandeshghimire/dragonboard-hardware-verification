#include "axl.hpp"
AXL::AXL()
{
    _iicSlaveAddress = ALS_12C_SLAVE_ADDR;
    _controlAddress = ALS_CONTROL_ADDR;
    _controlDefaultValue = ALS_CONTROL_RST;
    _measurementRateAddress = ALS_MEAS_RATE_ADDR;
    _measurementRateValue = ALS_MEAS_RATE_RST;
    _partIdAddress = PART_ID_ADDR;
    _partIdValue = PART_ID_RST;
    _measurementFactoryIdAddress = MANUFAC_ID_ADDR;
    _measurementFactoryIdDefaultValue = MANUFAC_ID_RST;
    _dataChannel10Address = ALS_DATA_CH1_0_ADDR;
    _dataChannel10DefaultValue = ALS_DATA_CH1_0_RST;
    _dataChannel11Address = ALS_DATA_CH1_1_ADDR;
    _dataChannel11DefaultValue = ALS_DATA_CH1_1_RST;
    _dataChnnel00Address = ALS_DATA_CH0_0_ADDR;
    _dataChannel00DefaultValue = ALS_DATA_CH0_0_RST;
    _dataChannel01Address = ALS_DATA_CH0_1_ADDR;
    _dataChannel01DefaultValue = ALS_DATA_CH0_1_RST;
    _statusAddress = ALS_STATUS_ADDR;
    _statusDefaultValue = ALS_STATUS_RST;

}
AXL::~AXL()
{
}
unsigned char AXL::get_controlAddress() const
{
    return _controlAddress;
}
void AXL::set_controlAddress(unsigned char _controlAddress)
{
    AXL::_controlAddress = _controlAddress;
}
unsigned char AXL::get_controlDefaultValue() const
{
    return _controlDefaultValue;
}
void AXL::set_controlDefaultValue(unsigned char _controlDefaultValue)
{
    AXL::_controlDefaultValue = _controlDefaultValue;
}
unsigned char AXL::get_measurementRateAddress() const
{
    return _measurementRateAddress;
}
void AXL::set_measurementRateAddress(unsigned char _measurementRateAddress)
{
    AXL::_measurementRateAddress = _measurementRateAddress;
}
unsigned char AXL::get_measurementRateValue() const
{
    return _measurementRateValue;
}
void AXL::set_measurementRateValue(unsigned char _measurementRateValue)
{
    AXL::_measurementRateValue = _measurementRateValue;
}
unsigned char AXL::get_partIdAddress() const
{
    return _partIdAddress;
}
void AXL::set_partIdAddress(unsigned char _partIdAddress)
{
    AXL::_partIdAddress = _partIdAddress;
}
unsigned char AXL::get_partIdValue() const
{
    return _partIdValue;
}
void AXL::set_partIdValue(unsigned char _partIdValue)
{
    AXL::_partIdValue = _partIdValue;
}
unsigned char AXL::get_measurementFactoryIdAddress() const
{
    return _measurementFactoryIdAddress;
}
void AXL::set_measurementFactoryIdAddress(unsigned char _measurementFactoryIdAddress)
{
    AXL::_measurementFactoryIdAddress = _measurementFactoryIdAddress;
}
unsigned char AXL::get_measurementFactoryIdDefaultValue() const
{
    return _measurementFactoryIdDefaultValue;
}
void AXL::set_measurementFactoryIdDefaultValue(unsigned char _measurementFactoryIdDefaultValue)
{
    AXL::_measurementFactoryIdDefaultValue = _measurementFactoryIdDefaultValue;
}
unsigned char AXL::get_dataChannel10Address() const
{
    return _dataChannel10Address;
}
void AXL::set_dataChannel10Address(unsigned char _dataChannel10Address)
{
    AXL::_dataChannel10Address = _dataChannel10Address;
}
unsigned char AXL::get_dataChannel10DefaultValue() const
{
    return _dataChannel10DefaultValue;
}
void AXL::set_dataChannel10DefaultValue(unsigned char _dataChannel10DefaultValue)
{
    AXL::_dataChannel10DefaultValue = _dataChannel10DefaultValue;
}
unsigned char AXL::get_dataChannel11Address() const
{
    return _dataChannel11Address;
}
void AXL::set_dataChannel11Address(unsigned char _dataChannel11Address)
{
    AXL::_dataChannel11Address = _dataChannel11Address;
}
unsigned char AXL::get_dataChannel11DefaultValue() const
{
    return _dataChannel11DefaultValue;
}
void AXL::set_dataChannel11DefaultValue(unsigned char _dataChannel11DefaultValue)
{
    AXL::_dataChannel11DefaultValue = _dataChannel11DefaultValue;
}
unsigned char AXL::get_dataChnnel00Address() const
{
    return _dataChnnel00Address;
}
void AXL::set_dataChnnel00Address(unsigned char _dataChnnel00Address)
{
    AXL::_dataChnnel00Address = _dataChnnel00Address;
}
unsigned char AXL::get_dataChannel00DefaultValue() const
{
    return _dataChannel00DefaultValue;
}
void AXL::set_dataChannel00DefaultValue(unsigned char _dataChannel00DefaultValue)
{
    AXL::_dataChannel00DefaultValue = _dataChannel00DefaultValue;
}
unsigned char AXL::get_dataChannel01Address() const
{
    return _dataChannel01Address;
}
void AXL::set_dataChannel01Address(unsigned char _dataChannel01Address)
{
    AXL::_dataChannel01Address = _dataChannel01Address;
}
unsigned char AXL::get_dataChannel01DefaultValue() const
{
    return _dataChannel01DefaultValue;
}
void AXL::set_dataChannel01DefaultValue(unsigned char _dataChannel01DefaultValue)
{
    AXL::_dataChannel01DefaultValue = _dataChannel01DefaultValue;
}
unsigned char AXL::get_statusAddress() const
{
    return _statusAddress;
}
void AXL::set_statusAddress(unsigned char _statusAddress)
{
    AXL::_statusAddress = _statusAddress;
}
unsigned char AXL::get_statusDefaultValue() const
{
    return _statusDefaultValue;
}
void AXL::set_statusDefaultValue(unsigned char _statusDefaultValue)
{
    AXL::_statusDefaultValue = _statusDefaultValue;
}
unsigned char AXL::get_iicSlaveAddress() const
{
    return _iicSlaveAddress;
}


