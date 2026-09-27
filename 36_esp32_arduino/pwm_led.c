#include <stdio.h>

int main(void)
{
    int duty_cycle;

    printf("PWM LED Control Simulation\n");
    printf("Enter duty cycle (0-100): ");
    scanf("%d", &duty_cycle);

    if (duty_cycle < 0)
        duty_cycle = 0;

    if (duty_cycle > 100)
        duty_cycle = 100;

    printf("PWM Duty Cycle: %d%%\n", duty_cycle);

    if (duty_cycle == 0)
        printf("LED OFF\n");
    else if (duty_cycle == 100)
        printf("LED Fully ON\n");
    else
        printf("LED Brightness: %d%%\n", duty_cycle);

    return 0;
}