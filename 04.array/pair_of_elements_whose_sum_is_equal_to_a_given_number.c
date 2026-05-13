//  Pair Of Elements Whose Sum Is Equal To A Given Number

#include <stdio.h>

int main()
{
    int size, target;

    printf("Enter size of Array: ");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter Elements: ");
        scanf("%d", &a[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Pairs are:\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] + a[j] == target)
            {
                printf("(%d , %d)\n", a[i], a[j]);
            }
        }
    }

    return 0;
}