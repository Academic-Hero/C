// Divisible By 5 and 7

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 7 == 0)
        printf("Divisible");

    else
        printf("Not Divisible");

    return 0;
}