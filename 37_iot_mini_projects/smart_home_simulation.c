#include <stdio.h>

int main(void)
{
    int temperature;
    int motion;
    int light;

    printf("Smart Home Simulation\n");
    printf("---------------------\n");

    printf("Enter temperature (C): ");
    scanf("%d", &temperature);

    printf("Enter motion (0/1): ");
    scanf("%d", &motion);

    printf("Enter light level (0-100): ");
    scanf("%d", &light);

    printf("\n--- Smart Home Status ---\n");

    if (temperature > 30)
        printf("Fan: ON\n");
    else
        printf("Fan: OFF\n");

    if (motion == 1 && light < 40)
        printf("Room Light: ON\n");
    else
        printf("Room Light: OFF\n");

    if (motion == 1)
        printf("Security: Motion Detected\n");
    else
        printf("Security: No Motion\n");

    return 0;
}