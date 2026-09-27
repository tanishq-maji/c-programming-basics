#include <stdio.h>

void i2c_transfer(unsigned char address,
                  unsigned char transmit_data,
                  unsigned char *receive_data) {

    printf("I2C START\n");
    printf("Device Address: 0x%02X\n", address);

    printf("Transmitting: 0x%02X\n", transmit_data);

    *receive_data = 0x5A;

    printf("Receiving: 0x%02X\n", *receive_data);
    printf("I2C STOP\n");
}

int main() {
    unsigned char device_address = 0x50;
    unsigned char transmit_data = 0xA5;
    unsigned char receive_data;

    printf("=== I2C Transfer Simulation ===\n");

    i2c_transfer(device_address, transmit_data, &receive_data);

    printf("Final Received Data: 0x%02X\n", receive_data);

    return 0;
}