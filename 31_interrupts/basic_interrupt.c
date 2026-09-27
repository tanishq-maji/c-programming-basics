#include <stdio.h>

volatile int interrupt_flag = 0;

void interrupt_service_routine() {
    interrupt_flag = 1;
}

int main() {
    printf("=== Basic Interrupt Simulation ===\n");

    printf("Main program running...\n");

    interrupt_service_routine();

    if (interrupt_flag) {
        printf("Interrupt detected!\n");
        printf("Executing interrupt service routine...\n");

        interrupt_flag = 0;
    }

    printf("Returning to main program.\n");

    return 0;
}