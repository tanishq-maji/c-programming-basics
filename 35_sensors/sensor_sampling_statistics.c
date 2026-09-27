#include <stdio.h>

int main() {
    int samples[] = {420, 580, 650, 480, 720};
    int size = sizeof(samples) / sizeof(samples[0]);
    int sum = 0;
    int min = samples[0];
    int max = samples[0];
    int i;

    printf("=== Sensor Sampling Statistics ===\n");

    for (i = 0; i < size; i++) {
        sum += samples[i];

        if (samples[i] < min) {
            min = samples[i];
        }

        if (samples[i] > max) {
            max = samples[i];
        }
    }

    printf("Samples: %d\n", size);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %.2f\n", (float)sum / size);
    printf("Range: %d\n", max - min);

    return 0;
}