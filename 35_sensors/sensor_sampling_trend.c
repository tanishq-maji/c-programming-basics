#include <stdio.h>

int main() {
    int samples[] = {420, 450, 480, 520, 560};
    int size = sizeof(samples) / sizeof(samples[0]);
    int i;

    printf("=== Sensor Sampling Trend Simulation ===\n");

    for (i = 1; i < size; i++) {
        printf("Sample %d: %d -> ", i + 1, samples[i]);

        if (samples[i] > samples[i - 1]) {
            printf("INCREASING\n");
        } else if (samples[i] < samples[i - 1]) {
            printf("DECREASING\n");
        } else {
            printf("STABLE\n");
        }
    }

    return 0;
}
