#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            break;
        }
        i++;
    }

    if (s1[i] == s2[i])
        printf("Strings are Equal\n");
    else if (s1[i] > s2[i])
        printf("First string is Greater\n");
    else
        printf("Second string is Greater\n");

    return 0;
}