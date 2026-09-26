#include <stdio.h>

void turn_on_led() {
    printf("LED: ON\n");
}

void turn_off_led() {
    printf("LED: OFF\n");
}

int main() {
    int choice;

    printf("=== LED GPIO Control ===\n");
    printf("1. Turn LED ON\n");
    printf("2. Turn LED OFF\n");
    printf("Enter choice: ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            turn_on_led();
            break;

        case 2:
            turn_off_led();
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}