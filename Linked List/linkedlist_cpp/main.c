#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include "linkedlist.c"
#include "linkedlist.h"


int main(){

    // Create Linked List
    int listSize;
    printf("Enter the size of linked list:  ");
    scanf("%d", &listSize);
    int* arrayList = (int*)malloc(listSize*sizeof(int));
        /* if use calloc() -> int* arrayList = (int*)calloc(listSize, sizeof(int)); */
    for(int i = 0; i < listSize; i++) arrayList[i] = i+5;
    ListNode* first = createList(arrayList, listSize);
    // Display Linked List
    displayList(first);
    // Display Linked List Size
    printf("Return size after function call = %d\n", size(first));
    // Check if the Linked List is Empty
    printf("Is the Linked List empty?  -> %s\n", empty(first)? "true":"false");
    // Return the value of the index input
    printf("Enter the index of the value you look for in the linked list:  ");
    int index;
    scanf("%d", &index);
    printf("The value you looked for in index[%d] = %d \n", index, value_at(first, index));

    free(arrayList);
    return 0;
}