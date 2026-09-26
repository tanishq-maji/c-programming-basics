#include <stdio.h>

int main() {
    int led = 0;

    printf("=== GPIO Output Simulation ===\n");

    led = 1;

    if (led) {
        printf("GPIO OUTPUT: HIGH\n");
        printf("LED: ON\n");
    } else {
        printf("GPIO OUTPUT: LOW\n");
        printf("LED: OFF\n");
    }

    led = 0;

    if (led) {
        printf("GPIO OUTPUT: HIGH\n");
        printf("LED: ON\n");
    } else {
        printf("GPIO OUTPUT: LOW\n");
        printf("LED: OFF\n");
    }

    return 0;
}
