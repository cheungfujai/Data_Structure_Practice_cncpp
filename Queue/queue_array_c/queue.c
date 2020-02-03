#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

Queue* createQueue(int data){
    Queue* myQueue;
    myQueue->front = -1;
    myQueue->tail = -1;
    myQueue->size = data;
    myQueue->ptr = (int*)malloc(data * sizeof(int));
    for(int i = 0; i < myQueue->size; i++){
        myQueue->ptr[i] = -1;
    }
    return myQueue;
}

void enqueue(Queue* myQueue, int data){
    if(myQueue->tail == myQueue->size - 1){
        if(myQueue->front == -1){
            printf("Queue is Full!!!\n");
            return;
        }
        else{
            myQueue->tail == 0;
            myQueue->ptr[myQueue->tail] = data;
        }
    }
    else{
        myQueue->tail++;
        myQueue->ptr[myQueue->tail] = data;
    }
}

void dequeue(Queue* myQueue){
    if(myQueue->front == myQueue->tail){
        printf("Queue is Empty!!!\n");
    }
    else{
        if(myQueue->front == myQueue->size - 1){
            myQueue->front = 0;
            myQueue->ptr[myQueue->front] = -1;
        }
        else{
            myQueue->front++;
            myQueue->ptr[myQueue->front] = -1;
        }
    }
}

void isEmpty(Queue* myQueue){
    if(myQueue->front == myQueue->tail){
        printf("Queue is empty?  [True]\n");
    }
    else{
        printf("Queue is empty?  [False]\n");
    }
}

void isFull(Queue* myQueue){
    if((myQueue->front == -1 && myQueue->tail == myQueue->size - 1) || ( myQueue->front + 1 == myQueue->tail ) ){
        printf("Queue is full?  [True]\n");
    }
    else{
        printf("hey f = %d, t = %d\n", myQueue->front, myQueue->tail);
        printf("Queue is full?  [False]\n");
    }
}

void firstElement(Queue* myQueue){
    printf("First Element = %d\n", myQueue->ptr[myQueue->front + 1]);
}

void lastElement(Queue* myQueue){
    printf("Last Element = %d\n", myQueue->ptr[myQueue->tail]);
}

void display(Queue* myQueue){
    printf("Queue:  Tail -> ");
    for(int i = 0; i < myQueue->size; i++){
        if(myQueue->ptr[i] == -1){
            printf("[Empty] -> ");
        }
        else{
            printf("%d -> ", myQueue->ptr[i]);
        }
    }
    printf("Head\n");
}