#include <stdio.h>

int main() {
    int temperature;
    int gas_level;
    int motion;

    printf("=== Sensor Alert System Simulation ===\n");

    temperature = 38;
    gas_level = 420;
    motion = 1;

    printf("Temperature: %d C\n", temperature);
    printf("Gas Level: %d\n", gas_level);
    printf("Motion: %s\n", motion ? "DETECTED" : "NOT DETECTED");

    if (temperature > 35 || gas_level > 600 || motion == 1) {
        printf("SYSTEM ALERT: Abnormal condition detected!\n");
    } else {
        printf("System Status: NORMAL\n");
    }

    return 0;
}
