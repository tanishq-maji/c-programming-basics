#include <stdio.h>

int main() {

    int numbers[3] = {10, 20, 30};
    int *ptr = numbers;

    printf("First value: %d\n", *ptr);

    ptr++;
    printf("Second value: %d\n", *ptr);

    ptr++;
    printf("Third value: %d\n", *ptr);

    return 0;
}