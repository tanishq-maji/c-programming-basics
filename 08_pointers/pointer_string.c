#include <stdio.h>

int main() {

    char text[] = "Electronics";
    char *ptr = text;

    printf("String: %s\n", ptr);

    printf("Characters:\n");

    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
}
