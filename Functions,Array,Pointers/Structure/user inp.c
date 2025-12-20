#include <stdio.h>

struct student
{
    char name[10];
    int roll;
    float marks;
};

int main()
{
    struct student s1;

    printf("Enter name, roll and marks: ");
    scanf("%9s %d %f", s1.name, &s1.roll, &s1.marks);

    struct student s2 = s1;   

    printf("\nName  : %s", s2.name);
    printf("\nRoll  : %d", s2.roll);
    printf("\nMarks: %.2f", s2.marks);

    return 0;
}
