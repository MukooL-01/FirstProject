#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *left;
    struct Node *right;
    int data;
};

void InOrderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        InOrderTraversal(root->left);
        printf("%d\t", root->data);
        InOrderTraversal(root->right);
    }
}

int IsBST(struct Node *root)
{
    static struct Node * prev = NULL; 
    if (root != NULL)
    {
        if(!IsBST(root->left))
        {
            return 0;
        }
        if(prev!=NULL && root->data <=prev->data)
        {
            return 0;
        }
        prev = root;
        return IsBST(root->right);
    }
    else
    {
        return 1;
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

    InOrderTraversal(root);
    if(IsBST(root))
    {
        printf("\nThis tree is BST\n");
    }
    else
    {
        printf("\nThis tree is Not a BST\n");
    }

    return 0;
}