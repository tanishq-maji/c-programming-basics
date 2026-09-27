#include <stdio.h>

int main() {
    int gas_level;

    printf("=== Gas Leak Sensor Simulation ===\n");

    gas_level = 680;

    printf("Gas Concentration: %d units\n", gas_level);

    if (gas_level > 600) {
        printf("ALERT: GAS LEAK DETECTED\n");
    } else {
        printf("Status: SAFE\n");
    }

    return 0;
}