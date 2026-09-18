#include <stdio.h>

int square(int number) {
    return number * number;
}

int main() {

    int n;
    int result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = square(n);

    printf("Square = %d\n", result);

    return 0;
}