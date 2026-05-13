// Read And Print The Matrix

#include <stdio.h>

int main()
{
    int row, column;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter column: ");
    scanf("%d", &column);

    int matrix[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            printf("Enter Element of matrix[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Your Matrix is: \n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}