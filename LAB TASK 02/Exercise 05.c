#include <stdio.h>
#include <stdlib.h>

/* This program is prepared by Syed Asad Jamil. Reg no. SP22-BSE-123. Section: B on 27/03/2022
(This Program print the series of number according to given condition). */

int main()
{
  int a,b,c,d,e;

  //Print numbers from 1 to 100 with increment of 1
  for(a=1; a<=100; a++)
  printf("%d\t",a);
  {
    printf("\n\n");
  }
  //Print numbers from 100 to 1 with decrement of 1
  for(b=100; b>=1; b--)
  printf("%d\t",b);
  {
    printf("\n\n");
  }
  //Print numbers from 20 to 2 in steps of -2
  for(c=20; c>=2; c-=2)
  printf("%d\t",c);
  {
    printf("\n\n");
  }
  //Print sequence of numbers:  2, 5, 8, 11, 14, 17, 20
  for(d=2; d<=20; d+=3)
  printf("%d\t",d);
  {
    printf("\n\n");
  }
  //Print sequence of numbers:  99,88,77,66,55,44,33,22,11,0
  for(e=99; e>=0; e-=11)
  printf("%d\t",e);

  printf("\n\n");

  return 0;
}
