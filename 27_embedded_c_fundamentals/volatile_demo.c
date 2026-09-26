#include <stdio.h>

volatile int sensor_flag = 0;

int main() {
    printf("=== Volatile Variable Demo ===\n");

    printf("Initial sensor flag: %d\n", sensor_flag);

    sensor_flag = 1;

    printf("Sensor event detected.\n");
    printf("Updated sensor flag: %d\n", sensor_flag);

    if (sensor_flag) {
        printf("Processing sensor event...\n");
    }

    return 0;
}