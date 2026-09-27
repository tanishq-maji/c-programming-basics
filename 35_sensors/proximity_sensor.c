#include <stdio.h>

int main() {
    float distance;

    printf("=== Proximity Sensor Simulation ===\n");

    distance = 18.5f;

    printf("Object Distance: %.1f cm\n", distance);

    if (distance < 10.0f) {
        printf("Proximity Status: VERY CLOSE\n");
    } else if (distance <= 30.0f) {
        printf("Proximity Status: NEAR\n");
    } else {
        printf("Proximity Status: FAR\n");
    }

    return 0;
}