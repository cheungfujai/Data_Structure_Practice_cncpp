#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bst.h"
#include "bst.c"

int main(){

    Node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 2);
    root = insert(root, 6);
    root = insert(root, 12);
    root = insert(root, 18);

    search(root, 18);
    search(root, 22);

    getMin(root);
    getMax(root);

    /*
    int count = 0;
    count = countNode(root, count);
    */

    int height = getHeight(root);
    printf("heigher of the tree = %d\n", height);
    

    return 0;

}