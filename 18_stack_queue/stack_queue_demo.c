#include <stdio.h>

#define MAX 5

int main() {

    int stack[MAX];
    int queue[MAX];

    int top = -1;
    int front = 0;
    int rear = -1;

    // Stack
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    printf("Stack: ");

    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }

    printf("\n");

    // Queue
    queue[++rear] = 10;
    queue[++rear] = 20;
    queue[++rear] = 30;

    printf("Queue: ");

    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");

    return 0;
}