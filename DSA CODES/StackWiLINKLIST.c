#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

// void isEmpty(struct Node *top)
// {
//     if(top==NULL)
//     {
//         printf("Link List Empty\n");
//     }else
//     {
//         printf("Link List Not Empty\n");
//     }
// }

int isFull()
{
    struct Node *p=(struct Node *)malloc(sizeof(struct Node ));
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
    if(!isFull())
    {
        printf("Stack Overflow\n");
        return top;
    }else
    {
        struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
        ptr->data=value;
        ptr->next=top;
        top=ptr; 
        return top;
    }
}

// void pop(struct Node *top)
// {
//     if(isEmpty)
//     {
//         printf("STack Underflow");
//     }else
//     {
//         struct Node*ptr=top;
//         top=top->next;
//         int c =ptr->data;
//         free(ptr);
//         return c;
//     }
// }

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
    // struct Node * second=(struct Node *)malloc(sizeof(struct Node));
    // struct Node * third=(struct Node *)malloc(sizeof(struct Node));
    // struct Node * fourth=(struct Node *)malloc(sizeof(struct Node));

    // top->data=12;
    // top->next=second;

    // second->data=21;
    // second->next=third;

    // third->data=11;
    // third->next=fourth;

    // fourth->data=76;
    // fourth->next=NULL;

    // isEmpty(top);
    isFull();

    printf("LinkList Before Updation\n");
    printLIS(top);

    push(top,1);
    push(top,12);
    push(top,44);
    
    printf("LinkList after Updation\n");
    printLIS(top);

    return 0;
}