#include <stdio.h>
#include <stdlib.h>

#define SIZE 10  // Maximum size of the deque

struct Deque {
    int arr[SIZE];
    int front;
    int rear;
};

void initializeDeque(struct Deque *dq) {
    dq->front = -1;
    dq->rear = -1;
}

int isFull(struct Deque *dq) {
    return ((dq->front == 0 && dq->rear == SIZE - 1) || (dq->front == dq->rear + 1));
}

int isEmpty(struct Deque *dq) {
    return (dq->front == -1);
}

void enqueueFront(struct Deque *dq, int val) {
    if (isFull(dq)) {
        printf("Deque is Full !!OVERFLOW!!\n");
        return;
    }

    if (dq->front == -1) {  // Initially empty deque
        dq->front = dq->rear = 0;
    } else if (dq->front == 0) {
        dq->front = SIZE - 1;  // Wrap around
    } else {
        dq->front--;
    }

    dq->arr[dq->front] = val;
    printf("Enqueued %d at the front.\n", val);
}

void enqueueRear(struct Deque *dq, int val) {
    if (isFull(dq)) {
        printf("Deque is Full !!OVERFLOW!!\n");
        return;
    }

    if (dq->front == -1) {  // Initially empty deque
        dq->front = dq->rear = 0;
    } else if (dq->rear == SIZE - 1) {
        dq->rear = 0;  // Wrap around
    } else {
        dq->rear++;
    }

    dq->arr[dq->rear] = val;
    printf("Enqueued %d at the rear.\n", val);
}

void dequeueFront(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is Empty !!UNDERFLOW!!\n");
        return;
    }

    printf("Dequeued %d from the front.\n", dq->arr[dq->front]);

    if (dq->front == dq->rear) {  // Only one element was present
        dq->front = dq->rear = -1;
    } else if (dq->front == SIZE - 1) {
        dq->front = 0;  // Wrap around
    } else {
        dq->front++;
    }
}

void dequeueRear(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is Empty !!UNDERFLOW!!\n");
        return;
    }

    printf("Dequeued %d from the rear.\n", dq->arr[dq->rear]);

    if (dq->front == dq->rear) {  // Only one element was present
        dq->front = dq->rear = -1;
    } else if (dq->rear == 0) {
        dq->rear = SIZE - 1;  // Wrap around
    } else {
        dq->rear--;
    }
}

int main() {
    struct Deque dq;
    initializeDeque(&dq);

    enqueueFront(&dq, 10);
    enqueueRear(&dq, 20);
    enqueueFront(&dq, 30);
    enqueueRear(&dq, 40);

    dequeueFront(&dq);
    dequeueRear(&dq);

    return 0;
}
