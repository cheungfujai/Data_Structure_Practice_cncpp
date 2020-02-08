#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bst.h"

Node* insert(Node* root, int data){
    if(root == NULL){
        root = (Node*)malloc(sizeof(Node));
        root->val = data;
        root->left = root->right = NULL;
    }
    else if(data <= root->val){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}

bool search(Node* root, int data){
    if(root == NULL){
        printf("%d Not Found\n", data);
        return false;
    }
    else if(data == root->val){
        printf("%d Found\n", data);
        return true;
    }
    else if(data > root->val){
        return search(root->right, data);
    }
    else{
        return search(root->left, data);
    }
}

void getMin(Node* ptr){
    if(!ptr){
        printf("Tree does not exist\n");
    }
    else{
        Node* current = ptr;
        while(current->left){
            current = current->left;
        }
        printf("Min val = %d\n", current->val);
    }
}

void getMax(Node* ptr){
    if(!ptr){
        printf("Tree does not exist\n");
    }
    else{
        Node* current = ptr;
        while(current->right){
            current = current->right;
        }
        printf("Max val = %d\n", current->val);
    }
}

int countNode(Node* ptr){
    Node* root = ptr;
    if(!root){
        printf("Number of Node in BT = 0\n");
    }
    else{
        while(root){
            if(root->left && root->right){
                return 
            }
            else if(root->left && !root->right){

            }
            else{
                
            }
        }
    }
}