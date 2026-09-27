#include <stdio.h>

int main() {
    int samples[] = {420, 435, 450, 445, 460};
    int size = sizeof(samples) / sizeof(samples[0]);
    int i;

    printf("=== Sensor Sampling Simulation ===\n");

    for (i = 0; i < size; i++) {
        printf("Sample %d: %d\n", i + 1, samples[i]);
    }

    printf("Total Samples Collected: %d\n", size);

    return 0;
}