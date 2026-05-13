// Length Of string

#include <stdio.h>

int length(char *x)
{
    int i = 0;

    while (*x != '\n')
    {
        i++;
        x++;
    }

    return i;
}

int main()
{
    char str[100];

    printf("Enter String: ");
    fgets(str, 100, stdin);

    printf("Length is %d\n", length(str));

    return 0;
}