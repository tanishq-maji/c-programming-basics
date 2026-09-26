#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("Please provide numbers as command-line arguments.\n");
        return 1;
    }

    int max = atoi(argv[1]);

    for (int i = 2; i < argc; i++) {

        int number = atoi(argv[i]);

        if (number > max) {
            max = number;
        }
    }

    printf("Maximum = %d\n", max);

    return 0;
}
