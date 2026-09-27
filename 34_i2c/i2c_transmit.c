#include <stdio.h>

void i2c_transmit(unsigned char address, unsigned char data) {
    printf("I2C START\n");
    printf("Device Address: 0x%02X\n", address);
    printf("Transmitting Data: 0x%02X\n", data);
    printf("I2C STOP\n");
}

int main() {
    unsigned char device_address = 0x50;
    unsigned char data = 0xA5;

    printf("=== I2C Transmit Simulation ===\n");

    i2c_transmit(device_address, data);

    return 0;
}