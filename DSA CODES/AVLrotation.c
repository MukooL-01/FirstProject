#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key;
    struct Node * left;
    struct Node * right;
    int height;
};

void PreOrderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->key);

        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }
}

int max(int a,int b)
{
    return a>b?a:b;
}

int getheight(struct Node*n)
{
    if(n==NULL)
    {
        return 0;
    }
    else
    {
        return n->height;
    }
}

struct Node* CreateNode(int key)
{
    struct Node * node=(struct Node*)malloc(sizeof(struct Node));
    node->key=key;
    node->left=NULL;
    node->right=NULL;
    node->height=1;
    return node;
}

int getbalancedFactor(struct Node*n)
{
    if(n==NULL)
    {
    return 0;
    }
    return (getheight(n->left)-getheight(n->right));
}

struct Node*rightRotate(struct Node*y)
{
    struct Node*x=y->left;
    struct Node*T2=x->right;
    x->right=y;;
    y->left=T2;

    y->height=max(getheight(y->right),getheight(y->left))+1;
    x->height=max(getheight(x->right),getheight(x->left))+1;

    return x;
}

struct Node* leftRotate(struct Node*x)
{
    struct Node *y=x->right;
    struct Node*T2=y->left;
    y->left=x;
    x->right=T2;

    y->height=max(getheight(y->right),getheight(y->left))+1;
    x->height=max(getheight(x->right),getheight(x->left))+1;
    
    return y;
}
// insert 2nd type

struct Node*insert(struct Node*node,int key)
{
    if(node==NULL)
    {
        return CreateNode(key);
    }
    if(node->key>key)
    {
        node->left=insert(node->left,key);
    }
    else if(key>node->key)
    {
        node->right=insert(node->right,key);
    }
    else
    {
        return node;
    }
    node->height=1 + max(getheight(node->left),getheight(node->right));
    int bf=getbalancedFactor(node);
    
    // For Left Left Case
    if(bf>1 && key < node->left->key)
    {
        return rightRotate(node);
    }
    //For Right Right Case
    if(bf<-1 && key > node->right->key)
    {
        return leftRotate(node);
    }
    //Left Right case
    if(bf>1 && key > node->left->key)
    {
        node->left=leftRotate(node->left);
        return rightRotate(node);
    }
    //Right Left case
    if(bf<-1 && key < node->right->key)
    {
        node->right=rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}

int main()
{
    struct Node*root=NULL;
    root=insert(root,1);
    root=insert(root,2);
    root=insert(root,4);
    root=insert(root,5);
    root=insert(root,6);
    root=insert(root,3);

    PreOrderTraversal(root);

    return 0;
}