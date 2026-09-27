#include <stdio.h>

int main() {
    int heart_rate;

    printf("=== Pulse Sensor Simulation ===\n");

    heart_rate = 78;

    printf("Heart Rate: %d BPM\n", heart_rate);

    if (heart_rate < 60) {
        printf("Heart Rate Status: LOW\n");
    } else if (heart_rate <= 100) {
        printf("Heart Rate Status: NORMAL\n");
    } else {
        printf("Heart Rate Status: HIGH\n");
    }

    return 0;
}
