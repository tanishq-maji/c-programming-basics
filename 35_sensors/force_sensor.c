#include <stdio.h>

int main() {
    float force;

    printf("=== Force Sensor Simulation ===\n");

    force = 42.5f;

    printf("Applied Force: %.1f N\n", force);

    if (force < 20.0f) {
        printf("Force Status: LOW\n");
    } else if (force <= 50.0f) {
        printf("Force Status: NORMAL\n");
    } else {
        printf("Force Status: HIGH\n");
    }

    return 0;
}
