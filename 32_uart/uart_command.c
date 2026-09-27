#include <stdio.h>
#include <string.h>

void process_command(const char *command) {
    if (strcmp(command, "LED ON") == 0) {
        printf("Command received: LED ON\n");
        printf("LED status: ON\n");
    } else if (strcmp(command, "LED OFF") == 0) {
        printf("Command received: LED OFF\n");
        printf("LED status: OFF\n");
    } else if (strcmp(command, "STATUS") == 0) {
        printf("Command received: STATUS\n");
        printf("System status: NORMAL\n");
    } else {
        printf("Unknown command: %s\n", command);
    }
}

int main() {
    char command[50];

    printf("=== UART Command Simulation ===\n");
    printf("Available commands:\n");
    printf("LED ON\n");
    printf("LED OFF\n");
    printf("STATUS\n");

    printf("\nEnter command: ");

    fgets(command, sizeof(command), stdin);
    command[strcspn(command, "\n")] = '\0';

    process_command(command);

    return 0;
}
