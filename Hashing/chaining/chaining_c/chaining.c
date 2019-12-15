#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include "chaining.h"

int hashFunction_1(int key){
    return key%10;
}

void hashsortInsert(ListNode **table, int val){
    int keyIndex = hashFunction_1(val);

    ListNode *newNode, *prev = NULL;
    
    ListNode *temp = *table;
    newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = val;
    newNode->next = NULL;

    if(table[keyIndex] == NULL){
        *table = prev;
    }
    else{
        while(temp && temp->val < val){
            prev = temp;
            temp = temp->next;
        }
        //prev->next = newNode;
        //newNode->next = temp;

        if(temp == *table){
            newNode->next = *table;
            *table = newNode;
        }
        else{
            newNode->next = prev->next;
            prev->next = newNode;
        }
    }
}

void searchHash(ListNode *table, int valFind){
    int counter = 0;
    ListNode *temp = table;
    while(table!=NULL){
        if(table->val == valFind){
            printf("testing ! \n");
            printf("Value of %d is found in the hashTable!\n", valFind);
            counter++;
            break;
        }
        table = table->next;
    }
    if(counter == 0){
        printf("Value of %d is not found in the Hash Table!\n", valFind);
    }
}