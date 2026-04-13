// Arithmetic Operations

#include <stdio.h>

int main()
{
    float num1, num2;

    printf("1. Enter a number here: ");
    scanf("%f", &num1);

    printf("2. Enter another number here: ");
    scanf("%f", &num2);

    printf("Addition of numbers are: %f\n", num1 + num2);
    printf("Subtraction of numbers are: %f\n", num1 - num2);
    printf("Multiplication of numbers are: %f\n", num1 * num2);
    printf("Division of numbers are: %f\n", num1 / num2);

    return 0;
}