#include <stdio.h>

#define MAX 5

int main() {

    int stack[MAX];
    int top = -1;

    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    printf("Stack elements: ");

    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }

    printf("\n");

    return 0;
}