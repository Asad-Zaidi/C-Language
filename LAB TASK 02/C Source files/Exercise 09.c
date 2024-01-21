#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 27/03/2022
(This Program print the amount of money in the accounts at the end of each year for 10 years). */

int main()
{

    float a, p, r, n;
    p=1000.0;
    r=5*0.01;
    n=10;

    printf(" Year.");
    printf("\t\tAmount on deposit:\n\n");

    for(n=1;n<=10;n++)
        {
            a = p * pow((1+r),n);
            printf("  %.f\t\t   %.2f\n", n, a);
        }

    return 0;

}
