#include <stdio.h>
#include <string.h>

void uart_transmit(const char *message) {
    printf("UART TX: %s\n", message);
}

int main() {
    char message[100];

    printf("=== UART Transmit Simulation ===\n");

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);

    message[strcspn(message, "\n")] = '\0';

    uart_transmit(message);

    return 0;
}
