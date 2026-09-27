#include <stdio.h>

int main() {
    int samples[] = {420, 450, 480, 510, 540};
    int size = sizeof(samples) / sizeof(samples[0]);
    float average = 0.0f;
    float variance = 0.0f;
    int sum = 0;
    int i;

    printf("=== Sensor Sampling Variance Simulation ===\n");

    for (i = 0; i < size; i++) {
        sum += samples[i];
    }

    average = (float)sum / size;

    for (i = 0; i < size; i++) {
        float difference = samples[i] - average;
        variance += difference * difference;
    }

    variance /= size;

    printf("Average: %.2f\n", average);
    printf("Variance: %.2f\n", variance);

    return 0;
}