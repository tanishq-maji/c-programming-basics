#include <stdio.h>
#include <string.h>

int main() {

    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Name: %s\n", name);
    printf("Length: %zu\n", strlen(name));

    return 0;
}
