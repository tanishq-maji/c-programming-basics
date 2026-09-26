#include <stdio.h>

int main() {
    int counter = 0;
    int limit;

    printf("=== Timer / Counter Simulation ===\n");

    printf("Enter counter limit: ");

    if (scanf("%d", &limit) != 1 || limit < 0) {
        printf("Invalid limit.\n");
        return 1;
    }

    while (counter <= limit) {
        printf("Timer Count: %d\n", counter);
        counter++;
    }

    printf("Timer completed.\n");

    return 0;
}