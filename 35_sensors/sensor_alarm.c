#include <stdio.h>

int main() {
    int sensor_value;
    int threshold;

    printf("=== Sensor Alarm Simulation ===\n");

    sensor_value = 850;
    threshold = 700;

    printf("Sensor Value: %d\n", sensor_value);
    printf("Alarm Threshold: %d\n", threshold);

    if (sensor_value > threshold) {
        printf("ALARM: THRESHOLD EXCEEDED\n");
    } else {
        printf("Status: NORMAL\n");
    }

    return 0;
}