// To Input And Print It In A Matrix Format

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
            printf("A[%d][%d]= ", i + 1, j + 1);
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

    return 0;
}