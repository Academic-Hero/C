// Delete An Element At A Specific Position

#include <stdio.h>

int main()
{
    int size;

    printf("Enter Size of Array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("%d. Enter Elements: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int pos;

    printf("Position of Your element to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > size)
    {
        printf("Invalid position");
    }

    else
    {
        int i = pos - 1;

        while (i < size - 1)
        {
            arr[i] = arr[i + 1];
            i++;
        }
    }

    printf("Updated Array is: ");
    for (int i = 0; i < size - 1; i++)
        printf("%d ", arr[i]);

    return 0;
}