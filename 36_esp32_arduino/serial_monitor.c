#include <stdio.h>

int main(void)
{
    char message[100];

    printf("Serial Monitor Simulation\n");
    printf("--------------------------\n");

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);

    printf("Serial Output: %s", message);

    return 0;
}