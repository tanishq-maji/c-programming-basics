#include <stdio.h>

int main() {

    FILE *file;
    char text[200];

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("File contents:\n");

    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }

    fclose(file);

    return 0;
}
