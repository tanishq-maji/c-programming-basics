#include <stdio.h>

int main() {
    int sensor_value = 750;
    int threshold = 500;

    printf("=== Embedded C Basics ===\n");

    printf("Sensor Value : %d\n", sensor_value);
    printf("Threshold    : %d\n", threshold);

    if (sensor_value > threshold) {
        printf("Status       : ALERT\n");
    } else {
        printf("Status       : NORMAL\n");
    }

    return 0;
}
