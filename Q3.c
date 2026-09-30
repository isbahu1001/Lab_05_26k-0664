# include <stdio.h>
int main()
{
    int age, oxygen_level, heart_rate;

    printf("Enter your age; \n");
    scanf("%d", &age);

    printf("Enter your oxygen_level; \n");
    scanf("%d", &oxygen_level);

    printf("Enter your heart_rate; \n");
    scanf("%d", &heart_rate);

    if (oxygen_level < 90)
        printf("Critical: immediate attention \n");
    else if (heart_rate < 40 || heart_rate > 130)
        printf("Critical: cardiac alert \n");
    else if (oxygen_level < 95 && age >= 65)
        printf("High Priority \n");
    else if (oxygen_level > 110 && age <= 5)
        printf("High Priority \n");
    else if (oxygen_level < 97)
        printf("Medium Priority \n");
    else
        printf("Low Priority \n");
}