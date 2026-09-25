#include <stdio.h>

int reverse_number(int number, int reverse) {

    if (number == 0) {
        return reverse;
    }

    return reverse_number(number / 10, reverse * 10 + number % 10);
}

int main() {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Reversed number = %d\n", reverse_number(number, 0));
    }

    return 0;
}
