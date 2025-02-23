// Raphael
// linkedlist.c
// Source File. Implementation of a  linked list with a PhidgetRCServoHandle as the value

#include <stdio.h>
#include <phidget22.h>
#include "linkedlist.h"

// Creating a LinkedList
LinkedListNode* create_linked_list(PhidgetRCServoHandle value) {
    LinkedListNode* createdHead = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    if (!createdHead) {
        printf("\nMemory Allocation Failed");
        exit(1);
    }
    createdHead->nextNode = NULL;
    createdHead->value = value;
    return createdHead;
} 

// Appending to LinkedList at the end
void append_to_linked_list(LinkedListNode* head, PhidgetRCServoHandle value) {
    LinkedListNode* temporary_pointer = head;
    while (temporary_pointer->nextNode != NULL) {
        temporary_pointer = temporary_pointer->nextNode;
    };
    LinkedListNode* createdNode = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    if (!createdNode) {
        printf("\nMemory Allocation Failed");
        exit(1);
    }
    temporary_pointer->nextNode = createdNode;
    createdNode->nextNode = NULL;
    createdNode->value = value;
}

// Getting Length of LinkedList
int get_linked_list_length(LinkedListNode* head) {
    LinkedListNode* temporary_pointer = head;
    int count = 0;
    while (temporary_pointer->nextNode != NULL) {
        count++;
        temporary_pointer = temporary_pointer->nextNode;
    }
    return count;

}

// Getting value of LinkedList at index
LinkedListNode* get_linked_list_node_at_index(int index, LinkedListNode** head) {
    if (index >= get_linked_list_length(*head)) {
        printf("\nOut Of Range");
        return NULL;
    }

    int c = 0;
    LinkedListNode* temporary_pointer = *head;
    while (c != index) {
        temporary_pointer = temporary_pointer->nextNode;
        c++;
    }
    return temporary_pointer;
}

// LinkedList as array
PhidgetRCServoHandle* linked_list_as_array(LinkedListNode** head) {
    int length = get_linked_list_length(*head);
    static PhidgetRCServoHandle* linked_list_array = (PhidgetRCServoHandle*)sizeof(length * sizeof(PhidgetRCServoHandle)); // Is this static abuse?
    LinkedListNode* temporary_pointer = *head;
    
    for (int i=0;i<length;i++) {
        linked_list_array[i] = temporary_pointer->value;
        temporary_pointer=temporary_pointer->nextNode;
    }

    return linked_list_array;
}

// Delete Not Needed
// Implode Not Needed
// Replace Not Needed
// Insert Not Needed
// Reverse Not Needed