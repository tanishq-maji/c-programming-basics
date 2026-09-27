#include <stdio.h>

int main() {
    int emg_signal;

    printf("=== EMG Signal Sensor Simulation ===\n");

    emg_signal = 430;

    printf("EMG Signal Value: %d\n", emg_signal);

    if (emg_signal < 200) {
        printf("Muscle Activity: LOW\n");
    } else if (emg_signal <= 600) {
        printf("Muscle Activity: NORMAL\n");
    } else {
        printf("Muscle Activity: HIGH\n");
    }

    return 0;
}
