// Employee Details

#include <stdio.h>

struct Employee
{
    int id;
    char name[100];
    int salary;
};

void display(struct Employee e, int amount)
{
    if (amount < e.salary)
    {
        printf("\nName: %s\n", e.name);
        printf("Employee ID: %d\n", e.id);
        printf("Salary: %d\n", e.salary);
    }

    else
    {
        printf("Oops ! Salary is lesser than given amount\n");
    }
}

int main()
{
    int amt;

    struct Employee a;

    printf("Employee ID: ");
    scanf("%d", &a.id);

    printf("Name: ");
    scanf("%s", a.name);

    printf("Salary: ");
    scanf("%d", &a.salary);

    printf("Amount: ");
    scanf("%d", &amt);

    display(a, amt);

    return 0;
}
