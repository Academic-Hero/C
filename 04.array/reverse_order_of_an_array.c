// Reverse Order Of An Array

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

    printf("Reverse Order is: ");

    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}