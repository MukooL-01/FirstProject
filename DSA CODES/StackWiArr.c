#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
    return 1;
    }else
    {
    return 0;
    }
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


    if(isEmpty(s))
    {
        printf("Stack is Empty\n");
    }else{
        printf("Stack is not Empty\n");
    }

    free(s);
    free(s->arr);

    return 0;
}