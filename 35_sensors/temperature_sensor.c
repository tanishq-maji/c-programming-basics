#include <stdio.h>

int main() {
    float temperature;

    printf("=== Temperature Sensor Simulation ===\n");

    temperature = 36.5f;

    printf("Temperature: %.1f C\n", temperature);

    if (temperature < 35.0f) {
        printf("Status: LOW\n");
    } else if (temperature <= 37.5f) {
        printf("Status: NORMAL\n");
    } else {
        printf("Status: HIGH\n");
    }

    return 0;
}