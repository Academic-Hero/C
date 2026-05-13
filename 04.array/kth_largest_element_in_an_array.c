//  Kth Largest Element In An Array.

#include <stdio.h>

int main()
{
    int size, temp, k;

    printf("Enter Size of Array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("%d. Enter Elements: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter K for Kth Largest Element: ");
    scanf("%d", &k);

    if (k < 1 || k > size)

        printf("Invalid Input\n");

    else
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - 1; j++)
            {
                if (arr[j + 1] < arr[j])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        printf("Kth Largest Element is: %d", arr[size - k]);
    }
    return 0;
}