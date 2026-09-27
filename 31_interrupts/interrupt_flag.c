#include <stdio.h>

volatile int interrupt_flag = 0;

void trigger_interrupt() {
    interrupt_flag = 1;
}

void handle_interrupt() {
    if (interrupt_flag) {
        printf("Interrupt flag detected.\n");
        printf("Handling interrupt...\n");

        interrupt_flag = 0;

        printf("Interrupt handled successfully.\n");
    }
}

int main() {
    printf("=== Interrupt Flag Simulation ===\n");

    printf("System running...\n");

    trigger_interrupt();

    handle_interrupt();

    printf("System continues normal operation.\n");

    return 0;
}
