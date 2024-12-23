#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *left;
    struct Node *right;
    int data;
};

struct Node *Search(struct Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return Search(root->left, key);
    }
    else
    {
        return Search(root->right, key);
    }
}

void InsertionInBST(struct Node*root,int key)
{
    struct Node * prev=NULL;
    while (root!=NULL)
    {
        prev=root;
        if(root->data==key)
        {
        printf("Insertion Failed\n");
        return;
        }
        else if(root->data>key)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    struct Node*new=(struct Node*)malloc(sizeof(struct Node));
    new->data=key;
    new->left=NULL;
    new->right=NULL;
    
    if(prev->data>key)
    {
        prev->left=new;
    }
    else
    {
        prev->right=new;
    }
}

int main()
{
    struct Node *child1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    struct Node *child2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *leaf1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *leaf2 = (struct Node *)malloc(sizeof(struct Node));

    root->left = child1;
    root->data = 29;
    root->right = child2;

    child1->left = leaf1;
    child1->data = 12;
    child1->right = NULL;

    child2->left = NULL;
    child2->data = 33;
    child2->right = leaf2;

    leaf1->left = NULL;
    leaf1->data = 3;
    leaf1->right = NULL;

    leaf2->left = NULL;
    leaf2->data = 69;
    leaf2->right = NULL;

    /*         29
              /  \
             12   33
             /     \
            3      69
    */

    // Inorder Traversal of Binary Search tree Gives Assending Sorted Array

    int key=70;
    InsertionInBST(root,key);
    struct Node *result = Search(root, key);

    if (result != NULL)
    {
        printf("Key %d found in the tree.\n", key);
    }
    else
    {
        printf("Key %d not found in the tree.\n", key);
    }

    return 0;
}