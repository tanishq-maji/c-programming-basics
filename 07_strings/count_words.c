#include <stdio.h>

int main() {

    char text[200];
    int words = 0;
    int in_word = 0;

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {

        if (text[i] != ' ' && text[i] != '\n' && text[i] != '\t') {

            if (in_word == 0) {
                words++;
                in_word = 1;
            }

        } else {
            in_word = 0;
        }
    }

    printf("Number of words = %d\n", words);

    return 0;
}
