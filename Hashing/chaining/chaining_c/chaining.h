/*
============================================================================================================================================
About_this_code: 	 Revising hashing.
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

typedef struct ListNode ListNode;
struct ListNode{
    int val;
    ListNode *next;
};

int hashFunction_1(int key);
void hashsortInsert(ListNode **table, int val);
void searchHash(ListNode *table, int valFind);

#endif