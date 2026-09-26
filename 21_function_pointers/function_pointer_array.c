#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {

    int (*operations[3])(int, int) = {
        add,
        subtract,
        multiply
    };

    int a = 20;
    int b = 5;

    printf("Addition = %d\n", operations[0](a, b));
    printf("Subtraction = %d\n", operations[1](a, b));
    printf("Multiplication = %d\n", operations[2](a, b));

    return 0;
}