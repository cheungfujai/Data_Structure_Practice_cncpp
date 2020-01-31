#include <stdio.h>
#include "stack.c"
#include "stack.h"

int main(){
    Stack myStack;
    createStack(&myStack);
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);
    push(&myStack, 40);
    displayStack(&myStack);
    pop(&myStack);
    displayStack(&myStack);
    isEmpty(&myStack);
    isFull(&myStack);
    stackTop(&myStack);
    freeStack(&myStack);
    return 0;
}