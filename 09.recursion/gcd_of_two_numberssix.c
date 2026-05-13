// GCD Of Two Numbers

#include <stdio.h>

int GCD(int x, int n)
{

    if (n == x)
        return x;

    else if (x > n)
        return GCD(x - n, n);

    else
        return GCD(x, n - x);
}

int main()
{

    int x, n;

    printf("Enter 1st No: ");
    scanf("%d", &x);

    printf("Enter 2nd No: ");
    scanf("%d", &n);

    printf("GCD is: %d", GCD(x, n));

    return 0;
}