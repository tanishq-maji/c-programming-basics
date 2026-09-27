#include <stdio.h>

int main() {
    float temperature;

    printf("=== Thermocouple Sensor Simulation ===\n");

    temperature = 425.5f;

    printf("Measured Temperature: %.1f C\n", temperature);

    if (temperature < 100.0f) {
        printf("Temperature Status: LOW\n");
    } else if (temperature <= 500.0f) {
        printf("Temperature Status: NORMAL\n");
    } else {
        printf("Temperature Status: HIGH\n");
    }

    return 0;
}