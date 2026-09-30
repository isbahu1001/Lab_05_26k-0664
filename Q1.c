#include <stdio.h>
int main()
{
    int vehicle_type, hours_parked, membership, fee;
    fee = 0;

    printf("Enter you choice of vehicle ( 1. Bike, 2. Car, 3. Truck ); \n");
    scanf("%d", &vehicle_type);

    printf("Enter the duration; \n");
    scanf("%d", &hours_parked);

    printf("Are you a member ( 1. Member, 2. Non-Memeber ); \n");
    scanf("%d", &membership);

    if ( vehicle_type == 0 || vehicle_type > 3 )
        printf("Invalid vehicle type!\n");

    else if ( hours_parked <= 0 )
        printf("Invalid duration!\n");

    else 
    {
        if ( vehicle_type == 1 )
            fee = 20 * hours_parked;
        else if ( vehicle_type == 2 )
        {
            if (hours_parked <= 2)
                fee = 50;
            else 
                fee = 50 + (30*(hours_parked - 2));
        }
        else 
        {
            if (hours_parked <= 3)
                fee = 100;
            else 
                fee = 100 + (50*(hours_parked - 3));
        }
        if (membership == 1 && fee > 200)
        fee = fee - (fee * 0.15);

        printf("The total fee is %d;", fee);

    }
    
    return 0;
    
}