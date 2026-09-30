#include <stdio.h>

int main()
{
    int stream, interest, medicine;

    printf("Choose Stream:\n");
    printf("1 = Science\n");
    printf("2 = Commerce\n");
    printf("3 = Arts\n");
    printf("Enter stream: ");
    scanf("%d", &stream);

    if (stream == 1)
    {
        printf("\nChoose Interest:\n");
        printf("1 = Biology\n");
        printf("2 = Physics\n");
        printf("3 = Chemistry\n");
        printf("Enter interest: ");
        scanf("%d", &interest);

        if (interest == 1)
        {
            printf("Are you interested in medicine? (1 = Yes, 0 = No): ");
            scanf("%d", &medicine);

            if (medicine == 1)
                printf("Recommended Course: MBBS\n");
            else if (medicine == 0)
                printf("Recommended Course: Biotechnology\n");
            else
                printf("Invalid choice.\n");
        }
        else if (interest == 2)
        {
            printf("Recommended Course: Physics\n");
        }
        else if (interest == 3)
        {
            printf("Recommended Course: Chemistry\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }
    else if (stream == 2)
    {
        printf("\nChoose Interest:\n");
        printf("1 = Accounting\n");
        printf("2 = Marketing\n");
        printf("Enter interest: ");
        scanf("%d", &interest);

        if (interest == 1)
            printf("Recommended Course: Accounting and Finance\n");
        else if (interest == 2)
            printf("Recommended Course: Marketing\n");
        else
            printf("Invalid choice.\n");
    }
    else if (stream == 3)
    {
        printf("\nChoose Interest:\n");
        printf("1 = Literature\n");
        printf("2 = History\n");
        printf("3 = Psychology\n");
        printf("Enter interest: ");
        scanf("%d", &interest);

        if (interest == 1)
            printf("Recommended Course: Literature\n");
        else if (interest == 2)
            printf("Recommended Course: History\n");
        else if (interest == 3)
            printf("Recommended Course: Psychology\n");
        else
            printf("Invalid choice.\n");
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}
