# include <stdio.h>
int main()
{
    int card_status, pin_correctness, balance, amount, notes_2, notes_5, notes_1;
    
    printf("Enter the card status ( 1 = Valid , 0 = Blocked );\n");
    scanf("%d", &card_status);

    printf("Enter the pin correctness ( 1 = Correct , 0 = Wrong );\n");
    scanf("%d", &pin_correctness);

    printf("Enter the balance;\n");
    scanf("%d", &balance);

    printf("Enter the amount;\n");
    scanf("%d", &amount);

    if (card_status == 0)
        printf("Card blocked. Contact Bank");
    else if (pin_correctness == 0)
        printf("Invalid PIN");
    else if (amount <= 0)
        printf("Invalid amount");
    else if (amount > balance)
        printf("Insufficient balance");
    else if (amount > 25000)
        printf("Daily limit exceeded");
    else if ((balance - amount) < 1000)
        printf("Minimum balance must be maintained.");
    else 
    {
        balance = balance -  amount;
        notes_2 = amount / 2000;
        amount = amount % 2000;
        notes_5 = amount / 500;
        amount = amount % 500;
        notes_1 = amount / 100;
        amount = amount % 100;

        printf("The balance now stands at; %d \n", balance);
        printf("You receive: %d 2000 notes, %d 500 notes and %d 100 notes.\n", notes_2, notes_5, notes_1);        
        printf("Please collect your cash.");
    }
    return 0;
}