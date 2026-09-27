#include <stdio.h>

int main(void)
{
    int adc_value;

    printf("Analog Read Simulation\n");
    printf("Enter ADC value (0-4095): ");
    scanf("%d", &adc_value);

    if (adc_value < 0)
        adc_value = 0;

    if (adc_value > 4095)
        adc_value = 4095;

    printf("ADC Value: %d\n", adc_value);

    return 0;
}