#include <stdio.h>

int main() {
    int moisture;

    printf("=== Soil Moisture Sensor Simulation ===\n");

    moisture = 58;

    printf("Soil Moisture: %d %%\n", moisture);

    if (moisture < 30) {
        printf("Soil Status: DRY\n");
    } else if (moisture <= 70) {
        printf("Soil Status: MOIST\n");
    } else {
        printf("Soil Status: WET\n");
    }

    return 0;
}
