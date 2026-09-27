#include <stdio.h>

int main() {
    int magnetic_field;

    printf("=== Magnetic Sensor Simulation ===\n");

    magnetic_field = 48;

    printf("Magnetic Field: %d units\n", magnetic_field);

    if (magnetic_field > 70) {
        printf("Magnetic Status: STRONG\n");
    } else if (magnetic_field > 30) {
        printf("Magnetic Status: NORMAL\n");
    } else {
        printf("Magnetic Status: WEAK\n");
    }

    return 0;
}