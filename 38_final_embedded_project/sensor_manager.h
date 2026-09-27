#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

typedef struct
{
    float temperature;
    int heart_rate;
    int spo2;
} SensorData;

void sensor_initialize(void);
SensorData read_sensor_data(void);

#endif
