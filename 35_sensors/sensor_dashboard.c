#include <stdio.h>

int main() {
    float temperature;
    int humidity;
    int light_level;
    int motion;

    printf("=== Sensor Dashboard ===\n");

    temperature = 28.5f;
    humidity = 62;
    light_level = 580;
    motion = 1;

    printf("\n--- Sensor Readings ---\n");
    printf("Temperature : %.1f C\n", temperature);
    printf("Humidity    : %d %%\n", humidity);
    printf("Light Level : %d\n", light_level);

    if (motion == 1) {
        printf("Motion      : DETECTED\n");
    } else {
        printf("Motion      : NOT DETECTED\n");
    }

    printf("\n--- System Status ---\n");

    if (temperature > 35.0f ||
        humidity > 80 ||
        light_level < 200) {
        printf("Environment : ALERT\n");
    } else {
        printf("Environment : NORMAL\n");
    }

    return 0;
}
