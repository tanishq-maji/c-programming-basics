#include <stdio.h>

int main(void)
{
    int motion;
    int door;
    int password;

    printf("IoT Security System\n");
    printf("-------------------\n");

    printf("Motion detected (0/1): ");
    scanf("%d", &motion);

    printf("Door open (0/1): ");
    scanf("%d", &door);

    printf("Enter security PIN: ");
    scanf("%d", &password);

    if (motion == 1 || door == 1)
    {
        if (password == 1234)
            printf("Access Granted\n");
        else
            printf("ALARM: Unauthorized Access!\n");
    }
    else
    {
        printf("Security Status: Normal\n");
    }

    return 0;
}