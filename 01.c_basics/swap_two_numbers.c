// Swap Two Numbers

#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("1. Enter a number here: ");
    scanf("%d", &num1);

    printf("2. Enter a number here: ");
    scanf("%d", &num2);

    printf("Original Numbers are: %d %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After Swap Numbers are: %d %d\n", num1, num2);

    return 0;
}