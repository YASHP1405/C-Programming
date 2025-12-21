/* 13. Write a program to find the student with highest marks using structures. */

#include <stdio.h>

struct Student {
    int id;
    char name[20];
    int marks;
};

int main() {
    struct Student s1, s2;

    printf(" student 1 ID Name Marks : ");
    scanf("%d %s %d", &s1.id, s1.name, &s1.marks);

    printf("student 2  ID Name Marks: ");
    scanf("%d %s %d", &s2.id, s2.name, &s2.marks);

    if (s1.marks > s2.marks) {
        printf("\nStudent with highest marks:\n");
        printf("ID: %d\nName: %s\nMarks: %d\n", s1.id, s1.name, s1.marks);
    } 
    else if (s2.marks > s1.marks) {
        printf("\nStudent with highest marks:\n");
        printf("ID: %d\nName: %s\nMarks: %d\n", s2.id, s2.name, s2.marks);
    } 
    else {
        printf("\nBoth students have equal marks:\n");
        printf("ID: %d, Name: %s, Marks: %d\n", s1.id, s1.name, s1.marks);
        printf("ID: %d, Name: %s, Marks: %d\n", s2.id, s2.name, s2.marks);
    }

    return 0;
}
