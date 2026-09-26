#include <stdio.h>

int main() {
    int button;
    int led = 0;

    printf("=== Digital Input/Output Simulation ===\n");

    printf("Enter button state (0 = OFF, 1 = ON): ");
    scanf("%d", &button);

    if (button == 1) {
        led = 1;
    } else {
        led = 0;
    }

    printf("Button: %s\n", button ? "PRESSED" : "RELEASED");
    printf("LED   : %s\n", led ? "ON" : "OFF");

    return 0;
}