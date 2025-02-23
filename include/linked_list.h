// Raphael
// linkedlist.h
// Header File for linked lists.

#ifndef LINKED_LIST_H  
#define LINKED_LIST_H 

#include <phidget22.h>

// Defining LinkedListNode
typedef struct LinkedListNode {
    PhidgetRCServoHandle value;
    struct LinkedListNode* nextNode;
} LinkedListNode;

// Prototype
LinkedListNode* create_linked_list(PhidgetRCServoHandle value);
void append_to_linked_list(LinkedListNode* head, PhidgetRCServoHandle value);
int get_linked_list_length(LinkedListNode* head);
LinkedListNode* get_linked_list_value(int index, LinkedListNode** head);
PhidgetRCServoHandle* linked_list_as_array(LinkedListNode** head);

#endif