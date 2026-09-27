#include <stdio.h>

int main() {
    int ppg_signal;

    printf("=== PPG Sensor Simulation ===\n");

    ppg_signal = 650;

    printf("PPG Signal Value: %d\n", ppg_signal);

    if (ppg_signal < 400) {
        printf("Signal Status: LOW\n");
    } else if (ppg_signal <= 800) {
        printf("Signal Status: NORMAL\n");
    } else {
        printf("Signal Status: HIGH\n");
    }

    return 0;
}
