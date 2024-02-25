#include <stdio.h>

/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 27/03/2022
(This Program print the product of all odd integers between 0 and 19). */

int main()
{
    long int i=0, product=1, num=19;
    while(i<=19) //condition for iteration of loop.
    {
        i++;
        if(i%2!=0) //remainder of odd number is not 0 when divided by 2.
        product = product * i; //multiply the value of i with product on each iteration.
    }

    printf("Product of Odd Integers is : %ld\n",product);

    return 0;
}

