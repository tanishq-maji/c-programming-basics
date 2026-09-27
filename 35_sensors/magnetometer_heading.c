#include <stdio.h>

int main() {
    float heading;

    printf("=== Magnetometer Heading Simulation ===\n");

    heading = 135.0f;

    printf("Magnetic Heading: %.1f degrees\n", heading);

    if (heading < 90.0f) {
        printf("Direction: EAST-NORTHEAST\n");
    } else if (heading < 180.0f) {
        printf("Direction: SOUTHEAST\n");
    } else if (heading < 270.0f) {
        printf("Direction: SOUTHWEST\n");
    } else {
        printf("Direction: NORTHWEST\n");
    }

    return 0;
}
