// Student Details

#include <stdio.h>

struct Student
{
    char name[100];
    int roll;
    int marks[3];
};

void display(struct Student A)
{

    int i = 0, total = 0;
    float avg;

    while (i < 3)
    {

        total += A.marks[i];
        i++;
    }

    avg = (total / 3.0);

    printf("%s having roll no: %d and total marks of %d and average marks of %.2f\n", A.name, A.roll, total, avg);
}

int main()
{
    struct Student P;

    printf("enter name: ");
    scanf("%s", P.name);

    printf("enter roll no:: ");
    scanf("%d", &P.roll);

    printf("Enter Marks 1: ");
    scanf("%d", &P.marks[0]);

    printf("Enter Marks 2: ");
    scanf("%d", &P.marks[1]);

    printf("Enter Marks 3: ");
    scanf("%d", &P.marks[2]);

    display(P);

    return 0;
}