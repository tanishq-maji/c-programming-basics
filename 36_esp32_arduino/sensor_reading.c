#include <stdio.h>

int main(void)
{
    float temperature;
    float humidity;

    printf("ESP32 Sensor Reading Simulation\n");

    printf("Enter temperature (C): ");
    scanf("%f", &temperature);

    printf("Enter humidity (%%): ");
    scanf("%f", &humidity);

    printf("\nSensor Data\n");
    printf("Temperature: %.2f C\n", temperature);
    printf("Humidity: %.2f %%\n", humidity);

    return 0;
}