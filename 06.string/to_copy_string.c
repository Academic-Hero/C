#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Hello";

    int len = strlen(s);

    char c[len + 1];
    int i = 0;

    while (i < len)
    {
        c[i] = s[i];
        i++;
    }

    c[i] = '\0';

    printf("copy Of String Is: %s\n", c);

    return 0;
}