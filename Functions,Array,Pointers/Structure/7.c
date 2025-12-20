/*  7. Write a program to calculate the average marks of a student using a structure. */
#include<stdio.h>
struct Student {
    char name[50];
    int marks[5];
};
int main(){
    struct Student student;
    int i, total = 0;
    float average;

    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter marks for 5 subjects:\n");
    for(i = 0; i < 5; i++){
        printf("Subject %d: ", i + 1);
        scanf("%d", &student.marks[i]);
        total += student.marks[i];
    }

    average = total / 5.0;
    printf("Average marks of %s: %.2f\n", student.name, average);

    return 0;
}
