#include <stdio.h>

int main() {
    float x, y, z;

    printf("=== Gyroscope Sensor Simulation ===\n");

    x = 2.5f;
    y = -1.2f;
    z = 0.8f;

    printf("X-Axis Rotation: %.2f deg/s\n", x);
    printf("Y-Axis Rotation: %.2f deg/s\n", y);
    printf("Z-Axis Rotation: %.2f deg/s\n", z);

    if (x > 2.0f || y > 2.0f || z > 2.0f) {
        printf("Motion Status: ROTATION DETECTED\n");
    } else {
        printf("Motion Status: STABLE\n");
    }

    return 0;
}
