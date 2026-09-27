#include <stdio.h>

int main() {
    int sensor_value;

    printf("=== Analog Sensor Simulation ===\n");

    sensor_value = 720;

    printf("Analog Sensor Value: %d\n", sensor_value);

    if (sensor_value > 700) {
        printf("Sensor Level: HIGH\n");
    } else if (sensor_value > 300) {
        printf("Sensor Level: MEDIUM\n");
    } else {
        printf("Sensor Level: LOW\n");
    }

    return 0;
}