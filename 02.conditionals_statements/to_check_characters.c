// To Check Characters

#include <stdio.h>

int main()
{
    char unknown;

    printf("Enter Character: ");
    scanf("%c", &unknown);

    if ((unknown >= 'A' && unknown <= 'Z') || (unknown >= 'a' && unknown <= 'z'))
        printf("Alphabets\n");

    else if (unknown >= '0' && unknown <= '9')
        printf("Digits\n");

    else
        printf("Special Character\n");

    return 0;
}