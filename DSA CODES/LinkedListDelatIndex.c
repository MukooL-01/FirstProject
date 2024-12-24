#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("ELement is : %d\n", ptr->data);
        ptr = ptr->next;
    }
};

struct Node * DelValue(struct Node *head,int value)
{
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->next !=NULL && q->data !=value)
    {
    p=p->next; 
    q=q->next;   
    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }   
    return head;
};


int main() 
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;
    
    fourth->data = 66;
    fourth->next = NULL;
    
    int value ;
    printf("Enter a index to delete a number : \n");
    scanf("%d",&value);

    printf("LIst before Deletetion \n");
    LinkedListTraversal(head);
    printf("\n");
    head=DelValue(head,value);
    printf("LIst after Deletetion \n");
    LinkedListTraversal(head);
    return 0;
}