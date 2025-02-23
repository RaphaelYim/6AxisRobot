// Raphael
// stacks.h
// Stacks Prototypes & Stack typedef

#ifndef STACK_H
#define STACH_H

#define STACK_CAPACITY 7

// Defining Stack
typedef struct Stack
{
   int items[7];
   int size;
} Stack;

void stack_push(Stack* stack);
void stack_pop(Stack* stack);
int stack_top(Stack* stack);
int is_stack_empty(Stack* stack);
int is_stack_full(Stack* stack);
void create_stack(Stack* stack);

#endif