// Even Or Odd Number

#include <stdio.h>

int main()
{
    int num1;

    printf("Enter Your Number: ");
    scanf("%d",&num1);

    if(num1%2==0)
        printf("%d is an even number\n", num1);

    else  
        printf("%d is an odd number\n", num1);

        return 0;
}