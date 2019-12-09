/*
============================================================================================================================================
About_this_code: 	 Revising linked list, function implement myself accroding to [https://github.com/jwasham/coding-interview-university]
Compiler: 		 GCC, GNU Compiler Collection, "g++ -o main.exe main.c"
Author: 		 Cheung Tsz Yin
Github:			 kevin909cty
Date:   		 13 / 10 / 2019
Contact email: 	 	 cheungkevinviola909@gmail.com
============================================================================================================================================
*/
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
ListNode* pushFront(ListNode *ptr, int valAdd);
ListNode* popFront(ListNode *ptr);
ListNode* erase(ListNode *ptr, int index);
ListNode* value_n_from_end(ListNode *ptr, int index);
ListNode* reverse(ListNode *ptr);
ListNode* removeValue(ListNode *ptr, int delVal);
void insert(ListNode *ptr, int valAdd, int index);
void pushBack(ListNode *ptr, int valAdd);
void popBack(ListNode *ptr);
void displayList(ListNode *ptr);
int size(ListNode *ptr);
int value_at(ListNode *ptr, int index);
int front(ListNode *ptr);
int back(ListNode *ptr);
bool empty(ListNode *ptr);

#endif