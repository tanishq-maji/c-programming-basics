#include <stdio.h>

int main() {
    int samples[] = {420, 450, 480, 510, 540};
    int size = sizeof(samples) / sizeof(samples[0]);
    float average = 0.0f;
    float deviation;
    int sum = 0;
    int i;

    printf("=== Sensor Sampling Deviation Simulation ===\n");

    for (i = 0; i < size; i++) {
        sum += samples[i];
    }

    average = (float)sum / size;

    printf("Average Value: %.2f\n", average);

    for (i = 0; i < size; i++) {
        deviation = samples[i] - average;

        printf("Sample %d: %d -> Deviation: %.2f\n",
               i + 1, samples[i], deviation);
    }

    return 0;
}
