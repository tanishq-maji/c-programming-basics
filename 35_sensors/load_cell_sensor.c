#include <stdio.h>

int main() {
    float weight;

    printf("=== Load Cell Sensor Simulation ===\n");

    weight = 12.5f;

    printf("Measured Weight: %.1f kg\n", weight);

    if (weight < 5.0f) {
        printf("Load Status: LOW\n");
    } else if (weight <= 20.0f) {
        printf("Load Status: NORMAL\n");
    } else {
        printf("Load Status: HIGH\n");
    }

    return 0;
}