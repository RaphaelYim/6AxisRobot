// Raphael
// stacks.h
// Stacks Prototypes & Stack typedef

#ifndef STACK_H
#define STACH_H

// Defining Stack
typedef struct Stack
{
   int items[7];
   int top;
} Stack;

void stack_push(Stack* stack);
void stack_pop(Stack* stack);
int stack_top(Stack* stack);
int stack_is_empty(Stack* stack);
Stack* create_stack();

#endif