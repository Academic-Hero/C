// Armstrong Number For Any Digit

#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, digit;
    int sum = 0;

    printf("Enter your number: ");
    scanf("%d", &num);

    temp = num;
    int count = 0;

    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        sum += (int)(pow(digit, count) + 0.5);
        temp = temp / 10;
    }

    if (num == sum)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}