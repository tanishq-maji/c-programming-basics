#include <stdio.h>

int main() {
    float x, y, z;

    printf("=== Accelerometer Sensor Simulation ===\n");

    x = 0.15f;
    y = -0.08f;
    z = 9.81f;

    printf("X-Axis: %.2f m/s^2\n", x);
    printf("Y-Axis: %.2f m/s^2\n", y);
    printf("Z-Axis: %.2f m/s^2\n", z);

    if (z > 9.0f) {
        printf("Orientation Status: UPRIGHT\n");
    } else {
        printf("Orientation Status: TILTED\n");
    }

    return 0;
}