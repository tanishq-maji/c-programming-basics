#include <stdio.h>

int main() {
    int resistance;

    printf("=== Thermistor Sensor Simulation ===\n");

    resistance = 8200;

    printf("Thermistor Resistance: %d ohms\n", resistance);

    if (resistance > 10000) {
        printf("Temperature Status: LOW\n");
    } else if (resistance >= 5000) {
        printf("Temperature Status: NORMAL\n");
    } else {
        printf("Temperature Status: HIGH\n");
    }

    return 0;
}
