#include <iostream>
#include <stdio.h>
#include "hashChaining.h"

using namespace std;

int main(){

    // Create Table size:
    int tableSize;
    cout << "Enter the size of Hash table:  ";    
    cin >> tableSize;
    cout << "The size you entered is:  " << tableSize << "\n";

    // Create Hash Table:
    struct Node *hashTable = (struct Node*) malloc (tableSize * sizeof(struct Node));
    for(int i = 0; i < tableSize; i++){
        hashTable[i].val = i;
        hashTable[i].next = NULL;
    }

    while(hashTable){
        cout << "HashTable = " << hashTable.val << "\n";
        hashTable = hashTable->next;
    }

    return 0;
}