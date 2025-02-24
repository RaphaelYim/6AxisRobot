// Raphael
// motor_init.h
// Creating Servo Motor Prototypes

#ifndef MOTOR_INIT_H
#define MOTOR_INIT_H

#include <phidget22.h>

PhidgetRCServoHandle* create_servo_motor(int channel);

#endif