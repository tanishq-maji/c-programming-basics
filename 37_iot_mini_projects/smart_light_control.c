#include <stdio.h>

int main(void)
{
    int light_level;
    int motion;

    printf("Smart Light Control\n");
    printf("-------------------\n");

    printf("Enter light level (0-100): ");
    scanf("%d", &light_level);

    printf("Enter motion status (0 = No, 1 = Yes): ");
    scanf("%d", &motion);

    if (motion == 1 && light_level < 40)
        printf("Light Status: ON\n");
    else
        printf("Light Status: OFF\n");

    return 0;
}