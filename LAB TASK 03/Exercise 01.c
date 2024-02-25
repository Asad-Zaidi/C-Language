int main()
{
    float litre, km, LP100, total, avg = 0;
    printf("Enter the liters used (-1 to end) : "); //-1 is sentinel value.
    scanf("%f", &litre);
    while (litre > -1) // loop continue until user enter -1
    {
        printf("Enter the kilometers driven : ");
        scanf("%f", &km);
        LP100 = litre / km * 100; // litre per 100KM
        avg++;
        printf("The liters/100km for this tank : %.1f\n", LP100);
        total = total + LP100;
        printf("Enter the liters used (-1 to end) : ");
        scanf("%f", &litre);
    }

    printf("\nThe overall average consumption : %.1f\n", total / avg);

    return 0;
}
