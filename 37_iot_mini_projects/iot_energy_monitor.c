#include <stdio.h>

int main(void)
{
    float voltage;
    float current;
    float power;

    printf("IoT Energy Monitor\n");
    printf("------------------\n");

    printf("Voltage (V): ");
    scanf("%f", &voltage);

    printf("Current (A): ");
    scanf("%f", &current);

    power = voltage * current;

    printf("\nVoltage: %.2f V\n", voltage);
    printf("Current: %.2f A\n", current);
    printf("Power: %.2f W\n", power);

    if (power > 100.0f)
        printf("Warning: High power consumption!\n");
    else
        printf("Power consumption: Normal\n");

    return 0;
}