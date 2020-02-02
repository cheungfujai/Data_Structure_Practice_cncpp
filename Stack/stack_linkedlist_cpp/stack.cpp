#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

using namespace std;

Stack::Stack(){
    top = NULL;
}

Stack::~Stack(){
    delete []top; 
}

void Stack::push(int data){
    Block* ptr = new Block;
    ptr->val = data;
    ptr->next = top;
    top = ptr;
}

void Stack::pop(){
    if(!top){
        cout << "Stack is empty\n";
        return;
    }
    else{
        Block* ptr = top;
        top = top->next;
        delete(ptr);
    }
}

void Stack::display(){
    Block* ptr = top;
    if(!ptr){
        cout << "Stack is empty\n";
        return;
    }
    else{
        cout << "Top -> ";
        while(ptr){
            cout << ptr->val << " -> ";
            ptr = ptr->next;
        }
        cout << "NULL\n";
    }
}

void Stack::isempty(){
    if(!top){
        cout << "Stack is empty\n"; 
        return;
    }
    else{
        cout << "Stack is non-empty\n";
        return;
    }
}

void Stack::topElement(){
    if(!top){
        cout << "Stack is empty\n"; 
        return;
    }
    else{
        cout << "Top element = " << top->val;
    }
}