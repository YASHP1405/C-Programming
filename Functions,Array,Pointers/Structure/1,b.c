/*
2. Pass Nested Structure to Function
Problem:
Create a nested structure for student DOB.
Display full details using a function.
Concept:
* Nested structure
* Function with structure*/
#include <stdio.h>
struct DOB {
    int day;
    int month;
    int year;
};
struct Student {
    char name[50];
    int roll_no;
    struct DOB dob;
};
void displayStudentDetails(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Date of Birth: %02d/%02d/%04d\n", s.dob.day, s.dob.month, s.dob.year);
}
int main() {
    struct Student student;
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter date of birth (day month year): ");
    scanf("%d %d %d", &student.dob.day, &student.dob.month, &student.dob.year);
    displayStudentDetails(student);
    return 0;
}
