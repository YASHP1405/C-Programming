/* 5. Initialize the structure and print the details. */
#include<stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct Student student1 = {1, "Alice", 85.5};
    printf("Student ID: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Student Marks: %.2f\n", student1.marks);
    return 0;
}