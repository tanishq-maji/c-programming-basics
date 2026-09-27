#include <stdio.h>

int main() {
    int eog_signal;

    printf("=== EOG Signal Sensor Simulation ===\n");

    eog_signal = 310;

    printf("EOG Signal Value: %d\n", eog_signal);

    if (eog_signal < 200) {
        printf("Eye Movement: LOW\n");
    } else if (eog_signal <= 500) {
        printf("Eye Movement: NORMAL\n");
    } else {
        printf("Eye Movement: HIGH\n");
    }

    return 0;
}
