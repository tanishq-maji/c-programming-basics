#include <stdio.h>

int main() {
    float sensor1;
    float sensor2;
    float sensor3;
    float average;

    printf("=== Sensor Average Simulation ===\n");

    sensor1 = 72.0f;
    sensor2 = 78.0f;
    sensor3 = 75.0f;

    average = (sensor1 + sensor2 + sensor3) / 3.0f;

    printf("Sensor 1: %.2f\n", sensor1);
    printf("Sensor 2: %.2f\n", sensor2);
    printf("Sensor 3: %.2f\n", sensor3);
    printf("Average Sensor Value: %.2f\n", average);

    return 0;
}
