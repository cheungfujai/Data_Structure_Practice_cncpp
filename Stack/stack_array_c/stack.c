#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void createStack(Stack* ptr){
    printf("\nPlease enter the size of the Stack: ");
    scanf("%d", &ptr->size);
    ptr->top = -1;
    ptr->stackVal = (int*)malloc(ptr->size * sizeof(int));
    printf("Stack of size [ %d ] created successfully.\n", ptr->size);
}

void displayStack(Stack* ptr){
    for(int i = 0; i < ptr->size; i++){
        if(ptr->stackVal[i] != -1){
            printf("%d ", ptr->stackVal[i]);
        }
        else{
            printf("[Empty] ");
        }
    }
    printf("\n");
}

void push(Stack* ptr, int data){
    if(ptr->top < ptr->size){
        ptr->top++;
        ptr->stackVal[ptr->top] = data;
        for(int i = ptr->size - 1; i > ptr->top; i--){
            ptr->stackVal[i] = -1;
        }
        printf("%d is pushed to the stack\n", data);
    }
    else{
        printf("Hey dude, Stack Overflow.\n");
    }
}

void freeStack(Stack* ptr){
    free(ptr->stackVal);
    printf("Allocated stackVal is deleted.\n");
}

void pop(Stack* ptr){
    if(ptr->top == -1){
        printf("Hey dude, Stack Underflow.\n");
    }
    else{
        int showData = ptr->stackVal[ptr->top];
        ptr->stackVal[ptr->top] = -1;
        ptr->top--;
        printf("Value of %d in stackVal[%d] is popped off from the stack\n", showData, ptr->top + 1);;
    }
}

void isEmpty(Stack* ptr){
    int state = 0;
    for(int i = 0; i < ptr->size; i++){
        if(ptr->stackVal[i] != -1){
            printf("Stack is not empty.\n");
            state++;
            break;
        }
    }
    if(state == 0)
        printf("Stack is empty.\n");
}

void isFull(Stack* ptr){
    int state = 0;
    for(int i = 0; i < ptr->size; i++){
        if(ptr->stackVal[i] == -1){
            printf("Stack is not full.\n");
            state++;
            break;
        }
    }
    if(state == 0)
        printf("Stack is full.\n");
}

int stackTop(Stack* ptr){
    if(ptr->top == -1){
        printf("Stack is empty so no top element.\n");
        return -1;
    }
    else{
        printf("The top element of the stack is %d.\n", ptr->stackVal[ptr->top]);
        return ptr->stackVal[ptr->top];
    }
}