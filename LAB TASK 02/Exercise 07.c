#include <stdio.h>
#include <stdlib.h>

/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 27/03/2022
(This Program find out the even and odd numbers). */

int main()
{
    int n;
    printf("Enter Any Number : ");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("%d is a Even Number!!! \n",n);
    }
    else
    {
        printf("%d is an Odd Number!!! \n",n);
    }
    return 0;
}
