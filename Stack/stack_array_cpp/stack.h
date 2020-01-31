#ifndef STACK_H
#define STACK_H

class Stack{
private:
    int size;
    int top;
    int* stackVal;
public:
    Stack(int passinSize){
        size = passinSize;
        top = -1;
        stackVal = new int[size];
    }
    ~Stack(){
        delete []stackVal;
    }
    void displayStack();
    void push(int data);
    void pop();
    void isEmpty();
    void isFull();
    int stackTop();
};

#endif

