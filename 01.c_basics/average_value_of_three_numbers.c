// Average Value Of Three Numbers

#include <stdio.h>

int main()
{
    float num1,num2,num3;
    float avg;

    printf("1. Enter a number here: ");
    scanf("%f", &num1);

    printf("2. Enter a number here: ");
    scanf("%f", &num2);

    printf("3. Enter a number here: ");
    scanf("%f", &num3);

    avg = ((num1+num2+num3)/3);

    printf("\nAverage Value Is %f", avg);

    return 0;

}
