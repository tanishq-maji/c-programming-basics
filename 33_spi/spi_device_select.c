#include <stdio.h>

void select_device(int device) {
    if (device == 1) {
        printf("Device 1 selected.\n");
    } else if (device == 2) {
        printf("Device 2 selected.\n");
    } else {
        printf("Invalid device selection.\n");
    }
}

int main() {
    int device;

    printf("=== SPI Device Select Simulation ===\n");
    printf("1. Sensor\n");
    printf("2. Memory\n");

    printf("Select device: ");
    scanf("%d", &device);

    select_device(device);

    return 0;
}
