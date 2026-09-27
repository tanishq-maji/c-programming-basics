#include <stdio.h>

int main() {
    int samples[] = {420, 450, 480, 510, 540};
    int size = sizeof(samples) / sizeof(samples[0]);

    long long accumulated_value = 0;
    int i;

    printf("=== Sensor Sampling Integrator Simulation ===\n");

    for (i = 0; i < size; i++) {
        accumulated_value += samples[i];

        printf("Sample %d: %d | Accumulated: %lld\n",
               i + 1, samples[i], accumulated_value);
    }

    printf("\nFinal Accumulated Value: %lld\n", accumulated_value);

    return 0;
}