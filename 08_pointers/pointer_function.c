#include <stdio.h>

void changeValue(int *ptr) {
    *ptr = 100;
}

int main() {

    int number = 10;

    printf("Before: %d\n", number);

    changeValue(&number);

    printf("After: %d\n", number);

    return 0;
}
