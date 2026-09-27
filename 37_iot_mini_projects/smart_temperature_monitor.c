#include <stdio.h>

int main(void)
{
    float temperature;

    printf("Smart Temperature Monitor\n");
    printf("-------------------------\n");

    printf("Enter temperature (C): ");
    scanf("%f", &temperature);

    printf("Temperature: %.2f C\n", temperature);

    if (temperature >= 40.0f)
        printf("ALERT: Critical high temperature!\n");
    else if (temperature >= 35.0f)
        printf("WARNING: High temperature\n");
    else if (temperature < 10.0f)
        printf("WARNING: Low temperature\n");
    else
        printf("Temperature: Normal\n");

    return 0;
}