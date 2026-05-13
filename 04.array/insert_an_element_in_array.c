// Insert An Element At A Specific Position

#include <stdio.h>

int main()
{
    int size;

    printf("Enter Size of Array: ");
    scanf("%d", &size);

    int arr[size + 1];

    for (int i = 0; i < size; i++)
    {
        printf("%d. Enter Elements: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int pos, x;

    printf("Position of Your new element: ");
    scanf("%d", &pos);

    printf("Enter the element, you want to insert: ");
    scanf("%d", &x);

    if (pos < 1 || pos > size + 1)
    {
        printf("Invalid position");
    }

    else
    {
        int i = size;

        while (i >= pos)
        {
            arr[i] = arr[i - 1];
            i--;
        }

        arr[pos - 1] = x;
    }

    printf("Updated Array is: ");
    for (int i = 0; i <= size; i++)
        printf("%d ", arr[i]);

    return 0;
}