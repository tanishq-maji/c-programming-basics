#include <stdio.h>

int led = 0;
int motor = 0;
int buzzer = 0;

void show_status() {
    printf("\n--- Device Status ---\n");
    printf("LED    : %s\n", led ? "ON" : "OFF");
    printf("Motor  : %s\n", motor ? "ON" : "OFF");
    printf("Buzzer : %s\n", buzzer ? "ON" : "OFF");
}

int main() {
    int choice;

    do {
        printf("\n=== EMBEDDED DEVICE CONTROL ===\n");
        printf("1. Turn LED ON\n");
        printf("2. Turn LED OFF\n");
        printf("3. Turn Motor ON\n");
        printf("4. Turn Motor OFF\n");
        printf("5. Turn Buzzer ON\n");
        printf("6. Turn Buzzer OFF\n");
        printf("7. Show Status\n");
        printf("8. Exit\n");

        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");

            while (getchar() != '\n') {
                // Clear invalid input
            }

            continue;
        }

        switch (choice) {
            case 1:
                led = 1;
                printf("LED turned ON.\n");
                break;

            case 2:
                led = 0;
                printf("LED turned OFF.\n");
                break;

            case 3:
                motor = 1;
                printf("Motor turned ON.\n");
                break;

            case 4:
                motor = 0;
                printf("Motor turned OFF.\n");
                break;

            case 5:
                buzzer = 1;
                printf("Buzzer turned ON.\n");
                break;

            case 6:
                buzzer = 0;
                printf("Buzzer turned OFF.\n");
                break;

            case 7:
                show_status();
                break;

            case 8:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 8);

    return 0;
}