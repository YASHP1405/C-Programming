#include<stdio.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
int main(){
    int i;
    struct Student s[5];
    s[5];
    for(i = 0; i<5;i++)
    {
        printf("Enter name of sstudent %d:");
        scanf("%s", s[i].name);
        printf("Enter age of student %d:");
        scanf("%d", &s[i].age);
        printf("Enter marks of student %d:");
        scanf("%f", &s[i].marks);

    }
    for(i = 0; i<5;i++)
    {
        printf("\nDetails of student %d:");
        printf("\nName: %s", s[i].name);
        printf("\nAge: %d", s[i].age);
        printf("\nMarks: %.2f", s[i].marks);
    }
    return 0;
}