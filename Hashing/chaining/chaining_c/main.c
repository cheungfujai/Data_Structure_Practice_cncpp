#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include <time.h>
#include "chaining.c"
#include "chaining.h"

int main(){

    // Crreate an array and assign random number to the array within 50
    int htSize;
    printf("Enter the size of hashTable:  ");
    scanf("%d", &htSize);
    int* hashArray = (int*)malloc(htSize*sizeof(int));
    time_t t;
    srand((unsigned) time(&t));
    printf("The random number generated to the array:  -> ");
    for(int i = 0; i < htSize; i++){
        hashArray[i] = rand() % 50;
        printf("%d ", hashArray[i]);
    }
    printf("\n");

    // Create hash table......
    ListNode** hashTable = (ListNode**)malloc(htSize*sizeof(ListNode*));
    for(int i = 0; i < htSize; i++){
        hashsortInsert(hashTable, hashArray[i]);
    }
    printf("Done inserting array value to hash table ! \n\n");

    // search if value exists in the hash table
    searchHash(hashTable[hashFunction_1(hashArray[2])], hashArray[2]);
    //searchHash(hashTable, 8);

    return 0;
}