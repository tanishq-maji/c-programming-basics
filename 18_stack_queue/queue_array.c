#include <stdio.h>

#define MAX 5

int main() {

    int queue[MAX];
    int front = 0;
    int rear = -1;

    queue[++rear] = 10;
    queue[++rear] = 20;
    queue[++rear] = 30;

    printf("Queue elements: ");

    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");

    return 0;
}
