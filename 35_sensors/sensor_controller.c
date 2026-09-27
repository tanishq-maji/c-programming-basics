#include <stdio.h>

int main() {
    int sensor_value;
    int threshold;

    printf("=== Sensor Controller Simulation ===\n");

    sensor_value = 720;
    threshold = 600;

    printf("Sensor Value: %d\n", sensor_value);
    printf("Threshold: %d\n", threshold);

    if (sensor_value > threshold) {
        printf("Controller Action: ACTIVATE\n");
    } else {
        printf("Controller Action: STANDBY\n");
    }

    return 0;
}
