// Transpose Of A Matrix

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

    printf("original Matrix: \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Transpose Matrix: \n");

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}