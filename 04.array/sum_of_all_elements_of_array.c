// Sum Of All Elements Of Array

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

    printf("Sum is: %d", sum);

    return 0;
}