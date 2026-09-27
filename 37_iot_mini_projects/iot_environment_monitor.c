#include <stdio.h>

int main(void)
{
    float temperature;
    float humidity;
    int air_quality;

    printf("IoT Environment Monitor\n");
    printf("-----------------------\n");

    printf("Temperature (C): ");
    scanf("%f", &temperature);

    printf("Humidity (%%): ");
    scanf("%f", &humidity);

    printf("Air Quality (0-500): ");
    scanf("%d", &air_quality);

    printf("\n====== ENVIRONMENT STATUS ======\n");
    printf("Temperature : %.2f C\n", temperature);
    printf("Humidity    : %.2f %%\n", humidity);
    printf("Air Quality : %d\n", air_quality);

    if (temperature > 35.0f)
        printf("Temperature: HIGH\n");
    else
        printf("Temperature: NORMAL\n");

    if (humidity > 70.0f)
        printf("Humidity: HIGH\n");
    else
        printf("Humidity: NORMAL\n");

    if (air_quality > 150)
        printf("Air Quality: POOR\n");
    else
        printf("Air Quality: ACCEPTABLE\n");

    return 0;
}