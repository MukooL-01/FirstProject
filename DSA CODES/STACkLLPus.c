#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

int isEmpty(struct Node *top)
{
    if(top==NULL)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int isFull(struct Node*top)
{
    struct Node *p=(struct Node *)malloc(sizeof(struct Node));
    if(p==NULL)
    {
        return 1;
    }else
    {
        free(p);
        return 0;
    }
}

struct Node * push(struct Node *top,int value)
{
    if(isFull(top))
    {
        printf("Stack Overflow\n");
    }else
    {
        struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
        ptr->data=value;
        ptr->next=top;
        top=ptr; 
        return top;
    }
}

void printLIS(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is : %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main() 
{ 

    struct Node * top=NULL;

    // isEmpty(top);
    isFull(top);

    printf("LinkList Before Updation\n");
    printLIS(top);

    top=push(top,1);
    top=push(top,12);
    top=push(top,44);
    top=push(top,69);
    
    printf("LinkList after Updation\n");
    printLIS(top);

    return 0;
}