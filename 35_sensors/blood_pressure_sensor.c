#include <stdio.h>

int main() {
    int systolic;
    int diastolic;

    printf("=== Blood Pressure Sensor Simulation ===\n");

    systolic = 120;
    diastolic = 80;

    printf("Systolic Pressure: %d mmHg\n", systolic);
    printf("Diastolic Pressure: %d mmHg\n", diastolic);

    if (systolic < 90 || diastolic < 60) {
        printf("Blood Pressure Status: LOW\n");
    } else if (systolic <= 120 && diastolic <= 80) {
        printf("Blood Pressure Status: NORMAL RANGE\n");
    } else {
        printf("Blood Pressure Status: HIGH\n");
    }

    return 0;
}
