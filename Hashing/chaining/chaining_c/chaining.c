#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include "chaining.h"



int hashFunction_1(int key){
    return key%10;
}

void insert(ListNode* ptr, int key){

}

void hashsortInsert(ListNode** head, int val, int key){
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = val;
    newNode->next = NULL;
    printf("Debug head[%d] = %p\n", key, head[key]->val);
    if(head[key]->next){
        printf("Debug\n");
        head[key] = newNode;
    }
    else{
        ListNode* curr = head[key], *prev = NULL;
        while(head[key]){
            if(head[key]->val < newNode->val){
                prev = head[key];
                head[key] = head[key]->next;   
            }
            else{
                prev->next = newNode;
                newNode->next = head[key];
                break;
            }
        }
    }
    printf("Stored in head = %d, address of new Node = %d", head[key]->val, newNode->val);
}