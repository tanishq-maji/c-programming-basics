#include <stdio.h>

struct Microcontroller {
    int cpu_frequency;
    int flash_memory;
    int ram;
    int gpio_pins;
};

void displayInfo(struct Microcontroller mcu) {
    printf("\n=== Microcontroller Specifications ===\n");
    printf("CPU Frequency : %d MHz\n", mcu.cpu_frequency);
    printf("Flash Memory  : %d KB\n", mcu.flash_memory);
    printf("RAM           : %d KB\n", mcu.ram);
    printf("GPIO Pins     : %d\n", mcu.gpio_pins);
}

int main() {
    struct Microcontroller mcu;

    mcu.cpu_frequency = 80;
    mcu.flash_memory = 512;
    mcu.ram = 64;
    mcu.gpio_pins = 30;

    printf("=== Microcontroller Simulation ===\n");

    displayInfo(mcu);

    return 0;
}
