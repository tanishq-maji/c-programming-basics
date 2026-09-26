#include <stdio.h>

#define LED_BIT     0
#define MOTOR_BIT   1
#define SENSOR_BIT  2

unsigned char CONTROL_REGISTER = 0;

void set_bit(int bit) {
    CONTROL_REGISTER |= (1 << bit);
}

void clear_bit(int bit) {
    CONTROL_REGISTER &= ~(1 << bit);
}

void show_register() {
    printf("CONTROL_REGISTER = %d\n", CONTROL_REGISTER);
}

int main() {
    printf("=== Register Simulation ===\n");

    show_register();

    set_bit(LED_BIT);
    printf("LED enabled\n");
    show_register();

    set_bit(MOTOR_BIT);
    printf("Motor enabled\n");
    show_register();

    set_bit(SENSOR_BIT);
    printf("Sensor enabled\n");
    show_register();

    clear_bit(LED_BIT);
    printf("LED disabled\n");
    show_register();

    return 0;
}