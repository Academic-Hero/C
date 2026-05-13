#include <stdio.h>

int main()
{
    int choice;

    do
    {
        printf(".........Menu..........\n");
        printf("1.Add\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("Enter Your Choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("you selected Add\n");
            break;

        case 2:
            printf("you selected sub\n");
            break;
        case 3:
            printf("you selected multiply\n");
            break;

        case 4:
            printf("you selected divide\n");
            break;

        case 5:
            printf("BYE ! \n");
            break;

        default:
            printf("Invalid Input \n");
            break;
        }
    } while (choice != 5);

    return 0;
}