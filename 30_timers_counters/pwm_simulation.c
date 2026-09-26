#include <stdio.h>

int main() {
    int duty_cycle;
    int period = 10;

    printf("=== PWM Simulation ===\n");

    printf("Enter duty cycle (0-100): ");

    if (scanf("%d", &duty_cycle) != 1 ||
        duty_cycle < 0 || duty_cycle > 100) {
        printf("Invalid duty cycle.\n");
        return 1;
    }

    int high_cycles = (duty_cycle * period) / 100;
    int low_cycles = period - high_cycles;

    printf("\nDuty Cycle : %d%%\n", duty_cycle);
    printf("High Cycles: %d\n", high_cycles);
    printf("Low Cycles : %d\n", low_cycles);

    printf("\nPWM Signal: ");

    for (int i = 0; i < high_cycles; i++) {
        printf("HIGH ");
    }

    for (int i = 0; i < low_cycles; i++) {
        printf("LOW ");
    }

    printf("\n");

    return 0;
}