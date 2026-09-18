#include <stdio.h>
#include <ctype.h>

int main() {

    char text[100];
    int consonants = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {

        char ch = tolower(text[i]);

        if (ch >= 'a' && ch <= 'z') {

            if (ch != 'a' && ch != 'e' && ch != 'i' &&
                ch != 'o' && ch != 'u') {
                consonants++;
            }
        }
    }

    printf("Number of consonants = %d\n", consonants);

    return 0;
}