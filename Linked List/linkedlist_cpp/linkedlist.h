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
int size(ListNode *ptr);

#endif