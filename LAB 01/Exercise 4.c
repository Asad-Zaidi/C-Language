#include <stdio.h>
#include <stdlib.h>
/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123 Section: B on 23/02/2022
(This Program swap the given value of two variables by using two Methods...
First one is by using a 3rd variable and 2nd is without 3rd variable. */
int main()
{
    /*with third variable*/
    int a,b,c;
    a=2;
    b=10;
    c=a;
    a=b;
    b=c;
    printf("Value of a after swapping is:%d\n",a);
    printf("Value of b after swapping is:%d\n",b);

    /*without third variable*/
    int n1,n2;
    n1=70;
    n2=90;
    n1=n2;
    n2=n1-20;
    printf("Value of n1 after swapping is:%d\n",n1);
    printf("Value of n2 after swapping is:%d\n",n2);
    return 0;
}
