#include <stdio.h>

#define MAX 5

int main() {

    int stack[MAX];
    int top = -1;

    // Push
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    printf("Stack after push: ");

    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }

    printf("\n");

    // Pop
    printf("Popped element: %d\n", stack[top]);
    top--;

    printf("Stack after pop: ");

    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }

    printf("\n");

    // Peek
    printf("Top element: %d\n", stack[top]);

    return 0;
}
