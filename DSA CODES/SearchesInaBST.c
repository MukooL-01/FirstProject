// Normal Search in A BST

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

// Interative Search In A BST

struct Node *InterativeSearch(struct Node *root, int key)
{
    while (root != NULL)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
        return NULL;
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
    int key = 69;
    struct Node *result = Search(root, key);
    struct Node *Result = InterativeSearch(root, key);

    if (result != NULL)
    {
        printf("Key %d found in the tree.\n", key);
    }
    else
    {
        printf("Key %d not found in the tree.\n", key);
    }

    if (Result != NULL)
    {
        printf("Key %d found in the tree.\n", key);
    }
    else
    {
        printf("Key %d not found in the tree.\n", key);
    }

    // Free allocated memory
    free(leaf1);
    free(leaf2);
    free(child1);
    free(child2);
    free(root);

    return 0;
}

// Interative Search In A BST
