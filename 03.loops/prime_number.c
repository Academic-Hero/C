// To Check Prime Number

#include <stdio.h>

int main()
{
    int num, check = 0;

    printf("Enter Your Number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d is not a prime number", num);
        return 0;
    }

    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                check++;
                break;
            }
        }
    }

    if (check != 0)
        printf("%d is not a prime number", num);

    else
        printf("%d is a prime number", num);

    return 0;
}