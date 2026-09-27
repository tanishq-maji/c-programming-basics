#include <stdio.h>

int main() {
    float strain;

    printf("=== Strain Gauge Sensor Simulation ===\n");

    strain = 0.0045f;

    printf("Measured Strain: %.4f\n", strain);

    if (strain < 0.0020f) {
        printf("Strain Status: LOW\n");
    } else if (strain <= 0.0050f) {
        printf("Strain Status: NORMAL\n");
    } else {
        printf("Strain Status: HIGH\n");
    }

    return 0;
}