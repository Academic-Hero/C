// Area And Perimeter Of Reactangle

#include <stdio.h>

int main()
{
    int length, breadth;

    printf("Enter Length Of Rectangle: ");
    scanf("%d", &length);

    printf("Enter Breadth Of Rectangle: ");
    scanf("%d", &breadth);

    printf("Area is: %d\n", (length * breadth));
    printf("Perimeter is: %d\n", (2 * (length + breadth)));

    return 0;
}