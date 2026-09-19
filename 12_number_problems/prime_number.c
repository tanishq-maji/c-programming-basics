#include <stdio.h>

int main() {

    int number;
    int is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        is_prime = 0;
    } else {

        for (int i = 2; i <= number / i; i++) {

            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
