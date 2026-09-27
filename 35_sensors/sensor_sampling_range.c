#include <stdio.h>

int main() {
    int samples[] = {420, 380, 450, 410, 470};
    int size = sizeof(samples) / sizeof(samples[0]);
    int min = samples[0];
    int max = samples[0];
    int range;
    int i;

    printf("=== Sensor Sampling Range Simulation ===\n");

    for (i = 1; i < size; i++) {
        if (samples[i] < min) {
            min = samples[i];
        }

        if (samples[i] > max) {
            max = samples[i];
        }
    }

    range = max - min;

    printf("Minimum Value: %d\n", min);
    printf("Maximum Value: %d\n", max);
    printf("Sensor Range: %d\n", range);

    return 0;
}
