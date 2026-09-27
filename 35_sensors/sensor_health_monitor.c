#include <stdio.h>

int main() {
    int heart_rate;
    int spo2;
    float temperature;

    printf("=== Health Sensor Monitor Simulation ===\n");

    heart_rate = 78;
    spo2 = 98;
    temperature = 36.8f;

    printf("Heart Rate  : %d BPM\n", heart_rate);
    printf("SpO2        : %d %%\n", spo2);
    printf("Temperature : %.1f C\n", temperature);

    if (heart_rate < 60 || heart_rate > 100 ||
        spo2 < 95 ||
        temperature < 36.0f || temperature > 37.5f) {

        printf("Health Status: CHECK REQUIRED\n");

    } else {
        printf("Health Status: WITHIN SIMULATED RANGE\n");
    }

    return 0;
}
