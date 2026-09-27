#include <stdio.h>

int main() {
    float latitude;
    float longitude;

    printf("=== GPS Sensor Simulation ===\n");

    latitude = 19.2403f;
    longitude = 73.1305f;

    printf("Latitude: %.4f\n", latitude);
    printf("Longitude: %.4f\n", longitude);

    printf("GPS Status: LOCATION AVAILABLE\n");

    return 0;
}
