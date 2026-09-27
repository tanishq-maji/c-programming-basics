#include <stdio.h>

int main() {
    int samples[] = {420, 580, 650, 480, 720};
    int size = sizeof(samples) / sizeof(samples[0]);
    int offset = 10;
    int calibrated_value;
    int i;

    printf("=== Sensor Sampling Calibration ===\n");
    printf("Calibration Offset: %d\n\n", offset);

    for (i = 0; i < size; i++) {
        calibrated_value = samples[i] - offset;

        printf("Sample %d: Raw = %d, Calibrated = %d\n",
               i + 1, samples[i], calibrated_value);
    }

    return 0;
}