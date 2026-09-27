#include <stdio.h>

int main(void)
{
    float temperature;
    int gas_level;

    printf("IoT Alert System\n");
    printf("----------------\n");

    printf("Enter temperature (C): ");
    scanf("%f", &temperature);

    printf("Enter gas level (0-100): ");
    scanf("%d", &gas_level);

    if (temperature > 40.0f)
        printf("ALERT: High temperature detected!\n");

    if (gas_level > 70)
        printf("ALERT: Dangerous gas level detected!\n");

    if (temperature <= 40.0f && gas_level <= 70)
        printf("System Status: SAFE\n");

    return 0;
}