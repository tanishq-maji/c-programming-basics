#include <stdio.h>

int main() {
    int sensor_events[] = {1, 0, 1, 1, 0, 1, 0, 1};
    int size = sizeof(sensor_events) / sizeof(sensor_events[0]);
    int event_count = 0;
    int i;

    printf("=== Sensor Event Counter Simulation ===\n");

    for (i = 0; i < size; i++) {
        if (sensor_events[i] == 1) {
            event_count++;
        }
    }

    printf("Total Samples: %d\n", size);
    printf("Detected Events: %d\n", event_count);

    return 0;
}