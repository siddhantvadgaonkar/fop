#include <stdio.h>
int main()
{

    float balance = 10000.00;
    int run = 1;
    int choice;
    float amount;
    printf("*******ATM MACHINE*******\n");
    printf("1.Withdrawal  2.Deposit 3.Check Balance 4:Quit\n");
    while(run ==1)
    {
    printf("Enter the type of transaction you want to perform:\n");
    scanf("%d",&choice);
    if(choice == 1)
    {
        printf("Enter the amount you want to withdraw: ");
        scanf("%f", &amount);
        if(amount> balance)
        {
            printf("Not sufficient balance");
        }
        else
        {
            balance-=amount;
        }
    }
    else if (choice == 2)
    {
        printf("Enter the amount you want to deposit: ");
        scanf("%f", &amount);
        balance+=amount;
        
    }
    else if(choice == 3)
    {
        printf("BALANCE: $%.2f \n", balance);
    }
    else if(choice == 4)
    {
        printf("Thank you for using our ATM");
        run=0;
    }
    else{
        printf("Invalid choice please try again\n");
    }
}

    

}
