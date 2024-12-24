#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data ;
    struct Node *next;
};

void Linklisttraversal(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is : %d\n",ptr->data);
        ptr=ptr->next;
    }
};
struct Node * deleteatfir(struct Node *head)
{
    struct Node *p=head;
    struct Node*q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
   p->next=NULL;
    free(q);
    return head;

};


int main() 
{
    int index=2;
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*second=(struct Node*)malloc(sizeof(struct Node));
    struct Node*third=(struct Node*)malloc(sizeof(struct Node));
    struct Node*fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=55;
    head->next=second;

    second->data=69;
    second->next=third;

    third->data=53;
    third->next=fourth;

    fourth->data=9;
    fourth->next=NULL;

    printf("List before deletetion : \n");
    Linklisttraversal(head);
    
    printf("List after deletetion : \n");
    head=deleteatfir(head);
    Linklisttraversal(head);
    return 0;
}