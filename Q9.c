#include <stdio.h>

int main()
{
    int permissions;

    printf("Enter permissions: ");
    scanf("%d", &permissions);

    /* Print detected permissions */

    printf("\nDetected Permissions:\n");

    if ((permissions & 1) != 0)
        printf("READ\n");

    if ((permissions & 2) != 0)
        printf("WRITE\n");

    if ((permissions & 4) != 0)
        printf("EXECUTE\n");

    if ((permissions & 8) != 0)
        printf("DELETE\n");

    if ((permissions & 16) != 0)
        printf("ADMIN\n");

    /* Decide access */

    if ((permissions & 16) != 0)
    {
        printf("Full access: admin\n");
    }
    else if ((permissions & 8) != 0 && (permissions & 2) != 0)
    {
        printf("Access: delete and write\n");
    }
    else if ((permissions & 4) != 0 && (permissions & 2) == 0)
    {
        printf("Access: execute only\n");
    }
    else if ((permissions & 1) != 0 &&
             (permissions & 2) == 0 &&
             (permissions & 4) == 0)
    {
        printf("Access: read-only\n");
    }
    else if ((permissions & 31) == 0)
    {
        printf("Access denied\n");
    }
    else
    {
        printf("Access: custom permissions\n");
    }

    return 0;
}
