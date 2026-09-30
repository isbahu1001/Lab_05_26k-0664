#include <stdio.h>

int main()
{
    int permissions;

    printf("Enter permissions: ");
    scanf("%d", &permissions);

    if ((permissions & 4) != 0)
    {
        printf("Access granted: full control\n");
    }
    else
    {
        if ((permissions & 1) != 0 && (permissions & 2) != 0)
        {
            printf("Access granted: read and write\n");
        }
        else
        {
            if ((permissions & 1) != 0)
            {
                printf("Access granted: read-only\n");
            }
            else
            {
                printf("Access denied\n");
            }
        }
    }

    return 0;
}
