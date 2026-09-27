#include <stdio.h>

unsigned char spi_receive(unsigned char data) {
    printf("SPI RX: 0x%02X\n", data);
    return data;
}

int main() {
    unsigned int input;
    unsigned char received;

    printf("=== SPI Receive Simulation ===\n");

    printf("Enter received data (0-255): ");

    if (scanf("%u", &input) != 1 || input > 255) {
        printf("Invalid data.\n");
        return 1;
    }

    received = spi_receive((unsigned char)input);

    printf("Received value: %u\n", received);

    return 0;
}