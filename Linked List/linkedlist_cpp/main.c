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
    ListNode* ptrHead = first;

    // Display Linked List
    displayList(ptrHead);

    // Display Linked List Size
    printf("Return size after function call = %d\n", size(ptrHead));

    // Check if the Linked List is Empty
    printf("Is the Linked List empty?  -> %s\n", empty(ptrHead)? "true":"false");

    // Return the value of the index input
    printf("Enter the index of the value you look for in the linked list:  ");
    int index;
    scanf("%d", &index);
    printf("The value you looked for in index[%d] = %d \n", index, value_at(ptrHead, index));

    // Add a node to the head of the Linked List
    printf("Enter the new value add to the head of the Linked List:  ");
    int newheadVal;
    scanf("%d", &newheadVal);
    ptrHead = pushFront(ptrHead, newheadVal);
    displayList(ptrHead);

    // Remove the first node of the Linked List
    printf("Deleting the first node......\n");
    ptrHead = popFront(ptrHead);
    displayList(ptrHead);

    // Add a new value to the end of the Linked List
    printf("Enter the new value add to the tail of the Linked List:  ");
    int newtailVal;
    scanf("%d", &newtailVal);
    pushBack(ptrHead, newtailVal);
    displayList(ptrHead);

    // Remove the first node of the Linked List
    printf("Deleting the last node......\n");
    popBack(ptrHead);
    displayList(ptrHead);

    // Get value of the first Node
    printf("The value of the first node = %d\n", front(ptrHead));

    // Get value of the last Node
    printf("The value of the last node = %d\n", back(ptrHead));

    // Adding new node to the given index
    int newNodeval, indexAdd;
    printf("Enter the new 'value' and 'index' to add to the Linked List:  ");
    scanf("%d %d", &newNodeval, &indexAdd);
    insert(ptrHead, newNodeval, indexAdd);
    displayList(ptrHead);

    // Deleting a node with the index given
    int indexDel;
    printf("Enter the index to delete that node from the Linked List:  ");
    scanf("%d", &indexDel);
    ptrHead = erase(ptrHead, indexDel);
    displayList(ptrHead);

    // Returns the value of the node at nth position from the end of the list
    int indexReturn;
    printf("Enter the index of the Linked List to return:  ");
    scanf("%d", &indexReturn);
    ListNode* tempMain = value_n_from_end(ptrHead, indexReturn);
    displayList(tempMain);

    // Reverse the Linked List
    printf("Reversing the Linked List......  \n");
    ptrHead = reverse(ptrHead);
    displayList(ptrHead);

    //Removes the first item in the list with this value
    int removeVal;
    printf("Enter the the value you want to remove (Value will be deleted once only):  ");
    scanf("%d", &removeVal);
    removeValue(ptrHead, removeVal);
    displayList(ptrHead);

    printf("[ - Linked List implementation is done, thank you - ] \n");
    free(arrayList);
    return 0;
}