// Second Smallest Element In An Array

#include <stdio.h>

int main()
{
    int size;

    printf("Enter Size of Array (size must be > 1): ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("%d. Enter Elements: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min1 = arr[0], min2 = arr[1];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min1)
        {
            min1 = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == min1)
            continue;

        else if (arr[i] < min2)
        {
            min2 = arr[i];
        }
    }

    printf("Second smallest element is: %d", min2);

    return 0;
}