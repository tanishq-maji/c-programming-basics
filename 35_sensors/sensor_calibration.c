#include <stdio.h>

int main() {
    float raw_value;
    float offset;
    float calibrated_value;

    printf("=== Sensor Calibration Simulation ===\n");

    raw_value = 820.0f;
    offset = 20.0f;

    calibrated_value = raw_value - offset;

    printf("Raw Sensor Value: %.2f\n", raw_value);
    printf("Calibration Offset: %.2f\n", offset);
    printf("Calibrated Value: %.2f\n", calibrated_value);

    return 0;
}