#include <stdio.h>

void select_device(int device) {
    if (device == 1) {
        printf("Temperature Sensor selected.\n");
    } else if (device == 2) {
        printf("EEPROM Memory selected.\n");
    } else if (device == 3) {
        printf("OLED Display selected.\n");
    } else {
        printf("Invalid device selection.\n");
    }
}

int main() {
    int device;

    printf("=== I2C Device Select Simulation ===\n");
    printf("1. Temperature Sensor\n");
    printf("2. EEPROM Memory\n");
    printf("3. OLED Display\n");

    printf("Select device: ");
    scanf("%d", &device);

    select_device(device);

    return 0;
}