// To Reverse the number

#include <stdio.h>

int main()
{
    int number, remainder, reversedNumber = 0;

    printf("Enter your number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        remainder = number % 10;
        number /= 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    printf("Reverse is: %d", reversedNumber);

    return 0;
}