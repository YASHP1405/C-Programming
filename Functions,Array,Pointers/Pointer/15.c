/* 
15. Write a program using structure pointer (->) to access members. */

#include<stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct Student student1;
    struct Student *ptr;

    ptr = &student1;

    ptr->id = 101;
    snprintf(ptr->name, sizeof(ptr->name), "John Doe");
    ptr->marks = 95.5;

    printf("Student ID: %d\n", ptr->id);
    printf("Student Name: %s\n", ptr->name);
    printf("Student Marks: %.2f\n", ptr->marks);

    return 0;
}