#include <stdio.h>

int main() {

    int number, position;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter bit position: ");
    scanf("%d", &position);

    number = number | (1 << position);

    printf("Number after setting bit = %d\n", number);

    return 0;
}
