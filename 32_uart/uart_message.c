#include <stdio.h>
#include <string.h>

struct UARTMessage {
    int device_id;
    char message[100];
};

void send_message(struct UARTMessage msg) {
    printf("UART TX\n");
    printf("Device ID: %d\n", msg.device_id);
    printf("Message: %s\n", msg.message);
}

int main() {
    struct UARTMessage msg;

    printf("=== UART Message Simulation ===\n");

    printf("Enter Device ID: ");
    if (scanf("%d", &msg.device_id) != 1) {
        printf("Invalid Device ID.\n");
        return 1;
    }

    getchar();

    printf("Enter Message: ");
    fgets(msg.message, sizeof(msg.message), stdin);

    msg.message[strcspn(msg.message, "\n")] = '\0';

    send_message(msg);

    return 0;
}
