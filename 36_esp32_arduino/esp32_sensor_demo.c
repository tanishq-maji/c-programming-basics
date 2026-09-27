#include <stdio.h>

int main(void)
{
    float temperature;
    int light_level;

    printf("ESP32 Sensor Demo\n");
    printf("-----------------\n");

    printf("Enter temperature (C): ");
    scanf("%f", &temperature);

    printf("Enter light level (0-100): ");
    scanf("%d", &light_level);

    printf("\n--- Sensor Data ---\n");
    printf("Temperature: %.2f C\n", temperature);
    printf("Light Level: %d%%\n", light_level);

    if (temperature > 35.0f)
        printf("Warning: High temperature!\n");
    else
        printf("Temperature: Normal\n");

    if (light_level < 30)
        printf("Environment: Low Light\n");
    else
        printf("Environment: Sufficient Light\n");

    return 0;
}