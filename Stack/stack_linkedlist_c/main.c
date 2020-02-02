#include <stdio.h>
#include <stdlib.h>
#include "stack.c"
#include "stack.h"

int main(){

    isempty();
    push(1);
    push(2);
    push(3);
    push(4);
    isempty();
    display();
    pop(4);
    display();
    push(999);
    topElement();
    display();

    return 0;
}