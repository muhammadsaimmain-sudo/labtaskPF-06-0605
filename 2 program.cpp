#include <stdio.h>

int main()
{
    int status, operation;

    // Get the CURRENT status of the panel
    printf("Enter current status: ");
    scanf("%d", &status);

    // Show the operations
    printf("\n1. Turn Water Heater ON\n");
    printf("2. Turn Air Conditioner OFF\n");
    printf("3. Toggle Main Lights\n");
    printf("4. Check Security Camera\n");

    printf("Enter operation: ");
    scanf("%d", &operation);

    switch(operation)
    {
        case 1:
            // Water Heater = 2
            status = status | 2;
            printf("Water Heater is ON\n");
            break;

        case 2:
            // Air Conditioner = 4
            status = status & ~4;
            printf("Air Conditioner is OFF\n");
            break;

        case 3:
            // Main Lights = 1
            status = status ^ 1;
            printf("Main Lights toggled\n");
            break;

        case 4:
            // Security Camera = 8
            if(status & 8)
                printf("Security Camera is ON\n");
            else
                printf("Security Camera is OFF\n");

            break;
    }

    printf("\nNew status = %d\n", status);

    return 0;
}
