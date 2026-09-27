#include <stdio.h>

int main() {
    int respiration_rate;

    printf("=== Respiration Sensor Simulation ===\n");

    respiration_rate = 16;

    printf("Respiration Rate: %d breaths/min\n", respiration_rate);

    if (respiration_rate < 12) {
        printf("Respiration Status: LOW\n");
    } else if (respiration_rate <= 20) {
        printf("Respiration Status: NORMAL\n");
    } else {
        printf("Respiration Status: HIGH\n");
    }

    return 0;
}
