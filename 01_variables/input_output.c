#include <stdio.h>

int main() {

    char name[20];
    int age;

    printf("Enter your name: ");
    scanf("%19s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nHello %s!\n", name);
    printf("You are %d years old.\n", age);

    return 0;
}