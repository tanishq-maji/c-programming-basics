#include <stdio.h>
#include "alert_system.h"

void check_health_alerts(const SensorData *data)
{
    int alert_detected = 0;

    printf("\n--- Health Alert System ---\n");

    if (data->temperature > 38.0f)
    {
        printf("ALERT: High body temperature!\n");
        alert_detected = 1;
    }

    if (data->heart_rate > 100 || data->heart_rate < 60)
    {
        printf("ALERT: Abnormal heart rate!\n");
        alert_detected = 1;
    }

    if (data->spo2 < 95)
    {
        printf("ALERT: Low SpO2 level!\n");
        alert_detected = 1;
    }

    if (!alert_detected)
    {
        printf("Health status: NORMAL\n");
    }
}