#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr) {
    return ptr->top == -1;
}

void pop(struct stack *sp) {
    if (isEmpty(sp)) {
        printf("Stack EMPTY NO POP\n");
    } else {
        sp->top--;
    }
}

void printarr(struct stack *ptr) {
    for (int i = 0; i <= ptr->top; i++) {
        printf("Element is: %d\n", ptr->arr[i]);
    }
}

int main() {
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 8;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    // Pushing elements manually...


    if (isEmpty(sp)) {
        printf("Cannot POP Stack is EMPTY\n");
    } else {
        pop(sp);
    }

    printarr(sp);

    free(sp->arr);
    free(sp);

    return 0;
}
