// To print first 10 natural numbers except 5

#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue;

        printf("%d ", i);
    }

    return 0;
}