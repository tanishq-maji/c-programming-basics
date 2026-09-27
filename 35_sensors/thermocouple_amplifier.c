#include <stdio.h>

int main() {
    float sensor_voltage;
    float amplified_voltage;

    printf("=== Thermocouple Amplifier Simulation ===\n");

    sensor_voltage = 0.012f;
    amplified_voltage = sensor_voltage * 100.0f;

    printf("Sensor Voltage: %.3f V\n", sensor_voltage);
    printf("Amplified Voltage: %.2f V\n", amplified_voltage);

    if (amplified_voltage < 1.0f) {
        printf("Signal Level: LOW\n");
    } else if (amplified_voltage <= 2.0f) {
        printf("Signal Level: NORMAL\n");
    } else {
        printf("Signal Level: HIGH\n");
    }

    return 0;
}