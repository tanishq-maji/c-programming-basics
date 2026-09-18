#include <stdio.h>

int main() {

    int numbers[5];
    int search;
    int count = 0;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Enter number to count: ");
    scanf("%d", &search);

    for (int i = 0; i < 5; i++) {
        if (numbers[i] == search) {
            count++;
        }
    }

    printf("%d occurs %d time(s).\n", search, count);

    return 0;
}