#include <stdio.h>

int main() {
    int samples[] = {420, 380, 450, 410, 470};
    int size = sizeof(samples) / sizeof(samples[0]);
    int min = samples[0];
    int max = samples[0];
    int i;

    printf("=== Sensor Sampling Min/Max Simulation ===\n");

    for (i = 1; i < size; i++) {
        if (samples[i] < min) {
            min = samples[i];
        }

        if (samples[i] > max) {
            max = samples[i];
        }
    }

    printf("Minimum Sensor Value: %d\n", min);
    printf("Maximum Sensor Value: %d\n", max);

    return 0;
}