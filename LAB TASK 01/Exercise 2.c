#include <stdio.h>
#include <stdlib.h>
/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123 Section: B on 23/02/2022.
This program prints the numbers 1 to 4 on the same line by these three methods:
1. 	Using one printf statement with no conversion specifiers.
2.	Using one printf statement with four conversion specifiers.
3.	Using four printf statements
*/

int main()
{
    // with no conversion specifiers
    printf("1\t2\t3\t4");

    printf("\n");

    // with four printf statement
    printf("1\t");
    printf("2\t");
    printf("3\t");
    printf("4\t");

    printf("\n");

    // with four conversion specifiers
    printf("%d\t%d\t%d\t%d\t", 1, 2, 3, 4);

    return 0;
}
