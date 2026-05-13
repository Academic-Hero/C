// Pass Or  Fail

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    if (marks >= 40)
        printf("You are pass");

    else
        printf("You are Fail");

    return 0;
}