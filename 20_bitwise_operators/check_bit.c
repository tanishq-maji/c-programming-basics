#include <stdio.h>

int main() {

    int number, position;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter bit position: ");
    scanf("%d", &position);

    if (number & (1 << position)) {
        printf("Bit is SET (1).\n");
    } else {
        printf("Bit is CLEAR (0).\n");
    }

    return 0;
}