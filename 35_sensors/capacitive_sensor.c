#include <stdio.h>

int main() {
    int capacitance;

    printf("=== Capacitive Sensor Simulation ===\n");

    capacitance = 68;

    printf("Capacitance Value: %d pF\n", capacitance);

    if (capacitance < 40) {
        printf("Sensor Status: LOW\n");
    } else if (capacitance <= 80) {
        printf("Sensor Status: NORMAL\n");
    } else {
        printf("Sensor Status: HIGH\n");
    }

    return 0;
}