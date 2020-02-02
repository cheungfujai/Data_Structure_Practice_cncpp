#include <iostream>
#include "stack.cpp"
#include "stack.h"

using namespace std;

int main(){

    Stack myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.display();
    myStack.pop();
    myStack.push(999);
    myStack.display();
    myStack.isempty();
    myStack.topElement();
    return 0;

}