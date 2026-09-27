#include <stdio.h>

int main(void)
{
    FILE *file;
    float temperature;
    int i;

    file = fopen("iot_data.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("IoT Data Logger\n");
    printf("---------------\n");

    for (i = 1; i <= 5; i++)
    {
        temperature = 25.0f + i;

        fprintf(file, "Reading %d: Temperature = %.2f C\n",
                i, temperature);
    }

    fclose(file);

    printf("Sensor data saved successfully.\n");

    return 0;
}