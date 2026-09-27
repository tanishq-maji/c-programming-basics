#include <stdio.h>

int main() {
    int samples[] = {420, 580, 650, 480, 720};
    int size = sizeof(samples) / sizeof(samples[0]);
    int i, j, temp;
    float median;

    printf("=== Sensor Sampling Median Simulation ===\n");

    /* Sort the samples */
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (samples[i] > samples[j]) {
                temp = samples[i];
                samples[i] = samples[j];
                samples[j] = temp;
            }
        }
    }

    if (size % 2 == 0) {
        median = (samples[size / 2 - 1] + samples[size / 2]) / 2.0f;
    } else {
        median = samples[size / 2];
    }

    printf("Sorted Samples: ");

    for (i = 0; i < size; i++) {
        printf("%d ", samples[i]);
    }

    printf("\nMedian Value: %.2f\n", median);

    return 0;
}