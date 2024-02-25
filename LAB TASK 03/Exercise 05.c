#include <stdio.h>

/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 29/03/2022.
(This Program determine if a department store customer has exceeded the credit limit on a charge account). */
int main()
{
    int ac_no;
    float initial_balance, total_charges, total_credits, credit_limit, balance;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &ac_no);
    while (ac_no != -1) //-1 is sentinel value
    {
        printf("Enter initial balance: ");
        scanf("%f", &initial_balance);
        printf("Enter total charges: ");
        scanf("%f", &total_charges);
        printf("Enter total credits: ");
        scanf("%f", &total_credits);
        printf("Enter credit limit: ");
        scanf("%f", &credit_limit);
        printf("\nAccount :%d\n", ac_no);
        printf("Credit Limit :%.2f\n", credit_limit);
        balance = initial_balance + total_charges - total_credits;
        printf("Balance : %.2f\n", balance);

        if (balance > credit_limit) // condition for limit exceeded
        {
            printf("Credit Limit is exceeded!!!\n");
        }

        printf("Enter account number (-1 to end): ");
        scanf("%d", &ac_no);
    }

    return 0;
}
