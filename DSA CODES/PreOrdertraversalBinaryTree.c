#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

void PreOrderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);

        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
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
    root->data = 69;
    root->right = child2;

    child1->left = leaf1;
    child1->data = 12;
    child1->right = NULL;

    child2->left = NULL;
    child2->data = 33;
    child2->right = leaf2;

    leaf1->left = NULL;
    leaf1->data = 53;
    leaf1->right = NULL;

    leaf2->left = NULL;
    leaf2->data = 23;
    leaf2->right = NULL;

/*         69
          /  \
         12   33
         /     \
        53      23
*/
    PreOrderTraversal(root);

    return 0;
}