// Count Vowels

#include <stdio.h>

int main()
{
    char s[10] = "Hello";

    int i = 0, count = 0;

    while (s[i] != '\0')
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count++;
        i++;
    }

    printf("Number of vowels: %d", count);

    return 0;
}