#include <stdio.h>

int main() {
    float temperature;

    printf("=== Body Temperature Sensor Simulation ===\n");

    temperature = 36.8f;

    printf("Body Temperature: %.1f C\n", temperature);

    if (temperature < 36.0f) {
        printf("Temperature Status: LOW\n");
    } else if (temperature <= 37.5f) {
        printf("Temperature Status: NORMAL\n");
    } else {
        printf("Temperature Status: HIGH\n");
    }

    return 0;
}
