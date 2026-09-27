#include <stdio.h>

int main(void)
{
    float temperature;
    float humidity;
    int light;

    printf("IoT Sensor Dashboard\n");
    printf("--------------------\n");

    printf("Temperature (C): ");
    scanf("%f", &temperature);

    printf("Humidity (%%): ");
    scanf("%f", &humidity);

    printf("Light Level (%%): ");
    scanf("%d", &light);

    printf("\n========== DASHBOARD ==========\n");
    printf("Temperature : %.2f C\n", temperature);
    printf("Humidity    : %.2f %%\n", humidity);
    printf("Light Level : %d %%\n", light);
    printf("===============================\n");

    return 0;
}