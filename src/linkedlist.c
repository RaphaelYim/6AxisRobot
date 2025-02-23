// Raphael
// linkedlist.c
// Source File. Implementation of a  linked list with a PhidgetRCServoHandle as the value

#include <stdio.h>
#include <phidget22.h>
#include "../include/linkedlist.h"

// Creating a LinkedList
LinkedListNode* create_node(PhidgetRCServoHandle value) {
    LinkedListNode* new_node = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    if (!new_node) {
        printf("\nMemory Allocation Failed");
        exit(1);
    }
    new_node->nextNode = NULL;
    new_node->value = value;
    return new_node;
} 

// Appending to LinkedList at the end
void append_node(LinkedListNode* head, PhidgetRCServoHandle value) {
    LinkedListNode* current = head;
    while (current->nextNode != NULL) {
        current = current->nextNode;
    };
    LinkedListNode* new_node = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    if (!new_node) {
        printf("\nMemory Allocation Failed");
        exit(1);
    }
    current->nextNode = new_node;
    new_node->nextNode = NULL;
    new_node->value = value;
}

// Getting Length of LinkedList
int get_linked_list_length(LinkedListNode* head) {
    LinkedListNode* current = head;
    int count = 0;
    while (current) {
        count++;
        current = current->nextNode;
    }
    
    return count;

}

// Getting value of LinkedList at index
LinkedListNode* get_node_at_index(int index, LinkedListNode** head) {
    if (index >= get_linked_list_length(*head)) {
        printf("\nOut Of Range");
        return NULL;
    }

    int c = 0;
    LinkedListNode* current = *head;
    while (c != index) {
        current = current->nextNode;
        c++;
    }
    return current;
}

// LinkedList as array
PhidgetRCServoHandle* linked_list_as_array(LinkedListNode** head) {
    int size = get_linked_list_length(*head);
    PhidgetRCServoHandle* linked_list_array = (PhidgetRCServoHandle*)malloc(size * sizeof(PhidgetRCServoHandle));
    if (!linked_list_array) {
        printf("\nMemory Allocation Failed");
        exit(1);
    }
    LinkedListNode* current = *head;
    
    for (int i=0;i<size;i++) {
        linked_list_array[i] = current->value;
        current=current->nextNode;
    }

    return linked_list_array;
}

// Delete Not Needed
// Implode Not Needed
// Replace Not Needed
// Insert Not Needed
// Reverse Not Needed