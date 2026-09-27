#include <stdio.h>

int main() {
    int samples[] = {420, 580, 650, 480, 720};
    int size = sizeof(samples) / sizeof(samples[0]);
    int i;

    printf("=== Sensor Sampling Logger ===\n");

    for (i = 0; i < size; i++) {
        printf("Logged Sample %d: %d\n", i + 1, samples[i]);
    }

    printf("\nTotal Samples Logged: %d\n", size);

    return 0;
}