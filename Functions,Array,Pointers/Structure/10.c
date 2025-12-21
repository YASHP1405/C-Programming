/*10. Write a program to pass a structure to a function and display student details.  */
#include<stdio.h>
struct Student
{
    int id;
    char name[20];
    float marks;
};
void display(struct Student s)
{
    printf("ID: %d\n",s.id);
    printf("Name: %s\n",s.name);
    printf("Marks: %.2f\n",s.marks);
}
int main()
{
    struct Student s1;
    printf("Enter student ID: ");
    scanf("%d",&s1.id);
    printf("Enter student Name: ");
    scanf("%s",s1.name);
    printf("Enter student Marks: ");
    scanf("%f",&s1.marks);
    display(s1);
    return 0;
}
