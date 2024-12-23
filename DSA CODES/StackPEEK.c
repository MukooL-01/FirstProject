#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

void peekVal(struct stack *ptr,int n)
{
    if(n>ptr->size)
    {
        printf("Exceeded Size cannot Peek\n");
    }else
    {
    printf("The Value at Index %d is : %d \n",n,ptr->arr[n]);
    };
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

    s->arr[4]=9;
    s->top++; 

    peekVal(s,4);

    printf("Array is : \n");
    printarr(s);
    
    free(s->arr);
    free(s);

    return 0;
}