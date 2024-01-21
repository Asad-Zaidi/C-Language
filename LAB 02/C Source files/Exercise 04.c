#include <stdio.h>
#include <stdlib.h>

/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 27/03/2022
(This Program find the insurance status of Married and un married person.*/

int main()
{
  int age,ms,g; //ms for Marital Status, g for Gender
  printf("Enter Marital Status [0-Married 1-Unmarried] : ");
  scanf("%d",&ms);

  if(ms==0) //For Married
    {
        printf("The Driver is Insured!\n");
    }
    else if(ms==1) //For Unmarried
    {
        printf("Enter Gender [0-Male 1-Female] : ");
        scanf("%d",&g);
        printf("Enter Age : ");
        scanf("%d",&age);

        if(g==0) //For male
        {
            if(age>30)
            {
                printf("The Driver is Insured!\n");
            }
            else
                printf("The Driver is Not Insured!\n");
        }
        else if(g==1) //For Female
        {
            if(age>25)
            {
                printf("The Driver is Insured!\n");
            }
            else
            {
                printf("The Driver is Not Insured!\n");
            }
        }
    else
        printf("Gender is Invalid!");
    }
    else
    {
        printf("Marital Status is Invalid!");
    }

return 0;
}
