#include <stdio.h>

int main() {
    float raw_value;
    float previous_value;
    float filtered_value;

    printf("=== Sensor Filter Simulation ===\n");

    raw_value = 78.0f;
    previous_value = 72.0f;

    filtered_value = (raw_value + previous_value) / 2.0f;

    printf("Raw Sensor Value: %.2f\n", raw_value);
    printf("Previous Value: %.2f\n", previous_value);
    printf("Filtered Value: %.2f\n", filtered_value);

    return 0;
}
