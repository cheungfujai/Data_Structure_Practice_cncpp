#include <stdbool.h>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/*
struct ListNode{
    int val;
    struct ListNode* next;
};
*/

typedef struct ListNode ListNode;
struct ListNode{
    int val;
    ListNode *next;
};

ListNode* createList(int* arr, int size);
void displayList(ListNode *ptr);
void push_front(ListNode *ptr, int valAdd);
int size(ListNode *ptr);
int value_at(ListNode *ptr, int index);
bool empty(ListNode *ptr);
#endif