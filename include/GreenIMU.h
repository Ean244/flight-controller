#ifndef GREENFLIGHT_GREENIMU_H
#define GREENFLIGHT_GREENIMU_H

#include "I2Cdev.h"
#include "MPU6050_6Axis_MotionApps20.h"

#if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
    #include "Wire.h"
#endif

class GreenIMU {
public:
    void init();
    void updateYPR();
    float getPitch();
    float getYaw();
    float getRoll();
};

extern GreenIMU greenImu;

#endif //GREENFLIGHT_GREENIMU_H