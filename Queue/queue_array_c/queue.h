#ifndef QUEUE_H_
#define QUEUE_H_

typedef struct Queue Queue;
struct Queue{
    int front;
    int tail;
    int size;
    int* ptr;
};

Queue* createQueue(int data);
void enqueue(Queue* myQueue, int data);
void dequeue(Queue* myQueue);
void isEmpty(Queue* myQueue);
void isFull(Queue* myQueue);
void firstElement(Queue* myQueue);
void lastElement(Queue* myQueue);
void display();

#endif