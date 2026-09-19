#include <stdio.h>

int main() {

    int number;
    int original;
    int reverse = 0;
    int remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {

        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    if (original == reverse) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}