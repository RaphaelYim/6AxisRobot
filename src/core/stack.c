// Raphael
// stack.c
// Implementation of functions outlined in stack.h
#include "stack.h"

void stack_push(Stack* stack, int value) {
    if (is_stack_full(stack)) {
        printf("\nStack Overflow");
        return;
    }
    stack->items[stack->size] = value;
    stack->size++;

}

void stack_pop(Stack* stack) {
    if (is_stack_empty(stack)) {
        printf("\nStack Underflow");
        return;
    }
    stack->size--;
    // Don't need to actually remove it, next push will overwrite it.

}

int stack_top(Stack* stack) {
    if (is_stack_empty(stack)) {
        printf("\nStack Empty. Nothing at top.");
        return -1;
    }
    return stack->items[stack->size-1];
}

int is_stack_empty(Stack* stack) {
    return stack->size == 0;
}

int is_stack_full(Stack* stack) {
    return stack->size == STACK_CAPACITY;
}

void init_stack(Stack* stack) {
    stack->size = 0;
}

