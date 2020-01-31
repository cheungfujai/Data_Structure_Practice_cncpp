#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

using namespace std;

template <class S>
Stack<S>::Stack(S size){
    this->size = size;
    top = -1;
    stackVal = new S[size];
}

template <class S>
Stack<S>::~Stack(){
    delete []stackVal;
}

template <class S>
void Stack<S>::displayStack(){
    for(int i = 0; i < size; i++){
        if(stackVal[i] != -1){
            cout << stackVal[i] << " ";
        }
        else{
            cout << "[Empty] ";
        }
    }
    cout << "\n";
}

template <class S>
void Stack<S>::push(S data){
    if(top < size){
        top++;
        stackVal[top] = data;
        for(int i = size - 1; i > top; i--){
            stackVal[i] = -1;
        }
        cout << data << " is pushed to the stack\n";
    }
    else{
        cout << "Hey dude, Stack Overflow.\n";
    }
}

template <class S>
void Stack<S>::pop(){
    if(top == -1){
        cout << "Hey dude, Stack Underflow.\n";
    }
    else{
        int showData = stackVal[top];
        stackVal[top] = -1;
        top--;
        cout << "Value of " << showData << " in stackVal[" << top+1 << "] is popped off from the stack\n";
    }
}

template <class S>
void Stack<S>::isEmpty(){
    int state = 0;
    for(int i = 0; i < size; i++){
        if(stackVal[i] != -1){
            cout << "Stack is not empty.\n";
            state++;
            break;
        }
    }
    if(state == 0)
        cout << "Stack is empty.\n";
}

template <class S>
void Stack<S>::isFull(){
    int state = 0;
    for(int i = 0; i < size; i++){
        if(stackVal[i] == -1){
            cout << "Stack is not full.\n";
            state++;
            break;
        }
    }
    if(state == 0)
        cout << "Stack is full.\n";
}

template <class S>
S Stack<S>::stackTop(){
    if(top == -1){
        cout << "Stack is empty so no top element.\n";
        return -1;
    }
    else{
        cout << "The top element of the stack is " << stackVal[top]<< ".\n";
        return stackVal[top];
    }
}