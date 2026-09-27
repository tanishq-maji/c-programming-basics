#include <stdio.h>

int main() {
    int co2_level;

    printf("=== CO2 Sensor Simulation ===\n");

    co2_level = 650;

    printf("CO2 Level: %d ppm\n", co2_level);

    if (co2_level < 800) {
        printf("Air Quality: GOOD\n");
    } else if (co2_level <= 1200) {
        printf("Air Quality: MODERATE\n");
    } else {
        printf("Air Quality: POOR\n");
    }

    return 0;
}