#include <stdio.h>

int main() {
    int samples[] = {420, 580, 650, 480, 720};
    int size = sizeof(samples) / sizeof(samples[0]);
    int window = 3;
    int sum;
    int i;

    printf("=== Sensor Moving Average Simulation ===\n");

    for (i = 0; i <= size - window; i++) {
        sum = 0;

        for (int j = i; j < i + window; j++) {
            sum += samples[j];
        }

        printf("Samples %d-%d Average: %.2f\n",
               i + 1,
               i + window,
               (float)sum / window);
    }

    return 0;
}