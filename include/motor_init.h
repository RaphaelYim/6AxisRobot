// Raphael
// motor_init.h
// Header File. Prototype for creating a motor.

#ifndef MOTOR_INIT_H
#define MOTOR_INIT_H

#include <phidget22.h>

PhidgetRCServoHandle* create_servo_motor(int channel);

#endif