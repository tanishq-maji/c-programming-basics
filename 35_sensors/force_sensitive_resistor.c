#include <stdio.h>

int main() {
    int force_value;

    printf("=== Force Sensitive Resistor Simulation ===\n");

    force_value = 620;

    printf("FSR Sensor Value: %d\n", force_value);

    if (force_value < 300) {
        printf("Force Status: LOW\n");
    } else if (force_value <= 700) {
        printf("Force Status: MODERATE\n");
    } else {
        printf("Force Status: HIGH\n");
    }

    return 0;
}