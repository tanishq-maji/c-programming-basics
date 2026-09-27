#include <stdio.h>

int main() {
    int samples[] = {400, 420, 440, 460, 480};
    int size = sizeof(samples) / sizeof(samples[0]);
    int sum = 0;
    int i;

    printf("=== Sensor Sampling Average Simulation ===\n");

    for (i = 0; i < size; i++) {
        sum += samples[i];
    }

    printf("Number of Samples: %d\n", size);
    printf("Average Sensor Value: %.2f\n", (float)sum / size);

    return 0;
}
