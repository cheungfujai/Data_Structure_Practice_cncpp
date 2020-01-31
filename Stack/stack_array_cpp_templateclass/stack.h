#ifndef STACK_H
#define STACK_H

template <class S>
class Stack{
private:
    S size;
    S top;
    S* stackVal;
public:
    Stack(S size);
    ~Stack();
    void displayStack();
    void push(S data);
    void pop();
    void isEmpty();
    void isFull();
    S stackTop();
};

#endif

