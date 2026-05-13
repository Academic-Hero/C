// Search Element In Matrix And Display It's Position

#include <stdio.h>

int main()
{
    int r, c, s;

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

    printf("Search eleemnt: ");
    scanf("%d", &s);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (arr[i][j] == s)
            {
                printf("element %d found at row %d and col %d \n", s, i + 1, j + 1);
                return 0;
            }
        }
    }
    printf("element %d not found\n", s);
    return 0;
}
