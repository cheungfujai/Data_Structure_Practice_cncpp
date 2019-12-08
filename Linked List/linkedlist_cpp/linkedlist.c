#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include "linkedlist.h"

ListNode* createList(int* arr, int size){
    ListNode *last, *newPtr;
    ListNode *first = (ListNode*)malloc(sizeof(ListNode));
    first->val = arr[0];
    first->next = NULL;
    last = first;

    for(int i = 1; i < size; i++){
        newPtr = (ListNode*)malloc(sizeof(ListNode));
        newPtr->val = arr[i];
        newPtr->next = NULL;
        last->next = newPtr;
        last = newPtr;
    }
    return first;
}

void displayList(ListNode *ptr){
    ListNode *temp = ptr;
    printf("ListNode created (random number) = ");
    while(temp){
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

void push_front(ListNode *ptr, int valAdd){ // Current
    
}

int size(ListNode *ptr){
    ListNode *temp = ptr;
    int counter = 0;
    while(temp){
        temp = temp->next;
        counter++;
    }
    return counter;
}

int value_at(ListNode *ptr, int index){
    ListNode *temp = ptr;
    int counter = 0;
    while(temp){
        if(counter == index){
            return temp->val;
        }
        else{
            temp = temp->next;
            counter++;
        }
    }
    return NULL;
}

bool empty(ListNode *ptr){
    ListNode *temp = ptr;
    if(!temp){
        return true;
    }
    else{ // Not empty
        return false;
    }
}