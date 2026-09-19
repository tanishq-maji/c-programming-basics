#include <stdio.h>

int main() {

    int number;
    int original;
    int remainder;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {

        remainder = number % 10;
        sum = sum + (remainder * remainder * remainder);
        number = number / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
