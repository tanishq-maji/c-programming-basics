#include <stdio.h>
#include "data_logger.h"

void log_sensor_data(const SensorData *data)
{
    FILE *file = fopen("health_data.txt", "a");

    if (file == NULL)
    {
        printf("Error: Unable to open data log file.\n");
        return;
    }

    fprintf(file,
            "Temperature: %.2f C | Heart Rate: %d BPM | SpO2: %d%%\n",
            data->temperature,
            data->heart_rate,
            data->spo2);

    fclose(file);

    printf("Sensor data logged successfully.\n");
}