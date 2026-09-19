#include <stdio.h>

int main() {

    FILE *file;

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    fprintf(file, "Hello, Tanishq!\n");
    fprintf(file, "Learning C file handling.\n");

    fclose(file);

    printf("Data written successfully.\n");

    return 0;
}
