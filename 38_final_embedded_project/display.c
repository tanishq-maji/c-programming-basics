#include <stdio.h>
#include "display.h"

void display_data(const SensorData *data)
{
    printf("\n=====================================\n");
    printf("        HEALTH MONITOR DISPLAY\n");
    printf("=====================================\n");

    printf("Body Temperature : %.2f C\n", data->temperature);
    printf("Heart Rate       : %d BPM\n", data->heart_rate);
    printf("SpO2             : %d %%\n", data->spo2);

    printf("=====================================\n");
}
