#include <stdio.h>

int main() {
    int motion_detected;

    printf("=== Motion Sensor Simulation ===\n");

    motion_detected = 1;

    printf("Motion Sensor: %d\n", motion_detected);

    if (motion_detected == 1) {
        printf("Motion Status: DETECTED\n");
    } else {
        printf("Motion Status: NOT DETECTED\n");
    }

    return 0;
}