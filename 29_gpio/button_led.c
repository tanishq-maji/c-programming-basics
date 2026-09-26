#include <stdio.h>

int main() {
    int button;
    int led = 0;

    printf("=== Button Controlled LED ===\n");

    printf("Enter button state (0 = RELEASED, 1 = PRESSED): ");

    if (scanf("%d", &button) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (button == 1) {
        led = 1;
    } else {
        led = 0;
    }

    printf("Button: %s\n", button ? "PRESSED" : "RELEASED");
    printf("LED: %s\n", led ? "ON" : "OFF");

    return 0;
}