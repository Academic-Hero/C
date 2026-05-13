// Sorting An Array In Ascending Order

#include <stdio.h>

int main()
{
    int size, temp;

    printf("Enter Size of Array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("%d. Enter Elements: ", i + 1);
        scanf("%d", &arr[i]);
    }

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

    printf("Sorted Array is: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}