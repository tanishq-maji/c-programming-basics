#include <stdio.h>

int main() {
    int timer = 0;
    int overflow_limit = 10;

    printf("=== Timer Simulation ===\n");

    for (timer = 0; timer <= overflow_limit; timer++) {
        printf("Timer Count: %d\n", timer);
    }

    if (timer > overflow_limit) {
        printf("Timer Overflow!\n");
        timer = 0;
    }

    printf("Timer Reset: %d\n", timer);

    return 0;
}
