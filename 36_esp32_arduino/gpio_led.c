#include <stdio.h>

#define LED_PIN 2

int main(void)
{
    int led_state = 0;

    printf("GPIO LED Control Simulation\n");

    led_state = 1;

    if (led_state)
    {
        printf("GPIO %d -> HIGH\n", LED_PIN);
        printf("LED ON\n");
    }
    else
    {
        printf("GPIO %d -> LOW\n", LED_PIN);
        printf("LED OFF\n");
    }

    return 0;
}