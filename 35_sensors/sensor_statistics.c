#include <stdio.h>

int main() {
    int sensor_data[] = {420, 450, 470, 440, 460};
    int size = sizeof(sensor_data) / sizeof(sensor_data[0]);
    int sum = 0;
    int min = sensor_data[0];
    int max = sensor_data[0];
    int i;

    printf("=== Sensor Statistics Simulation ===\n");

    for (i = 0; i < size; i++) {
        sum += sensor_data[i];

        if (sensor_data[i] < min) {
            min = sensor_data[i];
        }

        if (sensor_data[i] > max) {
            max = sensor_data[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %.2f\n", (float)sum / size);

    return 0;
}
