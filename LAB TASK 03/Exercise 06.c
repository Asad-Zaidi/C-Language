#include <stdio.h>

/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 29/03/2022.
(This Program input each salesperson�s sales for the previous week and print out their salary). */

int main()
{
    float sales, salary;

    printf("Enter sales in pounds (-1 to end) : ");
    scanf("%f",&sales);
    while(sales!=-1) //-1 is sentinel value
    {
        salary = 200 + 0.09*sales; //total salary
        printf("Salary is : %.2f\n",salary);

    printf("Enter sales in pounds (-1 to end) : ");
    scanf("%f",&sales);
    }

    return 0;
}
