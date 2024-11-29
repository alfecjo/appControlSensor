#include <wiringPi.h>
#include "sensor_manager.h"

// Configura sensores com CallBack
void setupSensorInterrupts(int tempPin, int pressPin,
                           std::function<void()> tempCallBack,
                           std::function<void()>
                               pressCallBack)
{
    wiringPiISR(tempPin, INT_EDGE_RISING, []()
                { tempCallBack(); });
    wiringPiISR(pressPin, INT_EDGE_RISING, []()
                { pressCallBack(); });
}