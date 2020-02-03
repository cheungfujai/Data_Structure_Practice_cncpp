#include <stdio.h>
#include "queue.c"
#include "queue.h"

int main(){

    Queue* newQ = createQueue(6);
    enqueue(newQ, 1);
    enqueue(newQ, 2);
    enqueue(newQ, 3);
    enqueue(newQ, 4);
    firstElement(newQ);
    lastElement(newQ);
    enqueue(newQ, 5);
    enqueue(newQ, 6);
    display(newQ);
    isEmpty(newQ);
    isFull(newQ);
    enqueue(newQ, 7);
    dequeue(newQ);
    dequeue(newQ);
    dequeue(newQ);
    dequeue(newQ);
    dequeue(newQ);
    dequeue(newQ);
    display(newQ);
    dequeue(newQ);
    isEmpty(newQ);

    return 0;

}