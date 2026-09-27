#include <stdio.h>
#include <math.h>

int main() {
    int samples[] = {420, 450, 480, 510, 540};
    int size = sizeof(samples) / sizeof(samples[0]);

    float sum_squares = 0.0f;
    float rms;
    int i;

    printf("=== Sensor Sampling RMS Simulation ===\n");

    for (i = 0; i < size; i++) {
        sum_squares += (float)samples[i] * samples[i];
    }

    rms = sqrtf(sum_squares / size);

    printf("Number of Samples: %d\n", size);
    printf("RMS Value: %.2f\n", rms);

    return 0;
}