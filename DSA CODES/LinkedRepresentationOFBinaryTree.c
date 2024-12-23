#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node * Createanode(int data)
{
    struct Node * n;
    n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;  
}
int main()
{                                                                                                   
    struct Node *child1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    struct Node *child2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *leaf1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *leaf2 = (struct Node *)malloc(sizeof(struct Node));
    
    // struct Node * root = Createanode(23);
    // struct Node * child1 = Createanode(753);
    // struct Node * child2 = Createanode(13);
    // struct Node * leaf1 = Createanode(3);
    // struct Node * leaf2 = Createanode(69);

    root->left = child1;
    root->data = 69;
    root->right = child2;

    child1->left=leaf1;
    child1->data=12;
    child1->right=NULL;

    child2->left=NULL;
    child2->data=33;
    child2->right=leaf2;

    leaf1->left=NULL;
    leaf1->data=53;
    leaf1->right=NULL;

    leaf2->left=NULL;
    leaf2->data=23;
    leaf2->right=NULL;


    return 0;
}