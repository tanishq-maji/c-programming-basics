#include <stdio.h>

int main() {
    float temperature;
    int humidity;
    int motion;

    printf("=== Sensor Monitoring System ===\n");

    temperature = 29.5f;
    humidity = 64;
    motion = 1;

    printf("Temperature: %.1f C\n", temperature);
    printf("Humidity: %d %%\n", humidity);

    if (motion == 1) {
        printf("Motion: DETECTED\n");
    } else {
        printf("Motion: NOT DETECTED\n");
    }

    if (temperature > 35.0f || humidity > 80 || motion == 1) {
        printf("System Status: MONITORING ALERTS\n");
    } else {
        printf("System Status: NORMAL\n");
    }

    return 0;
}
