#ifndef STACK_H_
#define STACK_H_

using namespace std;

class Stack;
class Block{
private:
    int val;
    Block* next;
friend Stack;
};

class Stack{
private:
    Block *top;
public:
    Stack();
    ~Stack();
    void push(int data);
    void pop();
    void display();
    void isempty();
    void topElement();
};

#endif