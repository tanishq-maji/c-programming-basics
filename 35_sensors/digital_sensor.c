#include <stdio.h>

int main() {
    int sensor_state;

    printf("=== Digital Sensor Simulation ===\n");

    sensor_state = 1;

    printf("Sensor State: %d\n", sensor_state);

    if (sensor_state == 1) {
        printf("Sensor Status: ACTIVE\n");
    } else {
        printf("Sensor Status: INACTIVE\n");
    }

    return 0;
}
