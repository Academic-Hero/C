// Intersection Of Two Arrays

#include <stdio.h>

int main()
{
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int A[size], B[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter Element for 1st Array: ");
        scanf("%d", &A[i]);

        printf("Enter Element for 2nd Array: ");
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (A[i] == B[j])
            {
                printf("%d ", B[j]);
                break;
            }
        }
    }

    return 0;
}