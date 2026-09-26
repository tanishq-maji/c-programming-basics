#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {

    int (*operation)(int, int);

    operation = add;

    int result = operation(10, 20);

    printf("Result = %d\n", result);

    return 0;
}