#include <stdio.h>
#include "sensor_manager.h"

void sensor_initialize(void)
{
    printf("\nInitializing sensors...\n");
    printf("Temperature sensor: READY\n");
    printf("Heart-rate sensor: READY\n");
    printf("SpO2 sensor: READY\n");
}

SensorData read_sensor_data(void)
{
    SensorData data;

    /* Simulated sensor readings */
    data.temperature = 36.7f;
    data.heart_rate = 78;
    data.spo2 = 98;

    return data;
}