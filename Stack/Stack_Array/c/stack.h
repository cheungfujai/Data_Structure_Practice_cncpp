#ifndef STACK_H
#define STACK_H

typedef struct Stack Stack;
struct Stack{
    int size;
    int top;
    int* stackVal;
};

void createStack(Stack* ptr);
void displayStack(Stack* ptr);
void push(Stack* ptr, int data);
void freeStack(Stack* ptr);
void pop(Stack* ptr);
void isEmpty(Stack* ptr);
void isFull(Stack* ptr);
int stackTop(Stack* ptr);

#endif