#include <stdio.h>

int swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main()
{
    int a, b;

    printf("Enter no.: ");
    scanf("%d", &a);

    printf("Enter no.: ");
    scanf("%d", &b);

    printf("Before Swap: %d %d\n", a, b);
    swap(&a, &b);
    printf("After Swap: %d %d\n", a, b);

    return 0;
}