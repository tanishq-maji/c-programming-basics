#include <stdio.h>

#define SIZE 5

int queue1[SIZE];
int queue2[SIZE];

int front1 = -1, rear1 = -1;
int front2 = -1, rear2 = -1;

void enqueue(int queue[], int *front, int *rear, int value) {
    if (*rear == SIZE - 1) {
        return;
    }

    if (*front == -1) {
        *front = 0;
    }

    queue[++(*rear)] = value;
}

int dequeue(int queue[], int *front, int *rear) {
    if (*front == -1 || *front > *rear) {
        return -1;
    }

    int value = queue[*front];

    (*front)++;

    if (*front > *rear) {
        *front = -1;
        *rear = -1;
    }

    return value;
}

void push(int value) {
    enqueue(queue2, &front2, &rear2, value);

    while (front1 != -1) {
        int temp = dequeue(queue1, &front1, &rear1);
        enqueue(queue2, &front2, &rear2, temp);
    }

    for (int i = 0; i <= rear2; i++) {
        queue1[i] = queue2[i];
    }

    front1 = front2;
    rear1 = rear2;

    front2 = -1;
    rear2 = -1;
}

void pop() {
    if (front1 == -1) {
        printf("Stack is empty.\n");
        return;
    }

    int value = dequeue(queue1, &front1, &rear1);
    printf("Popped: %d\n", value);
}

void display() {
    if (front1 == -1) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack: ");

    for (int i = front1; i <= rear1; i++) {
        printf("%d ", queue1[i]);
    }

    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}
