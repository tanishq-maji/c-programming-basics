#include <stdio.h>

int main() {
    int button;

    printf("=== GPIO Input Simulation ===\n");

    printf("Enter button state (0 = LOW, 1 = HIGH): ");
    scanf("%d", &button);

    if (button == 1) {
        printf("GPIO INPUT: HIGH\n");
        printf("Button: PRESSED\n");
    } else {
        printf("GPIO INPUT: LOW\n");
        printf("Button: RELEASED\n");
    }

    return 0;
}
