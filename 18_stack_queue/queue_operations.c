#include <stdio.h>

#define MAX 5

int main() {

    int queue[MAX];
    int front = 0;
    int rear = -1;

    // Enqueue
    queue[++rear] = 10;
    queue[++rear] = 20;
    queue[++rear] = 30;

    printf("Queue after enqueue: ");

    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");

    // Dequeue
    printf("Dequeued element: %d\n", queue[front]);
    front++;

    printf("Queue after dequeue: ");

    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");

    // Front
    printf("Front element: %d\n", queue[front]);

    return 0;
}
