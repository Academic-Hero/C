// Sum of First n Natural Numbers

#include <stdio.h>

int sum(int n)
{

    if (n == 1)
        return 1;

    else
        return n + sum(n - 1);
}

int main()
{

    int n;

    printf("Enter No: ");
    scanf("%d", &n);

    printf("Sum: %d", sum(n));

    return 0;
}