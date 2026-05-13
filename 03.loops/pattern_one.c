// Pattern 1

#include <stdio.h>

int main()
{
    int n, i = 1, j;

    printf("Enter Dimension: ");
    scanf("%d", &n);

    while (i <= n)
    {
        j = 1;

        while (j <= n)
        {
            if (j <= i)
                printf("* ");

            else
                printf(" ");

            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}