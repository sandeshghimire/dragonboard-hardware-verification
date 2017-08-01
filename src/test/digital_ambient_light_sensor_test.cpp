
#include <iostream>
#include "../components/digital_ambient_light_sensor/digital_ambient_light_sensor.hpp"
#include "../interface/corei2c/core_i2c.hpp"

using namespace std;

int main(int argc, char **argv)
{
    DigitalAmbientLightSensor *digitalAmbientLightSensor = new DigitalAmbientLightSensor();
    CoreI2C *iic = new CoreI2C(digitalAmbientLightSensor->get_iicSlaveAddress());


    while (1)
    {




        sleep(1);

    }

    delete (digitalAmbientLightSensor);
    delete (iic);

}