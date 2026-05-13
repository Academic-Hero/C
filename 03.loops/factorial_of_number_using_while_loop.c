// To Print Factorial of number

#include <stdio.h>

int main()
{
    int num, factorial = 1;

    printf("Enter your number: ");
    scanf("%d", &num);

    int i = 1;

    while (i <= num)
    {
        factorial *= i;
        i++;
    }
    printf("Factorial is %d ", factorial);

    return 0;
}