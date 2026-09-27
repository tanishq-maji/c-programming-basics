#include <stdio.h>
#include <string.h>

void uart_receive(const char *message) {
    printf("UART RX: %s\n", message);
}

int main() {
    char message[100];

    printf("=== UART Receive Simulation ===\n");

    printf("Enter received message: ");
    fgets(message, sizeof(message), stdin);

    message[strcspn(message, "\n")] = '\0';

    uart_receive(message);

    return 0;
}