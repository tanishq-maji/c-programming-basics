#include <stdio.h>

int main() {
    int sensor_value;

    printf("=== Sensor Fault Detection Simulation ===\n");

    sensor_value = -1;

    printf("Sensor Value: %d\n", sensor_value);

    if (sensor_value < 0) {
        printf("Sensor Status: FAULT DETECTED\n");
    } else {
        printf("Sensor Status: WORKING\n");
    }

    return 0;
}
