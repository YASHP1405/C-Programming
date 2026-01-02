#include <stdio.h>

struct Student {
    char name[20];
    int age;
    float marks;
};

int main() {
    int i;
    struct Student s[5];

    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter age of student %d: ", i + 1);
        scanf("%d", &s[i].age);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &s[i].marks);
    }

    for (i = 0; i < 5; i++) {
        printf("\nDetails of student %d:", i + 1);
        printf("\nName: %s", s[i].name);
        printf("\nAge: %d", s[i].age);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}
