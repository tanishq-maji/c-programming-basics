#include <stdio.h>

int main() {

    FILE *file;

    file = fopen("data.txt", "a");

    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    fprintf(file, "This line was added later.\n");

    fclose(file);

    printf("Data appended successfully.\n");

    return 0;
}
