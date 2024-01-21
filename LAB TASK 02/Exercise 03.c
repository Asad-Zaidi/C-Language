#include <stdio.h>
#include <stdlib.h>

/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 27/03/2022
(This Program find total expenses with discount of 5% if quantity is more than 1000). */

int main()
{
    int quantity;
    float TotalExpenses, Expenses, price, discount;
    printf("Enter Quantity Purchased : ");
    scanf("%d",&quantity);
    printf("Enter  price per item : ");
    scanf("%f",&price);

    if(quantity>1000)
    {
        Expenses=quantity*price;
        discount=0.1*Expenses;
        TotalExpenses=Expenses-discount;
        printf("TotalExpenses = %f",TotalExpenses);
    }
    else
    {
        TotalExpenses=quantity*price;
        printf("TotalExpenses = %f",TotalExpenses);
    }
    return 0;
}
