#include <stdio.h>

int main() {
    int samples[] = {420, 580, 650, 480, 720};
    int size = sizeof(samples) / sizeof(samples[0]);
    int previous = samples[0];
    int filtered;
    int i;

    printf("=== Sensor Sampling Filter Simulation ===\n");

    printf("Sample 1: %d -> Filtered: %d\n", samples[0], samples[0]);

    for (i = 1; i < size; i++) {
        filtered = (previous + samples[i]) / 2;

        printf("Sample %d: %d -> Filtered: %d\n",
               i + 1, samples[i], filtered);

        previous = filtered;
    }

    return 0;
}