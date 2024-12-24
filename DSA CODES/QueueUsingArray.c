#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if(q->f==q->r)
    {
        return 1;
    }else
    {
        return 0;
    }
}
int isFull(struct queue *q )
{
    if(q->r==q->size-1)
    {
    return 1;
    }
    return 0;
}

void enqueue(struct queue*q ,int value)
{
    if(isFull(q))
    {
        printf("This Queue is full \n");
    }else
    {
        q->r++;
        q->arr[q->r]=value;
    }
}

int dequeue(struct queue*q)
{
    int a=-1;
    if(isEmpty(q))
    {
        printf("Queue is empty \n" );
    }else
    {
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}
int main()
{
    struct queue q;
    q.size=100;
    q.f=-1;
    q.r=-1;    
    q.arr=(int *)malloc(q.size*sizeof(int));
    
    
    enqueue(&q,12);
    enqueue(&q,69);

    dequeue(&q);

    if(isFull(&q))
    {
        printf("Queue Is Full\n");
    }

     if(isEmpty(&q))
    {
        printf("Queue Is Empty\n");
    }

    return 0;
}