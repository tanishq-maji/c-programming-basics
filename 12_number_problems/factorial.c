#include <stdio.h>

int main() {

    int number;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {

        for (int i = 1; i <= number; i++) {
            factorial = factorial * i;
        }

        printf("Factorial = %lld\n", factorial);
    }

    return 0;
}
