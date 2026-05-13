#include <stdio.h>

int rev(int *number)
{
    int remainder, reversedNumber = 0;

    while (*number != 0)
    {
        remainder = *number % 10;
        *number /= 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    return reversedNumber;
}

int main()
{
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    printf("%d", rev(&number));

    return 0;
}