// Row And Column Sum

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

    printf("\nRow Sum:\n");

    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < column; j++)
        {
            sum += matrix[i][j];
        }

        printf("Sum of Row %d = %d\n", i + 1, sum);
    }

    printf("\nColumn Sum:\n");

    for (int j = 0; j < column; j++)
    {
        int sum = 0;

        for (int i = 0; i < row; i++)
        {
            sum += matrix[i][j];
        }

        printf("Sum of Column %d = %d\n", j + 1, sum);
    }

    return 0;
}