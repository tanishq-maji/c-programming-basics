#include <stdio.h>

volatile int timer_interrupt = 0;

void timer_interrupt_handler() {
    timer_interrupt = 1;
}

int main() {
    printf("=== Timer Interrupt Simulation ===\n");

    printf("Timer started...\n");

    for (int i = 1; i <= 5; i++) {
        printf("Timer tick: %d\n", i);

        if (i == 5) {
            timer_interrupt_handler();
        }
    }

    if (timer_interrupt) {
        printf("Timer interrupt detected!\n");
        printf("Executing timer interrupt handler...\n");

        timer_interrupt = 0;
    }

    printf("Timer interrupt handled.\n");

    return 0;
}