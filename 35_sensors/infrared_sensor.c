#include <stdio.h>

int main() {
    int object_detected;

    printf("=== Infrared Sensor Simulation ===\n");

    object_detected = 1;

    printf("IR Sensor State: %d\n", object_detected);

    if (object_detected == 1) {
        printf("Object Status: DETECTED\n");
    } else {
        printf("Object Status: NOT DETECTED\n");
    }

    return 0;
}