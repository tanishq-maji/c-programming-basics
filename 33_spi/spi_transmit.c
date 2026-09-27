#include <stdio.h>

void spi_transmit(unsigned char data) {
    printf("SPI TX: 0x%02X\n", data);
}

int main() {
    unsigned char data;

    printf("=== SPI Transmit Simulation ===\n");

    printf("Enter data (0-255): ");

    if (scanf("%hhu", &data) != 1) {
        printf("Invalid data.\n");
        return 1;
    }

    spi_transmit(data);

    return 0;
}