// Decimal To Binary

#include <stdio.h>

int binary(int n)
{

    if (n > 1)
        binary(n / 2);

    printf("%d", n % 2);
}

int main()
{

    int n;

    printf("Enter No: ");
    scanf("%d", &n);

    printf("Binary Is: ");

    binary(n);

    return 0;
}