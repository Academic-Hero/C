// To Find Types Of Triangle

#include <stdio.h>

int main()
{
    float angle1, angle2, angle3;

    printf("Enter a first angle: ");
    scanf("%f", &angle1);

    printf("Enter a second angle: ");
    scanf("%f", &angle2);

    printf("Enter a third angle: ");
    scanf("%f", &angle3);

    if (angle1 + angle2 + angle3 == 180)
    {
        if (angle1 == angle2 && angle1 == angle3)
            printf("Equilateral\n");

        else if (angle1 == angle2 || angle2 == angle3 || angle3 == angle1)
            printf("Isoceles\n");

        else
            printf("scalene\n");
    }

    else
        printf("Invalid Input");

    return 0;
}