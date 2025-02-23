// Raphael
// linkedlist.h
// Header File for linked lists.

#include <phidget22.h>

// Defining LinkedListNode
typedef struct LinkedListNode {
    PhidgetRCServoHandle value;
    struct LinkedListNode* nextNode;
} LinkedListNode;
