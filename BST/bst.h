#ifndef BST_H_
#define BST_H_

typedef struct Node Node; 
struct Node{
    Node* left;
    int val;
    Node* right;
};

Node* insert(Node* root, int data);
bool search(Node* root, int data);
int countNode(Node* ptr);
void getMin(Node* ptr);
void getMax(Node* ptr);

#endif