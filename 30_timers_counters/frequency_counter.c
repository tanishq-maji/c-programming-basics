#include <stdio.h>

int main() {
    int pulses;
    int time_seconds;
    float frequency;

    printf("=== Frequency Counter Simulation ===\n");

    printf("Enter number of pulses: ");
    if (scanf("%d", &pulses) != 1 || pulses < 0) {
        printf("Invalid pulse count.\n");
        return 1;
    }

    printf("Enter measurement time (seconds): ");
    if (scanf("%d", &time_seconds) != 1 || time_seconds <= 0) {
        printf("Invalid time.\n");
        return 1;
    }

    frequency = (float)pulses / time_seconds;

    printf("\nPulses       : %d\n", pulses);
    printf("Time         : %d seconds\n", time_seconds);
    printf("Frequency    : %.2f Hz\n", frequency);

    return 0;
}