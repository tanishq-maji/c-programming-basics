#include <stdio.h>

int main() {
    int sensor_value;
    int threshold;

    printf("=== Sensor Threshold Simulation ===\n");

    sensor_value = 650;
    threshold = 500;

    printf("Sensor Value: %d\n", sensor_value);
    printf("Threshold: %d\n", threshold);

    if (sensor_value > threshold) {
        printf("Status: THRESHOLD EXCEEDED\n");
    } else {
        printf("Status: WITHIN LIMIT\n");
    }

    return 0;
}
