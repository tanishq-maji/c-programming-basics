#include <stdio.h>

int main() {
    int samples[] = {420, 450, 480, 510, 540};
    int size = sizeof(samples) / sizeof(samples[0]);

    long long power = 0;
    int i;

    printf("=== Sensor Sampling Power Simulation ===\n");

    for (i = 0; i < size; i++) {
        power += (long long)samples[i] * samples[i];
    }

    printf("Number of Samples: %d\n", size);
    printf("Total Power Value: %lld\n", power);

    return 0;
}