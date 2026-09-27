#include <stdio.h>

int main() {
    int air_quality;

    printf("=== Air Quality Sensor Simulation ===\n");

    air_quality = 85;

    printf("Air Quality Index: %d\n", air_quality);

    if (air_quality <= 50) {
        printf("Air Quality: GOOD\n");
    } else if (air_quality <= 100) {
        printf("Air Quality: MODERATE\n");
    } else {
        printf("Air Quality: POOR\n");
    }

    return 0;
}
