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

ListNode* pushFront(ListNode *ptr, int valAdd){ 
    ListNode *newHead = (ListNode*)malloc(sizeof(ListNode));
    newHead->val = valAdd;
    newHead->next = ptr;
    ptr = newHead;
    return ptr;
}

ListNode* popFront(ListNode *ptr){
    ListNode *temp = ptr;
    ptr = ptr->next;
    temp->next = NULL;
    free(temp);
    return ptr;
}

void popBack(ListNode *ptr){
    while(ptr->next->next){
        ptr = ptr->next;
    }
    ListNode *temp = ptr->next;
    ptr->next = NULL;
    free(temp);
}

void pushBack(ListNode *ptr, int valAdd){
    ListNode *temp = ptr;
    while(temp->next){
        temp = temp->next;
    }
    ListNode* newTail = (ListNode*)malloc(sizeof(ListNode));
    newTail->val = valAdd;
    newTail->next = NULL;
    temp->next = newTail;
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

int front(ListNode *ptr){
    return ptr->val;
}

int back(ListNode *ptr){
    while(ptr->next){
        ptr = ptr->next;
    }
    return ptr->val;
}

void insert(ListNode *ptr, int valAdd, int index){
    if(index == 0){
        ListNode *newNode = (ListNode*)malloc(sizeof(ListNode));
        newNode->val = valAdd;
        newNode->next = ptr;
    }
    else{
        ListNode* prev = ptr;
        ListNode* temp = ptr->next;
        int counter = 1;
        while(temp){
            if(counter == index){
                ListNode *newNode = (ListNode*)malloc(sizeof(ListNode));
                newNode->val = valAdd;
                newNode->next = temp;
                prev->next = newNode;
                break;
            }
            temp = temp->next;
            counter++;
        }
    }
}

ListNode* erase(ListNode *ptr, int index){
    if(index == 0){
        ListNode *temp = ptr;
        temp = temp->next;
        free(ptr);
        return temp;
    }
    else{
        ListNode *temp = ptr, *prev = NULL;
        int counter = 1;
        while(temp){
            if(counter == index){
                prev = temp;
                temp = temp->next;
                prev->next = prev->next->next;
                printf("  -  check prev->val = %d, temp->val = %d, temp->next->val = %d\n", prev->val, temp->val, temp->next->val);
                free(temp);
                printf("  -  check2 prev->val = %d, prev->next->val = %d\n", prev->val, prev->next->val);
                return ptr;
            }
            prev = temp;
            temp = temp->next;
            counter++;
        }
        return ptr;
    }
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

ListNode* value_n_from_end(ListNode *ptr, int index){
    ListNode *temp = ptr;
    int counter = 0;
    while(temp){
        if(counter == index){
            return temp;
        }
        else{
            temp = temp->next;
            counter++;
        }
    }
    return NULL;
}

ListNode* reverse(ListNode *ptr){
    ListNode *prev = NULL, *next = NULL, *curr = ptr;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    } 
    return prev;
}

ListNode* removeValue(ListNode *ptr, int delVal){
    ListNode *temp = ptr;
    if(temp ->val == delVal){
        temp = temp->next;
        return temp;
    }
    else{
        ListNode* prev = NULL, *head = ptr;
        while(temp){
            prev = temp;
            temp = temp->next;
            if(temp->val == delVal){
                prev->next = prev->next->next;
                free(temp);
                break;
            }
        }
        return head;
    }
}