#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Hello";
    char r[] = "friend";

    int len1 = strlen(s);
    int len2 = strlen(r);

    char c[len1 + len2 + 1];

    int i = 0;

    while (i < len1)
    {
        c[i] = s[i];
        i++;
    }

    int j = 0;
    while (j < len2)
    {
        c[i] = r[j];
        i++;
        j++;
    }

    c[i] = '\0';

    printf("Concatenation Of String Is: %s\n", c);

    return 0;
}