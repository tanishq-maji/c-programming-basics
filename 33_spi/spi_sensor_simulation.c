#include <stdio.h>

unsigned char spi_read_sensor() {
    unsigned char sensor_value = 75;

    printf("SPI: Reading sensor...\n");

    return sensor_value;
}

int main() {
    unsigned char sensor_data;

    printf("=== SPI Sensor Simulation ===\n");

    sensor_data = spi_read_sensor();

    printf("Sensor Value: %u\n", sensor_data);

    if (sensor_data > 70) {
        printf("Sensor Status: HIGH\n");
    } else {
        printf("Sensor Status: NORMAL\n");
    }

    return 0;
}