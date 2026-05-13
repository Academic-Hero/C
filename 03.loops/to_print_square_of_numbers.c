// To Print Square Of Numbers

#include <stdio.h>

int main()
{
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
        printf("Square of %d is: %d\n", i, i * i);

    return 0;
}