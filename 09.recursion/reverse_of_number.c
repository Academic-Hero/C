// Reverse Of Number

#include <stdio.h>

int r = 0;

int rev(int n)
{
    if (n == 0)
        return r;

    r = r * 10 + n % 10;

    return rev(n / 10);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("Reverse = %d", rev(n));

    return 0;
}