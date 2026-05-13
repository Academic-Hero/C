// GCD OF TWO NUMBER

#include <stdio.h>

int gcd(int x, int y)
{
    while (x != y)

    {
        if (x > y)
            x = x - y;

        else
            y = y - x;
    }

    return x;
}

int main()
{
    int a, b;

    printf("Enter no.: ");
    scanf("%d", &a);

    printf("Enter no.: ");
    scanf("%d", &b);

    printf("GCD is %d\n", gcd(a, b));

    return 0;
}