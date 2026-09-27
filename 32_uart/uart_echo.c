#include <stdio.h>
#include <string.h>

void uart_echo(const char *message) {
    printf("UART RX: %s\n", message);
    printf("UART TX: %s\n", message);
}

int main() {
    char message[100];

    printf("=== UART Echo Simulation ===\n");

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);

    message[strcspn(message, "\n")] = '\0';

    uart_echo(message);

    return 0;
}