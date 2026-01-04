/*1. Find the Highest Marks
Problem:
Write a function to find the student with the highest marks.
Concept:
Loop + structure + function
*/

#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
struct Student findTopper(struct Student students[], int n) {
    struct Student topper = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > topper.marks) {
            topper = students[i];
        }
    }
    return topper;
}
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", students[i].name, &students[i].marks);
    }
    struct Student topper = findTopper(students, n);
    printf("Topper: %s with marks %d\n", topper.name, topper.marks);
    return 0;
}