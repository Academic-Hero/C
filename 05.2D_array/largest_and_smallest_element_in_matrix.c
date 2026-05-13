// Largest And Smallest Element In A Matrix

#include <stdio.h>

int main()
{
    int r, c;

    printf("row ");
    scanf("%d", &r);

    printf("col ");
    scanf("%d", &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix: \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int max = arr[0][0];
    int min = arr[0][0];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];

            else if (arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Largest: %d\n", max);
    printf("smallest: %d\n", min);

    return 0;
}