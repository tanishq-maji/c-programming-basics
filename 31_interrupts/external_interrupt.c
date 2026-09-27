#include <stdio.h>

volatile int button_interrupt = 0;

void external_interrupt() {
    button_interrupt = 1;
}

int main() {
    printf("=== External Interrupt Simulation ===\n");

    printf("System waiting for button event...\n");

    external_interrupt();

    if (button_interrupt) {
        printf("External interrupt detected!\n");
        printf("Button event handled.\n");

        button_interrupt = 0;
    }

    printf("System returned to normal operation.\n");

    return 0;
}