#include <stdio.h>
#include <stdlib.h>

/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 27/03/2022(This Program find the Result and Grade of 5 subjects by using different conditions. */


int main()
{
    int a, marks;
    float percentage, sum=0;
    for(a=1;a<=5;a++)
    {
        printf("Enter Your marks out of 100 : ");
        scanf("%d",&marks);
        sum=sum+marks;
    }
        {
        printf("\nSum of Marks is : %.2f\n",sum);
        percentage=sum/500 *100;
        printf("Percentage is : %.2f\n",percentage);
        }
        if(percentage>=90)
            {
                printf("Grade is : A \nCredit Points : 4.0 \nExcellent!!! \n");
            }
            else if(percentage>=85 && percentage<=89)
                {
                    printf("Grade is : A- \nCredit Points : 3.7 \n");
                }
            else if(percentage>=80 && percentage<=84)
                {
                    printf("Grade is : B+ \nCredit Points : 3.3 \n");
                }
            else if(percentage>=75 && percentage<=79)
                {
                    printf("Grade is : B \nCredit Points : 3.0 \nGood!!! \n");
                }
            else if(percentage>=70 && percentage<=74)
                {
                    printf("Grade is : B- \nCredit Points : 2.7 \n");
                }
            else if(percentage>=65 && percentage<=69)
                {
                    printf("Grade is : C+ \nCredit Points : 2.3 \n");
                }
            else if(percentage>=60 && percentage<=64)
                {
                    printf("Grade is : C \nCredit Points : 2.0 \nAverage!!! \n");
                }
            else if(percentage>=55 && percentage<=59)
                {
                    printf("Grade is : C- \nCredit Points : 1.7 \n");
                }
            else if(percentage>=50 && percentage<=54)
                {
                    printf("Grade is : D \nCredit Points : 1.3 \nMaximum Passing!!! \n");
                }
            else
                {
                  printf("Grade is : F \nCredit Points : 0.0 \nFail!!!\n");
                }
return 0;
}
