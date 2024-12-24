#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};


int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    return ptr->top == ptr->size - 1;
}

void push(struct stack *ptr, char valu)
{
    if (isFull(ptr))
    {
        printf("Stack Full OVERFLOW\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = valu;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack EMPTY NO POP Stack Underflow\n");
        return '\0';
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int matchingthesis(char a ,char b)
{
    if(a=='{'&& b=='}')
    {
        return 1;
    }
    if(a=='('&& b==')')
    {
        return 1;
    }
    if(a=='['&& b==']')
    {
        return 1;
    }
    return 0;
}

int MultipleParenthesisMatching(char *exp)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(sp,exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            char popped_ch = pop(sp);
            if(!matchingthesis(popped_ch,exp[i]))
            {
                return 0;
            }
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    char *exp = "(5+2{[90]})";

    if (MultipleParenthesisMatching(exp))
    {
        printf("The parenthesise is matching\n");
    }
    else
    {
        printf("The parenthesis is not matching\n");
    }
    return 0;
}
