#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s = {1, 85.5};
    struct Student *p = &s;

    printf("Roll = %d\n", p->roll);
    printf("Marks = %.2f\n", p->marks);

    return 0;
}
