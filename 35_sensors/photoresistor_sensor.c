#include <stdio.h>

int main() {
    int light_value;

    printf("=== Photoresistor Sensor Simulation ===\n");

    light_value = 580;

    printf("Light Sensor Value: %d\n", light_value);

    if (light_value < 250) {
        printf("Light Status: DARK\n");
    } else if (light_value <= 700) {
        printf("Light Status: NORMAL\n");
    } else {
        printf("Light Status: BRIGHT\n");
    }

    return 0;
}
