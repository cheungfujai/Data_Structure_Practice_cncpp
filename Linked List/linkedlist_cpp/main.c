#include <stdio.h>
#include <stdlib.h> 
#include "linkedlist.c"
#include "linkedlist.h"


int main(){

    // Create Linked List
    int listSize;
    printf("Enter the size of linked list:  ");
    scanf("%d", &listSize);
    int* arrayList = (int*)malloc(listSize*sizeof(int));
        /* if use calloc() -> int* arrayList = (int*)calloc(listSize, sizeof(int)); */
    for(int i = 0; i < listSize; i++) arrayList[i] = i;
    ListNode* first = createList(arrayList, listSize);

    // Display Linked List
    displayList(first);

    // Display Linked List Size;
    printf("Return size after function call = %d\n", size(first));

    free(arrayList);
    return 0;
}