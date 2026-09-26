#include <stdio.h>

int main() {
    int events;
    int counter = 0;

    printf("=== Event Counter Simulation ===\n");

    printf("Enter number of events: ");

    if (scanf("%d", &events) != 1 || events < 0) {
        printf("Invalid number of events.\n");
        return 1;
    }

    for (int i = 1; i <= events; i++) {
        counter++;
        printf("Event %d detected | Counter = %d\n", i, counter);
    }

    printf("\nTotal Events Counted: %d\n", counter);

    return 0;
}
