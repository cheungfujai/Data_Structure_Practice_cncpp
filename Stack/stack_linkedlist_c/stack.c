#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push(int data){
    Stack* ptr = (Stack*)malloc(sizeof(Stack));
    ptr->val = data;
    ptr->next = top;
    top = ptr;
}

void pop(){
    if(!top){
        printf("Stack is empty\n");
        return;
    }
    else{
        Stack* ptr = top;
        top = top->next;
        free(ptr);
    }
}

void display(){
    Stack* ptr = top;
    if(!ptr){
        printf("Stack is empty\n");
        return;
    }
    else{
        printf("Top -> ");
        while(ptr){
            printf("%d -> ", ptr->val);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}

void isempty(){
    if(top){
        printf("Stack is non-empty\n");
    }
    else{
        printf("Stack is empty\n");
    }
}

void topElement(){
    if(top){
        printf("Top Element of the Stack = %d\n", top->val);
    }
    else{
        printf("Stack is empty\n");
    }
}