#include <stdio.h>

int main() {
    int ecg_signal;

    printf("=== ECG Signal Sensor Simulation ===\n");

    ecg_signal = 720;

    printf("ECG Signal Value: %d\n", ecg_signal);

    if (ecg_signal < 400) {
        printf("Signal Status: LOW\n");
    } else if (ecg_signal <= 800) {
        printf("Signal Status: NORMAL RANGE\n");
    } else {
        printf("Signal Status: HIGH\n");
    }

    return 0;
}
