#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int adjMatrix[MAX][MAX];

int visited[MAX];

struct Queue
{
    int items[MAX];
    int front , rear;

};

struct Queue * CreateQueue()
{
    struct Queue *q =(struct Queue *)malloc(sizeof(struct Queue));
    q->front=-1;
    q->rear=-1;
    return q;
}

int isEmpty(struct Queue *q)
{
    if(q->rear==-1) return 1;
    return 0;
}

void enqueue(struct Queue*q,int value)
{
    if(q->rear==MAX-1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if(q->front==-1)
        q->front =0;
        q->rear++;
        q->items[q->rear]=value;
    }
}

int dequeue(struct Queue*q)
{
    int item;
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
        item = -1;
    }
    else
    {
        item=q->items[q->front];
        q->front++;
        if(q->front > q->rear)
        {
            q->front=q->rear=-1;
        }
    }
    return item;
}

void BFS(int startNode,int n)
{
    struct Queue*q=CreateQueue();
    enqueue(q,startNode);
    visited[startNode]=1;

    printf("BFS traversal starting node is %d\t",startNode);

    while (!isEmpty(q))
    {
        int currentNode = dequeue(q);
        printf("\n%d\t",currentNode);

        for(int i=1;i<=n;i++)
        {
        if(adjMatrix[currentNode][i]==1 && !visited[i])
        {
            enqueue(q,i);
            visited[i]=1; 
        } 
        }
    }
    printf("\n");
}

int main()
{
int n=5;
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=n;j++)
    {
        adjMatrix[i][j]=0;
    }
    visited[i]=0;
}

   adjMatrix[1][2] = 1; 
   adjMatrix[2][1] = 1;  // Edge between 1 and 2
    adjMatrix[1][4] = 1; 
    adjMatrix[4][1] = 1;  // Edge between 1 and 4
    adjMatrix[2][3] = 1; 
    adjMatrix[3][2] = 1;  // Edge between 2 and 3
    adjMatrix[2][5] = 1; 
    adjMatrix[5][2] = 1;  // Edge between 2 and 5
    adjMatrix[4][5] = 1; 
    adjMatrix[5][4] = 1;  // Edge between 4 and 5

BFS(1,n);
    return 0;
}