// Raphael
// motor_init.c
// Implementation of functions outlined in motor_init.h. Wow, adhering to SRP?

#include "motor_init.h"

// Function to return a PhidgetRCServoHandle.
PhidgetRCServoHandle* create_servo_motor(int channel) {

    PhidgetRCServoHandle servo_motor;
    PhidgetRCServo_create(&servo_motor);
    Phidget_setChannel((PhidgetHandle)servo_motor,channel);
    Phidget_openWaitForAttachment((PhidgetHandle)servo_motor, 1000);

    return servo_motor;
}