#include <stdio.h>

unsigned char spi_transfer(unsigned char data) {
    printf("SPI TX: 0x%02X\n", data);

    /* Simulate device response */
    unsigned char response = data ^ 0xFF;

    printf("SPI RX: 0x%02X\n", response);

    return response;
}

int main() {
    unsigned int input;

    printf("=== SPI Transfer Simulation ===\n");

    printf("Enter data (0-255): ");

    if (scanf("%u", &input) != 1 || input > 255) {
        printf("Invalid data.\n");
        return 1;
    }

    unsigned char response = spi_transfer((unsigned char)input);

    printf("Device Response: 0x%02X\n", response);

    return 0;
}