// To Reverse The String

#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Hello";

    char temp;

    int j = strlen(s) - 1, i = 0;

    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }

    printf("Reverse Of String Is: %s\n", s);

    return 0;
}