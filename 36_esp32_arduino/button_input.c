#include <stdio.h>

#define BUTTON_PIN 4

int main(void)
{
    int button_state;

    printf("Button Input Simulation\n");
    printf("Enter button state (0 = Released, 1 = Pressed): ");
    scanf("%d", &button_state);

    if (button_state == 1)
    {
        printf("GPIO %d -> HIGH\n", BUTTON_PIN);
        printf("Button Pressed\n");
    }
    else
    {
        printf("GPIO %d -> LOW\n", BUTTON_PIN);
        printf("Button Released\n");
    }

    return 0;
}