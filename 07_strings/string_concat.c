#include <stdio.h>
#include <string.h>

int main() {

    char first[50];
    char second[50];

    printf("Enter first string: ");
    scanf("%49s", first);

    printf("Enter second string: ");
    scanf("%49s", second);

    strcat(first, second);

    printf("Combined string: %s\n", first);

    return 0;
}
