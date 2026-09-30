#include <stdio.h>

int main()
{
    int time, motion, light, room, cooking;

    printf("Enter time (0-23):\n");
    scanf("%d", &time);

    printf("Enter motion detected (1 = Yes, 0 = No):\n");
    scanf("%d", &motion);

    printf("Enter light level (0-100):\n");
    scanf("%d", &light);

    printf("\nSelect a room:\n");
    printf("1 = Living Room\n");
    printf("2 = Bedroom\n");
    printf("3 = Kitchen\n");
    scanf("%d", &room);

    switch (room)
    {
        case 1:
            if (motion == 0)
            {
                printf("Mode: Away\n");
                printf("Action: All OFF");
            }
            else if (time >= 6 && time < 18)
            {
                printf("Mode: Day\n");
                printf("Action: Lights ON");
            }
            else if (time >= 18 && time < 23)
            {
                printf("Mode: Evening\n");
                printf("Action: Dim lights");
            }
            else
            {
                printf("Mode: Night\n");
                printf("Action: Lights OFF");
            }
            break;

        case 2:
            if (motion == 0)
            {
                printf("Mode: Away\n");
                printf("Action: All OFF");
            }
            else if (time >= 6 && time < 18)
            {
                printf("Mode: Day\n");
                printf("Action: Lights ON");
            }
            else if (time >= 18 && time < 23)
            {
                printf("Mode: Evening\n");
                printf("Action: Dim lights");
            }
            else
            {
                printf("Mode: Night\n");
                printf("Action: Lights OFF");
            }
            break;

        case 3:
            printf("Are you cooking? (1 = Yes, 0 = No):\n");
            scanf("%d", &cooking);

            if (cooking == 1)
                printf("Action: Exhaust fan ON\n");

            if (motion == 0)
            {
                printf("Mode: Away\n");
                printf("Action: All OFF");
            }
            else if (time >= 6 && time < 18)
            {
                printf("Mode: Day\n");
                printf("Action: Lights ON");
            }
            else if (time >= 18 && time < 23)
            {
                printf("Mode: Evening\n");
                printf("Action: Dim lights");
            }
            else
            {
                printf("Mode: Night\n");
                printf("Action: Lights OFF");
            }
            break;

        default:
            printf("Invalid room");
    }

    return 0;
}