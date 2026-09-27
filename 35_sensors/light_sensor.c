#include <stdio.h>

int main() {
    int light_level;

    printf("=== Light Sensor Simulation ===\n");

    light_level = 650;

    printf("Light Level: %d\n", light_level);

    if (light_level < 300) {
        printf("Environment: DARK\n");
    } else if (light_level < 700) {
        printf("Environment: NORMAL\n");
    } else {
        printf("Environment: BRIGHT\n");
    }

    return 0;
}
