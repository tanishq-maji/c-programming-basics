#include <stdio.h>

void process(int a, int b, int (*operation)(int, int)) {

    int result = operation(a, b);

    printf("Result = %d\n", result);
}

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {

    process(10, 5, add);
    process(10, 5, multiply);

    return 0;
}