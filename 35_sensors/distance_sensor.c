#include <stdio.h>

int main() {
    float distance;

    printf("=== Distance Sensor Simulation ===\n");

    distance = 45.5f;

    printf("Distance: %.1f cm\n", distance);

    if (distance < 20.0f) {
        printf("Object Status: VERY CLOSE\n");
    } else if (distance <= 100.0f) {
        printf("Object Status: NEAR\n");
    } else {
        printf("Object Status: FAR\n");
    }

    return 0;
}
