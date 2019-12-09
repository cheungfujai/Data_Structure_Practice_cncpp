#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include "chaining.h"



int hashFunction_1(int key){
    return key%10;
}

void insert(ListNode* ptr, int key){
    
}

void hashsortInsert(ListNode** head, int val){
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = val;
    newNode->next = NULL;

    if(!*head){
        *head = newNode;
    }
    else{
        ListNode* curr = *head, *prev = NULL;
        while(curr){
            if(curr->val < newNode->val){
                prev = curr;
                curr = curr->next;   
            }
            else{
                prev->next = newNode;
                newNode->next = curr;
            }
        }
    }
}