// Electtric Bill

#include <stdio.h>

int main()
{
    int units;
    float bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 1.50;
    }
    else if (units <= 250)
    {
        bill = (100 * 1.50) +
               (units - 100) * 1.75;
    }
    else if (units <= 500)
    {
        bill = (100 * 1.50) +
               (150 * 1.75) +
               (units - 250) * 2.25;
    }
    else
    {
        bill = (100 * 1.50) +
               (150 * 1.75) +
               (250 * 2.25) +
               (units - 500) * 2.50;
    }

    printf("Electricity Bill = %.2f\n", bill);

    return 0;
}
