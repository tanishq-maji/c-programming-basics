#include <stdio.h>

int main() {
    int adc_value;
    float voltage;

    printf("=== ADC Sensor Interface Simulation ===\n");

    adc_value = 3072;

    voltage = (adc_value / 4095.0f) * 3.3f;

    printf("ADC Value: %d\n", adc_value);
    printf("Sensor Voltage: %.2f V\n", voltage);

    if (voltage < 1.0f) {
        printf("Signal Level: LOW\n");
    } else if (voltage <= 2.5f) {
        printf("Signal Level: NORMAL\n");
    } else {
        printf("Signal Level: HIGH\n");
    }

    return 0;
}
