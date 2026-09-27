#include <stdio.h>

int main() {
    int pressure_switch;

    printf("=== Pressure Switch Simulation ===\n");

    pressure_switch = 1;

    printf("Pressure Switch State: %d\n", pressure_switch);

    if (pressure_switch == 1) {
        printf("Pressure Status: ACTIVE\n");
    } else {
        printf("Pressure Status: INACTIVE\n");
    }

    return 0;
}
