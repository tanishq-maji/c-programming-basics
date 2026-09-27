#include <stdio.h>

unsigned char i2c_receive(unsigned char address) {
    unsigned char data = 0x5A;

    printf("I2C START\n");
    printf("Reading from Device Address: 0x%02X\n", address);
    printf("Receiving Data: 0x%02X\n", data);
    printf("I2C STOP\n");

    return data;
}

int main() {
    unsigned char device_address = 0x50;
    unsigned char received_data;

    printf("=== I2C Receive Simulation ===\n");

    received_data = i2c_receive(device_address);

    printf("Received Value: 0x%02X\n", received_data);

    return 0;
}