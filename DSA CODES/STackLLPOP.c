#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};
    struct Node * top=NULL;

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

int pop()
{
    if(isEmpty(top))
    {
        printf("Stack Underflow\n");
    }else
    {
        struct Node *ptr=top;
        top=(top)->next;
        int c =ptr->data; 
        free(ptr);
        return c;
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
    isFull(top);

    top=push(top,1);
    top=push(top,12);
    top=push(top,44);
    top=push(top,69);
    top=push(top,90);

    int element=pop(top);
    printf("Popped element is %d\n",element);
    
    printf("LinkList after Updation\n");
    printLIS(top);

    return 0;
}