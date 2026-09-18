#include <stdio.h>
#include <string.h>

int main() {

    char first[50];
    char second[50];

    printf("Enter first string: ");
    scanf("%49s", first);

    printf("Enter second string: ");
    scanf("%49s", second);

    if (strcmp(first, second) == 0) {
        printf("Both strings are equal.\n");
    } else {
        printf("Strings are different.\n");
    }

    return 0;
}