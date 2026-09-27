#include <stdio.h>

int main(void)
{
    int adc_value;
    float voltage;

    printf("ADC Simulation\n");
    printf("Enter ADC value (0-4095): ");
    scanf("%d", &adc_value);

    if (adc_value < 0)
        adc_value = 0;

    if (adc_value > 4095)
        adc_value = 4095;

    voltage = (adc_value * 3.3f) / 4095.0f;

    printf("ADC Value: %d\n", adc_value);
    printf("Calculated Voltage: %.2f V\n", voltage);

    return 0;
}