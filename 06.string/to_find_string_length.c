// To Find Length Of String

#include <stdio.h>

int main()
{
    char s[] = "Hello";

    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    printf("Length Of String Is: %d\n", i);

    return 0;
}