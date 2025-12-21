/* 8. Create a structure Date (dd, mm, yyyy).
9. Write a program to compare two dates.

10. Write a program to pass a structure to a function and display student details. */

#include <stdio.h>

struct Date {
    int dd;
    int mm;
    int yyyy;
};

int main() {
    struct Date d;

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &d.dd, &d.mm, &d.yyyy);

    printf("Entered Date: %02d-%02d-%d", d.dd, d.mm, d.yyyy);

    return 0;
}
