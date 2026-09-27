#include <stdio.h>

int main() {
    float humidity;

    printf("=== Humidity Sensor Simulation ===\n");

    humidity = 62.5f;

    printf("Humidity: %.1f %%\n", humidity);

    if (humidity < 30.0f) {
        printf("Humidity Status: LOW\n");
    } else if (humidity <= 70.0f) {
        printf("Humidity Status: NORMAL\n");
    } else {
        printf("Humidity Status: HIGH\n");
    }

    return 0;
}
