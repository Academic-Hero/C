// Keeps Taking Number Until You Enter Prime Number

#include <stdio.h>

int main()
{
    int num = 4, flag = 0;

    while (num >= 0)
    {
        printf("Enter number: ");
        scanf("%d", &num);

        flag = 0;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0 && num > 1)
        {
            printf("%d is a Prime Number.\n", num);
            break;
        }
    }

    return 0;
}