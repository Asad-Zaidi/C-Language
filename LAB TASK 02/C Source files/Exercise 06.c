#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 27/03/2022
(This Program find the Largest and Smallest number by taking input using loop). */

int main()
{
    int a[5],i,max,min;
    printf(" Enter five integer numbers :- \n");
    for(i=0;i<5;i++)
    {
        printf(" Enter number %d : ",i+1);
        scanf("%d",&a[i]);  //Input the integers numbers
    }
        printf("\n");
        max=a[0];
        min=a[0];
    for(i=1;i<=5;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf(" %d is Largest number!!!\n",max);
    printf(" %d is Smallest number!!!\n",min);

return 0;
}
