#include <stdio.h>

unsigned char i2c_read_sensor(unsigned char address) {
    unsigned char sensor_value = 82;

    printf("I2C START\n");
    printf("Sensor Address: 0x%02X\n", address);
    printf("Reading Sensor Data...\n");
    printf("I2C STOP\n");

    return sensor_value;
}

int main() {
    unsigned char sensor_address = 0x48;
    unsigned char sensor_data;

    printf("=== I2C Sensor Simulation ===\n");

    sensor_data = i2c_read_sensor(sensor_address);

    printf("Sensor Value: %u\n", sensor_data);

    if (sensor_data > 75) {
        printf("Sensor Status: HIGH\n");
    } else {
        printf("Sensor Status: NORMAL\n");
    }

    return 0;
}