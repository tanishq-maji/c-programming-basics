#include <stdio.h>

int main() {

    FILE *source;
    FILE *destination;
    char ch;

    source = fopen("data.txt", "r");

    if (source == NULL) {
        printf("Source file could not be opened.\n");
        return 1;
    }

    destination = fopen("copy.txt", "w");

    if (destination == NULL) {
        printf("Destination file could not be opened.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}
