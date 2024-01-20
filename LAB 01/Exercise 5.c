#include <stdio.h>
#include <stdlib.h>
/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 23/02/2022.
This Program Find out the Area and perimeter of a Triangle by taking the value from user  */
int main()
{
    float Area, Perimeter, Base, Altitude, Side1, Side2;
    printf("Enter length of Base:");
    scanf("%f", &Base);
    printf("Enter length Altitude:");
    scanf("%f", &Altitude);
    printf("Enter length Side1:");
    scanf("%f", &Side1);
    printf("Enter length Side2:");
    scanf("%f", &Side2);
    Area = 0.5 * Base * Altitude;
    Perimeter = Base + Side1 + Side2;
    printf("Area of triangle=%f\n", Area);
    printf("Perimeter of triangle=%f\n", Perimeter);
    return 0;
}
