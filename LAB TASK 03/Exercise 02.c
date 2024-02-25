#include <stdio.h>

/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 27/03/2022
(This Program print the sum of all even integers between 1 and 30). */

int main()
{
    int i=1, sum=0, num=30;
    while(i<=30)
    {
        i++;
        if(i%2==0) //when even number is divided by 2 remainder is zero.
        sum = sum+i; //add the value of sum to i at each iteration.
    }

    printf("Sum of Even Integer is : %d\n",sum);

    return 0;
}

