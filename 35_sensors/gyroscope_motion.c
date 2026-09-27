#include <stdio.h>

int main() {
    float rotation_rate;

    printf("=== Gyroscope Motion Simulation ===\n");

    rotation_rate = 4.5f;

    printf("Rotation Rate: %.2f deg/s\n", rotation_rate);

    if (rotation_rate < 2.0f) {
        printf("Motion Status: STABLE\n");
    } else if (rotation_rate <= 6.0f) {
        printf("Motion Status: MODERATE ROTATION\n");
    } else {
        printf("Motion Status: HIGH ROTATION\n");
    }

    return 0;
}
