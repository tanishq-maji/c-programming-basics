#include <stdio.h>

int main() {
    int sensor_value;
    int threshold;
    int actuator_state;

    printf("=== Sensor Actuator Control Simulation ===\n");

    sensor_value = 750;
    threshold = 600;
    actuator_state = 0;

    printf("Sensor Value: %d\n", sensor_value);
    printf("Threshold: %d\n", threshold);

    if (sensor_value > threshold) {
        actuator_state = 1;
        printf("Actuator: ACTIVATED\n");
    } else {
        actuator_state = 0;
        printf("Actuator: DEACTIVATED\n");
    }

    printf("Actuator State: %d\n", actuator_state);

    return 0;
}