#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void TraverseDoubly(struct Node *head)
{
    struct Node *ptr=head;
    while(ptr!=NULL)
    {
        printf("Element is : %d\n",ptr->data);
        ptr=ptr->next;
    }
};

void ReverseTraverseDoubly(struct Node *tail)
{
    struct Node *ptr=tail;
    while(ptr!=NULL)
    {
        printf("Element is : %d\n",ptr->data);
        ptr=ptr->prev;
    }
};
struct Node* Inserting(struct Node *head,int data)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->prev=NULL;
    ptr->next=head;
    if (head != NULL)
    {
        head->prev = ptr;
    }
    return ptr;
    
};

int main() 
{
    struct Node *n1,*n2,*n3,*n4;
    n1=(struct Node*)malloc(sizeof(struct Node));
    n2=(struct Node*)malloc(sizeof(struct Node));
    n3=(struct Node*)malloc(sizeof(struct Node));
    n4=(struct Node*)malloc(sizeof(struct Node));

    n1->data=69;
    n1->prev=NULL;
    n1->next=n2;
    
    n2->data=55;
    n2->prev=n1;
    n2->next=n3;
    
    n3->data=19;
    n3->prev=n2;
    n3->next=n4;
    
    n4->data=25;
    n4->prev=n3;
    n4->next=NULL;

    TraverseDoubly(n1);
    printf("\n");
    n1=Inserting(n1,2);
    ReverseTraverseDoubly(n4);
    printf("\n");
    TraverseDoubly(n1);

    free(n1);
    free(n2);
    free(n3);
    free(n4);

    return 0;
}
