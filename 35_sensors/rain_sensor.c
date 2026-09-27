#include <stdio.h>

int main() {
    int rain_detected;

    printf("=== Rain Sensor Simulation ===\n");

    rain_detected = 1;

    printf("Rain Sensor State: %d\n", rain_detected);

    if (rain_detected == 1) {
        printf("Rain Status: RAIN DETECTED\n");
    } else {
        printf("Rain Status: NO RAIN\n");
    }

    return 0;
}
