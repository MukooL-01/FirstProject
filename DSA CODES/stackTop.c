#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int staackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
} 

int staackBOTTOM(struct stack *ptr)
{
    return ptr->arr[0];
} 

void printarr(struct stack *ptr)
{
    for(int i=0;i<=ptr->top;i++)
    {
        printf("Element is : %d\n",ptr->arr[i]);
    }
}
int main()
{
    struct stack* s = (struct stack*)malloc(sizeof(struct stack));

    s->size = 6;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
//. Pushing an element manually...
    s->arr[0]=69;
    s->top++; 

    s->arr[1]=9;
    s->top++; 

    s->arr[2]=6;
    s->top++; 

    s->arr[3]=6;
    s->top++; 

    s->arr[4]=99;
    s->top++; 

    staackTop(s);
    staackBOTTOM(s);

    printf("Array is : \n");
    printarr(s);

    printf("THE BOTTOM VALUE OF THIS STACK IS : %d\n",staackBOTTOM(s));
    printf("THE TOP VALUE OF THIS STACK IS : %d\n",staackTop(s));
    
    free(s->arr);
    free(s);

    return 0;
}