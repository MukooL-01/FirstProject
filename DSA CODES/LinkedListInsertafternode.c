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

struct Node *InsertafterNode(struct Node *head,struct Node*PreviousNode ,int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;


    ptr->next = PreviousNode->next;
    PreviousNode->next=ptr;
    
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

    printf("LIst before Insertion\n");
    LinkedListTraversal(head);
    printf("\n");
    head = InsertafterNode(head,second, 69);
    printf("List after insertion\n");
    LinkedListTraversal(head);
    return 0;
}