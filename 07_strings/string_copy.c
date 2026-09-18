#include <stdio.h>
#include <string.h>

int main() {

    char original[50];
    char copied[50];

    printf("Enter a string: ");
    scanf("%49s", original);

    strcpy(copied, original);

    printf("Original: %s\n", original);
    printf("Copied: %s\n", copied);

    return 0;
}
