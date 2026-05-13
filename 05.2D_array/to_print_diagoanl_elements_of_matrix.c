// To Print Diagonal Elements Of Matrix

#include <stdio.h>

int main()
{
    int r, c;

    printf("row ");
    scanf("%d", &r);

    printf("col ");
    scanf("%d", &c);

    int arr[r][c];

    if (r == c)
    {
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

        printf("Diagoanal: ");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                    printf("%d ", arr[i][j]);
            }
        }
    }

    else
        printf("Diagonal element found in square matrix only");
    return 0;
}