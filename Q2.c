# include <stdio.h>
int main()
{
    int marks, attendance, income;

    printf("Enter your marks; \n");
    scanf("%d", &marks);

    printf("Enter your attendance; \n");
    scanf("%d", &attendance);

    printf("Enter your income; \n");
    scanf("%d", &income);

    if (marks < 0 || marks > 100)
        printf("Incorrect marks");
    else if (attendance < 0 || attendance > 100)
        printf("Incorrect attendance");
    else
    {
        if (marks < 50)
            printf("Not eligible: marks too low");
        else if (attendance < 75)
            printf("Not eligible: attendance too low");
        else if (income > 800000)
            printf("Not eligible: income too high");
        else
        {
            if (marks >= 90 && attendance >= 90)
                printf("Full Scholarship");
            else if (marks >= 75 && attendance >= 75)
                printf("Half Scholarship");
            else
                printf("Quarter Scholarship");

        }

    }
    return 0;
} 
