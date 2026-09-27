#include <stdio.h>

int main() {
    float pressure;

    printf("=== Pressure Sensor Simulation ===\n");

    pressure = 101.3f;

    printf("Pressure: %.1f kPa\n", pressure);

    if (pressure < 90.0f) {
        printf("Pressure Status: LOW\n");
    } else if (pressure <= 110.0f) {
        printf("Pressure Status: NORMAL\n");
    } else {
        printf("Pressure Status: HIGH\n");
    }

    return 0;
}
