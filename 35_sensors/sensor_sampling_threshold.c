#include <stdio.h>

int main() {
    int samples[] = {420, 580, 650, 480, 720};
    int size = sizeof(samples) / sizeof(samples[0]);
    int threshold = 600;
    int i;

    printf("=== Sensor Sampling Threshold Simulation ===\n");
    printf("Threshold: %d\n\n", threshold);

    for (i = 0; i < size; i++) {
        printf("Sample %d: %d", i + 1, samples[i]);

        if (samples[i] > threshold) {
            printf(" -> ALERT\n");
        } else {
            printf(" -> NORMAL\n");
        }
    }

    return 0;
}
