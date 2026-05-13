// To check whether the year is Century and leap year is or not

#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 100 == 0)
        printf("%d is a Century year\n", year);
    else
        printf("%d is not a Century year\n", year);

    if ((year % 4 == 0 && year % 100 != 0) ||
        (year % 400 == 0))
        printf("%d is a Leap year\n", year);
    else
        printf("%d is not a Leap year\n", year);

    return 0;
}