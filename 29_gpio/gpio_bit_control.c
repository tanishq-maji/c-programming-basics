#include <stdio.h>

#define LED_PIN     0
#define MOTOR_PIN   1
#define BUZZER_PIN  2

unsigned char GPIO_PORT = 0;

void set_pin(int pin) {
    GPIO_PORT |= (1 << pin);
}

void clear_pin(int pin) {
    GPIO_PORT &= ~(1 << pin);
}

void toggle_pin(int pin) {
    GPIO_PORT ^= (1 << pin);
}

void display_status() {
    printf("\nGPIO_PORT = %d\n", GPIO_PORT);

    printf("LED    : %s\n",
           (GPIO_PORT & (1 << LED_PIN)) ? "ON" : "OFF");

    printf("Motor  : %s\n",
           (GPIO_PORT & (1 << MOTOR_PIN)) ? "ON" : "OFF");

    printf("Buzzer : %s\n",
           (GPIO_PORT & (1 << BUZZER_PIN)) ? "ON" : "OFF");
}

int main() {
    printf("=== GPIO Bit Control ===\n");

    set_pin(LED_PIN);
    set_pin(MOTOR_PIN);

    printf("\nAfter setting LED and Motor:\n");
    display_status();

    toggle_pin(LED_PIN);

    printf("\nAfter toggling LED:\n");
    display_status();

    set_pin(BUZZER_PIN);

    printf("\nAfter turning Buzzer ON:\n");
    display_status();

    clear_pin(MOTOR_PIN);

    printf("\nAfter turning Motor OFF:\n");
    display_status();

    return 0;
}