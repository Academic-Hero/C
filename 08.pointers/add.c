#include <stdio.h>

int add(int *x, int *y)
{
    return *x + *y;
}

int main()
{
    int a, b;

    printf("Enter no.: ");
    scanf("%d", &a);

    printf("Enter no.: ");
    scanf("%d", &b);

    printf("sum is %d\n", add(&a, &b));

    return 0;
}