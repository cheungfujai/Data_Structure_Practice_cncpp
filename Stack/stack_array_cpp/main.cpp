#include <iostream>
#include "stack.h"

using namespace std;

int main(){

    Stack myStack(5);
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.displayStack();
    myStack.pop();
    myStack.displayStack();
    myStack.isEmpty();
    myStack.isFull();
    myStack.stackTop();

    return 0;
}