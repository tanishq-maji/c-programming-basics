#include <stdio.h>

int main() {
    float acceleration;

    printf("=== Accelerometer Motion Simulation ===\n");

    acceleration = 3.2f;

    printf("Acceleration: %.2f m/s^2\n", acceleration);

    if (acceleration < 1.0f) {
        printf("Motion Status: STABLE\n");
    } else if (acceleration <= 5.0f) {
        printf("Motion Status: MODERATE\n");
    } else {
        printf("Motion Status: HIGH\n");
    }

    return 0;
}