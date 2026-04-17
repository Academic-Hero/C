// Swap Two Numbers Without The Third Variable

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("1. Enter a number here: ");
    scanf("%d", &num1);

    printf("2. Enter a number here: ");
    scanf("%d", &num2);

    printf("Original Numbers are: %d %d\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After Swap Numbers are: %d %d\n", num1, num2);

    return 0;
}