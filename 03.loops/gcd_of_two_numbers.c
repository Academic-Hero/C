// To Find GCD of Two Numbers

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2;

        else
            num2 -= num1;
    }

    printf("GCD is %d ", num1);

    return 0;
}