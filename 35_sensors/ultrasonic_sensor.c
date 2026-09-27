#include <stdio.h>

int main() {
    float distance;

    printf("=== Ultrasonic Sensor Simulation ===\n");

    distance = 32.5f;

    printf("Measured Distance: %.1f cm\n", distance);

    if (distance < 10.0f) {
        printf("Object Status: VERY CLOSE\n");
    } else if (distance <= 50.0f) {
        printf("Object Status: DETECTED\n");
    } else {
        printf("Object Status: FAR\n");
    }

    return 0;
}
