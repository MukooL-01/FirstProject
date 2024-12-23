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

int isFull(struct stack *ptr) {
    return ptr->top == ptr->size - 1;
}

void push(struct stack *sp, int value) {
    if (isFull(sp)) {
        printf("Stack Full OVERFLOW\n");
    } else {
        sp->top++;
        sp->arr[sp->top] = value;
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
    push(sp, 69);
    push(sp, 9);
    push(sp, 6);
    push(sp, 6);
    push(sp, 9);

    int value =55;

    if (isFull(sp)) {
        printf("Cannot push %d: Stack is full\n", value);
    } else {
        push(sp, value);
    }

    printarr(sp);

    free(sp->arr);
    free(sp);

    return 0;
}
