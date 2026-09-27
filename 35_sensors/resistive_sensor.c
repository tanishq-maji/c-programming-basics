#include <stdio.h>

int main() {
    int resistance;

    printf("=== Resistive Sensor Simulation ===\n");

    resistance = 5600;

    printf("Sensor Resistance: %d ohms\n", resistance);

    if (resistance < 3000) {
        printf("Sensor Status: LOW\n");
    } else if (resistance <= 8000) {
        printf("Sensor Status: NORMAL\n");
    } else {
        printf("Sensor Status: HIGH\n");
    }

    return 0;
}