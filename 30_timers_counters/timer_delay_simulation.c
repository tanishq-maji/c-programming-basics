#include <stdio.h>

void timer_delay(int cycles) {
    for (int i = 1; i <= cycles; i++) {
        printf("Timer cycle: %d\n", i);
    }
}

int main() {
    int cycles;

    printf("=== Timer Delay Simulation ===\n");

    printf("Enter number of timer cycles: ");

    if (scanf("%d", &cycles) != 1 || cycles <= 0) {
        printf("Invalid number of cycles.\n");
        return 1;
    }

    timer_delay(cycles);

    printf("Timer delay completed.\n");

    return 0;
}