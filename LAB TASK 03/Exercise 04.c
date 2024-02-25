#include <stdio.h>

/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 27/03/2022
(This Program separate the 4 Digit number into individual Digits). */

int main()
{
    int a, b, c, d, e, f, g;
    printf("Enter four digit number : ");
    scanf("%d", &a);
    b = a / 1000; // after division last digit of number is displayed that is stored in b.
    c = a % 1000; // reminder is last three digits of number that is stored in c.
    d = c / 100;
    e = c % 100;
    f = e / 10;
    g = e % 10;
    printf("%3d", b);
    printf("%3d", d);
    printf("%3d", f);
    printf("%3d\n", g);

    return 0;
}
