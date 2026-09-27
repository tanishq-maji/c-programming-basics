#include <stdio.h>

int main() {
    int vibration_level;

    printf("=== Vibration Sensor Simulation ===\n");

    vibration_level = 45;

    printf("Vibration Level: %d units\n", vibration_level);

    if (vibration_level < 30) {
        printf("Vibration Status: LOW\n");
    } else if (vibration_level <= 60) {
        printf("Vibration Status: NORMAL\n");
    } else {
        printf("Vibration Status: HIGH\n");
    }

    return 0;
}
