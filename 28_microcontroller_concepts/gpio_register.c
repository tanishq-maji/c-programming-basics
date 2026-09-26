#include <stdio.h>

#define LED_PIN 0
#define BUTTON_PIN 1
#define MOTOR_PIN 2

unsigned char GPIO_REGISTER = 0;

void set_pin(int pin) {
    GPIO_REGISTER |= (1 << pin);
}

void clear_pin(int pin) {
    GPIO_REGISTER &= ~(1 << pin);
}

int read_pin(int pin) {
    return (GPIO_REGISTER & (1 << pin)) != 0;
}

void display_register() {
    printf("GPIO_REGISTER = %d\n", GPIO_REGISTER);
}

int main() {
    printf("=== GPIO Register Simulation ===\n");

    set_pin(LED_PIN);
    printf("LED configured ON\n");

    set_pin(MOTOR_PIN);
    printf("Motor configured ON\n");

    display_register();

    if (read_pin(LED_PIN)) {
        printf("LED status: ON\n");
    }

    clear_pin(LED_PIN);
    printf("LED configured OFF\n");

    display_register();

    if (!read_pin(BUTTON_PIN)) {
        printf("Button status: LOW\n");
    }

    return 0;
}
