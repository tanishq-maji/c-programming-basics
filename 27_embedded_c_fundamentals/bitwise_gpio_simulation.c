#include <stdio.h>

#define LED_PIN     0
#define MOTOR_PIN   1
#define BUZZER_PIN  2

int main() {
    unsigned char GPIO_PORT = 0;

    printf("=== GPIO Simulation ===\n");

    /* Turn ON LED */
    GPIO_PORT |= (1 << LED_PIN);
    printf("LED ON      | GPIO = %d\n", GPIO_PORT);

    /* Turn ON Motor */
    GPIO_PORT |= (1 << MOTOR_PIN);
    printf("Motor ON    | GPIO = %d\n", GPIO_PORT);

    /* Turn ON Buzzer */
    GPIO_PORT |= (1 << BUZZER_PIN);
    printf("Buzzer ON   | GPIO = %d\n", GPIO_PORT);

    /* Turn OFF LED */
    GPIO_PORT &= ~(1 << LED_PIN);
    printf("LED OFF     | GPIO = %d\n", GPIO_PORT);

    /* Check Motor status */
    if (GPIO_PORT & (1 << MOTOR_PIN)) {
        printf("Motor Status: ON\n");
    } else {
        printf("Motor Status: OFF\n");
    }

    /* Toggle Buzzer */
    GPIO_PORT ^= (1 << BUZZER_PIN);
    printf("Buzzer Toggle | GPIO = %d\n", GPIO_PORT);

    return 0;
}