#include <stdio.h>
#include <stdlib.h>

/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 27/03/2022
(This Program find the Bill. If units are less than 300 it simply print the total cost of bill but if units are equal or more than 300 it add 5% Ser Charge in Total Bill). */

int main()
{
    float Bill,Total_Bill,Units,Rate,SC;
    printf("Enter units = ");
    scanf("%f",&Units);
    Rate=3;
    Bill=Units*Rate;
    if(Units<=300)
    {
        printf("Total Bill = %f",Bill);
    }
    else
    {
        Rate=3.5;
        Bill=(Units*Rate);
        SC=0.05*Bill;
        Total_Bill=Bill+SC;
        printf("Total Bill = %f",Total_Bill);
    }
    return 0;
}
