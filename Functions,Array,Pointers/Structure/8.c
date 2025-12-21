/* 8. Create a structure Date (dd, mm, yyyy).*/

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
