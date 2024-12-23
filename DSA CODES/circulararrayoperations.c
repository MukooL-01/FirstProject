#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Circularqueue
{
    int f;
    int r;
    int size;
    int *arr;
};

int isFull(struct Circularqueue *ptr)
{
    if (((ptr->r + 1) % ptr->size) == ptr->f)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct Circularqueue *ptr)
{
    if (ptr->f == ptr->r)
    {
        return 1;
    }
    return 0;
}

int enqueue(struct Circularqueue *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Queue Full !!OVERFLOW!! Cannot Enqueue\n");
        return -1;
    }
    else
    {
        ptr->r = (ptr->r + 1) % ptr->size;
        ptr->arr[ptr->r] = val;
    }
    return val;
}

int dequeue(struct Circularqueue *ptr)
{
    int valu =-1;
    if (isEmpty(ptr))
    {
        printf("Queue Empty !!UNDERFLOW!! Dequeue Failed\n");
        return -1;
    }
    else
    {
        ptr->f=(ptr->f+1)%ptr->size;
        valu=ptr->arr[ptr->f];
    }
    return valu;
}

int main()
{

    struct Circularqueue q; 
    q.size = 4;
    q.f = 0;
    q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    printf("Enqueueing Element : %d\n ",enqueue(&q, 69));
    printf("Enqueueing Element : %d\n ",enqueue(&q, 77));
    printf("Enqueueing Element : %d\n ",enqueue(&q, 61));
    printf("Enqueueing Element : %d\n ",enqueue(&q, 12));

    printf("Dequeueing Element : %d\n ",dequeue(&q));
    printf("Dequeueing Element : %d\n ",dequeue(&q));
    printf("Dequeueing Element : %d\n ",dequeue(&q));
    printf("Dequeueing Element : %d\n ",dequeue(&q));

    return 0;
}