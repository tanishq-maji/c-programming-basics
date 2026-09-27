#include <stdio.h>

int main() {
    int touch_detected;

    printf("=== Touch Sensor Simulation ===\n");

    touch_detected = 1;

    printf("Touch Sensor State: %d\n", touch_detected);

    if (touch_detected == 1) {
        printf("Touch Status: DETECTED\n");
    } else {
        printf("Touch Status: NOT DETECTED\n");
    }

    return 0;
}
