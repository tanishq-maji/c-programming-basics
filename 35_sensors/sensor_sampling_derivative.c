#include <stdio.h>

int main() {
    int samples[] = {420, 450, 480, 510, 540};
    int size = sizeof(samples) / sizeof(samples[0]);
    int difference;
    int i;

    printf("=== Sensor Sampling Derivative Simulation ===\n");

    for (i = 1; i < size; i++) {
        difference = samples[i] - samples[i - 1];

        printf("Sample %d -> Change: %d\n",
               i + 1, difference);
    }

    return 0;
}