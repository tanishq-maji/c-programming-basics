#include <stdio.h>

int main() {
    int eeg_signal;

    printf("=== EEG Signal Sensor Simulation ===\n");

    eeg_signal = 520;

    printf("EEG Signal Value: %d\n", eeg_signal);

    if (eeg_signal < 300) {
        printf("Signal Status: LOW\n");
    } else if (eeg_signal <= 700) {
        printf("Signal Status: NORMAL RANGE\n");
    } else {
        printf("Signal Status: HIGH\n");
    }

    return 0;
}
