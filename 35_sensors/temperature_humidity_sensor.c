#include <stdio.h>

int main() {
    float temperature;
    float humidity;

    printf("=== Temperature & Humidity Sensor Simulation ===\n");

    temperature = 28.5f;
    humidity = 62.0f;

    printf("Temperature: %.1f C\n", temperature);
    printf("Humidity: %.1f %%\n", humidity);

    if (temperature > 35.0f || humidity > 80.0f) {
        printf("Environment Status: UNCOMFORTABLE\n");
    } else {
        printf("Environment Status: NORMAL\n");
    }

    return 0;
}