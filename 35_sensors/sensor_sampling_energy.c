#include <stdio.h>

int main() {
    int samples[] = {420, 450, 480, 510, 540};
    int size = sizeof(samples) / sizeof(samples[0]);

    long long energy = 0;
    int i;

    printf("=== Sensor Sampling Energy Simulation ===\n");

    for (i = 0; i < size; i++) {
        energy += (long long)samples[i] * samples[i];
    }

    printf("Number of Samples: %d\n", size);
    printf("Sum of Squared Samples: %lld\n", energy);

    return 0;
}