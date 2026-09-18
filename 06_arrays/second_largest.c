#include <stdio.h>
#include <limits.h>

int main() {

    int numbers[5];
    int largest, second_largest;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = INT_MIN;
    second_largest = INT_MIN;

    for (int i = 0; i < 5; i++) {

        if (numbers[i] > largest) {
            second_largest = largest;
            largest = numbers[i];
        } else if (numbers[i] > second_largest && numbers[i] != largest) {
            second_largest = numbers[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second largest = %d\n", second_largest);

    return 0;
}