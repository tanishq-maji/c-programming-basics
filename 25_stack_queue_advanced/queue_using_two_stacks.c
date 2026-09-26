#include <stdio.h>

#define SIZE 5

int stack1[SIZE];
int stack2[SIZE];

int top1 = -1;
int top2 = -1;

void push1(int value) {
    if (top1 == SIZE - 1) {
        printf("Queue is full.\n");
        return;
    }

    stack1[++top1] = value;
}

int pop1() {
    if (top1 == -1) {
        return -1;
    }

    return stack1[top1--];
}

void push2(int value) {
    if (top2 == SIZE - 1) {
        return;
    }

    stack2[++top2] = value;
}

int pop2() {
    if (top2 == -1) {
        return -1;
    }

    return stack2[top2--];
}

void enqueue(int value) {
    push1(value);
}

void dequeue() {
    if (top1 == -1 && top2 == -1) {
        printf("Queue is empty.\n");
        return;
    }

    if (top2 == -1) {
        while (top1 != -1) {
            push2(pop1());
        }
    }

    printf("Dequeued: %d\n", pop2());
}

void display() {
    if (top1 == -1 && top2 == -1) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue: ");

    for (int i = top2; i >= 0; i--) {
        printf("%d ", stack2[i]);
    }

    for (int i = 0; i <= top1; i++) {
        printf("%d ", stack1[i]);
    }

    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();

    enqueue(40);

    dequeue();

    display();

    return 0;
}
