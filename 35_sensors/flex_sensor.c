#include <stdio.h>

int main() {
    int flex_value;

    printf("=== Flex Sensor Simulation ===\n");

    flex_value = 65;

    printf("Flex Sensor Value: %d\n", flex_value);

    if (flex_value < 30) {
        printf("Bending Status: LOW\n");
    } else if (flex_value <= 70) {
        printf("Bending Status: MODERATE\n");
    } else {
        printf("Bending Status: HIGH\n");
    }

    return 0;
}
