#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *top=NULL;

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

int isFull()
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
    if(isFull())
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


int peek(int position)
{
    struct Node *ptr=top;
    for (int i = 0; (i < position-1) && (ptr!=NULL); i++)   
    {
        ptr=ptr->next;
    }
    if(ptr!=NULL)
    {
        printf("Element at POsition %d is %d\n",position,ptr->data);
    }else
    {
        return -1;
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
    top=push(top,69);
    top=push(top,55);
    top=push(top,12);
    top=push(top,32);
    top=push(top,112);
    

    printf("*** LINKLIST ***\n");
    printLIS(top);
    peek(3);

    return 0;
}