// Multiplication Of Matrix

#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows and cols of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and cols of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int arr[r1][c1], arr2[r2][c2], result[r1][c2];

    printf("Enter Matrix A:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &arr[i][j]);

    printf("Enter Matrix B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &arr2[i][j]);

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            result[i][j] = 0;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    printf("Result Matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}