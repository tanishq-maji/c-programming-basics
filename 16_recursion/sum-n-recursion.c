#include <stdio.h>

int sum_n(int n) {

    if (n == 0) {
        return 0;
    }

    return n + sum_n(n - 1);
}

int main() {

    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Sum = %d\n", sum_n(n));
    }

    return 0;
}
