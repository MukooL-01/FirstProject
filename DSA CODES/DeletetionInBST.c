#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *left;
    struct Node *right;
    int data;
};

struct Node * InorderPre(struct Node*root)
{
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}

struct Node*DeleteNodeInBST(struct Node *root,int value)
{
    struct Node*iPre;
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==NULL&&root->right==NULL&&root->data==value)
    {
        free(root);
        return NULL;
    }
    //searching for the node to be deleted
    if(root->data>value)
    {
        root->left=DeleteNodeInBST(root->left,value);
    }
    else if(root->data<value)
    {
        root->right=DeleteNodeInBST(root->right,value);
    }
    //node found
    else
    {
        iPre=InorderPre(root);
        root->data=iPre->data;
        //replacing data of root with InorderPre Data
        root->left=DeleteNodeInBST(root->left,iPre->data);
    }
    
}

void InOrdertraversal(struct Node*root)
{
    if(root!=NULL)
    {
        InOrdertraversal(root->left);
        printf("%d\t",root->data);
        InOrdertraversal(root->right);
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

    InOrdertraversal(root);
    DeleteNodeInBST(root,3);
    printf("\n");
    InOrdertraversal(root);
    
    return 0;
}