#include <stdio.h>

int main() {
    int flame_detected;

    printf("=== Flame Sensor Simulation ===\n");

    flame_detected = 1;

    printf("Flame Sensor State: %d\n", flame_detected);

    if (flame_detected == 1) {
        printf("ALERT: FLAME DETECTED\n");
    } else {
        printf("Status: NO FLAME DETECTED\n");
    }

    return 0;
}
