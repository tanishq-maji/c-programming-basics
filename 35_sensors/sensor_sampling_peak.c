#include <stdio.h>

int main() {
    int samples[] = {420, 580, 650, 480, 720};
    int size = sizeof(samples) / sizeof(samples[0]);
    int peak = samples[0];
    int peak_index = 0;
    int i;

    printf("=== Sensor Sampling Peak Detection ===\n");

    for (i = 1; i < size; i++) {
        if (samples[i] > peak) {
            peak = samples[i];
            peak_index = i;
        }
    }

    printf("Peak Sensor Value: %d\n", peak);
    printf("Peak Sample Number: %d\n", peak_index + 1);

    return 0;
}