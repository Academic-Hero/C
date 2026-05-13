// Deposit and Withdraw

#include <stdio.h>

struct Bank
{
    int AN;
    char name[100];
    int balance;
};

void display(struct Bank e)
{
    printf("Your Current Balance is: %d\n", e.balance);
}

void deposit(struct Bank *e, int amt)
{
    e->balance += amt;
}

void withdraw(struct Bank *e, int amt)
{
    e->balance -= amt;
}

int main()
{
    int amt, o;

    struct Bank a;

    printf("Account Number: ");
    scanf("%d", &a.AN);

    getchar();

    printf("Name: ");
    fgets(a.name, 100, stdin);

    printf("Balance: ");
    scanf("%d", &a.balance);

    do
    {
        printf("\nMenu");
        printf("\n1.Deposit");
        printf("\n2.Withdraw");
        printf("\n3.Display Balance");
        printf("\n4.Change Amount");
        printf("\n5.Exit");

        printf("\nChoose Your Option: ");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            printf("Enter Amount: ");
            scanf("%d", &amt);

            deposit(&a, amt);
            break;

        case 2:
            printf("Enter Amount: ");
            scanf("%d", &amt);

            withdraw(&a, amt);
            break;

        case 3:
            display(a);
            break;

        case 4:
            printf("Enter New Balance: ");
            scanf("%d", &a.balance);
            break;

        case 5:
            return 0;

        default:
            printf("Invalid Input\n");
        }

    } while (o != 5);

    return 0;
}