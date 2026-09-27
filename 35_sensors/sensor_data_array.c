#include <stdio.h>

int main() {
    int sensor_data[] = {420, 450, 470, 440, 460};
    int size = sizeof(sensor_data) / sizeof(sensor_data[0]);
    int i;

    printf("=== Sensor Data Array Simulation ===\n");

    for (i = 0; i < size; i++) {
        printf("Reading %d: %d\n", i + 1, sensor_data[i]);
    }

    return 0;
}
