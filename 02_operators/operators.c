#include <stdio.h>

int main() {

    int a = 20;
    int b = 6;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Remainder: %d\n", a % b);
    printf("\nComparisons:\n");

printf("a > b  : %d\n", a > b);
printf("a < b  : %d\n", a < b);
printf("a == b : %d\n", a == b);
printf("a != b : %d\n", a != b);

printf("\nLogical operators:\n");

printf("(a > 10 && b > 5): %d\n", a > 10 && b > 5);
printf("(a < 10 || b > 5): %d\n", a < 10 || b > 5);

    return 0;
}