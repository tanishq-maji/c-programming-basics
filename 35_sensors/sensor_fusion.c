#include <stdio.h>

int main() {
    float temperature;
    int humidity;
    int light_level;

    printf("=== Sensor Fusion Simulation ===\n");

    temperature = 28.5f;
    humidity = 62;
    light_level = 580;

    printf("Temperature: %.1f C\n", temperature);
    printf("Humidity: %d %%\n", humidity);
    printf("Light Level: %d\n", light_level);

    if (temperature > 35.0f ||
        humidity > 80 ||
        light_level < 200) {
        printf("Environment Status: ALERT\n");
    } else {
        printf("Environment Status: NORMAL\n");
    }

    return 0;
}