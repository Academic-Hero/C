// To check whether the number is Palindrome or not

#include <stdio.h>

int main()
{
    int number, numberClone, remainder, reversedNumber = 0;

    printf("Enter your number: ");
    scanf("%d", &number);

    numberClone = number;

    while (number != 0)
    {
        remainder = number % 10;
        number /= 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    if (reversedNumber == numberClone)
        printf("%d is a Palindrome", reversedNumber);
    else
        printf("%d is not a Palindrome", numberClone);

    return 0;
}