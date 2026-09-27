#include <stdio.h>

int main() {
    int spo2;

    printf("=== SpO2 Sensor Simulation ===\n");

    spo2 = 98;

    printf("SpO2 Level: %d %%\n", spo2);

    if (spo2 < 90) {
        printf("SpO2 Status: LOW\n");
    } else if (spo2 < 95) {
        printf("SpO2 Status: BELOW NORMAL\n");
    } else {
        printf("SpO2 Status: NORMAL\n");
    }

    return 0;
}
