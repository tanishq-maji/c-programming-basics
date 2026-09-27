#include <stdio.h>

int main() {
    int samples;
    float time_seconds;
    float sampling_rate;

    printf("=== Sensor Sampling Rate Simulation ===\n");

    samples = 100;
    time_seconds = 2.0f;

    sampling_rate = samples / time_seconds;

    printf("Number of Samples: %d\n", samples);
    printf("Time: %.1f seconds\n", time_seconds);
    printf("Sampling Rate: %.1f Hz\n", sampling_rate);

    return 0;
}