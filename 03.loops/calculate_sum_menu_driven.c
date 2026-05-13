// calculate sum by do while loop

#include <stdio.h>

int main()
{
    int num, sum = 0;

    do
    {
        printf("Enter Your Number: ");
        scanf("%d", &num);
        sum += num;

    } while (num != 0);

    printf("Sum is: %d", sum);

    return 0;
}
