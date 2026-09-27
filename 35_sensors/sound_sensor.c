#include <stdio.h>

int main() {
    int sound_level;

    printf("=== Sound Sensor Simulation ===\n");

    sound_level = 68;

    printf("Sound Level: %d dB\n", sound_level);

    if (sound_level < 40) {
        printf("Sound Status: QUIET\n");
    } else if (sound_level <= 70) {
        printf("Sound Status: NORMAL\n");
    } else {
        printf("Sound Status: LOUD\n");
    }

    return 0;
}