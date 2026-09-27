#include <stdio.h>

int main() {
    int gas_level;

    printf("=== Gas Sensor Simulation ===\n");

    gas_level = 420;

    printf("Gas Sensor Value: %d\n", gas_level);

    if (gas_level < 300) {
        printf("Gas Level: SAFE\n");
    } else if (gas_level <= 600) {
        printf("Gas Level: MODERATE\n");
    } else {
        printf("Gas Level: HIGH - WARNING\n");
    }

    return 0;
}