// Raphael
// motor_control.c
// Implementation of functions outlined in motor_control.h

#include "motor_control.h"
#include <phidget22.h>
#include <math.h>

// ndeg is between 2 and 4 digits long.
// (n-1) is the motor to move
// deg is the degree to move it too
void move_motor(LinkedListNode* head, int ndeg) {

    int n = ndeg;
    int digit = 0;
    while (n >= 10) {
        n /= 10;
        digit++;
    }
    PhidgetRCServoHandle* motor = get_linked_list_value(n-1,head)->value;

    int deg = ndeg - (((int)pow(10,digit))*n);

    PhidgetRCServo_setTargetPosition(motor,deg);

}