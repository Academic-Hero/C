// To print sum of n natural numbers

#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter your natural number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
        sum += i;

    printf("Sum is: %d", sum);

    return 0;
}