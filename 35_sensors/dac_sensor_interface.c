#include <stdio.h>

int main() {
    int dac_value;
    float voltage;

    printf("=== DAC Sensor Interface Simulation ===\n");

    dac_value = 2048;

    voltage = (dac_value / 4095.0f) * 3.3f;

    printf("DAC Value: %d\n", dac_value);
    printf("Output Voltage: %.2f V\n", voltage);

    if (voltage < 1.0f) {
        printf("Output Level: LOW\n");
    } else if (voltage <= 2.5f) {
        printf("Output Level: NORMAL\n");
    } else {
        printf("Output Level: HIGH\n");
    }

    return 0;
}
