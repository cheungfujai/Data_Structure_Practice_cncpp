#ifndef STACK_H_
#define STACK_H_

typedef struct Stack Stack;
struct Stack{
    int val;
    Stack *next;
};
struct Stack* top = NULL;

void push(int data);
void pop();
void display();
void isempty();
void topElement();

#endif