// Addition of two 3X3 matrices

#include <stdio.h>

int main()
{

    int arr[3][3];
    int arr2[3][3];
    int result[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d]= ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);

            printf("B[%d][%d]= ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);

            result[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    printf("Matrix A: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    printf("Result: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}