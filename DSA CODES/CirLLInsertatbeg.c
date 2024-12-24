#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void CircularLinkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr->next != head)
    {
        printf("ELement is : %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("Element is : %d", ptr->data);
};

struct Node *InsertatbegCLL(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

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
    fourth->next = head;

    printf("CLL before Insertion : \n");
    CircularLinkedListTraversal(head);
    printf("\n");
    printf("CLL after Insertion : \n");
    head = InsertatbegCLL(head, 67);
    CircularLinkedListTraversal(head);

    return 0;
}