#include <stdio.h>

volatile int button_interrupt = 0;
volatile int timer_interrupt = 0;

void trigger_button_interrupt() {
    button_interrupt = 1;
}

void trigger_timer_interrupt() {
    timer_interrupt = 1;
}

void handle_interrupts() {
    if (button_interrupt) {
        printf("Button interrupt handled.\n");
        button_interrupt = 0;
    }

    if (timer_interrupt) {
        printf("Timer interrupt handled.\n");
        timer_interrupt = 0;
    }
}

int main() {
    printf("=== Multiple Interrupt Simulation ===\n");

    printf("System running...\n");

    trigger_button_interrupt();
    trigger_timer_interrupt();

    printf("Interrupts detected.\n");

    handle_interrupts();

    printf("All interrupts handled.\n");
    printf("System continues normal operation.\n");

    return 0;
}
