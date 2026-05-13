// To Count Number Of Digits

#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num == 0)
        count = 1;

    while (num != 0)
    {
        num /= 10;
        count++;
    }

    printf("Number of digits is %d\n", count);

    return 0;
}