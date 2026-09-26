#include <stdio.h>

volatile int interrupt_flag = 0;

void interrupt_handler() {
    interrupt_flag = 1;
    printf("Interrupt occurred!\n");
}

int main() {
    printf("=== Interrupt Simulation ===\n");

    printf("System running...\n");

    interrupt_handler();

    if (interrupt_flag) {
        printf("Interrupt handled successfully.\n");
        interrupt_flag = 0;
    }

    printf("System continues normal operation.\n");

    return 0;
}
