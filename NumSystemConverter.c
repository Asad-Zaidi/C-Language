#include<stdio.h>
#include<math.h>
#include<string.h>

int AnyBaseToDecimal(int n, int Base);
void DecimalToAnyBase(int n, int newBase);
void DecimalToHexa(int n, int newBase);
int HexaToDecimal(char *n, int Base);

int main()
{
    long int num, NewBase, base;
    char hexa[32] = {0};

    printf("\nEnter Base of the given number : ");
    scanf("%ld",&base);
    printf("Enter Base in which you want to convert the Given Number : ");
    scanf("%ld",&NewBase);

    if(base==2 && NewBase==10)
    {
        printf("\nEnter Any number : ");
        scanf("%ld",&num);
        printf("\nDecimal Number = %ld\n",AnyBaseToDecimal(num,base));
    }

    else if(base==10 && NewBase==2)
    {
        printf("\nEnter Any number : ");
        scanf("%ld",&num);
        DecimalToAnyBase(num,NewBase);
    }

    else if(base==2 && NewBase==8)
    {
        printf("\nEnter Any number : ");
        scanf("%ld",&num);
        printf("\nDecimal Number = %ld\n",AnyBaseToDecimal(num,base));
        DecimalToAnyBase(AnyBaseToDecimal(num,base),NewBase);
    }

    else if(base==8 && NewBase==2)
    {
        printf("\nEnter Any number : ");
        scanf("%ld",&num);
        printf("\nDecimal form of Number = %ld\n",AnyBaseToDecimal(num,base));
        DecimalToAnyBase(AnyBaseToDecimal(num,base),NewBase);
    }

    else if(base==10 && NewBase==8)
    {
        printf("\nEnter Any number : ");
        scanf("%ld",&num);
        DecimalToAnyBase(num,NewBase);
    }

    else if(base==8 && NewBase==10)
    {
        printf("\nEnter Any number : ");
        scanf("%ld",&num);
        printf("\nDecimal Number = %ld\n",AnyBaseToDecimal(num,base));
    }

    else if(base==10 && NewBase==16)
    {
        printf("\nEnter Any number : ");
        scanf("%ld",&num);
        DecimalToHexa(num,NewBase);
    }

    else if(base==16 && NewBase==10)
    {
        printf("\nEnter Hexadecimal Value : ");
        fflush(stdin);  //
        gets(hexa);
        printf("\nDecimal Number = %d\n", HexaToDecimal(hexa,base));
    }

    else if(base==2 && NewBase==16)
    {
        printf("\nEnter Any number : ");
        scanf("%ld",&num);
        printf("\nEquivalent Decimal Number = %ld\n",AnyBaseToDecimal(num, base));
        DecimalToHexa(AnyBaseToDecimal(num,base),NewBase);
    }

    else if(base==16 && NewBase==2)
    {
        printf("\nEnter Hexadecimal Value : ");
        fflush(stdin);
        gets(hexa);
        printf("\nEquivalent Decimal Number = %d\n",HexaToDecimal(hexa,base));
        DecimalToAnyBase(HexaToDecimal(hexa,base),NewBase);
    }

    else if(base==8 && NewBase==16)
    {
        printf("\nEnter Any number : ");
        scanf("%ld",&num);
        printf("\nDecimal Number = %ld\n",AnyBaseToDecimal(num,base));
        DecimalToHexa(AnyBaseToDecimal(num,base),NewBase);
    }

    else if(base==16 && NewBase==8)
    {
        printf("\nEnter Hexadecimal Value : ");
        fflush(stdin);
        gets(hexa);
        printf("\nEquivalent Decimal Number = %d\n",HexaToDecimal(hexa,base));
        DecimalToAnyBase(HexaToDecimal(hexa,base),NewBase);
    }

    else if(base==16 && NewBase) //Base 16 to Any Base Number
    {
        printf("\nEnter Hexadecimal Value : ");
        fflush(stdin);
        gets(hexa);
        printf("\nEquivalent Decimal Number = %d\n",HexaToDecimal(hexa,base));
        DecimalToAnyBase(HexaToDecimal(hexa,base),NewBase);
    }

    else //Any Base to Any Base
    {
        printf("\nEnter Any number : ");
        scanf("%ld",&num);
        printf("\nDecimal Number = %ld\n",AnyBaseToDecimal(num,base));
        DecimalToAnyBase(AnyBaseToDecimal(num,base),NewBase);
    }

    return 0;
}

int AnyBaseToDecimal(int n, int Base)
{
    int rem, Decimal = 0, Positon = 1;
    while(n != 0) //Loop terminate when given number become Zero.
    {
        rem = n % 10; //store remainder in rem after every iteration
        Decimal  = Decimal  + rem * Positon; /*Multiply Remainder by its position which is initially 1 and add it to decimal value
            which is initially 0*/
        n = n/10; //n store the quotient of given number after each iteration.
        Positon = Positon * Base;
    }
    return Decimal;
}

void DecimalToAnyBase(int n, int newBase)
{
    int rem, arr[1000];
    for(rem=0; n>0; rem++) //loop continue its repetition until the given number become zero.
    {
        arr[rem] = n % newBase; //Store Each remainder in Array arr[1000] After the Execution of Loop until it become False
        n = n/newBase; //Store the Quotient after the Repetition of Division
    }
    printf("Required Base Number  = ");

    for(rem=rem-1; rem>=0; rem--)
    {
        printf("%d",arr[rem]); //print all the digit of arr[rem] array one by one.
    }
    printf("\n");
}

void DecimalToHexa(int n, int newBase)
{
    char hex[1000]; //character array
    int i = 0, rem = 0;
    while(n != 0)
    {
        rem = n % newBase; //store remainder on each iteration
        if(rem < 10) //check weather the remainder is less than 10
            rem = rem + 48; //if less than 10 than add '48' (ASCII) value in Remainder to get Required Number.
        else
            rem = rem + 55; //if greater than 10 than add remainder to 55 to Get ASCII values of Characters.
        hex[i] = rem; //store All values of Remainder in Array
        i++;
        n = n/newBase; //get Qoutient
    }
    printf("\nHexadecimal Value = "); //Printing Hexadecimal Value Array in Reverse Order.
    for(i=i-1; i>=0; i--)
    {
        printf("%c", hex[i]);
    }
    printf("\n");
}

int HexaToDecimal(char *n, int Base)
{
    int i = 0, j = 0, len = 0;
    int dec = 0;

    len = strlen(n); //find length of string
    for(i=len-1; i>=0; i--) //loop start from number one less than of string length
    {
        if(n[i]>='0' && n[i]<='9') //if number is between 0 and 9.
        {
            dec = dec + (n[i]-48) * pow(Base,j); /*conversion of Hexadecimal number to Decimal
            by subtracting 48 (ASCII) from index and multiplying with raise to power of base*/
            j++; //power of base of previous calculation is incremented by 1 on each iteration
        }
        else if(n[i]>='A' && n[i]<='F') //if number is between 'A' and 'F'.
        {
            dec = dec+(n[i]-55) * pow(Base,j);  /*conversion of Hexadecimal number to Decimal
            by subtracting 48 (ASCII) from index and multiplying with raise to power of base*/
            j++; //power of base of previous calculation is incremented by 1 on each iteration
        }
    }
    return dec;
}
