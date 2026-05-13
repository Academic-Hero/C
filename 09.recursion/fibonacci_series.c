// Fibonacci series

#include <stdio.h>

int fibonacci(int n)
{

    if (n <= 1)
        return n;

    else
        return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{

    int n;

    printf("Enter No: ");
    scanf("%d", &n);

    printf("Fibonacci series: %d", fibonacci(n));

    return 0;
}