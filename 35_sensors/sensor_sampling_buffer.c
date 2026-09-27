#include <stdio.h>

int main() {
    int buffer[5];
    int i;

    printf("=== Sensor Sampling Buffer Simulation ===\n");

    for (i = 0; i < 5; i++) {
        buffer[i] = 400 + (i * 20);
    }

    printf("Buffered Sensor Readings:\n");

    for (i = 0; i < 5; i++) {
        printf("Sample %d: %d\n", i + 1, buffer[i]);
    }

    return 0;
}