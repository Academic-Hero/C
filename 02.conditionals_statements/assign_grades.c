// Assign Grades

#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter Your Percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90)
        printf("A\n");

    else if (percentage >= 75)
        printf("B\n");

    else if (percentage >= 60)
        printf("C\n");

    else if (percentage >= 40)
        printf("D\n");

    else
        printf("F\n");

    return 0;
}