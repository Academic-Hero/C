// To print value and address

#include <stdio.h>

int main()
{
    int a = 10;

    int *p = &a;

    printf("Address of variable %p\n", p);
    printf("value of variable %d\n", *p);

    return 0;
}