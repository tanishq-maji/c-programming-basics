#include <stdio.h>
#include <string.h>

int main() {

    char text[100];
    int length;
    int is_palindrome = 1;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    length = strlen(text);

    if (text[length - 1] == '\n') {
        text[length - 1] = '\0';
        length--;
    }

    for (int i = 0; i < length / 2; i++) {

        if (text[i] != text[length - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}