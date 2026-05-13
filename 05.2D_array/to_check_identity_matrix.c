//  To Check Whether A Matrix Is An Identity Matrix

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

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    if (arr[i][j] != 1)
                    {
                        printf("no identity matrix\n");
                        return 0;
                    }
                }

                else
                {
                    if (arr[i][j] != 0)
                    {
                        printf("no identity matrix\n");
                        return 0;
                    }
                }
            }
        }
    }

    else
    {
        printf("identity matrix found in square matrix only");
        return 0;
    }

    printf("it is identity matrix\n");

    return 0;
}