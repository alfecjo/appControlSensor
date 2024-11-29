#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

#include <functional> // Para std::function

// Configura sensores e interrução
void setupSensorInterrupts(int tempPin, int pressPin,
                           std::function<void()> tempCallBack,
                           std::function<void()> pressCallBack);

#endif