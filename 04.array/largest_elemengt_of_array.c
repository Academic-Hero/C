// Largest Element Of Array

#include <stdio.h>

int main()
{
    int size, sum = 0;

    printf("Enter Size of Array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("%d. Enter Elements: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    printf("Largest Element is: %d", max);

    return 0;
}