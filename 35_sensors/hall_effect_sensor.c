#include <stdio.h>

int main() {
    int magnetic_field;

    printf("=== Hall Effect Sensor Simulation ===\n");

    magnetic_field = 45;

    printf("Magnetic Field: %d units\n", magnetic_field);

    if (magnetic_field > 50) {
        printf("Magnetic Status: STRONG\n");
    } else if (magnetic_field > 20) {
        printf("Magnetic Status: DETECTED\n");
    } else {
        printf("Magnetic Status: WEAK\n");
    }

    return 0;
}