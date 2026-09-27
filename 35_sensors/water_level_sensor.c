#include <stdio.h>

int main() {
    int water_level;

    printf("=== Water Level Sensor Simulation ===\n");

    water_level = 72;

    printf("Water Level: %d %%\n", water_level);

    if (water_level < 30) {
        printf("Water Status: LOW\n");
    } else if (water_level <= 80) {
        printf("Water Status: NORMAL\n");
    } else {
        printf("Water Status: HIGH\n");
    }

    return 0;
}