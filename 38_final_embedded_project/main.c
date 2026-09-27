#include <stdio.h>
#include "sensor_manager.h"
#include "alert_system.h"
#include "display.h"
#include "data_logger.h"

int main(void)
{
    SensorData data;

    printf("=====================================\n");
    printf("   SMART HEALTH MONITORING SYSTEM\n");
    printf("=====================================\n");

    sensor_initialize();

    data = read_sensor_data();

    display_data(&data);

    check_health_alerts(&data);

    log_sensor_data(&data);

    printf("\nMonitoring cycle completed.\n");

    return 0;
}
