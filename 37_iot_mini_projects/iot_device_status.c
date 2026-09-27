#include <stdio.h>

int main(void)
{
    int device_status;
    int battery;

    printf("IoT Device Status\n");
    printf("-----------------\n");

    printf("Device status (0 = Offline, 1 = Online): ");
    scanf("%d", &device_status);

    printf("Battery level (%%): ");
    scanf("%d", &battery);

    printf("\n--- Device Status ---\n");

    if (device_status == 1)
        printf("Connection: ONLINE\n");
    else
        printf("Connection: OFFLINE\n");

    printf("Battery: %d%%\n", battery);

    if (battery < 20)
        printf("Warning: Low battery\n");

    return 0;
}