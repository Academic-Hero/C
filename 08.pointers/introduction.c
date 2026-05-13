#include <stdio.h>

int main()
{

    int a;

    a = 10;

    printf("a is: %d\n", a);
    printf("Address of a: %x\n", &a);

    int *ptr = &a;

    printf("Derefrencing of a: %d\n", *ptr);
    printf("Address of a: %x\n", ptr);

    return 0;
}