#include <stdio.h>
#include <string.h>

int main() {

    char text[100];
    int length;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    length = strlen(text);

    if (text[length - 1] == '\n') {
        text[length - 1] = '\0';
        length--;
    }

    printf("Reversed string: ");

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }

    printf("\n");

    return 0;
}