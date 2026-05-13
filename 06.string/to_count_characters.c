#include <stdio.h>

int main()
{
    char s[200] = "hello friend";
    ;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels++;
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            consonants++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if (ch == ' ')
            spaces++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}