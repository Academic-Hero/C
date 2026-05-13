// Missing Element In An Array

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
        sum += arr[i];
    }

    int total = ((size + 1) * (size + 2)) / 2;

    printf("Missing Element is: %d", total - sum);

    return 0;
}