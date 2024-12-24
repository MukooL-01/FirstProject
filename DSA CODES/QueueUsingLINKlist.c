#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
    struct Node *f = NULL;
    struct Node *r = NULL;

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("ELement is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *f)
{
    if (f == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull()
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}

void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (isFull())
    {
        printf("Queue Full\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct Node *u = f;
    if (isEmpty(f))
    {
        printf("Cannot Dequeue !!Queue EMPTY ::UNDERFLOW::!!\n");
    }
    else
    {
        f = f->next;
        val = u->data;
        free(u);
    }
    return val;
}

int main()
{
    enqueue(69);
    enqueue(88);
    enqueue(12);

    LinkedListTraversal(f);

    printf("ELEMENT DELETED IS : %d\n",dequeue());
    printf("ELEMENT DELETED IS : %d\n",dequeue());
    // printf("ELEMENT DELETED IS : %d\n",dequeue());

    LinkedListTraversal(f);

    return 0;
}